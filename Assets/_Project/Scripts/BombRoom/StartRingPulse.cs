using UnityEngine;

/// <summary>
/// Hace pulsar la emisión del anillo START de Simón para indicar "púlsame"
/// </summary>
public class StartRingPulse : MonoBehaviour
{
    public Renderer ringRenderer;
    public Color baseColor = Color.green;
    public float pulseSpeed = 2f;
    public float emissionMultiplier = 3f;

    private Material _mat;
    private float _time;

    private void Start()
    {
        if (ringRenderer != null)
        {
            _mat = ringRenderer.material;
            _mat.EnableKeyword("_EMISSION");
        }
    }

    private void Update()
    {
        if (_mat == null) return;

        _time += Time.deltaTime * pulseSpeed;
        float pulse = 0.5f + 0.5f * Mathf.Sin(_time);
        Color emission = baseColor * emissionMultiplier * pulse;
        _mat.SetColor("_EmissionColor", emission);
        _mat.SetColor("_BaseColor", baseColor * (0.5f + 0.5f * pulse));
    }
}