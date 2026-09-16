using System;
using System.Collections.Generic;
using UnityEngine;

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

        // Si el tercer strike estalló la bomba, OnExploded ya cambió el estado.
    }

    private void HandleTimeout()
    {
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