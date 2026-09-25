using System;
using System.Collections;
using System.Collections.Generic;
using Oculus.Interaction;
using UnityEngine;

/// <summary>
/// Simple Simon Says module: 3x3 buttons, press the larger start button, watch a
/// pattern, repeat it. Complete three rounds to solve the module.
/// </summary>
public class SimonModule : ModuleBase
{
    public static class Layout
    {
        public const float FaceX = -0.20f;
        public const float PanelX = -0.184f;
        public const int GridSize = 3;
        public const float Spacing = 0.072f;
        public const float ButtonSize = 0.065f;
    }

    public static readonly float[] NoteFrequencies =
    {
        523.25f, 587.33f, 659.25f,
        783.99f, 880.00f, 1046.50f,
        1174.66f, 1318.51f, 1567.98f,
    };

    public static readonly Color[] ButtonColors =
    {
        new Color(0.90f, 0.16f, 0.13f),
        new Color(0.95f, 0.48f, 0.10f),
        new Color(0.96f, 0.86f, 0.18f),
        new Color(0.32f, 0.80f, 0.24f),
        new Color(0.16f, 0.80f, 0.72f),
        new Color(0.18f, 0.47f, 0.96f),
        new Color(0.55f, 0.30f, 0.95f),
        new Color(0.93f, 0.28f, 0.72f),
        new Color(0.95f, 0.95f, 0.95f),
    };

    [Serializable]
    public class SimonButton
    {
        public GameObject gameObject;
        public Color color;

        [NonSerialized] public Renderer renderer;
        [NonSerialized] public Material material;
        [NonSerialized] public PokeInteractable poke;
        [NonSerialized] public Action<InteractableStateChangeArgs> handler;
        [NonSerialized] public float litUntil;
    }

    [Header("Config")]
    [SerializeField] private int roundsToSolve = 3;
    [SerializeField] private int basePatternLength = 3;
    [SerializeField] private float flashDuration = 0.45f;
    [SerializeField] private float flashGap = 0.16f;
    [SerializeField] private float playbackDelay = 0.55f;
    [SerializeField] private float nextRoundDelay = 0.75f;

    [Header("Scene References")]
    [SerializeField] private List<SimonButton> buttons = new List<SimonButton>();
    [SerializeField] private GameObject startButton;

    private readonly List<int> pattern = new List<int>();
    private BombManager bomb;
    private Coroutine playback;
    private PokeInteractable startPoke;
    private Action<InteractableStateChangeArgs> startHandler;
    private bool started;
    private bool acceptingInput;
    private int inputIndex;
    private int currentRound;

    public int SequenceLength => pattern.Count;
    public int Progress => inputIndex;
    public int TotalRounds => Mathf.Max(1, roundsToSolve);
    public int RoundsCompleted => currentRound;

    public event Action OnSimonWrong;
    public event Action<int, int> OnRoundComplete;
    public event Action OnSimonComplete;

    private void Awake()
    {
        Title = "SIMON";
    }

    private void Start()
    {
        bomb = GetComponentInParent<BombManager>();
        PrepareButtons();

        if (bomb != null)
            bomb.OnStateChanged += OnBombStateChanged;
    }

    private void OnDestroy()
    {
        if (bomb != null)
            bomb.OnStateChanged -= OnBombStateChanged;

        for (int i = 0; i < buttons.Count; i++)
        {
            SimonButton button = buttons[i];
            if (button?.poke != null && button.handler != null)
                button.poke.WhenStateChanged -= button.handler;
        }

        if (startPoke != null && startHandler != null)
            startPoke.WhenStateChanged -= startHandler;
    }

    public override void ResetModule()
    {
        base.ResetModule();
        StopPlayback();
        pattern.Clear();
        started = false;
        acceptingInput = false;
        inputIndex = 0;
        currentRound = 0;
        ClearLights();
    }

    private void PrepareButtons()
    {
        for (int i = 0; i < buttons.Count; i++)
        {
            SimonButton button = buttons[i];
            if (button == null || button.gameObject == null) continue;

            button.renderer = button.gameObject.GetComponent<Renderer>();
            if (button.renderer != null)
            {
                button.material = button.renderer.sharedMaterial != null
                    ? new Material(button.renderer.sharedMaterial)
                    : Fx.Lit(button.color);
                button.renderer.sharedMaterial = button.material;
            }

            int index = i;
            button.poke = Isdk.Poke(button.gameObject, OutwardOf(button.gameObject));
            button.handler = Isdk.Bind(button.poke, () => PressButton(index), null, button.handler);
            button.gameObject.SetActive(true);
        }

        if (startButton != null)
        {
            startPoke = Isdk.Poke(startButton, OutwardOf(startButton));
            startHandler = Isdk.Bind(startPoke, PressStart, null, startHandler);
        }
    }

    private Vector3 OutwardOf(GameObject go)
    {
        Vector3 center = bomb != null ? bomb.transform.position : transform.position;
        Vector3 worldOut = go.transform.position - center;
        if (worldOut.sqrMagnitude < 0.0001f)
            worldOut = transform.TransformDirection(Vector3.left);

        return go.transform.InverseTransformDirection(worldOut.normalized).normalized;
    }

    private void OnBombStateChanged(BombState state)
    {
        if (state == BombState.Finalizado || state == BombState.Defused || state == BombState.Exploded)
        {
            StopPlayback();
            acceptingInput = false;
        }
    }

    private void PressStart()
    {
        Debug.Log("[Simon] START press received", this);

        if (IsSolved || started) return;
        if (bomb != null && bomb.State != BombState.Running)
        {
            Debug.Log($"[Simon] START ignored, bomb state is {bomb.State}", this);
            return;
        }

        started = true;
        currentRound = 0;
        SFX.Tone(880f, 0.12f, 0.5f);
        StartRound();
    }

    private void StartRound()
    {
        StopPlayback();
        BuildPattern(basePatternLength + currentRound);
        inputIndex = 0;
        acceptingInput = false;
        playback = StartCoroutine(PlayPattern());
    }

    private void BuildPattern(int length)
    {
        pattern.Clear();
        int count = Mathf.Max(1, buttons.Count);
        for (int i = 0; i < length; i++)
            pattern.Add(UnityEngine.Random.Range(0, count));
    }

    private IEnumerator PlayPattern()
    {
        yield return new WaitForSeconds(playbackDelay);

        for (int i = 0; i < pattern.Count; i++)
        {
            int index = pattern[i];
            Flash(index, flashDuration);
            SFX.Tone(NoteFrequencies[Mathf.Clamp(index, 0, NoteFrequencies.Length - 1)], flashDuration, 0.55f);
            yield return new WaitForSeconds(flashDuration + flashGap);
        }

        acceptingInput = true;
        playback = null;
    }

    private void PressButton(int index)
    {
        Debug.Log($"[Simon] Button {index} press received", this);

        if (!acceptingInput || IsSolved)
        {
            Debug.Log($"[Simon] Button {index} ignored. acceptingInput={acceptingInput}, solved={IsSolved}", this);
            return;
        }
        if (index < 0 || index >= buttons.Count || inputIndex >= pattern.Count) return;

        Flash(index, 0.18f);
        SFX.Tone(NoteFrequencies[Mathf.Clamp(index, 0, NoteFrequencies.Length - 1)], 0.2f, 0.55f);

        if (index != pattern[inputIndex])
        {
            acceptingInput = false;
            OnSimonWrong?.Invoke();
            SFX.Play(SfxType.Denied, 0.7f);
            AddStrike();
            playback = StartCoroutine(RestartRoundAfterDelay(0.8f));
            return;
        }

        inputIndex++;
        if (inputIndex < pattern.Count) return;

        acceptingInput = false;
        currentRound++;

        if (currentRound >= TotalRounds)
        {
            OnSimonComplete?.Invoke();
            SFX.Play(SfxType.Solved, 0.8f);
            Solve();
            return;
        }

        OnRoundComplete?.Invoke(currentRound, TotalRounds);
        SFX.Play(SfxType.Solved, 0.5f);
        playback = StartCoroutine(NextRoundAfterDelay(nextRoundDelay));
    }

    private IEnumerator RestartRoundAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        StartRound();
    }

    private IEnumerator NextRoundAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        StartRound();
    }

    private void Flash(int index, float duration)
    {
        if (index < 0 || index >= buttons.Count || buttons[index] == null) return;
        buttons[index].litUntil = Time.time + duration;
    }

    private void ClearLights()
    {
        for (int i = 0; i < buttons.Count; i++)
            if (buttons[i] != null) buttons[i].litUntil = 0f;
    }

    private void StopPlayback()
    {
        if (playback == null) return;
        StopCoroutine(playback);
        playback = null;
    }

    private void Update()
    {
        for (int i = 0; i < buttons.Count; i++)
        {
            SimonButton button = buttons[i];
            if (button?.material == null) continue;

            bool lit = button.litUntil > Time.time;
            Color baseColor = button.color * (lit ? 1.7f : 0.5f);
            button.material.SetColor("_BaseColor", baseColor);
            if (button.material.HasProperty("_Color"))
                button.material.SetColor("_Color", baseColor);

            button.material.EnableKeyword("_EMISSION");
            button.material.SetColor("_EmissionColor", button.color * (lit ? 4f : 0f));
        }
    }
}
