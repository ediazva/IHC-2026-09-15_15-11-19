using System;
using UnityEngine;

/// <summary>
/// Cuenta regresiva de la bomba. Emite eventos de segundos (solo cuando el
/// segundo mostrado cambia) y un evento cuando llega a cero.
/// </summary>
public class TimerSystem : MonoBehaviour
{
    [Header("Configuración")]
    [Tooltip("Tiempo inicial en segundos.")]
    public float startSeconds = 120f;

    public bool IsRunning { get; private set; }
    public float TimeLeft { get; private set; }
    public int RemainingSeconds => Mathf.Max(0, Mathf.CeilToInt(TimeLeft));

    public event Action<float> OnTimeChanged;
    public event Action OnTimeout;

    private int lastWholeSecond = -1;

    private void Awake()
    {
        TimeLeft = startSeconds;
    }

    public void SetStartTime(float seconds)
    {
        startSeconds = Mathf.Max(1f, seconds);
        if (!IsRunning) TimeLeft = startSeconds;
    }

    public void StartTimer()
    {
        if (IsRunning) return;
        if (TimeLeft <= 0f) TimeLeft = startSeconds;
        IsRunning = true;
    }

    public void StopTimer()
    {
        IsRunning = false;
    }

    public void ResetTimer()
    {
        IsRunning = false;
        TimeLeft = startSeconds;
        lastWholeSecond = -1;
        NotifyChanged();
    }

    /// <summary>Resta segundos al temporizador (usado por strikes y eventos de pánico).</summary>
    public void ApplyPenalty(float seconds)
    {
        if (!IsRunning) return;
        TimeLeft = Mathf.Max(0f, TimeLeft - Mathf.Abs(seconds));
        NotifyChanged();
        if (TimeLeft <= 0f)
        {
            StopTimer();
            OnTimeout?.Invoke();
        }
    }

    private void Update()
    {
        if (!IsRunning || TimeLeft <= 0f) return;

        TimeLeft -= Time.deltaTime;
        if (TimeLeft <= 0f)
        {
            TimeLeft = 0f;
            lastWholeSecond = 0;
            StopTimer();
            NotifyChanged();
            OnTimeout?.Invoke();
            return;
        }

        int s = RemainingSeconds;
        if (s != lastWholeSecond)
        {
            lastWholeSecond = s;
            NotifyChanged();
        }
    }

    private void NotifyChanged()
    {
        OnTimeChanged?.Invoke(TimeLeft);
    }
}