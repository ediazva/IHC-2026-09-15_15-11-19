using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;

namespace VRInteractionPrototype.Editor
{
    /// <summary>
    /// Coloca la lampara importada sobre la mesa, separada del C4.
    /// Requiere que Unity haya convertido el .blend (necesita Blender instalado
    /// o el modelo exportado como FBX en la misma carpeta).
    /// Uso: menu VR Setup / Place Lamp On Table.
    /// </summary>
    public static class PlaceLampOnTable
    {
        private const string BlendPath = "Assets/_Project/Models/TriangleLamp/triangle_lamp.blend";
        private const string FbxPath = "Assets/_Project/Models/TriangleLamp/triangle_lamp.fbx";

        [MenuItem("VR Setup/Place Lamp On Table")]
        public static void PlaceLamp()
        {
            GameObject modelAsset = AssetDatabase.LoadAssetAtPath<GameObject>(BlendPath);
            if (modelAsset == null) modelAsset = AssetDatabase.LoadAssetAtPath<GameObject>(FbxPath);
            if (modelAsset == null)
            {
                Debug.LogError("[PlaceLampOnTable] Modelo no disponible. Instala Blender para convertir el .blend o coloca triangle_lamp.fbx en la misma carpeta.");
                return;
            }

            GameObject table = GameObject.Find("Table");
            if (table == null)
            {
                Debug.LogError("[PlaceLampOnTable] No se encontro 'Table'. Abre BombRoom.unity.");
                return;
            }

            Transform top = table.transform.Find("Top");
            Renderer topRenderer = top != null ? top.GetComponent<Renderer>() : null;
            if (topRenderer == null)
            {
                Debug.LogError("[PlaceLampOnTable] No se encontro 'Table/Top' con Renderer.");
                return;
            }

            float surfaceY = topRenderer.bounds.max.y;

            GameObject existing = GameObject.Find("TriangleLamp");
            if (existing != null)
            {
                Undo.DestroyObjectImmediate(existing);
            }

            GameObject instance = (GameObject)PrefabUtility.InstantiatePrefab(modelAsset);
            Undo.RegisterCreatedObjectUndo(instance, "Place Lamp On Table");
            instance.name = "TriangleLamp";

            Bounds bounds = GetWorldBounds(instance);
            // Esquina del tablero, separada del C4 (centro): x +0.35, z -0.20 en espacio mundo.
            Vector3 target = new Vector3(
                topRenderer.bounds.center.x + 0.35f,
                surfaceY + bounds.extents.y + 0.001f,
                topRenderer.bounds.center.z - 0.20f);
            instance.transform.position = target - (bounds.center - instance.transform.position);
            instance.transform.SetParent(table.transform, true);

            EditorSceneManager.MarkSceneDirty(EditorSceneManager.GetActiveScene());
            Debug.Log($"[PlaceLampOnTable] Lampara colocada en {instance.transform.position}. Guarda la escena (Ctrl+S).");
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
