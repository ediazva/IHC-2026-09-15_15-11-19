using System.Collections;
using UnityEngine;
using UnityEngine.Rendering;

/// <summary>Fades a full-screen XR render pass over the player's view.</summary>
public class VisibilityController : MonoBehaviour
{
    [Header("References")]
    public Volume volume; // Retained for existing room references.

    [Header("Event vision reduction")]
    [Range(0f, 1f)] public float obscuredVignette = 0.2f;
    [Range(-5f, 0f)] public float obscuredPostExposure = -2f;
    [Min(0.05f)] public float fadeInSeconds = 0.4f;
    [Min(0.05f)] public float fadeOutSeconds = 0.35f;

    private static readonly int StrengthId = Shader.PropertyToID("_HarassmentVisionStrength");
    private static readonly int BrightnessId = Shader.PropertyToID("_HarassmentVisionBrightness");
    private static readonly int VignetteId = Shader.PropertyToID("_HarassmentVisionVignette");

    public static float ObscuredStrength { get; private set; }

    private Coroutine transition;

    private void Awake()
    {
        SetStrength(0f);
    }

    public void SetObscured(bool obscured)
    {
        if (transition != null) StopCoroutine(transition);
        transition = null;

        if (!isActiveAndEnabled)
        {
            if (!obscured) SetStrength(0f);
            return;
        }

        transition = StartCoroutine(FadeTo(obscured ? 1f : 0f,
            obscured ? fadeInSeconds : fadeOutSeconds));
    }

    // Compatibility entry point for existing callers.
    public void SetVignette(float intensity)
    {
        obscuredVignette = Mathf.Clamp01(intensity);
        SetStrength(ObscuredStrength);
    }

    private IEnumerator FadeTo(float target, float duration)
    {
        float start = ObscuredStrength;
        float elapsed = 0f;
        while (elapsed < duration)
        {
            elapsed += Time.unscaledDeltaTime;
            float blend = Mathf.SmoothStep(0f, 1f, Mathf.Clamp01(elapsed / duration));
            SetStrength(Mathf.Lerp(start, target, blend));
            yield return null;
        }

        SetStrength(target);
        transition = null;
    }

    private void SetStrength(float strength)
    {
        ObscuredStrength = Mathf.Clamp01(strength);
        Shader.SetGlobalFloat(StrengthId, ObscuredStrength);
        Shader.SetGlobalFloat(BrightnessId, Mathf.Pow(2f, obscuredPostExposure));
        Shader.SetGlobalFloat(VignetteId, obscuredVignette);
    }

    private void OnDisable()
    {
        if (transition != null) StopCoroutine(transition);
        transition = null;
        SetStrength(0f);
    }
}
