using UnityEngine;
using UnityEditor;
using System.IO;

namespace VRInteractionPrototype.Editor
{
    /// <summary>
    /// Asigna texturas al modelo C4_bomb (color/normal/AO/roughness).
    /// Uso: VR Setup / Assign C4 Textures.
    /// </summary>
    public static class AssignC4Textures
    {
        private const string ModelPath = "Assets/_Project/Models/C4Bomb/C4_bomb.fbx";
        private const string TextureDir = "Assets/_Project/Models/C4Bomb";

        [MenuItem("VR Setup/Assign C4 Textures")]
        public static void Assign()
        {
            GameObject modelAsset = AssetDatabase.LoadAssetAtPath<GameObject>(ModelPath);
            if (modelAsset == null)
            {
                Debug.LogError($"[AssignC4Textures] Modelo no encontrado en {ModelPath}");
                return;
            }

            GameObject c4 = GameObject.Find("C4Bomb");
            if (c4 == null)
            {
                Debug.LogError("[AssignC4Textures] 'C4Bomb' no esta en la escena.");
                return;
            }

            Renderer[] renderers = c4.GetComponentsInChildren<Renderer>(true);
            string albedo = Path.Combine(TextureDir, "c4_color_tga_75da6dec.png").Replace('\\', '/');
            string normal = Path.Combine(TextureDir, "c4_normal_tga_4e48d437.png").Replace('\\', '/');
            string ao = Path.Combine(TextureDir, "c4_ao_tga_bb64a00d.png").Replace('\\', '/');
            string rough = Path.Combine(TextureDir, "c4_rough_tga_53c5f087.png").Replace('\\', '/');

            Texture tAlbedo = AssetDatabase.LoadAssetAtPath<Texture>(albedo);
            Texture tNormal = AssetDatabase.LoadAssetAtPath<Texture>(normal);
            Texture tAO = AssetDatabase.LoadAssetAtPath<Texture>(ao);
            Texture tRough = AssetDatabase.LoadAssetAtPath<Texture>(rough);

            if (tNormal != null)
            {
                var ti = AssetImporter.GetAtPath(normal) as TextureImporter;
                if (ti != null && ti.textureType != TextureImporterType.NormalMap)
                {
                    ti.textureType = TextureImporterType.NormalMap;
                    ti.SaveAndReimport();
                }
            }

            int count = 0;
            foreach (Renderer r in renderers)
            {
                Material[] mats = r.sharedMaterials;
                bool changed = false;
                for (int i = 0; i < mats.Length; i++)
                {
                    Material m = mats[i];
                    if (tAlbedo != null && m.GetTexture("_BaseColorMap") != tAlbedo) { m.SetTexture("_BaseColorMap", tAlbedo); changed = true; }
                    if (tNormal != null && m.GetTexture("_BumpMap") != tNormal) { m.SetTexture("_BumpMap", tNormal); changed = true; }
                    if (tAO != null && m.GetTexture("_OcclusionMap") != tAO) { m.SetTexture("_OcclusionMap", tAO); changed = true; }
                    if (tRough != null && m.GetTexture("_RoughnessMap") != tRough) { m.SetTexture("_RoughnessMap", tRough); changed = true; }
                }
                if (changed) { r.sharedMaterials = mats; count++; }
            }
            EditorUtility.SetDirty(c4);
            Debug.Log($"[AssignC4Textures] {count} renderers actualizados. Guarda la escena.");
        }
    }
}