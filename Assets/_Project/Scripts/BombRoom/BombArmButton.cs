using System;
using UnityEngine;
using Oculus.Interaction;

/// <summary>
/// Botón de activación en la cara de la bomba. Mientras hay módulos sin
/// resolver está apagado; al estar todo resuelto (estado "Finalizado") se
/// ENCIENDE en rojo para indicar que hay que tocarlo para desactivar la bomba.
/// Solo funciona en ese momento (si se pulsa antes, se avisa con un pitido).
/// </summary>
public class BombArmButton : MonoBehaviour
{
    [Tooltip("Bomba a desactivar. Lo asigna el constructor de la escena.")]
    public BombManager bomb;

    /// <summary>Se invoca si el jugador pulsa el botón antes de tiempo.</summary>
    public event Action OnPressedDenied;

    private PokeInteractable interactable;
    private Action<InteractableStateChangeArgs> handler;
    private Renderer buttonRenderer;
    private Material mat;
    private bool subscribed;

    private static readonly Color BaseColor = new Color(0.35f, 0.06f, 0.05f);
    private static readonly Color ReadyColor = new Color(1f, 0.2f, 0.08f);

    private void Awake()
    {
        interactable = GetComponent<PokeInteractable>();
        if (interactable == null) interactable = GetComponentInParent<PokeInteractable>();
    }

    private void Start()
    {
        buttonRenderer = GetComponent<Renderer>();
        if (buttonRenderer != null && buttonRenderer.sharedMaterial != null)
        {
            mat = new Material(buttonRenderer.sharedMaterial);
            buttonRenderer.sharedMaterial = mat;
        }

        if (interactable == null)
            interactable = Isdk.Poke(gameObject, Vector3.up);
        if (interactable != null)
            handler = Isdk.Bind(interactable, OnPressed, null, handler);

        if (bomb != null)
        {
            bomb.OnReset += OnBombReset;
            subscribed = true;
        }

        UpdateLight(false);
    }

    private void OnBombReset()
    {
        UpdateLight(false);
    }

    private void OnPressed()
    {
        if (bomb == null) return;

        if (bomb.State == BombState.Finalizado)
        {
            bomb.Defuse();
            return;
        }

        OnPressedDenied?.Invoke();
        SFX.Play(SfxType.Denied, 0.6f);
    }

    private void Update()
    {
        if (bomb == null || mat == null || bomb.State != BombState.Finalizado)
        {
            UpdateLight(false);
            return;
        }

        // Pulso cuando está listo: llamar la atención de que hay que tocarlo.
        UpdateLight(true);
        if (mat != null)
        {
            float intensity = 3f + Mathf.Sin(Time.timeSinceLevelLoad * 9f) * 1.5f;
            mat.SetColor("_EmissionColor", ReadyColor * intensity);
        }
    }

    private void UpdateLight(bool lit)
    {
        if (mat == null) return;
        mat.SetColor("_BaseColor", lit ? ReadyColor : BaseColor);
        if (lit)
        {
            mat.EnableKeyword("_EMISSION");
            mat.SetColor("_EmissionColor", ReadyColor * 3f);
        }
        else
        {
            mat.DisableKeyword("_EMISSION");
            mat.SetColor("_EmissionColor", Color.black);
        }
    }

    private void OnDestroy()
    {
        if (subscribed && bomb != null)
            bomb.OnReset -= OnBombReset;
        if (interactable != null && handler != null)
            interactable.WhenStateChanged -= handler;
    }
}