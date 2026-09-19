using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Interaction;

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
        Transform body = transform.Find("Body");
        if (grab == null || body == null) yield break;

        Collider col = body.GetComponent<Collider>();
        if (col == null) yield break;

        for (int i = 0; i < 10; i++)
        {
            Isdk.ScopeGrabColliders(grab, col);
            yield return null;
        }
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