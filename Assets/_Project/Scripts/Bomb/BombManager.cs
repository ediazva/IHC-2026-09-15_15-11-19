using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;

public enum BombState
{
    Idle,
    Running,
    Defused,
    Exploded,
    Finalizado
}

/// <summary>
/// Orquesta todo: temporizador, strikes, módulos y estados de fin de partida.
/// Auto-resuelve sus referencias si los sistemas están en el mismo GameObject.
/// </summary>
public class BombManager : MonoBehaviour
{
    [Header("Sistemas (autorellenados si no se asignan)")]
    public TimerSystem timer;
    public StrikeSystem strikes;
    public List<ModuleBase> modules = new List<ModuleBase>();

    [Header("Dificultad")]
    [Tooltip("Segundos que se restan por cada strike.")]
    public float penaltyPerStrike = 35f;
    [Tooltip("Arranca la partida automáticamente al entrar en la escena.")]
    public bool autoStart = true;

    public BombState State { get; private set; } = BombState.Idle;
    public TimerSystem Timer => timer;
    public StrikeSystem Strikes => strikes;
    public IReadOnlyList<ModuleBase> Modules => modules;

    public event Action<BombState> OnStateChanged;
    public event Action OnDefused;
    public event Action OnExploded;
    public event Action OnReset;

    private void Awake()
    {
        if (timer == null) timer = GetComponent<TimerSystem>();
        if (strikes == null) strikes = GetComponent<StrikeSystem>();
    }

    private void Start()
    {
        // Asegurar el agarre real ISDK de la bomba (Grabbable + transformador):
        // la bomba debe poder cogerse y moverse con las manos.
        Rigidbody rb = GetComponent<Rigidbody>();
        if (rb != null) Isdk.Grab(gameObject, rb);

        // Agarre con la MANO DESNUDA (HandGrabInteractable): va en el hijo "Body"
        // para que sus colliders candidatos sean solo los del cuerpo (los que
        // cuelgan del Rigidbody raíz lo harían desde todos los hijos) y así no
        // robe el agarre de los mangos de los cables.
        if (rb != null && transform.Find("Body") is Transform body && body.TryGetComponent<Collider>(out _))
        {
            Isdk.HandGrab(body.gameObject, rb);
        }

        // Esfera de PROXIMIDAD de agarre alrededor del cubo: al ser trigger, no
        // toca la física, pero garantiza que el registro de candidatos del
        // near-grab (solapamiento físico con la mano) se active aunque la mano
        // no llegue a rozar la caja del Body. La pose de agarre la siguen dando
        // los colliders reales del cuerpo (BuildGrabCandidates).
        AddBodyGrabProximity();

        // El near-grab de ISDK detecta candidatos por COLISIONES físicas: el
        // HandGrabInteractor necesita colliders bajo su Rigidbody. El rig
        // comprehensive no los trae (por eso agarrar el cubo de cerca no
        // funcionaba); se inyectan aquí en la pinza y la empuñadura de cada mano.
        EnableNearGrabHands();

        // IMPORTANTE: acotar el agarre de la bomba SOLO al cuerpo. Si no,
        // sus colliders heredados (mangos de cables, botones de Simón...) se
        // registran como candidatos del grab de la bomba y le "roban" el
        // agarre a los cables al haber empate en puntuación.
        StartCoroutine(ScopeBombGrabRoutine());

        // Los módulos pueden crearse en tiempo de ejecución, así que se
        // vuelven a buscar aquí (ya con toda la jerarquía construida).
        modules.Clear();
        GetComponentsInChildren<ModuleBase>(true, modules);

        foreach (var m in modules)
        {
            m.OnSolved += HandleModuleSolved;
            m.OnStrike += HandleModuleStrike;
        }

        if (strikes != null) strikes.OnExploded += HandleExploded;
        if (timer != null) timer.OnTimeout += HandleTimeout;

        if (autoStart) Begin();
    }

    public void Begin()
    {
        if (State == BombState.Running || State == BombState.Exploded) return;
        SetState(BombState.Running);
        timer?.StartTimer();
    }

    private void HandleModuleSolved(ModuleBase m)
    {
        if (AllModulesSolved()) ReadyForArm();
    }

    /// <summary>
    /// Al resolver todos los módulos la bomba entra en estado "Finalizado":
    /// se detiene el temporizador y el jugador debe tocar el botón de activación
    /// (que se enciende) para desactivarla.
    /// </summary>
    private void ReadyForArm()
    {
        if (State == BombState.Defused || State == BombState.Exploded) return;
        timer?.StopTimer();
        SetState(BombState.Finalizado);
    }

    private void HandleModuleStrike(ModuleBase m)
    {
        if (m == null || m.IsSolved) return;

        strikes?.AddStrike();
        timer?.ApplyPenalty(penaltyPerStrike);

        Debug.Log($"[Bomba VR] STRIKE {strikes?.Strikes}/{strikes?.MaxStrikes} por módulo '{m.Title}'", m);

        // Si el tercer strike estalló la bomba, OnExploded ya cambió el estado.
    }

    private void HandleTimeout()
    {
        Debug.Log("[Bomba VR] TIMEOUT: se agotó el tiempo.");
        Explode();
    }

    private void HandleExploded()
    {
        Explode();
    }

    /// <summary>
    /// Convierte el estado "Finalizado" en desarmada. Lo llama el botón de
    /// activación de la cara trasera cuando el jugador lo pulsa.
    /// </summary>
    public void Defuse()
    {
        if (State == BombState.Defused || State == BombState.Exploded) return;
        timer?.StopTimer();
        SetState(BombState.Defused);
        OnDefused?.Invoke();
    }

    private void Explode()
    {
        if (State == BombState.Defused || State == BombState.Exploded) return;
        timer?.StopTimer();
        SetState(BombState.Exploded);
        OnExploded?.Invoke();
    }

    private bool AllModulesSolved()
    {
        if (modules.Count == 0) return false;
        foreach (var m in modules)
            if (m != null && !m.IsSolved) return false;
        return true;
    }

    public void Restart()
    {
        SetState(BombState.Idle);
        timer?.ResetTimer();
        strikes?.Reset();
        foreach (var m in modules) m.ResetModule();
        OnReset?.Invoke();
        Begin();
    }

    private void SetState(BombState newState)
    {
        State = newState;
        OnStateChanged?.Invoke(newState);
    }

    /// <summary>
    /// Reaplica la acotación del grab de la bomba al collider del cuerpo durante
    /// unos frames: el <see cref="GrabInteractable"/> recalcula su lista de
    /// colliders en su propio Start (orden no determinista), así que la
    /// sobreescribimos hasta que esté bien fijada.
    /// </summary>
    private IEnumerator ScopeBombGrabRoutine()
    {
        GrabInteractable grab = GetComponent<GrabInteractable>();
        HandGrabInteractable handGrab = transform.Find("Body")?.GetComponent<HandGrabInteractable>();
        if (grab == null || handGrab == null) yield break;

        Collider[] candidates = BuildGrabCandidates();
        if (candidates == null || candidates.Length == 0) yield break;

        for (int i = 0; i < 20; i++)
        {
            Isdk.ScopeGrabColliders(grab, candidates);
            Isdk.ScopeHandGrabColliders(handGrab, candidates);
            yield return null;
        }
    }

    /// <summary>Reaplica la acotación del agarre (tras rebuild del laberinto).</summary>
    public void ReapplyGrabScope()
    {
        GrabInteractable grab = GetComponent<GrabInteractable>();
        HandGrabInteractable handGrab = transform.Find("Body")?.GetComponent<HandGrabInteractable>();
        if (grab == null || handGrab == null) return;
        StartCoroutine(ScopeBombGrabRoutine());
    }

    /// <summary>
    /// Colliders que el agarre del cubo reclama EN EXCLUSIVA: el cuerpo y las
    /// piezas estructurales del laberinto (BoxCollider no-trigger). Cualquier
    /// otro collider (mangos de cables, botones de Simón, la bolita, las
    /// cazoletas trigger) queda fuera: así cada puzzle tiene sus propios
    /// candidatos, no hay empates y agarrar un cable nunca rota el cubo.
    /// </summary>
    private Collider[] BuildGrabCandidates()
    {
        List<Collider> list = new List<Collider>();

        Transform body = transform.Find("Body");
        if (body != null)
        {
            Collider col = body.GetComponent<Collider>();
            if (col != null) list.Add(col);
        }

        MazeModule maze = GetComponentInChildren<MazeModule>(true);
        if (maze != null)
        {
            BoxCollider[] boxes = maze.GetComponentsInChildren<BoxCollider>(true);
            for (int i = 0; i < boxes.Length; i++)
            {
                if (boxes[i] == null || boxes[i].isTrigger) continue;
                list.Add(boxes[i]);
            }
        }

        return list.ToArray();
    }

    /// <summary>
    /// Esfera trigger centrada en el cubo (misma localización que el Body) que
    /// amplía el área de DETECCIÓN del agarre de cerca sin distorsionar la pose
    /// de agarre (esa la dan BuildGrabCandidates, que NO la incluye). Como es
    /// trigger no afecta a la física de la bolita ni de los módulos, pero hace
    /// que el CollisionInteractionRegistry vea a la mano como "dentro" del cubo
    /// en cuanto esta se acerca a unos centímetros.
    /// </summary>
    private void AddBodyGrabProximity()
    {
        if (transform.Find("Body") == null) return;
        if (transform.Find("BodyGrabProximity") != null) return;

        GameObject prox = new GameObject("BodyGrabProximity");
        prox.transform.SetParent(transform, false); // raíz a escala 1: radio en metros
        SphereCollider sphere = prox.AddComponent<SphereCollider>();
        sphere.isTrigger = true;
        sphere.radius = 0.46f; // media diagonal del body (~0.41) + margen de pinza
    }

    /// <summary>
    /// El near-grab de las manos desnudas lista candidatos SOLO por solapamiento
    /// físico entre los colliders del Rigidbody del interactor y los del
    /// interactable (CollisionInteractionRegistry). El rig "Hand and No
    /// Controller" no da colliders a los nodos HandGrabInteractor/Rigidbody, así
    /// que la bomba nunca se registra como candidata y agarrada de cerca no hay
    /// forma. Se añaden aquí sendas esferas trigger en la PINZA y la EMPUÑADURA
    /// (los nodos GripPoint/PinchPoint) de cada interfaz de agarre de mano.
    /// </summary>
    private void EnableNearGrabHands()
    {
        HandGrabInteractor[] interactors = FindObjectsByType<HandGrabInteractor>(FindObjectsInactive.Include);
        for (int i = 0; i < interactors.Length; i++)
        {
            HandGrabInteractor inter = interactors[i];
            if (inter == null || inter.GetType() != typeof(HandGrabInteractor)) continue;
            AddNearGrabVolume(inter, "GripPoint");
            AddNearGrabVolume(inter, "PinchPoint");
        }
    }

    private static void AddNearGrabVolume(HandGrabInteractor inter, string childName)
    {
        Rigidbody rb = inter.Rigidbody;
        if (rb == null) return;
        if (rb.GetComponentsInChildren<Collider>(true).Length > 0) return;

        Transform host = rb.transform.Find(childName);
        if (host == null) host = rb.transform;

        SphereCollider sphere = host.gameObject.GetComponent<SphereCollider>();
        if (sphere == null) sphere = host.gameObject.AddComponent<SphereCollider>();
        sphere.isTrigger = true;
        sphere.radius = childName == "PinchPoint" ? 0.045f : 0.05f;
    }

    private void OnDestroy()
    {
        if (modules == null) return;
        foreach (var m in modules)
        {
            if (m == null) continue;
            m.OnSolved -= HandleModuleSolved;
            m.OnStrike -= HandleModuleStrike;
        }
        if (strikes != null) strikes.OnExploded -= HandleExploded;
        if (timer != null) timer.OnTimeout -= HandleTimeout;
    }
}