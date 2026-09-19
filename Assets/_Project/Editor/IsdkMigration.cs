using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.UI;
using UnityEngine.XR.OpenXR;
using UnityEngine.XR.OpenXR.Features;

/// <summary>
/// Utilidades de EDITOR para migrar la escena de XRI a Meta Interaction SDK (ISDK):
///  * Limpiar todos los componentes/sistemas XRI de la escena.
///  * Dejar el rig ISDK (Building Block) en modo "solo manos".
///  * Asegurar los interactables ISDK persistentes (agarre de la bomba).
///  * Configurar OpenXR para Android (hand tracking, sin mandos) y GameActivity.
/// </summary>
public static class IsdkMigration
{
    private const string RigRootName = "XR Origin";
    private const string SimulatorName = "Interaction Simulator";
    private const string IsdkRigName = "[BuildingBlock] OVRComprehensiveInteractionRig";

    [MenuItem("Bomba VR/ISDK ▶ Migrar escena a ISDK (quitar XRI, usar manos)", false, 200)]
    public static void MigrateScene()
    {
        int removed = 0;
        removed += DestroyAll<UnityEngine.XR.Interaction.Toolkit.Interactables.XRSimpleInteractable>();
        removed += DestroyAll<UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable>();
        removed += DestroyAll<XRInteractionManager>();
        removed += DestroyAll<XRUIInputModule>();

        GameObject[] roots = SceneManager.GetActiveScene().GetRootGameObjects();
        foreach (GameObject root in roots)
        {
            if (root == null) continue;
            if (root.name.StartsWith(RigRootName) || root.name.Contains(SimulatorName))
            {
                Object.DestroyImmediate(root);
                removed++;
            }
        }

        HandsOnlyRig();

        int added = EnsureIsdkInteractables();

        EditorSceneManager.MarkSceneDirty(SceneManager.GetActiveScene());
        EditorSceneManager.SaveScene(SceneManager.GetActiveScene());

        Debug.Log($"<color=#7CFC00>[Bomba VR ISDK] Migración completa: {removed} elementos XRI eliminados, {added} interactables ISDK asegurados. Escena guardada. Pulsa Play.</color>");
    }

    [MenuItem("Bomba VR/ISDK ▶ Configurar OpenXR Android (hand tracking, sin mandos) + GameActivity", false, 201)]
    public static void ConfigureOpenXRAndroid()
    {
        OpenXRSettings settings = OpenXRSettings.GetSettingsForBuildTargetGroup(BuildTargetGroup.Android);
        int changed = 0;
        if (settings != null)
        {
            OpenXRFeature hand = settings.GetFeature(typeof(UnityEngine.XR.Hands.OpenXR.HandTracking));
            if (hand != null && !hand.enabled)
            {
                hand.enabled = true;
                EditorUtility.SetDirty(hand);
                changed++;
            }

            OpenXRFeature aim = settings.GetFeature(typeof(UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim));
            if (aim != null && !aim.enabled)
            {
                aim.enabled = true;
                EditorUtility.SetDirty(aim);
                changed++;
            }

            OpenXRFeature touchPlus = settings.GetFeature(typeof(UnityEngine.XR.OpenXR.Features.Interactions.MetaQuestTouchPlusControllerProfile));
            if (touchPlus != null && touchPlus.enabled)
            {
                touchPlus.enabled = false;
                EditorUtility.SetDirty(touchPlus);
                changed++;
            }
        }
        else
        {
            Debug.LogWarning("[Bomba VR ISDK] No hay ajustes OpenXR para Android; revisa que OpenXR esté activo.");
        }

        PlayerSettings.Android.applicationEntry = AndroidApplicationEntry.GameActivity;
        AssetDatabase.SaveAssets();

        Debug.Log($"<color=#7CFC00>[Bomba VR ISDK] OpenXR Android listo: hand tracking activo, Touch Plus desactivado ({changed} cambios) y applicationEntry=GameActivity.</color>");
        Debug.Log("Añade en el manifest el permiso de manos: com.oculus.permission.HAND_TRACKING y uses-feature oculus.software.handtracking (Assets/Plugins/Android/AndroidManifest.xml).");
    }

    [MenuItem("Bomba VR/ISDK ▶ Manos, sin mandos: desactivar controllers del rig", false, 202)]
    public static void HandsOnlyRig()
    {
        GameObject rig = FindRootContaining(IsdkRigName);
        if (rig == null)
        {
            Debug.LogWarning($"[Bomba VR ISDK] No se encontró el rig '{IsdkRigName}'. Instálalo con Building Blocks → Interactions Rig.");
            return;
        }

        int hidden = 0;
        string[] nodes = { "OVRControllers", "OVRControllerVisualLeft", "OVRControllerVisualRight" };
        foreach (string name in nodes)
        {
            Transform t = rig.transform.Find(name);
            if (t != null && t.gameObject.activeSelf)
            {
                t.gameObject.SetActive(false);
                EditorUtility.SetDirty(t.gameObject);
                hidden++;
            }
        }

        EditorSceneManager.MarkSceneDirty(SceneManager.GetActiveScene());
        Debug.Log($"<color=#7CFC00>[Bomba VR ISDK] Rig solo-manos: {hidden} sub-árboles de mando desactivados. Guarda la escena.</color>");
    }

    // ------------------------------------------------------------------ Internos

    private static int DestroyAll<T>() where T : Component
    {
        T[] all = Object.FindObjectsByType<T>(FindObjectsInactive.Include);
        foreach (T c in all)
        {
            if (c != null) Object.DestroyImmediate(c);
        }
        return all.Length;
    }

    /// <summary>Garantiza que los objetos persistentes tengan sus interactables ISDK.</summary>
    private static int EnsureIsdkInteractables()
    {
        int added = 0;

        BombManager bomb = Object.FindAnyObjectByType<BombManager>();
        if (bomb != null)
        {
            if (bomb.GetComponent<Oculus.Interaction.GrabInteractable>() == null)
            {
                Rigidbody rb = bomb.GetComponent<Rigidbody>();
                if (rb == null)
                {
                    rb = bomb.gameObject.AddComponent<Rigidbody>();
                    rb.isKinematic = true;
                    rb.useGravity = false;
                }
                Isdk.Grab(bomb.gameObject, rb);
                added++;
            }
        }
        else
        {
            Debug.LogWarning("[Bomba VR ISDK] No hay BombManager en la escena; no se pudo asegurar el agarre de la bomba.");
        }

        return added;
    }

    private static GameObject FindRootContaining(string exactName)
    {
        GameObject[] roots = SceneManager.GetActiveScene().GetRootGameObjects();
        foreach (GameObject root in roots)
        {
            if (root == null) continue;
            if (root.name == exactName) return root;
            Transform t = root.transform.Find(exactName);
            if (t != null) return t.gameObject;
        }
        return null;
    }
}