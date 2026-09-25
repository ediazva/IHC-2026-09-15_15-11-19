using System.Collections;
using UnityEngine;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction.Grab;

/// <summary>
/// Feedback visual y sonoro para el cubo (hand tracking).
/// Se engancha a los eventos de GrabInteractable y HandGrabInteractable.
/// </summary>
public class CubeFeedback : MonoBehaviour
{
    [Header("Referencias")]
    [SerializeField] private Renderer bodyRenderer;
    [SerializeField] private GrabInteractable grabInteractable;
    [SerializeField] private HandGrabInteractable handGrabInteractable;

    [Header("Configuración visual")]
    [SerializeField] private Color grabGlowColor = new Color(0.2f, 0.8f, 1f);
    [SerializeField] private float grabGlowIntensity = 2.5f;
    [SerializeField] private float glowFadeDuration = 0.3f;

    [Header("Configuración sonora")]
    [SerializeField] private float grabToneFreq = 880f;
    [SerializeField] private float releaseToneFreq = 440f;
    [SerializeField] private float toneDuration = 0.08f;
    [SerializeField] private float toneVolume = 0.4f;

    private Material bodyMaterial;
    private Coroutine glowRoutine;
    private bool wasGrabbed;

    private void Awake()
    {
        if (bodyRenderer == null) bodyRenderer = GetComponent<Renderer>();
        if (grabInteractable == null) grabInteractable = GetComponent<GrabInteractable>();
        if (handGrabInteractable == null) handGrabInteractable = GetComponentInChildren<HandGrabInteractable>(true);

        if (bodyRenderer != null && bodyRenderer.sharedMaterial != null)
        {
            bodyMaterial = new Material(bodyRenderer.sharedMaterial);
            bodyRenderer.sharedMaterial = bodyMaterial;
        }
    }

    private void OnEnable()
    {
        if (grabInteractable != null)
            grabInteractable.WhenStateChanged += OnGrabStateChanged;
        if (handGrabInteractable != null)
            handGrabInteractable.WhenStateChanged += OnGrabStateChanged;
    }

    private void OnDisable()
    {
        if (grabInteractable != null)
            grabInteractable.WhenStateChanged -= OnGrabStateChanged;
        if (handGrabInteractable != null)
            handGrabInteractable.WhenStateChanged -= OnGrabStateChanged;
    }

    private void OnGrabStateChanged(InteractableStateChangeArgs args)
    {
        bool isGrabbed = args.NewState == InteractableState.Select;

        if (isGrabbed && !wasGrabbed)
        {
            OnGrabbed();
        }
        else if (!isGrabbed && wasGrabbed)
        {
            OnReleased();
        }

        wasGrabbed = isGrabbed;
    }

    private void OnGrabbed()
    {
        PlayGlow(grabGlowColor, grabGlowIntensity);
        SFX.Tone(grabToneFreq, toneDuration, toneVolume);
    }

    private void OnReleased()
    {
        PlayGlow(Color.white, 0f);
        SFX.Tone(releaseToneFreq, toneDuration, toneVolume);
    }

    private void PlayGlow(Color color, float intensity)
    {
        if (bodyMaterial == null) return;

        if (glowRoutine != null) StopCoroutine(glowRoutine);
        glowRoutine = StartCoroutine(GlowRoutine(color, intensity));
    }

    private IEnumerator GlowRoutine(Color targetColor, float targetIntensity)
    {
        float startIntensity = 0f;
        if (bodyMaterial.IsKeywordEnabled("_EMISSION"))
        {
            Color currentEmission = bodyMaterial.GetColor("_EmissionColor");
            startIntensity = currentEmission.maxColorComponent;
        }

        float elapsed = 0f;
        while (elapsed < glowFadeDuration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / glowFadeDuration;
            float currentIntensity = Mathf.Lerp(startIntensity, targetIntensity, t);
            bodyMaterial.EnableKeyword("_EMISSION");
            bodyMaterial.SetColor("_EmissionColor", targetColor * currentIntensity);
            yield return null;
        }

        if (targetIntensity > 0.01f)
        {
            bodyMaterial.EnableKeyword("_EMISSION");
            bodyMaterial.SetColor("_EmissionColor", targetColor * targetIntensity);
        }
        else
        {
            bodyMaterial.DisableKeyword("_EMISSION");
            bodyMaterial.SetColor("_EmissionColor", Color.black);
        }
    }

    /// <summary>
    /// Llamar desde módulos (Simón, Cables, etc.) al pulsar un botón.
    /// </summary>
    public void OnButtonPoked(Color buttonColor)
    {
        if (bodyMaterial == null) return;

        StartCoroutine(ButtonPulseRoutine(buttonColor));
        SFX.Tone(1200f, 0.05f, 0.35f);
    }

    private IEnumerator ButtonPulseRoutine(Color color)
    {
        const float pulseDuration = 0.12f;
        float elapsed = 0f;
        Color originalEmission = bodyMaterial.IsKeywordEnabled("_EMISSION")
            ? bodyMaterial.GetColor("_EmissionColor")
            : Color.black;
        bool hadEmission = bodyMaterial.IsKeywordEnabled("_EMISSION");

        while (elapsed < pulseDuration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / pulseDuration;
            float pulse = Mathf.Sin(t * Mathf.PI);
            bodyMaterial.EnableKeyword("_EMISSION");
            bodyMaterial.SetColor("_EmissionColor", color * (pulse * 3f));
            yield return null;
        }

        if (hadEmission && originalEmission.maxColorComponent > 0.01f)
        {
            bodyMaterial.EnableKeyword("_EMISSION");
            bodyMaterial.SetColor("_EmissionColor", originalEmission);
        }
        else
        {
            bodyMaterial.DisableKeyword("_EMISSION");
            bodyMaterial.SetColor("_EmissionColor", Color.black);
        }
    }
}