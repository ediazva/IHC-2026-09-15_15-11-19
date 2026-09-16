using System;
using UnityEngine;

/// <summary>
/// Contrato de cualquier módulo desarmable de la bomba.
/// Un módulo puede resolverse (Solve) o generar un error (Strike).
/// </summary>
public abstract class ModuleBase : MonoBehaviour
{
    public string Title { get; protected set; } = "MÓDULO";

    public bool IsSolved { get; protected set; }

    public event Action<ModuleBase> OnSolved;
    public event Action<ModuleBase> OnStrike;

    protected void Solve()
    {
        if (IsSolved) return;
        IsSolved = true;
        OnSolved?.Invoke(this);
    }

    protected void AddStrike()
    {
        if (IsSolved) return;
        OnStrike?.Invoke(this);
    }

    public virtual void ResetModule()
    {
        IsSolved = false;
    }
}