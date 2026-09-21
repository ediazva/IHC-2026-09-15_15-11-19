using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;

namespace VRInteractionPrototype.Editor
{
    /// <summary>
    /// Coloca el modelo C4 importado encima de la mesa (BombRoom/Table/Top).
    /// Uso: abrir la escena BombRoom y ejecutar el menu VR Setup / Place C4 On Table.
    /// </summary>
    public static class PlaceC4OnTable
    {
        private const string ModelPath = "Assets/_Project/Models/C4Bomb/C4_bomb.fbx";

        [MenuItem("VR Setup/Place C4 On Table")]
        public static void PlaceC4()
        {
            GameObject modelAsset = AssetDatabase.LoadAssetAtPath<GameObject>(ModelPath);
            if (modelAsset == null)
            {
                Debug.LogError($"[PlaceC4OnTable] No se encontro el modelo en {ModelPath}. Revisa que Unity haya importado el FBX.");
                return;
            }

            GameObject table = GameObject.Find("Table");
            if (table == null)
            {
                Debug.LogError("[PlaceC4OnTable] No se encontro el GameObject 'Table' en la escena activa. Abre BombRoom.unity.");
                return;
            }

            Transform top = table.transform.Find("Top");
            if (top == null)
            {
                Debug.LogError("[PlaceC4OnTable] 'Table' no tiene hijo 'Top'.");
                return;
            }

            Renderer topRenderer = top.GetComponent<Renderer>();
            if (topRenderer == null)
            {
                Debug.LogError("[PlaceC4OnTable] 'Top' no tiene Renderer para calcular la superficie.");
                return;
            }

            float surfaceY = topRenderer.bounds.max.y;
            Vector3 surfaceCenter = topRenderer.bounds.center;
            surfaceCenter.y = surfaceY;

            GameObject existing = GameObject.Find("C4Bomb");
            if (existing != null)
            {
                Undo.DestroyObjectImmediate(existing);
            }

            GameObject instance = (GameObject)PrefabUtility.InstantiatePrefab(modelAsset);
            Undo.RegisterCreatedObjectUndo(instance, "Place C4 On Table");
            instance.name = "C4Bomb";

            Bounds bounds = GetWorldBounds(instance);
            Vector3 pos = new Vector3(surfaceCenter.x, surfaceY + bounds.extents.y + 0.001f, surfaceCenter.z);
            instance.transform.position = pos - (bounds.center - instance.transform.position);
            instance.transform.SetParent(table.transform, true);

            EditorSceneManager.MarkSceneDirty(EditorSceneManager.GetActiveScene());
            Debug.Log($"[PlaceC4OnTable] C4 colocado sobre la mesa en {instance.transform.position}. Guarda la escena (Ctrl+S).");
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
