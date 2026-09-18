using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Interactables;

/// <summary>
/// Marca un objeto como "herramienta de corte" (tag Cutter) y expone cuántos
/// ejemplares están actualmente agarrados por cualquier interactor. Permite
/// cortar un cable con una mano mientras la otra sostiene la herramienta.
/// </summary>
public class CuttingTool : MonoBehaviour
{
    private static int heldCount;

    public static bool AnyHeld => heldCount > 0;

    private XRGrabInteractable grab;

    private void Awake()
    {
        grab = GetComponent<XRGrabInteractable>();
        if (grab == null) grab = GetComponentInParent<XRGrabInteractable>();
    }

    private void OnEnable()
    {
        if (grab != null)
        {
            grab.selectEntered.AddListener(OnSelected);
            grab.selectExited.AddListener(OnDeselected);
        }
    }

    private void OnDisable()
    {
        if (grab != null)
        {
            grab.selectEntered.RemoveListener(OnSelected);
            grab.selectExited.RemoveListener(OnDeselected);
        }
    }

    private void OnDestroy()
    {
        heldCount = Mathf.Max(0, heldCount - 1);
    }

    private void OnSelected(SelectEnterEventArgs _)
    {
        heldCount++;
    }

    private void OnDeselected(SelectExitEventArgs _)
    {
        heldCount = Mathf.Max(0, heldCount - 1);
    }
}