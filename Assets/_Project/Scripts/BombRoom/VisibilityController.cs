using System.Collections;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

/// <summary>Reduces scene visibility during the harassment event.</summary>
public class VisibilityController : MonoBehaviour
{
    [Header("References")]
    public Volume volume;

    [Header("Event vision reduction")]
    [Range(0f, 1f)] public float obscuredVignette = 0f;
    [Range(-5f, 0f)] public float obscuredPostExposure = -1.5f;
    [Min(0.05f)] public float fadeInSeconds = 0.4f;
    [Min(0.05f)] public float fadeOutSeconds = 0.35f;

    private Vignette vignette;
    private ColorAdjustments colorAdjustments;
    private float normalVignette;
    private float normalExposure;
    private float normalSaturation;
    private Coroutine transition;
    private bool initialized;

    private void Awake()
    {
        Initialize();
    }

    private void Initialize()
    {
        if (initialized) return;
        initialized = true;

        if (volume == null) volume = FindAnyObjectByType<Volume>();
        VolumeProfile profile = volume != null ? volume.profile : null;
        if (profile == null)
        {
            Debug.LogError("[VisibilityController] No hay un Volume global con perfil de oscurecimiento.", this);
            return;
        }

        profile.TryGet(out vignette);
        profile.TryGet(out colorAdjustments);

        if (vignette == null)
            Debug.LogError("[VisibilityController] El VolumeProfile no contiene Vignette.", this);
        else
        {
            normalVignette = vignette.intensity.value;
            vignette.smoothness.Override(0.7f);
        }

        if (colorAdjustments == null)
            Debug.LogWarning("[VisibilityController] El VolumeProfile no contiene ColorAdjustments.", this);
        else
        {
            normalExposure = colorAdjustments.postExposure.value;
            normalSaturation = colorAdjustments.saturation.value;
        }
    }

    public void SetObscured(bool obscured)
    {
        Initialize();
        if (!isActiveAndEnabled)
        {
            if (!obscured) RestoreVisibility();
            return;
        }

        if (obscured && colorAdjustments == null) return;

        if (transition != null) StopCoroutine(transition);
        if (colorAdjustments != null)
            colorAdjustments.saturation.Override(obscured ? -100f : normalSaturation);
        Debug.Log($"[VisibilityController] Visión {(obscured ? "reducida" : "restaurada")}.", this);
        transition = StartCoroutine(Transition(obscured));
    }

    // Kept as a compatibility entry point for existing callers.
    public void SetVignette(float intensity)
    {
        Initialize();
        if (vignette == null) return;
        if (transition != null) StopCoroutine(transition);
        transition = StartCoroutine(TransitionValues(intensity, colorAdjustments != null
            ? colorAdjustments.postExposure.value : normalExposure, fadeInSeconds));
    }

    private IEnumerator Transition(bool obscured)
    {
        float targetVignette = obscured ? obscuredVignette : normalVignette;
        float targetExposure = obscured ? obscuredPostExposure : normalExposure;
        float duration = obscured ? fadeInSeconds : fadeOutSeconds;
        yield return TransitionValues(targetVignette, targetExposure, duration);
        transition = null;
    }

    private IEnumerator TransitionValues(float targetVignette, float targetExposure, float duration)
    {
        float startVignette = vignette != null ? vignette.intensity.value : normalVignette;
        float startExposure = colorAdjustments != null ? colorAdjustments.postExposure.value : normalExposure;
        float t = 0f;

        while (t < duration)
        {
            t += Time.unscaledDeltaTime;
            float blend = Mathf.SmoothStep(0f, 1f, Mathf.Clamp01(t / duration));
            if (vignette != null) vignette.intensity.Override(Mathf.Lerp(startVignette, targetVignette, blend));
            if (colorAdjustments != null) colorAdjustments.postExposure.Override(Mathf.Lerp(startExposure, targetExposure, blend));
            yield return null;
        }

        if (vignette != null) vignette.intensity.Override(targetVignette);
        if (colorAdjustments != null) colorAdjustments.postExposure.Override(targetExposure);
    }

    private void OnDisable()
    {
        if (transition != null) StopCoroutine(transition);
        RestoreVisibility();
        transition = null;
    }

    private void RestoreVisibility()
    {
        if (vignette != null) vignette.intensity.Override(normalVignette);
        if (colorAdjustments != null)
        {
            colorAdjustments.postExposure.Override(normalExposure);
            colorAdjustments.saturation.Override(normalSaturation);
        }
    }
}
