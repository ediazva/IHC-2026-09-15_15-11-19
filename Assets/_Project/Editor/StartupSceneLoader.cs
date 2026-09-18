using System.IO;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.SceneManagement;

/// <summary>
/// Limpieza de arranque (una vez por sesión):
///  * Elimina todo lo de las escenas de plantilla de Unity
///    (SampleScene y BasicScene: .unity, carpetas de iluminación y .scenetemplate).
///  * Las quita de Build Settings.
///  * Abre la única escena real: BombRoom.
/// Se hace con el API de Unity para que los cambios persistan en disco
/// (editar los assets a mano mientras el Editor está abierto no funciona: los reescribe).
/// </summary>
public static class StartupSceneLoader
{
    private const string BombRoomScenePath = "Assets/_Project/Scenes/BombRoom.unity";
    private const string SessionFlag = "BombRoomStartupDone_v2";

    private static readonly string[] UnwantedAssets =
    {
        "Assets/Scenes/SampleScene.unity",
        "Assets/Scenes/SampleScene",
        "Assets/Scenes/BasicScene.unity",
        "Assets/Scenes/BasicScene",
        "Assets/Settings/Project Configuration/SampleScene.scenetemplate",
        "Assets/Settings/Project Configuration/BasicScene.scenetemplate",
    };

    [InitializeOnLoadMethod]
    private static void Register()
    {
        if (Application.isBatchMode) return;
        EditorApplication.delayCall += RunStartupCleanup;
    }

    private static void RunStartupCleanup()
    {
        if (SessionState.GetBool(SessionFlag, false)) return;

        if (File.Exists(BombRoomScenePath))
            EditorSceneManager.OpenScene(BombRoomScenePath, OpenSceneMode.Single);

        int removed = 0;
        foreach (string asset in UnwantedAssets)
        {
            string meta = asset + ".meta";
            if (File.Exists(asset) || Directory.Exists(asset))
            {
                if (AssetDatabase.DeleteAsset(asset)) removed++;
            }
            else if (File.Exists(meta))
            {
                if (AssetDatabase.DeleteAsset(meta)) removed++;
            }
        }

        if (removed > 0)
        {
            EditorBuildSettings.scenes = System.Array.FindAll(
                EditorBuildSettings.scenes,
                s => !ContainsUnwanted(s.path));
            AssetDatabase.SaveAssets();
            Debug.Log($"<color=#7CFC00>[Bomba VR] Eliminadas {removed} cosas de plantilla (SampleScene/BasicScene). Solo queda BombRoom.</color>");
        }
        else if (File.Exists(BombRoomScenePath))
        {
            Debug.Log("<color=#7CFC00>[Bomba VR] Escena BombRoom abierta. No quedaban escenas de plantilla.</color>");
        }

        SessionState.SetBool(SessionFlag, true);
    }

    private static bool ContainsUnwanted(string path)
    {
        foreach (string t in UnwantedAssets)
            if (path == t) return true;
        return false;
    }
}