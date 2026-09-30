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
        [NonSerialized] public Transform visual;
        [NonSerialized] public Vector3 visualRestLocalPosition;
        [NonSerialized] public PokeInteractable poke;
        [NonSerialized] public Action<InteractableStateChangeArgs> handler;
        [NonSerialized] public float litUntil;
        [NonSerialized] public Vector3 restLocalPosition;
        [NonSerialized] public bool pressed;
    }

    [Header("Config")]
    [SerializeField] private int roundsToSolve = 3;
    [SerializeField] private int basePatternLength = 3;
    [SerializeField] private float flashDuration = 0.45f;
    [SerializeField] private float flashGap = 0.16f;
    [SerializeField] private float playbackDelay = 0.55f;
    [SerializeField] private float nextRoundDelay = 0.75f;
    [SerializeField, Range(0.002f, 0.02f)] private float pressDepth = 0.008f;

    [Header("Scene References")]
    [SerializeField] private List<SimonButton> buttons = new List<SimonButton>();
    [SerializeField] private GameObject startButton;

    private readonly List<int> pattern = new List<int>();
    private BombManager bomb;
    private Coroutine playback;
    private PokeInteractable startPoke;
    private Action<InteractableStateChangeArgs> startHandler;
    private Renderer startRenderer;
    private Transform startVisual;
    private Material startMaterial;
    private Vector3 startVisualRestLocalPosition;
    private bool startButtonPressed;
    private bool started;
    private bool acceptingInput;
    private int inputIndex;
    private int currentRound;
    private float errorFlashUntil;

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
        if (startMaterial != null) Destroy(startMaterial);
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
        ResetButtonPositions();
    }

    private void PrepareButtons()
    {
        for (int i = 0; i < buttons.Count; i++)
        {
            SimonButton button = buttons[i];
            if (button == null || button.gameObject == null) continue;

            button.visual = CreatePressableVisual(button.gameObject, $"SimonButtonVisual_{i}");
            button.visualRestLocalPosition = button.visual != null
                ? button.visual.localPosition : Vector3.zero;
            button.renderer = button.visual != null ? button.visual.GetComponent<Renderer>() : null;
            if (button.renderer != null)
            {
                button.material = button.renderer.sharedMaterial != null
                    ? new Material(button.renderer.sharedMaterial)
                    : Fx.Lit(button.color);
                button.renderer.sharedMaterial = button.material;
            }

            int index = i;
            button.restLocalPosition = button.gameObject.transform.localPosition;
            // 65 mm visible face + 6 mm total tolerance = 71 mm surface,
            // leaving a 1 mm gap before the 72 mm neighboring button spacing.
            button.poke = Isdk.Poke(button.gameObject, OutwardOf(button.gameObject), 0.006f);
            button.handler = Isdk.Bind(button.poke,
                () => OnSimonButtonPressed(button, index),
                () => OnSimonButtonReleased(button), button.handler);
            button.gameObject.SetActive(true);
        }

        if (startButton == null)
        {
            Transform foundStart = transform.Find("SimonStartButton");
            if (foundStart != null) startButton = foundStart.gameObject;
        }

        if (startButton != null)
        {
            startVisual = CreatePressableVisual(startButton, "SimonStartButtonVisual");
            startVisualRestLocalPosition = startVisual != null ? startVisual.localPosition : Vector3.zero;
            startRenderer = startVisual != null ? startVisual.GetComponent<Renderer>() : null;
            if (startRenderer != null)
            {
                startMaterial = startRenderer.sharedMaterial != null
                    ? new Material(startRenderer.sharedMaterial)
                    : Fx.Lit(new Color(0.13f, 0.72f, 0.38f), 0.3f);
                startRenderer.sharedMaterial = startMaterial;
                startMaterial.EnableKeyword("_EMISSION");
            }
            startPoke = Isdk.Poke(startButton, OutwardOf(startButton), 0.006f);
            startHandler = Isdk.Bind(startPoke, OnStartButtonPressed, OnStartButtonReleased, startHandler);
            Debug.Log($"[Simon] Botón de inicio enlazado: {startButton.name}.", this);
        }
        else
        {
            Debug.LogError("[Simon] SimonStartButton reference is missing.", this);
        }
    }

    private static Transform CreatePressableVisual(GameObject interactionRoot, string visualName)
    {
        if (interactionRoot == null) return null;

        MeshFilter sourceFilter = interactionRoot.GetComponent<MeshFilter>();
        MeshRenderer sourceRenderer = interactionRoot.GetComponent<MeshRenderer>();
        if (sourceFilter == null || sourceRenderer == null) return null;

        GameObject visual = new GameObject(visualName, typeof(MeshFilter), typeof(MeshRenderer));
        visual.transform.SetParent(interactionRoot.transform, false);
        visual.transform.localPosition = Vector3.zero;
        visual.transform.localRotation = Quaternion.identity;
        visual.transform.localScale = Vector3.one;

        MeshFilter visualFilter = visual.GetComponent<MeshFilter>();
        visualFilter.sharedMesh = sourceFilter.sharedMesh;
        MeshRenderer visualRenderer = visual.GetComponent<MeshRenderer>();
        visualRenderer.sharedMaterials = sourceRenderer.sharedMaterials;

        // Keep the collider and Poke surface fixed while only the visible mesh
        // travels inward. That prevents a press animation from cancelling or
        // re-triggering its own Poke selection.
        sourceRenderer.enabled = false;
        return visual.transform;
    }

    private void OnSimonButtonPressed(SimonButton button, int index)
    {
        if (button == null || button.pressed) return;
        button.pressed = true;
        SetButtonPressed(button, true);
        SFX.Play(SfxType.Tick, 0.7f);
        PressButton(index);
    }

    private void OnSimonButtonReleased(SimonButton button)
    {
        if (button == null) return;
        button.pressed = false;
        SetButtonPressed(button, false);
    }

    private void SetButtonPressed(SimonButton button, bool pressed)
    {
        if (button?.visual == null) return;
        button.visual.localPosition = button.visualRestLocalPosition +
            (pressed ? Vector3.right * pressDepth : Vector3.zero);
    }

    private void OnStartButtonPressed()
    {
        if (startButtonPressed) return;
        startButtonPressed = true;
        if (startVisual != null)
            startVisual.localPosition = startVisualRestLocalPosition + Vector3.right * pressDepth;
        SFX.Play(SfxType.Tick, 0.7f);
        PressStart();
    }

    private void OnStartButtonReleased()
    {
        startButtonPressed = false;
        if (startVisual != null) startVisual.localPosition = startVisualRestLocalPosition;
    }

    private void ResetButtonPositions()
    {
        foreach (SimonButton button in buttons)
        {
            if (button != null) button.pressed = false;
            SetButtonPressed(button, false);
        }
        OnStartButtonReleased();
    }

    private Vector3 OutwardOf(GameObject go)
    {
        // Every Simon button lies on the bomb's -X face. Computing a radial
        // direction from the bomb center tilts the poke plane diagonally for
        // the lower/outer buttons and can put START's touch surface off-face.
        Vector3 worldOut = transform.TransformDirection(Vector3.left).normalized;
        return go.transform.InverseTransformDirection(worldOut).normalized;
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
            SFX.Play(SfxType.Denied, 0.55f);
            return;
        }

        started = true;
        currentRound = 0;
        Debug.Log("[Simon] Secuencia iniciada; el temporizador no cambia.", this);
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

        Debug.Log($"[Simon] Paso {inputIndex + 1}/{pattern.Count}: esperado={pattern[inputIndex]}, pulsado={index}.", this);
        if (index != pattern[inputIndex])
        {
            acceptingInput = false;
            errorFlashUntil = Time.time + 0.65f;
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
            bool errorFlash = errorFlashUntil > Time.time;
            Color baseColor = errorFlash
                ? new Color(1f, 0.12f, 0.06f)
                : button.color * (lit ? 1.7f : 0.5f);
            button.material.SetColor("_BaseColor", baseColor);
            if (button.material.HasProperty("_Color"))
                button.material.SetColor("_Color", baseColor);

            button.material.EnableKeyword("_EMISSION");
            button.material.SetColor("_EmissionColor", errorFlash
                ? new Color(1f, 0.08f, 0.02f) * 3f
                : button.color * (lit ? 4f : 0f));
        }

        if (startMaterial != null)
        {
            bool ready = !IsSolved && !started && bomb != null && bomb.State == BombState.Running;
            float pulse = ready ? 1.3f + 0.8f * (0.5f + 0.5f * Mathf.Sin(Time.time * 4f)) : 0.15f;
            startMaterial.SetColor("_EmissionColor", new Color(0.13f, 0.72f, 0.38f) * pulse);
        }
    }
}
