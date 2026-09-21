using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;

namespace VRInteractionPrototype.Editor
{
    /// <summary>
    /// Instancia el modelo Headquarters_Room en la escena activa, en el origen.
    /// Uso: abrir la escena destino y ejecutar el menu VR Setup / Place Headquarters Room.
    /// </summary>
    public static class PlaceHeadquartersRoom
    {
        private const string ModelPath = "Assets/_Project/Models/HeadquartersRoom/Headquarters_Room.fbx";

        [MenuItem("VR Setup/Place Headquarters Room")]
        public static void PlaceRoom()
        {
            GameObject modelAsset = AssetDatabase.LoadAssetAtPath<GameObject>(ModelPath);
            if (modelAsset == null)
            {
                Debug.LogError($"[PlaceHeadquartersRoom] No se encontro el modelo en {ModelPath}. Revisa que Unity haya importado el FBX.");
                return;
            }

            GameObject existing = GameObject.Find("HeadquartersRoom");
            if (existing != null)
            {
                Undo.DestroyObjectImmediate(existing);
            }

            GameObject instance = (GameObject)PrefabUtility.InstantiatePrefab(modelAsset);
            Undo.RegisterCreatedObjectUndo(instance, "Place Headquarters Room");
            instance.name = "HeadquartersRoom";
            instance.transform.position = Vector3.zero;
            instance.transform.rotation = Quaternion.identity;

            EditorSceneManager.MarkSceneDirty(EditorSceneManager.GetActiveScene());
            Debug.Log("[PlaceHeadquartersRoom] Habitacion instanciada en el origen. Guarda la escena (Ctrl+S).");
        }
    }
}
