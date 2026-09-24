using System.IO;
using TMPro;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using VRInteractionPrototype;

/// <summary>
/// Utilidades de editor para preparar "Bomba VR":
///  * Crear/construir la sala de la bomba completamente en el EDITOR:
///    mesa (prefab Table1), bomba con sistemas, puzzle de cables (conectar),
///    LEDs, HUD y botón de reinicio. Todo queda como objetos de la escena
///    (visible antes de pulsar Play) y con materiales reales como assets bajo
///    Assets/_Project/Materials/BombRoom.
///  * Los interactables los crea Meta Interaction SDK (ISDK) vía el helper
///    Isdk (Poke/Grab) y el rig de manos se instala con Building Blocks
///    "Interactions Rig" (ver IsdkMigration).
/// </summary>
public static class BombRoomSetup
{
    private const string ScenePath = "Assets/_Project/Scenes/BombRoom.unity";
    private const string MaterialFolder = "Assets/_Project/Materials/BombRoom";

    [MenuItem("Bomba VR/Crear escena BombRoom (para Quest / OpenXR / ISDK)", false, 1)]
    public static void CreateBombRoom()
    {
        CreateBombRoomScene(path: ScenePath);
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

    private static void CreateBombRoomScene(string path)
    {
        EnsureSceneFolder();

        Scene scene = EditorSceneManager.NewScene(NewSceneSetup.EmptyScene, NewSceneMode.Single);

        EnsureEventSystem();

        BuildRoomInScene();

        EditorSceneManager.SaveScene(scene, path);
        Debug.Log($"<color=#7CFC00>[Bomba VR] Escena guardada en {path}. El rig de manos NO se incluye: instálalo una vez con Meta → Building Blocks → 'Interactions Rig' (o ejecuta el menú de migración ISDK).</color>");
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

        Transform tableTop = BuildTable(root).transform.Find("Top");
        TablePlacement table = GetTablePlacement(root, tableTop);
        BuildBomb(root, table);
        BuildResetButton(root, table.TopY);

        EditorSceneManager.MarkSceneDirty(SceneManager.GetActiveScene());
        Debug.Log("<color=#7CFC00>[Bomba VR] Sala construida en el editor. Revisa en la ventana Scene: mesa, bomba, cables, HUD y botón R. Pulsa Play para jugar.</color>");
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

    /// <summary>
    /// Reconstruye la bomba de la escena actual con el cuerpo reducido, el
    /// texto (HUD) fuera del cubo y el agarre ISDK completo (Grabbable) para
    /// que la bomba se mueva con las manos. Recalcula la altura del tablero
    /// a partir de la mesa existente y preserva suelo, mesa, luces y el rig.
    /// </summary>
    [MenuItem("Bomba VR/Reconstruir bomba (cubo pequeño, texto fuera, agarre con manos)", false, 101)]
    public static void RebuildBomb()
    {
        GameObject root = null;
        foreach (GameObject go in SceneManager.GetActiveScene().GetRootGameObjects())
        {
            if (go != null && go.name == "BombRoom") { root = go; break; }
        }
        if (root == null)
        {
            Debug.LogWarning("[Bomba VR] No existe BombRoom en la escena activa. Ejecuta 'Construir sala en la escena actual' primero.");
            return;
        }
        GameObject oldBomb = null;
        foreach (Transform t in root.transform)
        {
            if (t != null && t.name == "Bomba") { oldBomb = t.gameObject; break; }
        }

        GameObject oldIntro = null;
        foreach (Transform t in root.transform)
        {
            if (t != null && t.name == "PresentBoxIntro") { oldIntro = t.gameObject; break; }
        }

        if (oldBomb != null) Object.DestroyImmediate(oldBomb);
        if (oldIntro != null) Object.DestroyImmediate(oldIntro);

        EnsureMaterialsFolder();
        Transform tableTopTransform = root.transform.Find("Table/Top");
        if (tableTopTransform == null)
            tableTopTransform = BuildTable(root).transform.Find("Top");

        TablePlacement table = GetTablePlacement(root, tableTopTransform);
        BuildBomb(root, table);

        EditorSceneManager.MarkSceneDirty(SceneManager.GetActiveScene());
        EditorSceneManager.SaveScene(SceneManager.GetActiveScene());
        Debug.Log($"<color=#7CFC00>[Bomba VR] Bomba reconstruida sobre la mesa existente (tablero a {table.TopY:F2}m). Testea en Play.</color>");
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

    [MenuItem("Bomba VR/Quitar simulador XRI de la escena actual (usar Meta XR Simulator)")]
    public static void RemoveSimulatorFromCurrentScene()
    {
        int removed = 0;
        foreach (GameObject root in SceneManager.GetActiveScene().GetRootGameObjects())
        {
            if (root == null) continue;
            bool isSimulator = root.name.StartsWith("XR Interaction Simulator");
            if (!isSimulator) continue;

            Object.DestroyImmediate(root);
            removed++;
        }

        EditorSceneManager.MarkSceneDirty(SceneManager.GetActiveScene());
        Debug.Log(removed > 0
            ? $"<color=#7CFC00>[Bomba VR] Quitado el simulador de XRI ({removed} objeto/s).</color>"
            : "[Bomba VR] No se encontró el simulador de XRI en la escena.");
    }

    [MenuItem("Bomba VR/Agregar simulador XR a la escena actual")]
    public static void AddSimulatorToCurrentScene()
    {
        Debug.LogWarning("[Bomba VR] El simulador de XRI dejó de usarse: la interacción ahora es con Meta Interaction SDK (manos). Para probar desde el editor usa Meta XR Simulator (Meta → Meta XR Simulator → Activate), o build en Quest.");
    }

    // ------------------------------------------------------------------ Sala

    private static GameObject BuildTable(GameObject root)
    {
        GameObject table = new GameObject("Table");
        table.transform.SetParent(root.transform, false);

        Material wood = GetMaterial("Mat_Madera", new Color(0.45f, 0.29f, 0.16f), metallic: 0f, smoothness: 0.35f);
        Material leg = GetMaterial("Mat_Pata", new Color(0.22f, 0.22f, 0.24f));

        // Mesa pequeña: tablero a ~0.74 m (cintura de una persona de 1.70 m).
        Cube(table.transform, "Top", new Vector3(0f, 0.72f, 0f), new Vector3(1.05f, 0.04f, 0.72f), wood);

        Vector3[] corners =
        {
            new Vector3(-0.48f, 0.36f, -0.31f),
            new Vector3(0.48f, 0.36f, -0.31f),
            new Vector3(-0.48f, 0.36f, 0.31f),
            new Vector3(0.48f, 0.36f, 0.31f),
        };
        foreach (Vector3 corner in corners)
            Cube(table.transform, "Leg", corner, new Vector3(0.05f, 0.70f, 0.05f), leg);

        return table;
    }

    private static void BuildBomb(GameObject root, TablePlacement table)
    {
        const float bodyW = 0.6f, bodyH = 0.4f, bodyD = 0.4f;
        float bombCenterY = table.TopY + bodyH * 0.5f;

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
        bomb.transform.position = new Vector3(table.Center.x, bombCenterY, table.Center.z);

        GameObject bodyCube = GameObject.CreatePrimitive(PrimitiveType.Cube);
        bodyCube.name = "Body";
        bodyCube.transform.SetParent(bomb.transform, false);
        bodyCube.transform.localScale = new Vector3(bodyW, bodyH, bodyD);
        bodyCube.GetComponent<Renderer>().sharedMaterial = body;

        // Panel frontal (visual, sin collider): fondo del puzzle de cables.
        Cube(bomb.transform, "FrontPanel", new Vector3(0f, 0f, 0.196f),
            new Vector3(0.52f, 0.34f, 0.01f), panel);

        // --- Sistemas de juego
        TimerSystem timer = bomb.AddComponent<TimerSystem>();
        timer.startSeconds = 120f;
        timer.SetStartTime(120f);

        StrikeSystem strikes = bomb.AddComponent<StrikeSystem>();

        BombManager manager = bomb.AddComponent<BombManager>();
        manager.penaltyPerStrike = 35f;
        manager.autoStart = false;

        // La bomba se puede agarrar y girar para ver sus caras (solo manos).
        Rigidbody bombRb = bomb.AddComponent<Rigidbody>();
        bombRb.isKinematic = true;
        bombRb.useGravity = false;
        // GrabInteractable de ISDK: admite todos los colliders del cuerpo (y módulos)
        // para poder agarrar la bomba por cualquier lado sin robar el punteo (poke).
        Isdk.Grab(bomb, bombRb);

        // --- LEDs de strike (filo superior frontal)
        Renderer[] leds = new Renderer[strikes.MaxStrikes];
        for (int i = 0; i < leds.Length; i++)
        {
            float x = -0.09f + i * 0.09f;
            GameObject led = Sphere(bomb.transform, $"StrikeLed_{i}", new Vector3(x, 0.185f, 0.215f), 0.04f, ledOff);
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

        // --- HUD: texto flotando en el aire, justo delante-encima del cubo,
        //     completamente fuera del cuerpo para que se lea sin quedar
        //     escondido dentro de la caja.
        GameObject hudGo = new GameObject("BombHUD");
        hudGo.transform.SetParent(bomb.transform, false);
        hudGo.transform.localPosition = new Vector3(0f, 0.40f, 0.03f);
        hudGo.transform.localRotation = Quaternion.identity;
        BombUI hud = hudGo.AddComponent<BombUI>();
        // Asignar referencias necesarias (los HUDs se crean en runtime en BombUI.Start)
        hud.bomb = manager;
        hud.strikeLeds = leds;
        hud.bombBodyRenderer = bodyCube.GetComponent<Renderer>();
        hud.bombBodyColor = new Color(0.09f, 0.09f, 0.11f);

        // Referencia al prefab de explosión fuego (Mirza Beig)
        var explosionPrefab = AssetDatabase.LoadAssetAtPath<GameObject>("Assets/Mirza Beig/Cinematic Explosions FREE/Prefabs/Explosions/Explosion FREE 1 Variant.prefab");
        if (explosionPrefab != null) hud.explosionFirePrefab = explosionPrefab;
        else Debug.LogWarning("[BombRoomSetup] Explosion fire prefab no encontrado en Assets/Mirza Beig/Cinematic Explosions FREE/Prefabs/Explosions/Explosion FREE 1 Variant.prefab");

        // --- Botón de activación en la Cara Superior (se enciende al terminar).
        BuildArmButton(bomb.transform, manager, buttonMat);

        BuildPresentIntro(root.transform, bomb.transform, table);
    }

    private static void BuildPresentIntro(Transform roomRoot, Transform bomb, TablePlacement table)
    {
        Material paper = GetMaterial("Mat_GiftPaper", new Color(0.72f, 0.04f, 0.07f), metallic: 0f, smoothness: 0.25f);
        Material ribbon = GetMaterial("Mat_GiftRibbon", new Color(1f, 0.76f, 0.12f), metallic: 0f, smoothness: 0.5f, emission: 0.15f);

        GameObject intro = new GameObject("PresentBoxIntro");
        intro.transform.SetParent(roomRoot, false);

        GameObject wrapping = new GameObject("Wrapping");
        wrapping.transform.SetParent(intro.transform, false);
        wrapping.transform.localPosition = Vector3.zero;

        const float width = 0.86f;
        const float height = 0.68f;
        const float depth = 0.72f;
        const float wall = 0.025f;
        intro.transform.position = new Vector3(table.Center.x, table.TopY + height * 0.5f, table.Center.z);

        GiftPanel(wrapping.transform, "Gift_Front", new Vector3(0f, 0f, depth * 0.5f), new Vector3(width, height, wall), paper);
        GiftPanel(wrapping.transform, "Gift_Back", new Vector3(0f, 0f, -depth * 0.5f), new Vector3(width, height, wall), paper);
        GiftPanel(wrapping.transform, "Gift_Left", new Vector3(-width * 0.5f, 0f, 0f), new Vector3(wall, height, depth), paper);
        GiftPanel(wrapping.transform, "Gift_Right", new Vector3(width * 0.5f, 0f, 0f), new Vector3(wall, height, depth), paper);
        GiftPanel(wrapping.transform, "Gift_Top", new Vector3(0f, height * 0.5f, 0f), new Vector3(width, wall, depth), paper);
        GiftPanel(wrapping.transform, "Gift_Bottom", new Vector3(0f, -height * 0.5f, 0f), new Vector3(width, wall, depth), paper);

        Cube(wrapping.transform, "Ribbon_Vertical", new Vector3(0f, 0f, depth * 0.5f + 0.004f), new Vector3(0.07f, height + 0.02f, 0.014f), ribbon);
        Cube(wrapping.transform, "Ribbon_Horizontal", new Vector3(0f, 0f, depth * 0.5f + 0.006f), new Vector3(width + 0.02f, 0.07f, 0.014f), ribbon);
        Cube(wrapping.transform, "Ribbon_Top_X", new Vector3(0f, height * 0.5f + 0.006f, 0f), new Vector3(width + 0.02f, 0.014f, 0.07f), ribbon);
        Cube(wrapping.transform, "Ribbon_Top_Z", new Vector3(0f, height * 0.5f + 0.008f, 0f), new Vector3(0.07f, 0.014f, depth + 0.02f), ribbon);

        GameObject bowLeft = Sphere(wrapping.transform, "Bow_Left", new Vector3(-0.07f, height * 0.5f + 0.05f, 0f), 0.06f, ribbon);
        bowLeft.transform.localScale = new Vector3(0.12f, 0.06f, 0.08f);
        DestroyCollider(bowLeft);
        GameObject bowRight = Sphere(wrapping.transform, "Bow_Right", new Vector3(0.07f, height * 0.5f + 0.05f, 0f), 0.06f, ribbon);
        bowRight.transform.localScale = new Vector3(0.12f, 0.06f, 0.08f);
        DestroyCollider(bowRight);

        GameObject lace = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
        lace.name = "PullLace";
        lace.transform.SetParent(wrapping.transform, false);
        lace.transform.localPosition = new Vector3(0f, -0.13f, depth * 0.5f + 0.05f);
        lace.transform.localRotation = Quaternion.identity;
        lace.transform.localScale = new Vector3(0.01f, 0.18f, 0.01f);
        lace.GetComponent<Renderer>().sharedMaterial = ribbon;
        DestroyCollider(lace);

        GameObject handle = Sphere(wrapping.transform, "PullLaceHandle", new Vector3(0f, -0.34f, depth * 0.5f + 0.06f), 0.055f, ribbon);
        Rigidbody handleRb = handle.AddComponent<Rigidbody>();
        handleRb.isKinematic = true;
        handleRb.useGravity = false;
        Isdk.Grab(handle, handleRb);
        Isdk.HandGrab(handle, handleRb);

        PresentBoxReveal reveal = intro.AddComponent<PresentBoxReveal>();
        reveal.bomb = bomb;
        reveal.laceHandle = handle.transform;
        reveal.wrappingRoot = wrapping;
        reveal.tableTop = table.TopTransform;
        reveal.boxHeight = height;

        bomb.gameObject.SetActive(false);
    }

    private static GameObject GiftPanel(Transform parent, string name, Vector3 localPos, Vector3 scale, Material mat)
    {
        GameObject go = GameObject.CreatePrimitive(PrimitiveType.Cube);
        go.name = name;
        go.transform.SetParent(parent, false);
        go.transform.localPosition = localPos;
        go.transform.localScale = scale;
        go.GetComponent<Renderer>().sharedMaterial = mat;
        return go;
    }

    private readonly struct TablePlacement
    {
        public readonly Vector3 Center;
        public readonly float TopY;
        public readonly Transform TopTransform;

        public TablePlacement(Vector3 center, float topY, Transform topTransform)
        {
            Center = center;
            TopY = topY;
            TopTransform = topTransform;
        }
    }

    private static TablePlacement GetTablePlacement(GameObject root, Transform tableTop)
    {
        if (tableTop != null)
        {
            Renderer renderer = tableTop.GetComponent<Renderer>();
            Collider collider = tableTop.GetComponent<Collider>();
            Bounds bounds;
            if (collider != null) bounds = collider.bounds;
            else if (renderer != null) bounds = renderer.bounds;
            else bounds = new Bounds(tableTop.position, Vector3.zero);

            return new TablePlacement(bounds.center, bounds.max.y, tableTop);
        }

        Vector3 center = root != null ? root.transform.TransformPoint(Vector3.zero) : Vector3.zero;
        return new TablePlacement(center, 0.74f, null);
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
            stub.transform.localScale = new Vector3(0.05f, 0.06f, 0.05f);
            stub.GetComponent<Renderer>().sharedMaterial = cableMats[i];

            CapsuleCollider stubCol = stub.GetComponent<CapsuleCollider>();
            if (stubCol == null) stubCol = stub.AddComponent<CapsuleCollider>();
            stubCol.direction = 1; // Eje Y del cilindro
            stubCol.radius = 0.6f;
            stubCol.height = 2.2f;

            // 3. Clavija de contacto (esfera unida directamente al mango en el extremo frontal)
            GameObject plug = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            plug.name = $"Cable_{i}_Plug";
            plug.transform.SetParent(stub.transform, false);
            plug.transform.localPosition = new Vector3(0f, 1.0f, 0f);
            plug.transform.localRotation = Quaternion.identity;
            plug.transform.localScale = new Vector3(0.07f / 0.05f, 0.07f / 0.06f, 0.07f / 0.05f);
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
                Isdk.Poke(button, new Vector3(-1f, 0f, 0f));
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

        Isdk.Poke(startBtn, new Vector3(-1f, 0f, 0f));

        // Etiqueta "START" (canvas world-space pequeño orientado hacia -X).
        GameObject labelGo = new GameObject("SimonStartLabel");
        labelGo.transform.SetParent(module.transform, false);
        labelGo.transform.localPosition = new Vector3(SimonModule.Layout.FaceX, -0.225f, 0f);
        labelGo.transform.localRotation = Quaternion.Euler(0f, -90f, 0f);
        labelGo.transform.localScale = new Vector3(0.001f, 0.001f, 0.001f);
        Canvas canvas = labelGo.AddComponent<Canvas>();
        canvas.renderMode = RenderMode.WorldSpace;
        TextMeshProUGUI text = CreateText(labelGo.transform, "StartText", new Vector2(0f, 0f), new Vector2(200f, 100f), 36f, Color.white);
        text.text = "INICIAR";
        text.textWrappingMode = TextWrappingModes.NoWrap;
        text.overflowMode = TextOverflowModes.Overflow;

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
        // Placa oscura detrás del HUD para que el texto se lea bien en el aire.
        // Los HUDs (controller + cube) se crean en runtime en BombUI.Start()
        Cube(hud.transform, "HudPlate", new Vector3(0f, 0f, -0.02f),
            new Vector3(0.66f, 0.30f, 0.01f), GetMaterial("Mat_Panel", new Color(0.03f, 0.033f, 0.04f)));
    }

    private static void BuildResetButton(GameObject root, float tableTop)
    {
        Material buttonMat = GetMaterial("Mat_BotonReset", new Color(0.12f, 0.7f, 0.35f));

        // Cilindro vertical (botón redondo tipo emergencia)
        GameObject button = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
        button.name = "ResetButton";
        button.transform.SetParent(root.transform, false);
        button.transform.position = new Vector3(-0.5f, tableTop + 0.03f, 0.48f);
        button.transform.localScale = new Vector3(0.12f, 0.04f, 0.12f);
        button.GetComponent<Renderer>().sharedMaterial = buttonMat;

        // Ajustar collider del cilindro
        CapsuleCollider col = button.GetComponent<CapsuleCollider>();
        if (col != null)
        {
            col.direction = 1; // Y-axis
            col.radius = 0.5f;
            col.height = 1f;
        }

        Isdk.Poke(button, Vector3.up);
        BombResetButton resetBtn = button.AddComponent<BombResetButton>();
        resetBtn.bomb = Object.FindAnyObjectByType<BombManager>();

        // Etiqueta "RESET" en la cara superior
        GameObject label = new GameObject("Label", typeof(TextMeshProUGUI));
        label.transform.SetParent(button.transform, false);
        label.transform.localPosition = new Vector3(0f, 0.025f, 0f); // Encima del cilindro
        label.transform.localRotation = Quaternion.Euler(90f, 0f, 0f); // Mirando hacia arriba
        float comp = 0.002f;
        label.transform.localScale = new Vector3(
            comp / button.transform.localScale.x,
            comp / button.transform.localScale.y,
            1f);

        TextMeshProUGUI tmp = label.GetComponent<TextMeshProUGUI>();
        tmp.text = "RESET";
        tmp.fontSize = 50f;
        tmp.alignment = TextAlignmentOptions.Center;
        tmp.color = Color.white;
        tmp.textWrappingMode = TextWrappingModes.NoWrap;
        tmp.overflowMode = TextOverflowModes.Overflow;
        tmp.outlineWidth = 0.15f;
        tmp.outlineColor = Color.black;
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
        button.transform.localPosition = new Vector3(0f, 0.24f, 0f);
        button.transform.localScale = new Vector3(0.22f, 0.06f, 0.22f);
        button.GetComponent<Renderer>().sharedMaterial = buttonMat;

        Isdk.Poke(button, Vector3.up);
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
