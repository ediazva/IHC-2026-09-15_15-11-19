using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Interactables;

/// <summary>
/// Módulo "Simón": rejilla 3x3 de botones de color en la cara IZQUIERDA del cubo.
/// La bomba muestra una secuencia de luces y el jugador debe repetirla pulsando
/// los botones en el mismo orden. Un fallo resuelve un strike y repite la ronda.
///
/// El puzzle avanza por RONDAS que crecen: la primera es más corta y cada ronda
/// superada alarga la secuencia, de forma que resolverlo ronda los 30-60 s.
///
/// Igual que el resto, admite dos vías:
///  * Escena autorada en el editor (lista serializada "buttons").
///  * Construcción dinámica en ResetModule().
/// </summary>
public class SimonModule : ModuleBase
{
    /// <summary>Medidas en metros, en espacio local del cubo (cara izquierda).</summary>
    public static class Layout
    {
        public const float FaceX = -0.472f;   // cara izquierda del cubo (-X)
        public const float PanelX = -0.452f;
        public const int GridSize = 3;        // rejilla 3x3
        public const float Spacing = 0.12f;   // separación entre centros
        public const float ButtonSize = 0.11f;
    }

    /// <summary>
    /// Frecuencias (Hz) de la escala pentatónica de do mayor, una por botón.
    /// El "pim pim" pasa a ser una melodía agradable en lugar de un tick áspero.
    /// </summary>
    public static readonly float[] NoteFrequencies =
    {
        523.25f, // Do5
        587.33f, // Re5
        659.25f, // Mi5
        783.99f, // Sol5
        880.00f, // La5
        1046.50f, // Do6
        1174.66f, // Re6
        1318.51f, // Mi6
        1567.98f, // Sol6
    };

    /// <summary>9 colores vivos de los botones (rejilla 3x3, tipo arcoíris).</summary>
    public static readonly Color[] ButtonColors =
    {
        new Color(0.90f, 0.16f, 0.13f), // rojo
        new Color(0.95f, 0.48f, 0.10f), // naranja
        new Color(0.96f, 0.86f, 0.18f), // amarillo
        new Color(0.32f, 0.80f, 0.24f), // verde
        new Color(0.16f, 0.80f, 0.72f), // turquesa
        new Color(0.18f, 0.47f, 0.96f), // azul
        new Color(0.55f, 0.30f, 0.95f), // violeta
        new Color(0.93f, 0.28f, 0.72f), // magenta
        new Color(0.95f, 0.95f, 0.95f), // blanco
    };

    [Serializable]
    public class SimonButton
    {
        public GameObject gameObject;
        public Color color;

        [NonSerialized] public Renderer renderer;
        [NonSerialized] public Material material;
        [NonSerialized] public float litUntil;
    }

    [Header("Configuración")]
    [Tooltip("Pasos de la primera ronda.")]
    [SerializeField] private int startLength = 4;
    [Tooltip("Cuántas rondas hay que superar para resolver el módulo.")]
    [SerializeField] private int roundsToSolve = 3;
    [Tooltip("Cuánto crece la secuencia en cada ronda nueva.")]
    [SerializeField] private int lengthIncreasePerRound = 1;
    [SerializeField] private float stepDuration = 0.40f;
    [SerializeField] private float stepGap = 0.15f;
    [SerializeField] private float startDelay = 1.00f;
    [SerializeField] private float roundPause = 0.70f;

    [Header("Estado (lo crea el constructor de la escena)")]
    [SerializeField] private List<SimonButton> buttons = new List<SimonButton>();
    [SerializeField] private GameObject startButton;

    private readonly List<int> sequence = new List<int>();
    private int inputIndex;
    private int currentRound;
    private bool acceptingInput;
    private Coroutine playbackRoutine;
    private BombManager bomb;
    private bool startPressed;

    public int SequenceLength => sequence.Count;
    public int Progress => inputIndex;
    public int TotalRounds => Mathf.Max(1, roundsToSolve);
    public int RoundsCompleted => currentRound;

    public event Action OnSimonWrong;
    public event Action<int, int> OnRoundComplete;
    public event Action OnSimonComplete;

    private void Awake()
    {
        Title = "SIMÓN";
    }

    private void Start()
    {
        bomb = GetComponentInParent<BombManager>();
        Prepare();

        if (bomb != null)
        {
            bomb.OnStateChanged += OnBombState;
            if (bomb.State == BombState.Running) PrepareRoundIfAutoplay();
        }
        else
        {
            PrepareRoundIfAutoplay();
        }
    }

    private void OnDestroy()
    {
        if (bomb != null) bomb.OnStateChanged -= OnBombState;
    }

    public override void ResetModule()
    {
        base.ResetModule();
        StopPlayback();
        inputIndex = 0;
        currentRound = 0;
        acceptingInput = false;
        startPressed = false;
        for (int i = 0; i < buttons.Count; i++)
            if (buttons[i] != null) buttons[i].litUntil = 0f;
    }

    private void OnBombState(BombState state)
    {
        if (state == BombState.Running)
        {
            PrepareRoundIfAutoplay();
        }
        else if (state == BombState.Finalizado || state == BombState.Defused || state == BombState.Exploded)
        {
            StopPlayback();
            acceptingInput = false;
        }
    }

    /// <summary>
    /// Si la escena NO tiene botón START (construcción dinámica sin él), la
    /// secuencia comienza sola al arrancar la bomba. Con botón START, el jugador
    /// decide cuándo empezar: no se reproduce nada hasta pulsarlo.
    /// </summary>
    private void PrepareRoundIfAutoplay()
    {
        if (startButton == null && !startPressed) PlaySequence();
    }

    // ------------------------------------------------------------------ Preparación

    private void Prepare()
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

            button.gameObject.SetActive(true);

            int index = i;
            XRSimpleInteractable interactable = button.gameObject.GetComponent<XRSimpleInteractable>();
            if (interactable == null) interactable = button.gameObject.AddComponent<XRSimpleInteractable>();
            interactable.selectEntered.AddListener(_ => OnButtonPressed(index));
        }

        if (startButton != null && startButton.gameObject != null)
        {
            XRSimpleInteractable interactable = startButton.GetComponent<XRSimpleInteractable>();
            if (interactable == null) interactable = startButton.AddComponent<XRSimpleInteractable>();
            interactable.selectEntered.AddListener(_ => OnStartPressed());
        }
    }

    /// <summary>El jugador pulsa START para hacer sonar/ver la secuencia.</summary>
    private void OnStartPressed()
    {
        if (IsSolved || startPressed) return;
        if (bomb != null && bomb.State != BombState.Running) return;

        startPressed = true;
        SFX.Tone(880f, 0.10f, 0.45f);
        PlaySequence();
    }

    // ------------------------------------------------------------------ Secuencia

    public void PlaySequence()
    {
        if (IsSolved || buttons.Count == 0) return;

        StopPlayback();
        BuildSequence();
        inputIndex = 0;
        acceptingInput = false;
        playbackRoutine = StartCoroutine(PlaybackRoutine());
    }

    private void BuildSequence()
    {
        sequence.Clear();
        int length = Mathf.Max(1, startLength + currentRound * lengthIncreasePerRound);
        for (int i = 0; i < length; i++)
            sequence.Add(UnityEngine.Random.Range(0, buttons.Count));
    }

    private IEnumerator PlaybackRoutine()
    {
        yield return new WaitForSeconds(startDelay);

        for (int i = 0; i < sequence.Count; i++)
        {
            int index = sequence[i];
            Flash(index, stepDuration);
            SFX.Tone(NoteFrequencies[index], stepDuration + 0.10f, 0.5f);
            yield return new WaitForSeconds(stepDuration + stepGap);
        }

        acceptingInput = true;
        playbackRoutine = null;
    }

    private void OnButtonPressed(int index)
    {
        if (IsSolved || !acceptingInput) return;
        if (index < 0 || index >= buttons.Count) return;

        Flash(index, 0.15f);
        Debug.Log($"[Simón] pulsado {index}; esperaba {sequence[inputIndex]}", this);

        if (index == sequence[inputIndex])
        {
            inputIndex++;
            SFX.Tone(NoteFrequencies[index], 0.25f, 0.5f);

            if (inputIndex >= sequence.Count)
            {
                acceptingInput = false;
                currentRound++;

                if (currentRound >= TotalRounds)
                {
                    OnSimonComplete?.Invoke();
                    SFX.Play(SfxType.Solved, 0.8f);
                    Solve();
                }
                else
                {
                    OnRoundComplete?.Invoke(currentRound, TotalRounds);
                    SFX.Play(SfxType.Solved, 0.5f);
                    playbackRoutine = StartCoroutine(NextRoundAfterDelay(roundPause));
                }
            }
        }
        else
        {
            acceptingInput = false;
            OnSimonWrong?.Invoke();
            SFX.Play(SfxType.Denied, 0.7f);
            AddStrike();
            playbackRoutine = StartCoroutine(ReplayAfterDelay(1.0f));
        }
    }

    private IEnumerator ReplayAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        PlaySequence();
    }

    private IEnumerator NextRoundAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        PlaySequence();
    }

    private void Flash(int index, float duration)
    {
        if (index >= 0 && index < buttons.Count && buttons[index] != null)
            buttons[index].litUntil = Time.time + duration;
    }

    private void StopPlayback()
    {
        if (playbackRoutine != null)
        {
            StopCoroutine(playbackRoutine);
            playbackRoutine = null;
        }
    }

    private void Update()
    {
        for (int i = 0; i < buttons.Count; i++)
        {
            SimonButton button = buttons[i];
            if (button == null || button.material == null) continue;

            bool lit = button.litUntil > Time.time;
            button.material.EnableKeyword("_EMISSION");
            button.material.SetColor("_EmissionColor", button.color * (lit ? 2.6f : 0.18f));
        }
    }
}
