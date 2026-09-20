using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.SceneManagement;

/// <summary>
/// Utilidad de editor "Bomba VR → Añadir módulo Laberinto": crea el holder del
/// laberinto en la cara +X del cubo, añade MazeModule (con la bolita regalada
/// por el módulo de Simón si existe) y garantiza que existan las etiquetas
/// "Goal" y "Hole" en el TagManager.
///
/// El laberinto no se construye en el editor: MazeModule lo regenera en cada
/// partida (con semilla aleatoria) bajo el holder.
/// </summary>
public static class MazeModuleSetup
{
    [MenuItem("Bomba VR/Añadir módulo Laberinto (cara +X, bolita desde Simón)", false, 102)]
    public static void AddMazeToCurrentBomb()
    {
        BombManager bomb = Object.FindAnyObjectByType<BombManager>();
        if (bomb == null)
        {
            Debug.LogError("[Bomba VR] No hay ninguna bomba (BombManager) en la escena. Crea la sala primero.");
            return;
        }

        // Si ya existe, lo reemplaza (permite actualizar sin duplicar).
        MazeModule existing = bomb.GetComponentInChildren<MazeModule>(true);
        if (existing != null)
        {
            Object.DestroyImmediate(existing.gameObject);
        }

        // Etiquetas usadas por las cazoletas (meta y trampas).
        EnsureTag("Goal");
        EnsureTag("Hole");

        GameObject holder = new GameObject("MazeModuleHolder");
        holder.transform.SetParent(bomb.transform, false);
        holder.transform.localPosition = new Vector3(MazeModule.Layout.FaceOffsetX, 0f, 0f);
        holder.transform.localRotation = Quaternion.identity;
        holder.transform.localScale = Vector3.one;

        MazeModule maze = holder.AddComponent<MazeModule>();
        maze.ballSource = bomb.GetComponentInChildren<SimonModule>(true);

        if (maze.ballSource == null)
        {
            Debug.LogWarning("[Bomba VR] No hay módulo Simón: la bolita no se entregará. Añade Simón o asigna 'ballSource' en el inspector.");
        }

        EditorSceneManager.MarkSceneDirty(SceneManager.GetActiveScene());
        Debug.Log("<color=#7CFC00>[Bomba VR] Módulo Laberinto añadido a la cara derecha (+X). La bolita la regala " +
                  (maze.ballSource != null ? "Simón" : "el módulo asignado") +
                  ". Guarda la escena (Cmd+S).</color>");
    }

    /// <summary>Asegura que una etiqueta exista en ProjectSettings/TagManager.asset.</summary>
    private static void EnsureTag(string tag)
    {
        SerializedObject tagManager = new SerializedObject(
            AssetDatabase.LoadAllAssetsAtPath("ProjectSettings/TagManager.asset")[0]);
        SerializedProperty tagsProp = tagManager.FindProperty("tags");
        if (tagsProp == null) return;

        for (int i = 0; i < tagsProp.arraySize; i++)
        {
            if (tagsProp.GetArrayElementAtIndex(i).stringValue == tag)
                return;
        }

        tagsProp.InsertArrayElementAtIndex(tagsProp.arraySize);
        tagsProp.GetArrayElementAtIndex(tagsProp.arraySize - 1).stringValue = tag;
        tagManager.ApplyModifiedPropertiesWithoutUndo();
    }
}