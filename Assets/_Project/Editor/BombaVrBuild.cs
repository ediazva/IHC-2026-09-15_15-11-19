using System.IO;
using UnityEditor;
using UnityEditor.Build.Reporting;
using UnityEditor.SceneManagement;
using UnityEngine;

/// <summary>
/// Compila el APK de Quest desde el Editor. Usa la escena BombRoom y la salida
/// del proyecto (BombaVR.apk). Requiere el módulo Android y el OpenXR de Meta.
/// </summary>
public static class BombaVrBuild
{
    private const string ScenePath = "Assets/_Project/Scenes/BombRoom.unity";
    private const string OutputPath = "BombaVR.apk";

    /// <summary>Compila el APK de Quest en la raíz del proyecto.</summary>
    [MenuItem("Bomba VR/Compilar APK Quest (BombaVR.apk)", false, 200)]
    public static void BuildApk()
    {
        if (!EditorSceneManager.SaveCurrentModifiedScenesIfUserWantsTo())
        {
            Debug.LogWarning("[Bomba VR] Build cancelado: no se guardaron los cambios de la escena.");
            return;
        }

        EditorUserBuildSettings.SwitchActiveBuildTarget(
            BuildTargetGroup.Android, BuildTarget.Android);

        BuildPlayerOptions options = new BuildPlayerOptions
        {
            scenes = new[] { ScenePath },
            locationPathName = OutputPath,
            target = BuildTarget.Android,
            targetGroup = BuildTargetGroup.Android,
            options = BuildOptions.None,
        };

        BuildReport report = BuildPipeline.BuildPlayer(options);
        bool ok = report != null && report.summary.result == BuildResult.Succeeded;
        string full = Path.GetFullPath(OutputPath);

        if (ok)
        {
            Debug.Log($"<color=#7CFC00>[Bomba VR] APK generado: {full}</color>");
        }
        else
        {
            Debug.LogError("[Bomba VR] Fallo el build. Revisa la consola para ver el reporte.");
        }
    }
}