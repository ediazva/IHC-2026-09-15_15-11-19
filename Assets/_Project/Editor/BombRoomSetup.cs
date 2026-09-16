using System.IO;
using TMPro;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Interactables;
using UnityEngine.XR.Interaction.Toolkit.UI;
using VRInteractionPrototype;

/// <summary>
/// Utilidades de editor para preparar "Bomba VR":
///  * Crear/construir la sala de la bomba completamente en el EDITOR:
///    mesa (prefab Table1), bomba con sistemas, puzzle de cables (conectar),
///    LEDs, HUD y botón de reinicio. Todo queda como objetos de la escena
///    (visible antes de pulsar Play) y con materiales reales como assets bajo
///    Assets/_Project/Materials/BombRoom.
///  * Añadir el rig XR y el simulador XRI para probar sin visor.
/// </summary>
public static class BombRoomSetup
{
    private const string RigPath = "Assets/Samples/XR Interaction Toolkit/3.5.1/Starter Assets/Prefabs/XR Origin (XR Rig).prefab";
    private const string SimulatorPath = "Assets/Samples/XR Interaction Toolkit/3.6.0/XR Interaction Simulator/XR Interaction Simulator.prefab";
    private const string SimulatorUiPath = "Assets/Samples/XR Interaction Toolkit/3.6.0/XR Interaction Simulator/UI/XR Interaction Simulator UI.prefab";
    private const string TablePath = "Assets/Tables and Chairs/Prefabs/Table1.prefab";

    private const string ScenePath = "Assets/_Project/Scenes/BombRoom.unity";
    private const string MaterialFolder = "Assets/_Project/Materials/BombRoom";

    [MenuItem("Bomba VR/Crear escena BombRoom (Editor)")]
    public static void CreateBombRoom()
    {
        CreateBombRoomScene(addXriSimulator: true, path: ScenePath);
    }

    [MenuItem("Bomba VR/Crear escena BombRoom (para Meta XR Simulator)")]
    public static void CreateBombRoomForMetaSimulator()
    {
        // Con el simulador de Meta el rig XR debe recibir el HMD+mandos/manos de
        // OpenXR, por lo que NO se añade el simulador de XRI (si no, se pelean).
        CreateBombRoomScene(addXriSimulator: false, path: ScenePath);
    }

    private static void CreateBombRoomScene(bool addXriSimulator, string path)
    {
        EnsureSceneFolder();

        Scene scene = EditorSceneManager.NewScene(NewSceneSetup.EmptyScene, NewSceneMode.Single);

        EnsureEventSystem();
        InstantiatePrefab(RigPath);
        if (addXriSimulator)
        {
            InstantiatePrefab(SimulatorPath);
            InstantiatePrefab(SimulatorUiPath);
        }

        BuildRoomInScene();

        EditorSceneManager.SaveScene(scene, path);
        Debug.Log(addXriSimulator
            ? $"<color=#7CFC00>[Bomba VR] Escena guardada en {path}. Pulsa Play y usa el simulador de XRI (WASD + ratón).</color>"
            : $"<color=#7CFC00>[Bomba VR] Escena guardada en {path} SIN simulador de XRI. Antes de pulsar Play: menú Meta → Meta XR Simulator → Activate.</color>");
    }

    [MenuItem("Bomba VR/Construir sala en la escena actual")]
    public static void BuildRoomInScene()
    {
        if (Object.FindAnyObjectByType<BombManager>() != null)
        {
            Debug.LogWarning("[Bomba VR] Ya hay una bomba en la escena (BombManager). No se construye de nuevo.");
            return;
        }

        EnsureMaterialsFolder();

        GameObject root = new GameObject("BombRoom");

        EnsureLighting();
        EnsureGround(root);

        float tableTop = BuildTable(root);
        BuildBomb(root, tableTop);
        BuildResetButton(root, tableTop);

        EditorSceneManager.MarkSceneDirty(SceneManager.GetActiveScene());
        Debug.Log("<color=#7CFC00>[Bomba VR] Sala construida en el editor. Revisa en la ventana Scene: mesa, bomba, cables, alicates, HUD y botón R. Pulsa Play para jugar.</color>");
    }

    [MenuItem("Bomba VR/Agregar simulador XR a la escena actual")]
    public static void AddSimulatorToCurrentScene()
    {
        EnsureEventSystem();
        InstantiatePrefab(SimulatorPath);
        InstantiatePrefab(SimulatorUiPath);
        Debug.Log("<color=#7CFC00>[Bomba VR] Simulador agregado. Revisa que exista un XR Origin con interactores.</color>");
    }

    [MenuItem("Bomba VR/Quitar simulador XRI de la escena actual (usar Meta XR Simulator)")]
    public static void RemoveSimulatorFromCurrentScene()
    {
        int removed = 0;
        foreach (GameObject root in SceneManager.GetActiveScene().GetRootGameObjects())
        {
            if (root == null) continue;
            string source = PrefabUtility.GetPrefabAssetPathOfNearestInstanceRoot(root);
            if (string.IsNullOrEmpty(source))
                source = PrefabUtility.GetPrefabAssetPathOfNearestInstanceRoot(
                    root.transform.childCount > 0 ? root.transform.GetChild(0).gameObject : root);

            bool isSimulator = source == SimulatorPath || source == SimulatorUiPath
                || root.name.StartsWith("XR Interaction Simulator");
            if (!isSimulator) continue;

            Object.DestroyImmediate(root);
            removed++;
        }

        EditorSceneManager.MarkSceneDirty(SceneManager.GetActiveScene());
        Debug.Log(removed > 0
            ? $"<color=#7CFC00>[Bomba VR] Quitado el simulador de XRI ({removed} objeto/s). Ahora activa Meta → Meta XR Simulator → Activate.</color>"
            : "[Bomba VR] No se encontró el simulador de XRI en la escena.");
    }

    // ------------------------------------------------------------------ Sala

    private static float BuildTable(GameObject root)
    {
        GameObject tablePrefab = AssetDatabase.LoadAssetAtPath<GameObject>(TablePath);
        if (tablePrefab == null)
        {
            Debug.LogWarning($"[Bomba VR] No se encontró {TablePath}; se usa una mesa procedural de respaldo.");
            return BuildFallbackTable(root);
        }

        GameObject table = (GameObject)PrefabUtility.InstantiatePrefab(tablePrefab);
        table.name = "Table";
        table.transform.SetParent(root.transform, true);
        table.transform.position = Vector3.zero;

        // Asegurar que el tablero cubre al menos la bomba (margen).
        Renderer mr = table.GetComponentInChildren<MeshRenderer>();
        if (mr != null)
        {
            float needW = 1.25f;
            float needD = 0.8f;
            float sx = Mathf.Max(1f, needW / Mathf.Max(0.01f, mr.bounds.size.x));
            float sz = Mathf.Max(1f, needD / Mathf.Max(0.01f, mr.bounds.size.z));
            float s = Mathf.Max(sx, sz);
            if (s > 1.01f)
            {
                table.transform.localScale = Vector3.one * s;
                mr = table.GetComponentInChildren<MeshRenderer>();
            }
            return mr.bounds.max.y;
        }

        return BuildFallbackTable(root);
    }

    private static float BuildFallbackTable(GameObject root)
    {
        GameObject table = new GameObject("Table");
        table.transform.SetParent(root.transform, false);

        Material wood = GetMaterial("Mat_Madera", new Color(0.45f, 0.29f, 0.16f), metallic: 0f, smoothness: 0.35f);
        Material leg = GetMaterial("Mat_Pata", new Color(0.22f, 0.22f, 0.24f));

        Cube(table.transform, "Top", new Vector3(0f, 0.73f, 0f), new Vector3(1.5f, 0.05f, 0.95f), wood);

        Vector3[] corners =
        {
            new Vector3(-0.62f, 0.365f, -0.38f),
            new Vector3(0.62f, 0.365f, -0.38f),
            new Vector3(-0.62f, 0.365f, 0.38f),
            new Vector3(0.62f, 0.365f, 0.38f),
        };
        foreach (Vector3 corner in corners)
            Cube(table.transform, "Leg", corner, new Vector3(0.06f, 0.73f, 0.06f), leg);

        return 0.755f;
    }

    private static void BuildBomb(GameObject root, float tableTop)
    {
        const float bodyW = 0.9f, bodyH = 0.65f, bodyD = 0.6f;
        float bombCenterY = tableTop + bodyH * 0.5f;

        Material body = GetMaterial("Mat_Bomba", new Color(0.09f, 0.09f, 0.11f));
        Material panel = GetMaterial("Mat_Panel", new Color(0.05f, 0.055f, 0.06f));
        Material ledOff = GetMaterial("Mat_LedOff", new Color(0.13f, 0.13f, 0.14f));
        Material buttonMat = GetMaterial("Mat_BotonActivar", new Color(0.35f, 0.06f, 0.05f));
        Material[] cableMats = new Material[CablesModule.PuzzleColors.Length];
        Material[] cordMats = new Material[CablesModule.PuzzleColors.Length];
        for (int i = 0; i < cableMats.Length; i++)
        {
            cableMats[i] = GetMaterial($"Mat_Cable_{i}", CablesModule.PuzzleColors[i], emission: 1.2f);
            cordMats[i] = GetMaterial($"Mat_Cord_{i}", CablesModule.PuzzleColors[i], emission: 1.2f);
        }

        // --- Cuerpo de la bomba: raíz sin escala (1:1) + hijo visual del cubo.
        // La raíz en escala 1 permite colocar los módulos/HUD en las caras
        // con coordenadas en metros, sin deformar textos ni esferas.
        GameObject bomb = new GameObject("Bomba");
        bomb.transform.SetParent(root.transform, false);
        bomb.transform.position = new Vector3(0f, bombCenterY, 0f);

        GameObject bodyCube = GameObject.CreatePrimitive(PrimitiveType.Cube);
        bodyCube.name = "Body";
        bodyCube.transform.SetParent(bomb.transform, false);
        bodyCube.transform.localScale = new Vector3(bodyW, bodyH, bodyD);
        bodyCube.GetComponent<Renderer>().sharedMaterial = body;

        // Panel frontal (visual, sin collider): fondo del puzzle de cables.
        Cube(bomb.transform, "FrontPanel", new Vector3(0f, 0f, 0.302f),
            new Vector3(0.86f, 0.62f, 0.01f), panel);

        // --- Sistemas de juego
        TimerSystem timer = bomb.AddComponent<TimerSystem>();
        timer.startSeconds = 120f;
        timer.SetStartTime(120f);

        StrikeSystem strikes = bomb.AddComponent<StrikeSystem>();

        BombManager manager = bomb.AddComponent<BombManager>();
        manager.penaltyPerStrike = 35f;

        // La bomba se puede agarrar y girar para ver sus caras (solo manos).
        Rigidbody bombRb = bomb.AddComponent<Rigidbody>();
        bombRb.isKinematic = true;
        bombRb.useGravity = false;
        XRGrabInteractable grab = bomb.AddComponent<XRGrabInteractable>();
        grab.useDynamicAttach = true;
        grab.trackPosition = true;
        grab.trackRotation = true;
        grab.throwOnDetach = false;
        grab.movementType = XRBaseInteractable.MovementType.Instantaneous;

        // --- LEDs de strike (filo superior frontal)
        Renderer[] leds = new Renderer[strikes.MaxStrikes];
        for (int i = 0; i < leds.Length; i++)
        {
            float x = -0.22f + i * 0.11f;
            GameObject led = Sphere(bomb.transform, $"StrikeLed_{i}", new Vector3(x, 0.285f, 0.26f), 0.045f, ledOff);
            DestroyCollider(led);
            leds[i] = led.GetComponent<Renderer>();
        }

        // --- Módulo de cables (hijo de la bomba)
        GameObject moduleGo = new GameObject("Module_Cables");
        moduleGo.transform.SetParent(bomb.transform, false);
        CablesModule module = moduleGo.AddComponent<CablesModule>();

        BuildCables(module, cableMats, cordMats);

        // --- HUD: contador pequeño en la Cara Derecha del cubo (cada cosa
        //     en su propia cara).
        GameObject hudGo = new GameObject("BombHUD");
        hudGo.transform.SetParent(bomb.transform, false);
        hudGo.transform.localPosition = new Vector3(0.456f, 0f, 0f);
        hudGo.transform.localRotation = Quaternion.Euler(0f, -90f, 0f);
        BombUI hud = hudGo.AddComponent<BombUI>();
        BuildHudCanvas(hud);
        hud.bomb = manager;
        hud.strikeLeds = leds;
        hud.bombBodyRenderer = bodyCube.GetComponent<Renderer>();
        hud.bombBodyColor = new Color(0.09f, 0.09f, 0.11f);

        // --- Botón de activación en la Cara Superior (se enciende al terminar).
        BuildArmButton(bomb.transform, manager, buttonMat);
    }

    /// <summary>
    /// Construye el puzzle de cables ENTERO sobre la cara frontal del cubo:
    /// 3 cables (rojo/azul/amarillo) a la izquierda y 3 tomas desordenadas a la
    /// derecha. El jugador arrastra cada conector hasta la toma de su color.
    /// </summary>
    private static void BuildCables(CablesModule module, Material[] cableMats, Material[] cordMats)
    {
        GameObject cablesParent = new GameObject("Cables");
        cablesParent.transform.SetParent(module.transform, false);

        int n = CablesModule.PuzzleColors.Length;
        int[] permutation = { 1, 2, 0 }; // orden desordenado de las tomas (índices del puzzle)

        GameObject[] socketByColor = new GameObject[n];
        for (int row = 0; row < n; row++)
        {
            int colorIndex = permutation[row];
            float y = CablesModule.Layout.Row0Y - row * CablesModule.Layout.RowSpacing;

            GameObject socket = GameObject.CreatePrimitive(PrimitiveType.Cube);
            socket.name = $"Socket_{row}";
            socket.transform.SetParent(cablesParent.transform, false);
            socket.transform.localPosition = new Vector3(CablesModule.Layout.RightX, y, CablesModule.Layout.PlaneZ);
            socket.transform.localScale = Vector3.one * CablesModule.Layout.SocketSize;
            socket.GetComponent<Renderer>().sharedMaterial = cableMats[colorIndex];
            DestroyCollider(socket);

            socketByColor[colorIndex] = socket;
        }

        GameObject[] stubs = new GameObject[n];
        GameObject[] plugs = new GameObject[n];
        Transform[] tips = new Transform[n];
        LineRenderer[] cords = new LineRenderer[n];

        float stubLen = (CablesModule.Layout.MidX - CablesModule.Layout.LeftX) * 0.5f;
        float stubCenterX = (CablesModule.Layout.LeftX + CablesModule.Layout.MidX) * 0.5f;

        for (int i = 0; i < n; i++)
        {
            float y = CablesModule.Layout.Row0Y - i * CablesModule.Layout.RowSpacing;

            GameObject stub = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
            stub.name = $"Cable_{i}_Stub";
            stub.transform.SetParent(cablesParent.transform, false);
            stub.transform.localPosition = new Vector3(stubCenterX, y, CablesModule.Layout.PlaneZ);
            stub.transform.localRotation = Quaternion.Euler(0f, 0f, 90f);
            stub.transform.localScale = new Vector3(CablesModule.Layout.CordRadius * 2f, stubLen, CablesModule.Layout.CordRadius * 2f);
            stub.GetComponent<Renderer>().sharedMaterial = cableMats[i];
            DestroyCollider(stub);

            GameObject tip = new GameObject($"Cable_{i}_Tip");
            tip.transform.SetParent(cablesParent.transform, false);
            tip.transform.localPosition = new Vector3(CablesModule.Layout.MidX, y, CablesModule.Layout.PlaneZ);

            GameObject plug = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            plug.name = $"Cable_{i}_Plug";
            plug.transform.SetParent(cablesParent.transform, false);
            plug.transform.localPosition = new Vector3(CablesModule.Layout.MidX, y, CablesModule.Layout.PlaneZ);
            plug.transform.localScale = Vector3.one * (CablesModule.Layout.PlugRadius * 2f);
            plug.GetComponent<Renderer>().sharedMaterial = cableMats[i];

            GameObject cord = new GameObject($"Cable_{i}_Cord");
            cord.transform.SetParent(cablesParent.transform, false);
            LineRenderer line = cord.AddComponent<LineRenderer>();
            CablesModule.ConfigureLine(line, CablesModule.PuzzleColors[i], cordMats[i]);
            line.SetPosition(0, tip.transform.position);
            line.SetPosition(1, plug.transform.position);

            stubs[i] = stub;
            plugs[i] = plug;
            tips[i] = tip.transform;
            cords[i] = line;
        }

        var so = new SerializedObject(module);
        SerializedProperty arr = so.FindProperty("cables");
        arr.arraySize = n;
        for (int i = 0; i < n; i++)
        {
            SerializedProperty el = arr.GetArrayElementAtIndex(i);
            el.FindPropertyRelative("stub").objectReferenceValue = stubs[i];
            el.FindPropertyRelative("stubTip").objectReferenceValue = tips[i];
            el.FindPropertyRelative("plug").objectReferenceValue = plugs[i];
            el.FindPropertyRelative("socket").objectReferenceValue = socketByColor[i];
            el.FindPropertyRelative("cord").objectReferenceValue = cords[i];
            el.FindPropertyRelative("color").colorValue = CablesModule.PuzzleColors[i];
            el.FindPropertyRelative("connected").boolValue = false;
        }
        so.ApplyModifiedProperties();
        so.Dispose();
    }

    private static void BuildHudCanvas(BombUI hud)
    {
        GameObject canvasGo = new GameObject("BombHUDCanvas");
        canvasGo.transform.SetParent(hud.transform, false);
        canvasGo.transform.localPosition = new Vector3(0f, 0f, 0f);
        canvasGo.transform.localRotation = Quaternion.identity;
        canvasGo.transform.localScale = new Vector3(0.0018f, 0.0018f, 0.0018f);

        Canvas canvas = canvasGo.AddComponent<Canvas>();
        canvas.renderMode = RenderMode.WorldSpace;

        hud.timeText = CreateText(canvasGo.transform, "TimeText", new Vector2(0, 14), new Vector2(180, 62), 84, new Color(0.35f, 1f, 0.4f));
        hud.statusText = CreateText(canvasGo.transform, "StatusText", new Vector2(0, -28), new Vector2(220, 42), 30, Color.white);
        hud.feedbackText = CreateText(canvasGo.transform, "FeedbackText", new Vector2(0, -64), new Vector2(240, 36), 24, Color.white);
    }

    private static void BuildResetButton(GameObject root, float tableTop)
    {
        Material buttonMat = GetMaterial("Mat_BotonReset", new Color(0.12f, 0.7f, 0.35f));

        GameObject button = GameObject.CreatePrimitive(PrimitiveType.Cube);
        button.name = "ResetButton";
        button.transform.SetParent(root.transform, false);
        button.transform.position = new Vector3(-0.5f, tableTop + 0.03f, 0.48f);
        button.transform.localScale = new Vector3(0.16f, 0.05f, 0.16f);
        button.GetComponent<Renderer>().sharedMaterial = buttonMat;

        XRSimpleInteractable interactable = button.AddComponent<XRSimpleInteractable>();
        BombResetButton resetBtn = button.AddComponent<BombResetButton>();
        resetBtn.bomb = Object.FindAnyObjectByType<BombManager>();

        // Etiqueta "R".
        GameObject label = new GameObject("Label", typeof(TextMeshProUGUI));
        label.transform.SetParent(button.transform, false);
        label.transform.localPosition = new Vector3(0f, 0.12f, 0f);
        label.transform.localRotation = Quaternion.identity;
        float comp = 0.002f;
        label.transform.localScale = new Vector3(
            comp / button.transform.localScale.x,
            comp / button.transform.localScale.y,
            1f);

        TextMeshProUGUI tmp = label.GetComponent<TextMeshProUGUI>();
        tmp.text = "R";
        tmp.fontSize = 60f;
        tmp.alignment = TextAlignmentOptions.Center;
        tmp.color = Color.white;
        if (TMP_Settings.defaultFontAsset != null)
            tmp.font = TMP_Settings.defaultFontAsset;
    }

    /// <summary>
    /// Botón de activación en la Cara Superior de la bomba. Está apagado y, al
    /// resolver los módulos (estado Finalizado), se enciende para que el
    /// jugador sepa que debe tocarlo para desactivar la bomba.
    /// </summary>
    private static void BuildArmButton(Transform bomb, BombManager manager, Material buttonMat)
    {
        GameObject button = GameObject.CreatePrimitive(PrimitiveType.Cube);
        button.name = "ArmButton";
        button.transform.SetParent(bomb, false);
        button.transform.localPosition = new Vector3(0f, 0.36f, 0f);
        button.transform.localScale = new Vector3(0.24f, 0.07f, 0.24f);
        button.GetComponent<Renderer>().sharedMaterial = buttonMat;

        button.AddComponent<XRSimpleInteractable>();
        BombArmButton arm = button.AddComponent<BombArmButton>();
        arm.bomb = manager;

        // Etiqueta "LISTO ✓" sobre la cara superior del botón.
        GameObject label = new GameObject("Label", typeof(TextMeshProUGUI));
        label.transform.SetParent(button.transform, false);
        label.transform.localPosition = new Vector3(0f, 0.12f, 0f);
        label.transform.localRotation = Quaternion.identity;
        float comp = 0.002f;
        label.transform.localScale = new Vector3(
            comp / button.transform.localScale.x,
            comp / button.transform.localScale.y,
            1f);

        TextMeshProUGUI tmp = label.GetComponent<TextMeshProUGUI>();
        tmp.text = "LISTO";
        tmp.fontSize = 34f;
        tmp.alignment = TextAlignmentOptions.Center;
        tmp.color = Color.white;
        if (TMP_Settings.defaultFontAsset != null)
            tmp.font = TMP_Settings.defaultFontAsset;
    }

    // ------------------------------------------------------------------ Entorno

    private static void EnsureLighting()
    {
        if (Object.FindAnyObjectByType<Light>() != null) return;

        GameObject lightGo = new GameObject("Directional Light");
        lightGo.transform.rotation = Quaternion.Euler(52f, -32f, 0f);
        Light light = lightGo.AddComponent<Light>();
        light.type = LightType.Directional;
        light.intensity = 1.1f;
        light.color = new Color(1f, 0.96f, 0.9f);

        RenderSettings.ambientMode = UnityEngine.Rendering.AmbientMode.Trilight;
        RenderSettings.ambientLight = new Color(0.28f, 0.3f, 0.34f);
    }

    private static void EnsureGround(GameObject root)
    {
        if (GameObject.Find("Ground") != null) return;

        Material mat = GetMaterial("Mat_Ground", new Color(0.16f, 0.16f, 0.17f));
        GameObject ground = GameObject.CreatePrimitive(PrimitiveType.Plane);
        ground.name = "Ground";
        ground.transform.SetParent(root.transform, false);
        ground.transform.localPosition = new Vector3(0f, 0f, 0f);
        ground.transform.localScale = new Vector3(5f, 1f, 5f);
        ground.GetComponent<Renderer>().sharedMaterial = mat;
    }

    // ------------------------------------------------------------------ Primitivas (solo editor)

    private static GameObject Cube(Transform parent, string name, Vector3 localPos, Vector3 scale, Material mat)
    {
        GameObject go = GameObject.CreatePrimitive(PrimitiveType.Cube);
        go.name = name;
        go.transform.SetParent(parent, false);
        go.transform.localPosition = localPos;
        go.transform.localScale = scale;
        go.GetComponent<Renderer>().sharedMaterial = mat;
        DestroyCollider(go);
        return go;
    }

    private static GameObject Sphere(Transform parent, string name, Vector3 localPos, float radius, Material mat)
    {
        GameObject go = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        go.name = name;
        go.transform.SetParent(parent, false);
        go.transform.localPosition = localPos;
        go.transform.localScale = Vector3.one * (radius * 2f);
        go.GetComponent<Renderer>().sharedMaterial = mat;
        return go;
    }

    private static void DestroyCollider(GameObject go)
    {
        Collider col = go.GetComponent<Collider>();
        if (col != null) Object.DestroyImmediate(col);
    }

    private static TextMeshProUGUI CreateText(Transform parent, string name, Vector2 position, Vector2 size, float fontSize, Color color)
    {
        GameObject go = new GameObject(name, typeof(RectTransform));
        go.transform.SetParent(parent, false);

        RectTransform rt = (RectTransform)go.transform;
        rt.anchorMin = rt.anchorMax = new Vector2(0.5f, 0.5f);
        rt.pivot = new Vector2(0.5f, 0.5f);
        rt.anchoredPosition = position;
        rt.sizeDelta = size;

        TextMeshProUGUI text = go.AddComponent<TextMeshProUGUI>();
        text.alignment = TextAlignmentOptions.Center;
        text.fontSize = fontSize;
        text.color = color;
        text.overflowMode = TextOverflowModes.Overflow;
        if (TMP_Settings.defaultFontAsset != null)
            text.font = TMP_Settings.defaultFontAsset;

        return text;
    }

    // ------------------------------------------------------------------ Materiales (assets)

    private static void EnsureMaterialsFolder()
    {
        string full = Path.Combine(Application.dataPath, "_Project", "Materials", "BombRoom");
        if (!Directory.Exists(full))
        {
            Directory.CreateDirectory(full);
            AssetDatabase.Refresh();
        }
    }

    private static Material GetMaterial(string name, Color color, float emission = 0f, float metallic = 0f, float smoothness = 0.3f)
    {
        EnsureMaterialsFolder();

        string path = $"{MaterialFolder}/{name}.mat";
        Material mat = AssetDatabase.LoadAssetAtPath<Material>(path);
        if (mat == null)
        {
            Shader shader = Shader.Find("Universal Render Pipeline/Lit");
            if (shader == null) shader = Shader.Find("Standard");
            mat = new Material(shader) { name = name };
            AssetDatabase.CreateAsset(mat, path);
        }

        mat.SetColor("_BaseColor", color);
        if (mat.HasProperty("_Color")) mat.SetColor("_Color", color);
        if (mat.HasProperty("_Metallic")) mat.SetFloat("_Metallic", metallic);
        if (mat.HasProperty("_Smoothness")) mat.SetFloat("_Smoothness", smoothness);

        if (emission > 0f)
        {
            mat.EnableKeyword("_EMISSION");
            mat.SetColor("_EmissionColor", color * emission);
            if (mat.HasProperty("_Emission")) mat.SetColor("_Emission", color * emission);
        }
        else
        {
            mat.DisableKeyword("_EMISSION");
            mat.SetColor("_EmissionColor", Color.black);
        }

        EditorUtility.SetDirty(mat);
        AssetDatabase.SaveAssets();
        return mat;
    }

    // ------------------------------------------------------------------ Escena

    private static void EnsureEventSystem()
    {
        if (Object.FindAnyObjectByType<EventSystem>() != null) return;

        GameObject es = new GameObject("EventSystem");
        es.AddComponent<EventSystem>();
        es.AddComponent<XRUIInputModule>();
    }

    private static void InstantiatePrefab(string path)
    {
        GameObject prefab = AssetDatabase.LoadAssetAtPath<GameObject>(path);
        if (prefab == null)
        {
            Debug.LogWarning($"[Bomba VR] No se encontró el prefab: {path}");
            return;
        }
        PrefabUtility.InstantiatePrefab(prefab);
    }

    private static void EnsureSceneFolder()
    {
        string folder = Path.Combine(Application.dataPath, "_Project", "Scenes");
        if (!Directory.Exists(folder))
        {
            Directory.CreateDirectory(folder);
            AssetDatabase.Refresh();
        }
    }
}