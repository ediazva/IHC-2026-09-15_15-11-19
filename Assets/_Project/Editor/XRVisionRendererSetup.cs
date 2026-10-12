using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;
using UnityEngine.Rendering.Universal;

/// <summary>Wires the Quest and desktop renderers to the event's XR vision pass.</summary>
[InitializeOnLoad]
internal static class XRVisionRendererSetup
{
    private const string ShaderPath = "Assets/_Project/Materials/BombRoom/XRVisionLoss.shader";
    private const string AndroidRendererPath = "Assets/Settings/Project Configuration/Android Preset.asset";
    private const string DesktopRendererPath = "Assets/Settings/Project Configuration/Standalone Preset.asset";

    static XRVisionRendererSetup()
    {
        EditorApplication.delayCall += Install;
    }

    [MenuItem("Bomba VR/Configurar visión XR")]
    internal static void Install()
    {
        Shader shader = AssetDatabase.LoadAssetAtPath<Shader>(ShaderPath);
        if (shader == null)
        {
            Debug.LogError($"[XRVisionRendererSetup] Falta el shader {ShaderPath}.");
            return;
        }

        bool changed = InstallOn(AndroidRendererPath, shader);
        changed |= InstallOn(DesktopRendererPath, shader);
        if (changed) AssetDatabase.SaveAssets();
    }

    private static bool InstallOn(string path, Shader shader)
    {
        UniversalRendererData renderer = AssetDatabase.LoadAssetAtPath<UniversalRendererData>(path);
        if (renderer == null)
        {
            Debug.LogError($"[XRVisionRendererSetup] No se encontró el renderizador {path}.");
            return false;
        }

        XRVisionRendererFeature feature = renderer.rendererFeatures.Find(
            candidate => candidate is XRVisionRendererFeature) as XRVisionRendererFeature;
        bool changed = false;
        if (feature == null)
        {
            feature = ScriptableObject.CreateInstance<XRVisionRendererFeature>();
            feature.name = "Visión reducida XR";
            feature.hideFlags = HideFlags.HideInHierarchy;
            AssetDatabase.AddObjectToAsset(feature, renderer);
            AssetDatabase.TryGetGUIDAndLocalFileIdentifier(feature, out _, out long localId);

            SerializedObject serialized = new SerializedObject(renderer);
            serialized.Update();
            SerializedProperty features = serialized.FindProperty("m_RendererFeatures");
            SerializedProperty featureMap = serialized.FindProperty("m_RendererFeatureMap");
            int index = features.arraySize;
            features.InsertArrayElementAtIndex(index);
            features.GetArrayElementAtIndex(index).objectReferenceValue = feature;
            featureMap.InsertArrayElementAtIndex(index);
            featureMap.GetArrayElementAtIndex(index).longValue = localId;
            serialized.ApplyModifiedPropertiesWithoutUndo();
            changed = true;
        }

        if (feature.passMaterial == null || feature.passMaterial.shader != shader)
        {
            Material material = new Material(shader)
            {
                name = "Mat_XRVisionLoss",
                hideFlags = HideFlags.HideInHierarchy
            };
            AssetDatabase.AddObjectToAsset(material, renderer);
            feature.passMaterial = material;
            changed = true;
        }

        if (feature.injectionPoint != FullScreenPassRendererFeature.InjectionPoint.AfterRenderingPostProcessing ||
            !feature.fetchColorBuffer || feature.requirements != ScriptableRenderPassInput.None)
        {
            feature.injectionPoint = FullScreenPassRendererFeature.InjectionPoint.AfterRenderingPostProcessing;
            feature.fetchColorBuffer = true;
            feature.requirements = ScriptableRenderPassInput.None;
            changed = true;
        }

        if (changed)
        {
            feature.SetActive(true);
            feature.Create();
            renderer.SetDirty();
            EditorUtility.SetDirty(feature);
            EditorUtility.SetDirty(renderer);
            Debug.Log($"[XRVisionRendererSetup] Visión XR activada en {path}.");
        }

        return changed;
    }
}

/// <summary>Ensure the XR pass is included even when building without opening the scene.</summary>
internal sealed class XRVisionBuildSetup : IPreprocessBuildWithReport
{
    public int callbackOrder => -100;

    public void OnPreprocessBuild(BuildReport report)
    {
        XRVisionRendererSetup.Install();
    }
}
