using System;
using UnityEngine;
using Oculus.Interaction;

[RequireComponent(typeof(Collider))]
public class HarassmentButton : MonoBehaviour
{
    [Header("Configuración")]
    public Color buttonColor = Color.white;
    public string buttonName = "BOTON";

    [Header("Referencias")]
    public Renderer buttonRenderer;

    public event Action<HarassmentButton> OnPressed;

    private PokeInteractable pokeInteractable;
    private Material material;
    private Color baseColor;
    private Color legacyColor;
    private Color baseEmission;
    private bool colorHidden;
    private bool cueHighlighted;
    private Coroutine cueRoutine;

    private static readonly Color ObscuredColor = new Color(0.28f, 0.28f, 0.28f);

    private void Awake()
    {
        if (buttonRenderer == null)
            buttonRenderer = GetComponentInChildren<Renderer>();

        if (buttonRenderer != null)
        {
            material = new Material(buttonRenderer.sharedMaterial);
            buttonRenderer.sharedMaterial = material;
            if (material.HasProperty("_BaseColor")) baseColor = material.GetColor("_BaseColor");
            if (material.HasProperty("_Color")) legacyColor = material.GetColor("_Color");
            if (material.HasProperty("_EmissionColor")) baseEmission = material.GetColor("_EmissionColor");
        }

        pokeInteractable = Isdk.Poke(gameObject, Vector3.forward);
        Isdk.Bind(pokeInteractable, HandlePress, HandleRelease);
    }

    private void HandlePress()
    {
        SFX.Play(SfxType.Tick, 0.7f);
        OnPressed?.Invoke(this);
        PulseFeedback();
    }

    private void HandleRelease()
    {
    }

    private void PulseFeedback()
    {
        if (material == null) return;
        StopAllCoroutines();
        StartCoroutine(PulseRoutine());
    }

    private System.Collections.IEnumerator PulseRoutine()
    {
        float t = 0f;
        float duration = 0.2f;

        while (t < duration)
        {
            t += Time.deltaTime;
            float p = Mathf.Sin((t / duration) * Mathf.PI);
            material.SetColor("_EmissionColor", colorHidden ? Color.white * p * 0.3f : buttonColor * p * 2f);
            yield return null;
        }

        material.SetColor("_EmissionColor", colorHidden ? Color.black : baseEmission);
    }

    public void SetCueHighlight(bool highlighted)
    {
        if (material == null || cueHighlighted == highlighted) return;
        if (highlighted && colorHidden) return;

        cueHighlighted = highlighted;
        if (cueRoutine != null)
        {
            StopCoroutine(cueRoutine);
            cueRoutine = null;
        }

        if (highlighted)
        {
            material.EnableKeyword("_EMISSION");
            cueRoutine = StartCoroutine(CueFlash());
        }
        else
        {
            if (material.HasProperty("_BaseColor")) material.SetColor("_BaseColor", colorHidden ? ObscuredColor : baseColor);
            if (material.HasProperty("_Color")) material.SetColor("_Color", colorHidden ? ObscuredColor : legacyColor);
            if (material.HasProperty("_EmissionColor")) material.SetColor("_EmissionColor", colorHidden ? Color.black : baseEmission);
        }
    }

    private System.Collections.IEnumerator CueFlash()
    {
        while (cueHighlighted)
        {
            float pulse = 0.5f + 0.5f * Mathf.Sin(Time.time * 9f);
            Color litColor = Color.Lerp(buttonColor, Color.white, pulse * 0.35f);
            if (material.HasProperty("_BaseColor")) material.SetColor("_BaseColor", litColor);
            if (material.HasProperty("_Color")) material.SetColor("_Color", litColor);
            if (material.HasProperty("_EmissionColor"))
                material.SetColor("_EmissionColor", buttonColor * Mathf.Lerp(1.5f, 5f, pulse));
            yield return null;
        }
    }

    public void SetColorHidden(bool hidden)
    {
        if (material == null || colorHidden == hidden) return;

        StopAllCoroutines();
        cueRoutine = null;
        cueHighlighted = false;
        colorHidden = hidden;
        // Use identical neutral materials on all three buttons. This also hides
        // their colours on Quest if camera post-processing is unavailable.
        if (material.HasProperty("_BaseColor")) material.SetColor("_BaseColor", hidden ? ObscuredColor : baseColor);
        if (material.HasProperty("_Color")) material.SetColor("_Color", hidden ? ObscuredColor : legacyColor);
        if (material.HasProperty("_EmissionColor"))
            material.SetColor("_EmissionColor", hidden ? Color.black : baseEmission);
    }

    private void OnDestroy()
    {
        if (material == null) return;
        if (Application.isPlaying) Destroy(material);
        else DestroyImmediate(material);
    }
}
