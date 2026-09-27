using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;

namespace VRInteractionPrototype.Editor
{
    /// <summary>Optional, explicit placement of the decorative lamp only.</summary>
    public static class AutoPlaceModels
    {
        private const string LampBlendPath = "Assets/_Project/Models/TriangleLamp/triangle_lamp.blend";
        private const string LampFbxPath = "Assets/_Project/Models/TriangleLamp/triangle_lamp.fbx";
        [MenuItem("Bomba VR/Agregar lámpara decorativa opcional")]
        public static void RunOnce()
        {
            if (Application.isPlaying) return;
            if (EditorApplication.isCompiling) return;

            Scene scene = SceneManager.GetActiveScene();
            GameObject table = GameObject.Find("Table");
            if (table == null) return; // No es la escena objetivo.

            bool changed = false;
            changed |= EnsureLampOnTable(table);

            if (changed)
            {
                EditorSceneManager.MarkSceneDirty(scene);
                EditorSceneManager.SaveScene(scene);
                Debug.Log("[AutoPlaceModels] Modelos colocados y escena guardada.");
            }
        }

        private static bool EnsureLampOnTable(GameObject table)
        {
            if (GameObject.Find("TriangleLamp") != null) return false;
            GameObject asset = AssetDatabase.LoadAssetAtPath<GameObject>(LampBlendPath);
            if (asset == null) asset = AssetDatabase.LoadAssetAtPath<GameObject>(LampFbxPath);
            if (asset == null) { Debug.LogWarning("[AutoPlaceModels] Lampara no disponible (falta Blender o FBX)."); return false; }
            Renderer top = GetTopRenderer(table);
            if (top == null) return false;

            GameObject instance = (GameObject)PrefabUtility.InstantiatePrefab(asset);
            instance.name = "TriangleLamp";
            Bounds b = GetWorldBounds(instance);
            Vector3 target = new Vector3(
                top.bounds.center.x + 0.35f,
                top.bounds.max.y + b.extents.y + 0.001f,
                top.bounds.center.z - 0.20f);
            instance.transform.position = target - (b.center - instance.transform.position);
            instance.transform.SetParent(table.transform, true);
            Debug.Log("[AutoPlaceModels] TriangleLamp colocada sobre la mesa.");
            return true;
        }

        private static Renderer GetTopRenderer(GameObject table)
        {
            Transform top = table.transform.Find("Top");
            if (top == null) { Debug.LogWarning("[AutoPlaceModels] 'Table' sin hijo 'Top'."); return null; }
            Renderer r = top.GetComponent<Renderer>();
            if (r == null) Debug.LogWarning("[AutoPlaceModels] 'Top' sin Renderer.");
            return r;
        }

        private static Bounds GetWorldBounds(GameObject root)
        {
            Renderer[] renderers = root.GetComponentsInChildren<Renderer>();
            if (renderers.Length == 0) return new Bounds(root.transform.position, Vector3.zero);
            Bounds b = renderers[0].bounds;
            for (int i = 1; i < renderers.Length; i++) b.Encapsulate(renderers[i].bounds);
            return b;
        }
    }
}
