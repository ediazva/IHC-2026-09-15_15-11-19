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
    private Color baseEmission;

    private void Awake()
    {
        if (buttonRenderer == null)
            buttonRenderer = GetComponentInChildren<Renderer>();

        if (buttonRenderer != null)
        {
            material = new Material(buttonRenderer.sharedMaterial);
            buttonRenderer.sharedMaterial = material;
            baseEmission = Color.black;
        }

        pokeInteractable = Isdk.Poke(gameObject, Vector3.forward);
        Isdk.Bind(pokeInteractable, HandlePress, HandleRelease);
    }

    private void HandlePress()
    {
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
            material.SetColor("_EmissionColor", buttonColor * p * 2f);
            yield return null;
        }

        material.SetColor("_EmissionColor", baseEmission);
    }

    public void SetHighlight(bool highlight)
    {
        if (material == null) return;

        if (highlight)
        {
            material.EnableKeyword("_EMISSION");
            material.SetColor("_EmissionColor", buttonColor * 0.5f);
        }
        else
        {
            material.SetColor("_EmissionColor", baseEmission);
        }
    }

    private void OnDestroy()
    {
        if (material == null) return;
        if (Application.isPlaying) Destroy(material);
        else DestroyImmediate(material);
    }
}
