using System;
using UnityEngine;

/// <summary>
/// Lleva el contador de errores (strikes). Al llegar al máximo explota la bomba.
/// </summary>
public class StrikeSystem : MonoBehaviour
{
    [Header("Configuración")]
    [Tooltip("Errores permitidos antes de la explosión.")]
    public int maxStrikes = 3;

    public int Strikes { get; private set; }
    public int MaxStrikes => maxStrikes;
    public bool IsExploded { get; private set; }

    public event Action<int> OnStrikeAdded;
    public event Action OnExploded;
    public event Action OnReset;

    public bool AddStrike()
    {
        if (IsExploded) return false;

        Strikes = Mathf.Min(maxStrikes, Strikes + 1);
        OnStrikeAdded?.Invoke(Strikes);

        if (Strikes >= maxStrikes)
            Explode();

        return true;
    }

    private void Explode()
    {
        if (IsExploded) return;
        IsExploded = true;
        OnExploded?.Invoke();
    }

    public void Reset()
    {
        IsExploded = false;
        Strikes = 0;
        OnReset?.Invoke();
    }
}