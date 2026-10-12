using UnityEngine;
using UnityEngine.Rendering.Universal;

/// <summary>Only copies and grades the XR camera image while the event is active.</summary>
public class XRVisionRendererFeature : FullScreenPassRendererFeature
{
    public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
    {
        if (VisibilityController.ObscuredStrength <= 0f) return;
        base.AddRenderPasses(renderer, ref renderingData);
    }
}
