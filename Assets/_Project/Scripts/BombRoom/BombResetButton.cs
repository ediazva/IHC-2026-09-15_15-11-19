using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit.Interactables;

/// <summary>
/// Botón de reinicio "R": reinicia la bomba al seleccionarlo (interacción XR)
/// o al pulsar la tecla R. Los listeners de los interactables no se serializan,
/// así que este componente hace el cableado en tiempo de ejecución.
/// </summary>
public class BombResetButton : MonoBehaviour
{
    [Tooltip("Bomba a reiniciar. Se asigna por el constructor de la escena.")]
    public BombManager bomb;

    private XRSimpleInteractable interactable;

    private void Awake()
    {
        interactable = GetComponent<XRSimpleInteractable>();
        if (interactable == null) interactable = GetComponentInParent<XRSimpleInteractable>();
    }

    private void Start()
    {
        if (interactable != null)
            interactable.selectEntered.AddListener(_ => Restart());
    }

    private void Update()
    {
        if (Keyboard.current != null && Keyboard.current.rKey.wasPressedThisFrame)
            Restart();
    }

    private void Restart()
    {
        if (bomb != null) bomb.Restart();
    }
}