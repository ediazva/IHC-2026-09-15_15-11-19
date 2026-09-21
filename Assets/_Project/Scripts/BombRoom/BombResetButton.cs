using System;
using UnityEngine;
using UnityEngine.InputSystem;
using Oculus.Interaction;

/// <summary>
/// Botón de reinicio "R": reinicia la bomba al seleccionarlo (interacción XR)
/// o al pulsar la tecla R. Los listeners de los interactables no se serializan,
/// así que este componente hace el cableado en tiempo de ejecución.
/// </summary>
public class BombResetButton : MonoBehaviour
{
    [Tooltip("Bomba a reiniciar. Se asigna por el constructor de la escena.")]
    public BombManager bomb;

    private PokeInteractable interactable;
    private Action<InteractableStateChangeArgs> handler;

    private void Awake()
    {
        interactable = GetComponent<PokeInteractable>();
        if (interactable == null) interactable = GetComponentInParent<PokeInteractable>();
    }

    private void Start()
    {
        // Fallback: si no se asignó en inspector, buscar BombManager en la escena
        if (bomb == null) bomb = FindAnyObjectByType<BombManager>();

        if (interactable == null)
            interactable = Isdk.Poke(gameObject, Vector3.up);
        if (interactable != null)
            handler = Isdk.Bind(interactable, Restart, null, handler);
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