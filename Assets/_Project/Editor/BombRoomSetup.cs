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

    [MenuItem("Bomba VR/Crear escena BombRoom (para Cascos VR / OpenXR)", false, 1)]
    public static void CreateBombRoom()
    {
        CreateBombRoomScene(addXriSimulator: false, path: ScenePath);
    }

    [MenuItem("Bomba VR/Crear escena BombRoom (con Simulador XRI teclado+ratón)", false, 2)]
    public static void CreateBombRoomWithSimulator()
    {
        CreateBombRoomScene(addXriSimulator: true, path: ScenePath);
    }

    [MenuItem("Bomba VR/Abrir escena BombRoom", false, 0)]
    public static void OpenBombRoomScene()
    {
        if (!File.Exists(Path.Combine(Application.dataPath, "_Project", "Scenes", "BombRoom.unity")))
        {
            Debug.LogWarning($"[Bomba VR] No existe {ScenePath}. Crea la escena primero.");
            return;
        }
        EditorSceneManager.OpenScene(ScenePath, OpenSceneMode.Single);
        Debug.Log($"<color=#7CFC00>[Bomba VR] Escena abierta: {ScenePath}. En la ventana Hierarchy verás BombRoom con la mesa y la bomba.</color>");
    }

    [MenuItem("Bomba VR/Crear escena BombRoom (para Meta XR Simulator)", false, 3)]
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
        GameObject rig = InstantiatePrefab(RigPath);
        if (rig != null)
        {
            rig.transform.position = new Vector3(0f, 0f, 0.85f);
            rig.transform.rotation = Quaternion.Euler(0f, 180f, 0f);
        }

        if (addXriSimulator)
        {
            GameObject sim = InstantiatePrefab(SimulatorPath);
            GameObject simUi = InstantiatePrefab(SimulatorUiPath);
            if (sim != null)
            {
                var autoDisable = sim.AddComponent<XRSimulatorAutoDisable>();
                if (simUi != null)
                {
                    var so = new SerializedObject(autoDisable);
                    var uiProp = so.FindProperty("simulatorUi");
                    if (uiProp != null)
                    {
                        uiProp.objectReferenceValue = simUi;
                        so.ApplyModifiedProperties();
                    }
                }
            }
        }

        BuildRoomInScene();

        EditorSceneManager.SaveScene(scene, path);
        Debug.Log(addXriSimulator
            ? $"<color=#7CFC00>[Bomba VR] Escena guardada en {path}. Incluye simulador de XRI protegido con auto-desactivación para visores.</color>"
            : $"<color=#7CFC00>[Bomba VR] Escena guardada en {path} lista para cascos VR / OpenXR / Meta Simulator.</color>");
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

        // XRInteractionManager: sin él los interactors no detectan interactables.
        if (Object.FindAnyObjectByType<XRInteractionManager>() == null)
            root.AddComponent<XRInteractionManager>();

        float tableTop = BuildTable(root);
        BuildBomb(root, tableTop);
        BuildResetButton(root, tableTop);

        EditorSceneManager.MarkSceneDirty(SceneManager.GetActiveScene());
        Debug.Log("<color=#7CFC00>[Bomba VR] Sala construida en el editor. Revisa en la ventana Scene: mesa, bomba, cables, alicates, HUD y botón R. Pulsa Play para jugar.</color>");
    }

    [MenuItem("Bomba VR/Añadir módulo Simón a la bomba actual", false, 100)]
    public static void AddSimonToCurrentBomb()
    {
        BombManager bomb = Object.FindAnyObjectByType<BombManager>();
        if (bomb == null)
        {
            Debug.LogError("[Bomba VR] No hay ninguna bomba (BombManager) en la escena. Crea la sala primero.");
            return;
        }

        // Si ya existe, lo reemplaza (permite actualizar el diseño 3x3 sin duplicar).
        SimonModule existing = bomb.GetComponentInChildren<SimonModule>(true);
        if (existing != null)
        {
            Object.DestroyImmediate(existing.gameObject);
        }

        Material panel = GetMaterial("Mat_Panel", new Color(0.05f, 0.055f, 0.06f));

        Material[] simonMats = new Material[SimonModule.ButtonColors.Length];
        for (int i = 0; i < simonMats.Length; i++)
            simonMats[i] = GetMaterial($"Mat_Simon_{i}", SimonModule.ButtonColors[i], emission: 0.3f);

        GameObject simonGo = new GameObject("Module_Simon");
        simonGo.transform.SetParent(bomb.transform, false);
        SimonModule simon = simonGo.AddComponent<SimonModule>();
        BuildSimon(simon, simonMats, panel);

        EditorSceneManager.MarkSceneDirty(SceneManager.GetActiveScene());
        Debug.Log("<color=#7CFC00>[Bomba VR] Módulo Simón añadido a la cara izquierda. Guarda la escena (Cmd+S).</color>");
    }

    [MenuItem("Bomba VR/Reparar colliders de la bomba (quitar avisos)", false, 101)]
    public static void RepairBombColliders()
    {
        BombManager bomb = Object.FindAnyObjectByType<BombManager>();
        if (bomb == null)
        {
            Debug.LogError("[Bomba VR] No hay ninguna bomba (BombManager) en la escena.");
            return;
        }

        XRGrabInteractable grab = bomb.GetComponent<XRGrabInteractable>();
        if (grab == null)
        {
            Debug.LogWarning("[Bomba VR] La bomba no tiene XRGrabInteractable.");
            return;
        }

        Transform body = bomb.transform.Find("Body");
        Collider bodyCollider = body != null ? body.GetComponent<Collider>() : null;
        if (bodyCollider == null)
        {
            Debug.LogError("[Bomba VR] No se encontró el collider del cuerpo (hijo 'Body').");
            return;
        }

        grab.colliders.Clear();
        grab.colliders.Add(bodyCollider);
        EditorUtility.SetDirty(grab);
        EditorSceneManager.MarkSceneDirty(SceneManager.GetActiveScene());
        Debug.Log("<color=#7CFC00>[Bomba VR] Colliders del grab reparados: solo el cuerpo. Guarda la escena (Cmd+S).</color>");
    }

    [MenuItem("Bomba VR/Añadir XRInteractionManager a la escena", false, 102)]
    public static void AddXRInteractionManager()
    {
        if (Object.FindAnyObjectByType<XRInteractionManager>() != null)
        {
            Debug.LogWarning("[Bomba VR] Ya hay un XRInteractionManager en la escena.");
            return;
        }

        GameObject go = new GameObject("XR Interaction Manager");
        go.AddComponent<XRInteractionManager>();
        EditorSceneManager.MarkSceneDirty(SceneManager.GetActiveScene());
        Debug.Log("<color=#7CFC00>[Bomba VR] XRInteractionManager añadido. Guarda la escena (Cmd+S). Los interactors ahora podrán detectar los interactables.</color>");
    }

    /// <summary>
    /// Activa el keyword _EMISSION en todos los materiales de Assets/_Project/Materials/BombRoom
    /// USANDO el API de Unity (no edición manual de YAML), para que el build de URP conserve la
    /// variante de emisión y los flashes animados (Simón, cables, LEDs) se vean en el visor.
    /// Es necesario ejecutarlo con el Editor: los cambios hechos a mano al .mat se pierden al
    /// volver a guardar Unity.
    /// </summary>
    [MenuItem("Bomba VR/Fix ▶ Habilitar emisión de materiales VR (_EMISSION)", false, 103)]
    public static void FixEmissionKeywords()
    {
        string[] guids = AssetDatabase.FindAssets("t:Material", new[] { MaterialFolder });
        int fixedCount = 0;
        int total = 0;
        foreach (string guid in guids)
        {
            string path = AssetDatabase.GUIDToAssetPath(guid);
            Material mat = AssetDatabase.LoadAssetAtPath<Material>(path);
            if (mat == null || !mat.HasProperty("_EmissionColor")) continue;
            total++;
            if (!mat.IsKeywordEnabled("_EMISSION"))
            {
                mat.EnableKeyword("_EMISSION");
                fixedCount++;
            }
            EditorUtility.SetDirty(mat);
        }
        AssetDatabase.SaveAssets();
        Debug.Log($"<color=#7CFC00>[Bomba VR] Keyword _EMISSION habilitado en {fixedCount}/{total} materiales. Guarda la escena (Cmd+S) y vuelve a compilar para Quest.</color>");
    }

    [MenuItem("Bomba VR/Enfocar la vista Scene en la sala", false, 0)]
    public static void FocusSceneViewOnRoom()
    {
        GameObject root = null;
        foreach (GameObject go in SceneManager.GetActiveScene().GetRootGameObjects())
        {
            if (go != null && go.name == "BombRoom") root = go;
        }

        SceneView view = SceneView.lastActiveSceneView;
        if (view == null)
        {
            Debug.LogWarning("[Bomba VR] Abre una ventana Scene y vuelve a intentarlo.");
            return;
        }

        if (root == null)
        {
            Debug.LogWarning("[Bomba VR] No hay un objeto 'BombRoom' en la escena activa. ¿Abriste BombRoom.unity?");
            view.FrameSelected();
            return;
        }

        Bounds bounds = new Bounds(root.transform.position, Vector3.one * 0.5f);
        foreach (Renderer r in root.GetComponentsInChildren<Renderer>())
        {
            if (r != null) bounds.Encapsulate(r.bounds);
        }
        view.Frame(bounds, false);
        view.Repaint();
        Debug.Log("<color=#7CFC00>[Bomba VR] Vista Scene enfocada en la sala.</color>");
    }

    [MenuItem("Bomba VR/Agregar simulador XR a la escena actual")]
    public static void AddSimulatorToCurrentScene()
    {
        EnsureEventSystem();
        GameObject sim = InstantiatePrefab(SimulatorPath);
        GameObject simUi = InstantiatePrefab(SimulatorUiPath);
        if (sim != null)
        {
            var autoDisable = sim.AddComponent<XRSimulatorAutoDisable>();
            if (simUi != null)
            {
                var so = new SerializedObject(autoDisable);
                var uiProp = so.FindProperty("simulatorUi");
                if (uiProp != null)
                {
                    uiProp.objectReferenceValue = simUi;
                    so.ApplyModifiedProperties();
                }
            }
        }
        Debug.Log("<color=#7CFC00>[Bomba VR] Simulador agregado con protección para cascos VR. Revisa que exista un XR Origin con interactores.</color>");
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

        Material[] simonMats = new Material[SimonModule.ButtonColors.Length];
        for (int i = 0; i < simonMats.Length; i++)
            simonMats[i] = GetMaterial($"Mat_Simon_{i}", SimonModule.ButtonColors[i], emission: 0.3f);

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

        // IMPORTANTE: si no se asignan, XRGrabInteractable usa TODOS los colliders
        // hijos (botones, tomas, conectores...) y choca con sus interactables.
        // Se limita al collider del cuerpo para poder agarrar la bomba sin robar
        // la interacción a los módulos.
        grab.colliders.Clear();
        Collider bodyCollider = bodyCube.GetComponent<Collider>();
        if (bodyCollider != null) grab.colliders.Add(bodyCollider);

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

        // --- Módulo Simón (cara izquierda del cubo).
        GameObject simonGo = new GameObject("Module_Simon");
        simonGo.transform.SetParent(bomb.transform, false);
        SimonModule simon = simonGo.AddComponent<SimonModule>();
        BuildSimon(simon, simonMats, panel);

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

        for (int i = 0; i < n; i++)
        {
            float y = CablesModule.Layout.Row0Y - i * CablesModule.Layout.RowSpacing;

            // 1. Salida en la pared de la bomba (ancla fija del cable)
            GameObject tip = new GameObject($"Cable_{i}_Tip");
            tip.transform.SetParent(cablesParent.transform, false);
            tip.transform.localPosition = new Vector3(CablesModule.Layout.LeftX, y, CablesModule.Layout.PlaneZ);

            // 2. Mango del cable (cilindro horizontal agarrable)
            GameObject stub = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
            stub.name = $"Cable_{i}_Stub";
            stub.transform.SetParent(cablesParent.transform, false);
            stub.transform.localPosition = new Vector3(CablesModule.Layout.MidX, y, CablesModule.Layout.PlaneZ);
            stub.transform.localRotation = Quaternion.Euler(0f, 0f, -90f);
            stub.transform.localScale = new Vector3(0.035f, 0.045f, 0.035f);
            stub.GetComponent<Renderer>().sharedMaterial = cableMats[i];

            CapsuleCollider stubCol = stub.GetComponent<CapsuleCollider>();
            if (stubCol == null) stubCol = stub.AddComponent<CapsuleCollider>();
            stubCol.direction = 1; // Eje Y del cilindro
            stubCol.radius = 0.5f;
            stubCol.height = 2f;

            // 3. Clavija de contacto (esfera unida directamente al mango en el extremo frontal)
            GameObject plug = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            plug.name = $"Cable_{i}_Plug";
            plug.transform.SetParent(stub.transform, false);
            plug.transform.localPosition = new Vector3(0f, 1.0f, 0f);
            plug.transform.localRotation = Quaternion.identity;
            plug.transform.localScale = new Vector3(0.07f / 0.035f, 0.07f / 0.045f, 0.07f / 0.035f);
            plug.GetComponent<Renderer>().sharedMaterial = cableMats[i];

            SphereCollider plugCol = plug.GetComponent<SphereCollider>();
            if (plugCol == null) plugCol = plug.AddComponent<SphereCollider>();
            plugCol.radius = 0.5f;

            // 4. Cordón flexible (LineRenderer entre la pared y el mango)
            GameObject cord = new GameObject($"Cable_{i}_Cord");
            cord.transform.SetParent(cablesParent.transform, false);
            LineRenderer line = cord.AddComponent<LineRenderer>();
            CablesModule.ConfigureLine(line, CablesModule.PuzzleColors[i], cordMats[i]);
            Vector3 backPoint = stub.transform.position + (stub.transform.position - plug.transform.position);
            line.SetPosition(0, tip.transform.position);
            line.SetPosition(1, backPoint);

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

    /// <summary>
    /// Puzzle "Simón" ENTERO sobre la cara izquierda del cubo: rejilla 3x3 de
    /// botones de color. La bomba muestra una secuencia y el jugador la repite.
    /// </summary>
    private static void BuildSimon(SimonModule module, Material[] buttonMats, Material panelMat)
    {
        int size = SimonModule.Layout.GridSize;
        float spacing = SimonModule.Layout.Spacing;
        int n = size * size;

        // Fondo de la cara izquierda (sin collider), con marco alrededor.
        float panelW = spacing * size + 0.02f;
        float panelH = 0.56f; // algo más alto para dejar hueco al botón START
        Cube(module.transform, "SimonPanel", new Vector3(SimonModule.Layout.PanelX, 0f, 0f),
            new Vector3(0.014f, panelH, panelW), panelMat);

        // Rejilla 3x3: centrada un poco arriba para dejar sitio al START debajo.
        GameObject[] gos = new GameObject[n];
        float half = (size - 1) * 0.5f * spacing;
        float gridCenterY = 0.08f;
        for (int row = 0; row < size; row++)
        {
            for (int col = 0; col < size; col++)
            {
                int index = row * size + col;
                float y = gridCenterY + half - row * spacing;
                float z = half - col * spacing;

                GameObject button = GameObject.CreatePrimitive(PrimitiveType.Cube);
                button.name = $"SimonButton_{index}";
                button.transform.SetParent(module.transform, false);
                button.transform.localPosition = new Vector3(SimonModule.Layout.FaceX, y, z);
                button.transform.localScale = Vector3.one * SimonModule.Layout.ButtonSize;
                button.GetComponent<Renderer>().sharedMaterial = buttonMats[index];
                button.AddComponent<XRSimpleInteractable>();
                gos[index] = button;
            }
        }

        // Botón START para comenzar la ronda cuando el jugador quiera.
        GameObject startBtn = GameObject.CreatePrimitive(PrimitiveType.Cube);
        startBtn.name = "SimonStartButton";
        startBtn.transform.SetParent(module.transform, false);
        startBtn.transform.localPosition = new Vector3(SimonModule.Layout.FaceX, -0.225f, 0f);
        startBtn.transform.localScale = new Vector3(0.08f, 0.12f, 0.22f);
        startBtn.GetComponent<Renderer>().sharedMaterial =
            GetMaterial("Mat_SimonStart", new Color(0.13f, 0.72f, 0.38f), 0.2f);

        XRSimpleInteractable startInteractable = startBtn.AddComponent<XRSimpleInteractable>();
        startInteractable.selectMode = InteractableSelectMode.Single;

        // Etiqueta "START" (canvas world-space pequeño orientado hacia -X).
        GameObject labelGo = new GameObject("SimonStartLabel");
        labelGo.transform.SetParent(module.transform, false);
        labelGo.transform.localPosition = new Vector3(SimonModule.Layout.FaceX, -0.225f, 0f);
        labelGo.transform.localRotation = Quaternion.Euler(0f, -90f, 0f);
        labelGo.transform.localScale = new Vector3(0.001f, 0.001f, 0.001f);
        Canvas canvas = labelGo.AddComponent<Canvas>();
        canvas.renderMode = RenderMode.WorldSpace;
        TextMeshProUGUI text = CreateText(labelGo.transform, "StartText", new Vector2(0f, 0f), new Vector2(160f, 80f), 55f, Color.white);
        text.text = "START";

        var so = new SerializedObject(module);
        SerializedProperty arr = so.FindProperty("buttons");
        arr.arraySize = n;
        for (int i = 0; i < n; i++)
        {
            SerializedProperty el = arr.GetArrayElementAtIndex(i);
            el.FindPropertyRelative("gameObject").objectReferenceValue = gos[i];
            el.FindPropertyRelative("color").colorValue = SimonModule.ButtonColors[i];
        }
        so.FindProperty("startButton").objectReferenceValue = startBtn;
        so.ApplyModifiedProperties();
        so.Dispose();
    }

    private static void BuildHudCanvas(BombUI hud)
    {
        GameObject canvasGo = new GameObject("BombHUDCanvas");
        canvasGo.transform.SetParent(hud.transform, false);
        canvasGo.transform.localPosition = new Vector3(0f, 0f, 0f);
        canvasGo.transform.localRotation = Quaternion.identity;
        canvasGo.transform.localScale = new Vector3(0.0025f, 0.0025f, 0.0025f);

        Canvas canvas = canvasGo.AddComponent<Canvas>();
        canvas.renderMode = RenderMode.WorldSpace;

        hud.timeText = CreateText(canvasGo.transform, "TimeText", new Vector2(0, 14), new Vector2(180, 62), 90, new Color(0.35f, 1f, 0.4f));
        hud.statusText = CreateText(canvasGo.transform, "StatusText", new Vector2(0, -28), new Vector2(260, 50), 36, Color.white);
        hud.feedbackText = CreateText(canvasGo.transform, "FeedbackText", new Vector2(0, -68), new Vector2(280, 44), 30, Color.white);
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

    private static GameObject InstantiatePrefab(string path)
    {
        GameObject prefab = AssetDatabase.LoadAssetAtPath<GameObject>(path);
        if (prefab == null)
        {
            Debug.LogWarning($"[Bomba VR] No se encontró el prefab: {path}");
            return null;
        }
        return (GameObject)PrefabUtility.InstantiatePrefab(prefab);
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