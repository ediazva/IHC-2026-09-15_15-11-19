using System;
using UnityEngine;
using Oculus.Interaction;

/// <summary>
/// Marca un objeto como "herramienta de corte" (tag Cutter) y expone cuántos
/// ejemplares están actualmente agarrados por cualquier interactor. Permite
/// cortar un cable con una mano mientras la otra sostiene la herramienta.
/// </summary>
public class CuttingTool : MonoBehaviour
{
    private static int heldCount;

    public static bool AnyHeld => heldCount > 0;

    private GrabInteractable grab;
    private Action<InteractableStateChangeArgs> handler;

    private void Awake()
    {
        grab = GetComponent<GrabInteractable>();
        if (grab == null) grab = GetComponentInParent<GrabInteractable>();
    }

    private void OnEnable()
    {
        if (grab == null)
        {
            Rigidbody rb = GetComponent<Rigidbody>();
            if (rb == null)
            {
                rb = gameObject.AddComponent<Rigidbody>();
                rb.isKinematic = true;
                rb.useGravity = false;
            }
            grab = Isdk.Grab(gameObject, rb);
        }
        if (grab != null)
            handler = Isdk.Bind(grab, OnGrabbed, OnReleased, handler);
    }

    private void OnDisable()
    {
        if (grab != null && handler != null)
            grab.WhenStateChanged -= handler;
        handler = null;
    }

    private void OnDestroy()
    {
        heldCount = Mathf.Max(0, heldCount - 1);
    }

    private void OnGrabbed()
    {
        heldCount++;
    }

    private void OnReleased()
    {
        heldCount = Mathf.Max(0, heldCount - 1);
    }
}