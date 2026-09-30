using System.Collections;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

/// <summary>Head-locked stereo blackout with a small, clear hole at the center of each eye.</summary>
public class VisibilityController : MonoBehaviour
{
    [Header("References")]
    public Volume volume;
    public Shader blackoutShader;

    [Header("Event vision reduction")]
    [Range(0f, 1f)] public float obscuredVignette = 0.92f;
    [Range(-5f, 0f)] public float obscuredPostExposure = 0f;
    [Range(0f, 1f)] public float fullViewOverlayOpacity = 1f;
    [Range(0.08f, 0.3f)] public float centerApertureRadius = 0.18f;
    [Range(0.001f, 0.05f)] public float apertureEdgeSoftness = 0.012f;
    [Min(0.05f)] public float fadeInSeconds = 0.4f;
    [Min(0.05f)] public float fadeOutSeconds = 0.35f;

    private Vignette vignette;
    private ColorAdjustments colorAdjustments;
    private float normalVignette;
    private float normalExposure;
    private Coroutine transition;
    private bool initialized;
    private MeshRenderer visionOverlay;
    private Material visionMaterial;
    private Camera xrCamera;

    private void Awake()
    {
        Initialize();
    }

    private void Initialize()
    {
        if (initialized) return;
        initialized = true;

        // The blackout renders even if the URP post-processing profile is absent.
        EnsureStereoOverlay();

        if (volume == null) volume = FindAnyObjectByType<Volume>();
        VolumeProfile profile = volume != null ? volume.profile : null;
        if (profile == null)
        {
            Debug.LogError("[VisibilityController] No hay un Volume global con perfil; se usará la capa XR de oscurecimiento.", this);
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
            Debug.LogWarning("[VisibilityController] El VolumeProfile no contiene ColorAdjustments; se usará solo viñeta.", this);
        else
        {
            normalExposure = colorAdjustments.postExposure.value;
            // The blackout controls visibility; preserve brightness in the hole.
            obscuredPostExposure = 0f;
        }

        if (vignette == null && colorAdjustments == null)
            Debug.LogWarning("[VisibilityController] No hay overrides de URP; se usará la capa XR de oscurecimiento.", this);
    }

    public void SetObscured(bool obscured)
    {
        Initialize();
        if (visionOverlay == null) EnsureStereoOverlay();
        if (visionOverlay == null)
        {
            Debug.LogError("[VisibilityController] No se pudo crear la máscara XR: comprueba el shader y CenterEyeAnchor.", this);
            return;
        }

        if (transition != null) StopCoroutine(transition);
        if (obscured)
        {
            UpdateOverlaySize();
            visionOverlay.enabled = true;
        }
        Debug.Log($"[VisibilityController] Visión {(obscured ? "reducida" : "restaurada")} en '{xrCamera.name}'.", this);
        transition = StartCoroutine(Transition(obscured));
    }

    // Kept as a compatibility entry point for existing callers.
    public void SetVignette(float intensity)
    {
        Initialize();
        if (vignette == null) return;
        if (transition != null) StopCoroutine(transition);
        transition = StartCoroutine(TransitionValues(intensity, colorAdjustments != null
            ? colorAdjustments.postExposure.value : normalExposure,
            visionMaterial != null ? visionMaterial.GetFloat("_Opacity") : 0f, fadeInSeconds, false));
    }

    private IEnumerator Transition(bool obscured)
    {
        float targetVignette = obscured ? obscuredVignette : normalVignette;
        float targetExposure = obscured ? obscuredPostExposure : normalExposure;
        float targetOverlay = obscured ? fullViewOverlayOpacity : 0f;
        float duration = obscured ? fadeInSeconds : fadeOutSeconds;
        yield return TransitionValues(targetVignette, targetExposure, targetOverlay, duration, !obscured);
        transition = null;
    }

    private IEnumerator TransitionValues(float targetVignette, float targetExposure,
        float targetOverlay, float duration, bool disableOverlayAtEnd)
    {
        float startVignette = vignette != null ? vignette.intensity.value : normalVignette;
        float startExposure = colorAdjustments != null ? colorAdjustments.postExposure.value : normalExposure;
        float startOverlay = visionMaterial != null ? visionMaterial.GetFloat("_Opacity") : 0f;
        float t = 0f;

        while (t < duration)
        {
            t += Time.unscaledDeltaTime;
            float blend = Mathf.SmoothStep(0f, 1f, Mathf.Clamp01(t / duration));
            if (vignette != null) vignette.intensity.Override(Mathf.Lerp(startVignette, targetVignette, blend));
            if (colorAdjustments != null) colorAdjustments.postExposure.Override(Mathf.Lerp(startExposure, targetExposure, blend));
            if (visionMaterial != null)
                visionMaterial.SetFloat("_Opacity", Mathf.Lerp(startOverlay, targetOverlay, blend));
            yield return null;
        }

        if (vignette != null) vignette.intensity.Override(targetVignette);
        if (colorAdjustments != null) colorAdjustments.postExposure.Override(targetExposure);
        if (visionMaterial != null) visionMaterial.SetFloat("_Opacity", targetOverlay);
        if (disableOverlayAtEnd && visionOverlay != null) visionOverlay.enabled = false;
    }

    private void EnsureStereoOverlay()
    {
        if (visionOverlay != null) return;

        xrCamera = FindXrCenterCamera();
        if (xrCamera == null)
        {
            Debug.LogError("[VisibilityController] No se encontró una cámara XR central activa.", this);
            return;
        }

        Shader shader = blackoutShader != null ? blackoutShader : Shader.Find("BombRoom/XRBlackout");
        if (shader == null || !shader.isSupported)
        {
            Debug.LogError("[VisibilityController] Falta el shader BombRoom/XRBlackout en la build de Quest.", this);
            return;
        }

        // A regular URP quad is rendered in both Quest eyes. The shader uses
        // per-eye screen coordinates and draws LAST (ZTest Always), so other
        // canvases, nearby hands or the cube cannot reveal the dark periphery.
        GameObject overlay = GameObject.CreatePrimitive(PrimitiveType.Quad);
        overlay.name = "XRBlackoutWithCenterHole";
        overlay.layer = xrCamera.gameObject.layer;
        overlay.transform.SetParent(xrCamera.transform, false);
        Collider collider = overlay.GetComponent<Collider>();
        if (collider != null)
        {
            collider.enabled = false;
            Destroy(collider);
        }

        visionMaterial = new Material(shader) { hideFlags = HideFlags.DontSave };
        visionMaterial.SetFloat("_Opacity", 0f);
        visionOverlay = overlay.GetComponent<MeshRenderer>();
        visionOverlay.sharedMaterial = visionMaterial;
        visionOverlay.shadowCastingMode = ShadowCastingMode.Off;
        visionOverlay.receiveShadows = false;
        visionOverlay.enabled = false;
        UpdateOverlaySize();
        Debug.Log($"[VisibilityController] Máscara estéreo XR preparada en '{xrCamera.name}'.", this);
    }

    private void UpdateOverlaySize()
    {
        if (xrCamera == null || visionOverlay == null || visionMaterial == null) return;

        float distance = Mathf.Max(xrCamera.nearClipPlane + 0.12f, 0.28f);
        float aspect = Mathf.Max(0.5f, xrCamera.aspect);
        if (xrCamera.stereoEnabled)
        {
            Matrix4x4 projection = xrCamera.GetStereoProjectionMatrix(Camera.StereoscopicEye.Left);
            if (Mathf.Abs(projection.m00) > 0.01f)
                aspect = Mathf.Clamp(Mathf.Abs(projection.m11 / projection.m00), 0.5f, 2.5f);
        }
        float fieldOfView = Mathf.Clamp(xrCamera.fieldOfView, 40f, 150f);
        // Twice the camera frustum covers both off-axis eye projections.
        float height = 4f * distance * Mathf.Tan(fieldOfView * Mathf.Deg2Rad * 0.5f);
        Transform quad = visionOverlay.transform;
        quad.localPosition = new Vector3(0f, 0f, distance);
        quad.localRotation = Quaternion.identity;
        quad.localScale = new Vector3(height * Mathf.Max(aspect, xrCamera.aspect), height, 1f);
        visionMaterial.SetFloat("_Aspect", aspect);
        visionMaterial.SetFloat("_Radius", centerApertureRadius);
        visionMaterial.SetFloat("_Edge", apertureEdgeSoftness);
    }

    private static Camera FindXrCenterCamera()
    {
        Camera[] cameras = FindObjectsByType<Camera>(FindObjectsInactive.Exclude);
        Camera best = null;
        int bestScore = int.MinValue;
        foreach (Camera candidate in cameras)
        {
            if (candidate == null || !candidate.enabled || !candidate.gameObject.activeInHierarchy) continue;
            if (candidate.stereoTargetEye == StereoTargetEyeMask.None ||
                candidate.stereoTargetEye == StereoTargetEyeMask.Left ||
                candidate.stereoTargetEye == StereoTargetEyeMask.Right) continue;

            string name = candidate.name.ToLowerInvariant();
            int score = candidate.stereoTargetEye == StereoTargetEyeMask.Both ? 10 : 0;
            if (name.Contains("center") && name.Contains("eye")) score += 100;
            else if (name.Contains("center")) score += 60;
            else if (name.Contains("maincamera")) score += 20;
            if (candidate.stereoEnabled) score += 20;
            if (score > bestScore)
            {
                best = candidate;
                bestScore = score;
            }
        }
        return best;
    }

    private void LateUpdate()
    {
        if (visionOverlay != null && visionOverlay.enabled) UpdateOverlaySize();
    }

    private void OnDestroy()
    {
        if (visionOverlay != null)
        {
            if (Application.isPlaying) Destroy(visionOverlay.gameObject);
            else DestroyImmediate(visionOverlay.gameObject);
        }
        if (visionMaterial != null)
        {
            if (Application.isPlaying) Destroy(visionMaterial);
            else DestroyImmediate(visionMaterial);
        }
    }

    private void OnDisable()
    {
        if (transition != null) StopCoroutine(transition);
        if (vignette != null) vignette.intensity.Override(normalVignette);
        if (colorAdjustments != null) colorAdjustments.postExposure.Override(normalExposure);
        if (visionMaterial != null) visionMaterial.SetFloat("_Opacity", 0f);
        if (visionOverlay != null) visionOverlay.enabled = false;
        transition = null;
    }
}
