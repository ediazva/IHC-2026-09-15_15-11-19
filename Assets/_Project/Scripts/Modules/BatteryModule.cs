using System;
using System.Collections;
using System.Collections.Generic;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;
using UnityEngine;

/// <summary>
/// Search-and-carry module: find one red, blue and yellow cell in the room and
/// fit each into its matching socket on the bomb's rear face (-Z).
/// Search positions are bounded, reachable wall shelves inside the 2.2x2.2m room.
/// </summary>
public class BatteryModule : ModuleBase
{
    private static readonly Color[] CellColors =
    {
        BombRoomPalette.Colors[0], // red
        BombRoomPalette.Colors[1], // blue
        BombRoomPalette.Colors[3], // yellow
    };

    private static readonly string[] CellNames = { "ROJO", "AZUL", "AMARILLO" };
    private static readonly Vector3[] SearchShelfPositions =
    {
        new Vector3(-0.92f, 0.78f, -0.62f),
        new Vector3(-0.92f, 0.78f,  0.62f),
        new Vector3( 0.92f, 0.78f, -0.62f),
        new Vector3( 0.92f, 0.78f,  0.62f),
        new Vector3(-0.62f, 0.78f,  0.92f),
        new Vector3( 0.62f, 0.78f,  0.92f),
    };

    [Header("Room reference")]
    public RoomWalls roomWalls;

    [Header("Placement")]
    [Min(0.05f)] public float snapDistance = 0.13f;

    private sealed class CellItem
    {
        public int colorIndex;
        public GameObject gameObject;
        public Rigidbody body;
        public Collider collider;
        public GrabInteractable grab;
        public HandGrabInteractable handGrab;
        public Action<InteractableStateChangeArgs> grabHandler;
        public Action<InteractableStateChangeArgs> handGrabHandler;
        public bool installed;
        public bool held;
    }

    private readonly List<CellItem> cells = new List<CellItem>();
    private readonly Transform[] sockets = new Transform[3];
    private readonly bool[] installed = new bool[3];
    // true means the socket expects the positive terminal toward its local +X side.
    private readonly bool[] positiveTowardRight = new bool[3];
    private readonly List<Material> generatedMaterials = new List<Material>();
    private Transform runtimeRoot;
    private Transform searchRoot;
    private int installedCount;

    private void Awake()
    {
        Title = "PILAS";
    }

    private void Start()
    {
        if (roomWalls == null) roomWalls = FindAnyObjectByType<RoomWalls>();
        BuildPuzzle();
    }

    public override void ResetModule()
    {
        base.ResetModule();
        StopAllCoroutines();
        ClearRuntimeObjects();
        BuildPuzzle();
    }

    private void BuildPuzzle()
    {
        if (roomWalls == null)
        {
            Debug.LogError("[BatteryModule] RoomWalls reference missing; cannot create safe battery search positions.", this);
            return;
        }

        runtimeRoot = new GameObject("BatteryModule_Runtime").transform;
        runtimeRoot.SetParent(transform, false);
        runtimeRoot.localPosition = Vector3.zero;
        runtimeRoot.localRotation = Quaternion.identity;

        searchRoot = new GameObject("BatterySearchItems").transform;
        searchRoot.SetParent(roomWalls.transform, false);
        searchRoot.localPosition = Vector3.zero;
        searchRoot.localRotation = Quaternion.identity;

        CreateRearPanelAndSockets();
        CreateShelvesAndCells();
    }

    private void CreateRearPanelAndSockets()
    {
        Material dark = CreateRuntimeMaterial(new Color(0.035f, 0.04f, 0.05f));
        Material polarityMark = CreateRuntimeMaterial(new Color(0.95f, 0.95f, 0.82f), 1.1f);
        Material[] slotMaterials = new Material[CellColors.Length];
        for (int i = 0; i < CellColors.Length; i++)
        {
            slotMaterials[i] = CreateRuntimeMaterial(CellColors[i], 0.25f);
            positiveTowardRight[i] = UnityEngine.Random.value >= 0.5f;
        }

        CreateCube(runtimeRoot, "BatteryPanel", new Vector3(0f, 0f, 0.008f),
            new Vector3(0.34f, 0.25f, 0.012f), dark);

        for (int i = 0; i < sockets.Length; i++)
        {
            float x = (i - 1) * 0.105f;
            CreateCube(runtimeRoot, $"BatterySocketBase_{CellNames[i]}",
                new Vector3(x, 0f, -0.008f), new Vector3(0.085f, 0.105f, 0.018f), dark);
            GameObject socket = CreateCube(runtimeRoot, $"BatterySocket_{CellNames[i]}",
                new Vector3(x, 0f, -0.020f), new Vector3(0.052f, 0.075f, 0.012f), slotMaterials[i]);
            sockets[i] = socket.transform;
            socket.SetActive(true);

            float positiveX = x + (positiveTowardRight[i] ? 0.014f : -0.014f);
            float negativeX = x - (positiveTowardRight[i] ? 0.014f : -0.014f);
            CreateSocketPolaritySymbol(runtimeRoot, $"Socket_{CellNames[i]}_Plus",
                new Vector3(positiveX, 0f, -0.029f), true, polarityMark);
            CreateSocketPolaritySymbol(runtimeRoot, $"Socket_{CellNames[i]}_Minus",
                new Vector3(negativeX, 0f, -0.029f), false, polarityMark);
        }
    }

    private void CreateShelvesAndCells()
    {
        // Pick three distinct, bounded anchors. The player must search the room,
        // but no pickup is placed outside the playable interior or behind a wall.
        List<int> anchors = new List<int>();
        for (int i = 0; i < SearchShelfPositions.Length; i++) anchors.Add(i);
        for (int i = anchors.Count - 1; i > 0; i--)
        {
            int j = UnityEngine.Random.Range(0, i + 1);
            (anchors[i], anchors[j]) = (anchors[j], anchors[i]);
        }

        Material shelfMaterial = CreateRuntimeMaterial(new Color(0.16f, 0.18f, 0.21f));
        Material positiveTerminal = CreateRuntimeMaterial(new Color(0.95f, 0.20f, 0.08f), 0.8f);
        Material negativeTerminal = CreateRuntimeMaterial(new Color(0.16f, 0.18f, 0.21f), 0.15f);
        Material polarityMark = CreateRuntimeMaterial(new Color(0.95f, 0.95f, 0.82f), 1.1f);
        Material[] cellMaterials = new Material[CellColors.Length];
        for (int i = 0; i < CellColors.Length; i++)
            cellMaterials[i] = CreateRuntimeMaterial(CellColors[i], 0.35f);

        for (int i = 0; i < CellColors.Length; i++)
        {
            Vector3 shelfLocal = SearchShelfPositions[anchors[i]];
            CreateCube(searchRoot, $"BatterySearchShelf_{i}", shelfLocal,
                new Vector3(0.20f, 0.035f, 0.14f), shelfMaterial);

            Vector3 spawnWorld = roomWalls.transform.TransformPoint(shelfLocal + Vector3.up * 0.067f);
            CellItem item = CreateCell(i, spawnWorld, cellMaterials[i],
                positiveTerminal, negativeTerminal, polarityMark);
            cells.Add(item);
        }
    }

    private CellItem CreateCell(int colorIndex, Vector3 worldPosition, Material material,
        Material positiveTerminal, Material negativeTerminal, Material polarityMark)
    {
        GameObject cell = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
        cell.name = $"Battery_{CellNames[colorIndex]}";
        cell.transform.SetParent(searchRoot, true);
        cell.transform.position = worldPosition;
        cell.transform.rotation = Quaternion.Euler(0f, 0f, 90f);
        cell.transform.localScale = new Vector3(0.035f, 0.038f, 0.035f);

        Renderer renderer = cell.GetComponent<Renderer>();
        if (renderer != null) renderer.sharedMaterial = material;

        Rigidbody rb = cell.GetComponent<Rigidbody>();
        if (rb == null) rb = cell.AddComponent<Rigidbody>();
        // Grabbable locks the body to kinematic only while held. Once released,
        // gravity and collisions let it land on shelves, the table or the floor.
        rb.mass = 0.08f;
        rb.useGravity = true;
        rb.isKinematic = false;
        rb.collisionDetectionMode = CollisionDetectionMode.ContinuousSpeculative;
        rb.interpolation = RigidbodyInterpolation.Interpolate;

        Isdk.Grab(cell, rb);
        HandGrabInteractable handGrab = Isdk.HandGrab(cell, rb);
        GrabInteractable grab = cell.GetComponent<GrabInteractable>();

        CellItem item = new CellItem
        {
            colorIndex = colorIndex,
            gameObject = cell,
            body = rb,
            collider = cell.GetComponent<Collider>(),
            grab = grab,
            handGrab = handGrab
        };

        item.grabHandler = Isdk.Bind(grab,
            () => item.held = true,
            () => OnCellReleased(item), item.grabHandler);
        item.handGrabHandler = Isdk.Bind(handGrab,
            () => item.held = true,
            () => OnCellReleased(item), item.handGrabHandler);

        CreateCellPolarityMarks(cell.transform, positiveTerminal, negativeTerminal, polarityMark);
        // Only the battery body is an interaction candidate. Decorative pole
        // caps/signs are child meshes and must not steal the hand-grab pose.
        Isdk.ScopeGrabColliders(grab, item.collider);
        Isdk.ScopeHandGrabColliders(handGrab, item.collider);
        StartCoroutine(KeepCellGrabScope(item));
        return item;
    }

    private IEnumerator KeepCellGrabScope(CellItem item)
    {
        // ISDK rebuilds its collider candidates in Start, which can overwrite
        // the initial scope above. Reapply for the same startup window used by
        // BombManager so the decorative polarity meshes never steal the grab.
        for (int frame = 0; frame < 20; frame++)
        {
            if (item == null || item.gameObject == null || item.installed) yield break;
            Isdk.ScopeGrabColliders(item.grab, item.collider);
            Isdk.ScopeHandGrabColliders(item.handGrab, item.collider);
            yield return null;
        }
    }

    private void CreateCellPolarityMarks(Transform cell, Material positiveTerminal,
        Material negativeTerminal, Material polarityMark)
    {
        CreateTerminalCap(cell, "PositiveTerminal", 0.92f, positiveTerminal);
        CreateTerminalCap(cell, "NegativeTerminal", -0.92f, negativeTerminal);
        CreateCellPolaritySymbol(cell, "PositiveMark", 0.985f, true, polarityMark);
        CreateCellPolaritySymbol(cell, "NegativeMark", -0.985f, false, polarityMark);
    }

    private static void CreateTerminalCap(Transform parent, string name, float localY, Material material)
    {
        GameObject cap = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
        cap.name = name;
        cap.transform.SetParent(parent, false);
        cap.transform.localPosition = new Vector3(0f, localY, 0f);
        cap.transform.localScale = new Vector3(0.62f, 0.055f, 0.62f);
        Collider collider = cap.GetComponent<Collider>();
        if (collider != null)
        {
            collider.enabled = false;
            Destroy(collider);
        }
        Renderer renderer = cap.GetComponent<Renderer>();
        if (renderer != null) renderer.sharedMaterial = material;
    }

    private static void CreateCellPolaritySymbol(Transform parent, string name,
        float localY, bool positive, Material material)
    {
        const float lineLength = 0.48f;
        const float lineThickness = 0.07f;
        CreateVisualCube(parent, $"{name}_Horizontal",
            new Vector3(0f, localY, 0f), new Vector3(lineLength, lineThickness, lineThickness), material);
        if (positive)
        {
            CreateVisualCube(parent, $"{name}_Vertical",
                new Vector3(0f, localY, 0f), new Vector3(lineThickness, lineThickness, lineLength), material);
        }
    }

    private static void CreateSocketPolaritySymbol(Transform parent, string name,
        Vector3 localPosition, bool positive, Material material)
    {
        const float length = 0.012f;
        const float thickness = 0.002f;
        CreateVisualCube(parent, $"{name}_Horizontal", localPosition,
            new Vector3(length, thickness, thickness), material);
        if (positive)
        {
            CreateVisualCube(parent, $"{name}_Vertical", localPosition,
                new Vector3(thickness, length, thickness), material);
        }
    }

    private static GameObject CreateVisualCube(Transform parent, string name,
        Vector3 localPosition, Vector3 localScale, Material material)
    {
        GameObject go = GameObject.CreatePrimitive(PrimitiveType.Cube);
        go.name = name;
        go.transform.SetParent(parent, false);
        go.transform.localPosition = localPosition;
        go.transform.localRotation = Quaternion.identity;
        go.transform.localScale = localScale;
        Collider collider = go.GetComponent<Collider>();
        if (collider != null)
        {
            collider.enabled = false;
            Destroy(collider);
        }
        Renderer renderer = go.GetComponent<Renderer>();
        if (renderer != null && material != null) renderer.sharedMaterial = material;
        return go;
    }

    private void OnCellReleased(CellItem item)
    {
        if (item == null || item.installed || IsSolved || !item.held) return;
        item.held = false;

        float bestDistance = snapDistance;
        int nearestSocket = -1;
        for (int i = 0; i < sockets.Length; i++)
        {
            if (installed[i] || sockets[i] == null) continue;
            float distance = Vector3.Distance(item.gameObject.transform.position, sockets[i].position);
            if (distance < bestDistance)
            {
                bestDistance = distance;
                nearestSocket = i;
            }
        }

        if (nearestSocket < 0) return;

        if (nearestSocket != item.colorIndex || !HasCorrectPolarity(item, nearestSocket))
        {
            SFX.Play(SfxType.Denied, 0.55f);
            AddStrike();
            return;
        }

        StartCoroutine(InstallCellAfterRelease(item, nearestSocket));
    }

    private IEnumerator InstallCellAfterRelease(CellItem item, int socketIndex)
    {
        // ISDK restores the pre-grab dynamic state after notifying listeners of
        // release. Wait for that unlock before making an installed cell static.
        yield return null;
        if (item == null || item.gameObject == null || item.installed || item.held || installed[socketIndex])
            yield break;
        InstallCell(item, socketIndex);
    }

    private bool HasCorrectPolarity(CellItem item, int socketIndex)
    {
        if (item == null || socketIndex < 0 || socketIndex >= sockets.Length || sockets[socketIndex] == null)
            return false;

        Vector3 batteryPositiveAxis = sockets[socketIndex].InverseTransformDirection(
            item.gameObject.transform.up).normalized;
        Vector3 expectedPositiveAxis = positiveTowardRight[socketIndex] ? Vector3.right : Vector3.left;
        // Allow a small hand-alignment tolerance while still rejecting a reversed cell.
        return Vector3.Dot(batteryPositiveAxis, expectedPositiveAxis) >= 0.82f;
    }

    private void InstallCell(CellItem item, int socketIndex)
    {
        item.installed = true;
        installed[socketIndex] = true;
        installedCount++;
        item.body.linearVelocity = Vector3.zero;
        item.body.angularVelocity = Vector3.zero;
        item.body.isKinematic = true;
        item.body.useGravity = false;
        if (item.grab != null) item.grab.enabled = false;
        if (item.handGrab != null) item.handGrab.enabled = false;
        if (item.collider != null) item.collider.enabled = false;
        item.gameObject.transform.SetParent(runtimeRoot, true);
        Quaternion polarityRotation = sockets[socketIndex].rotation *
            Quaternion.Euler(0f, 0f, positiveTowardRight[socketIndex] ? -90f : 90f);
        item.gameObject.transform.SetPositionAndRotation(sockets[socketIndex].position, polarityRotation);
        SFX.Play(SfxType.Solved, 0.45f);

        if (installedCount >= CellColors.Length)
        {
            SFX.Play(SfxType.Solved, 0.85f);
            Solve();
        }
    }

    private static GameObject CreateCube(Transform parent, string name, Vector3 localPosition, Vector3 scale, Material material)
    {
        GameObject go = GameObject.CreatePrimitive(PrimitiveType.Cube);
        go.name = name;
        go.transform.SetParent(parent, false);
        go.transform.localPosition = localPosition;
        go.transform.localRotation = Quaternion.identity;
        go.transform.localScale = scale;
        Renderer renderer = go.GetComponent<Renderer>();
        if (renderer != null && material != null) renderer.sharedMaterial = material;
        return go;
    }

    private Material CreateRuntimeMaterial(Color color, float emission = 0f)
    {
        Material material = Fx.Lit(color, emission);
        generatedMaterials.Add(material);
        return material;
    }

    private void ClearRuntimeObjects()
    {
        cells.Clear();
        Array.Clear(sockets, 0, sockets.Length);
        Array.Clear(installed, 0, installed.Length);
        installedCount = 0;
        if (runtimeRoot != null)
        {
            if (Application.isPlaying) Destroy(runtimeRoot.gameObject);
            else DestroyImmediate(runtimeRoot.gameObject);
            runtimeRoot = null;
        }
        if (searchRoot != null)
        {
            if (Application.isPlaying) Destroy(searchRoot.gameObject);
            else DestroyImmediate(searchRoot.gameObject);
            searchRoot = null;
        }

        foreach (Material material in generatedMaterials)
        {
            if (material == null) continue;
            if (Application.isPlaying) Destroy(material);
            else DestroyImmediate(material);
        }
        generatedMaterials.Clear();
    }
}
