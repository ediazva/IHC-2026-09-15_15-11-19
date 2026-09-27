using System;
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
        public GrabInteractable grab;
        public HandGrabInteractable handGrab;
        public Action<InteractableStateChangeArgs> grabHandler;
        public Action<InteractableStateChangeArgs> handGrabHandler;
        public Vector3 homePosition;
        public Quaternion homeRotation;
        public bool installed;
    }

    private readonly List<CellItem> cells = new List<CellItem>();
    private readonly Transform[] sockets = new Transform[3];
    private readonly bool[] installed = new bool[3];
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
        Material[] slotMaterials = new Material[CellColors.Length];
        for (int i = 0; i < CellColors.Length; i++)
            slotMaterials[i] = CreateRuntimeMaterial(CellColors[i], 0.25f);

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
        Material[] cellMaterials = new Material[CellColors.Length];
        for (int i = 0; i < CellColors.Length; i++)
            cellMaterials[i] = CreateRuntimeMaterial(CellColors[i], 0.35f);

        for (int i = 0; i < CellColors.Length; i++)
        {
            Vector3 shelfLocal = SearchShelfPositions[anchors[i]];
            CreateCube(searchRoot, $"BatterySearchShelf_{i}", shelfLocal,
                new Vector3(0.20f, 0.035f, 0.14f), shelfMaterial);

            Vector3 spawnWorld = roomWalls.transform.TransformPoint(shelfLocal + Vector3.up * 0.067f);
            CellItem item = CreateCell(i, spawnWorld, cellMaterials[i]);
            cells.Add(item);
        }
    }

    private CellItem CreateCell(int colorIndex, Vector3 worldPosition, Material material)
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
        rb.useGravity = true;
        rb.collisionDetectionMode = CollisionDetectionMode.ContinuousDynamic;
        rb.interpolation = RigidbodyInterpolation.Interpolate;

        Isdk.Grab(cell, rb);
        HandGrabInteractable handGrab = Isdk.HandGrab(cell, rb);
        GrabInteractable grab = cell.GetComponent<GrabInteractable>();

        CellItem item = new CellItem
        {
            colorIndex = colorIndex,
            gameObject = cell,
            body = rb,
            grab = grab,
            handGrab = handGrab,
            homePosition = worldPosition,
            homeRotation = cell.transform.rotation
        };

        item.grabHandler = Isdk.Bind(grab, null, () => OnCellReleased(item), item.grabHandler);
        item.handGrabHandler = Isdk.Bind(handGrab, null, () => OnCellReleased(item), item.handGrabHandler);
        return item;
    }

    private void OnCellReleased(CellItem item)
    {
        if (item == null || item.installed || IsSolved) return;

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

        if (nearestSocket != item.colorIndex)
        {
            SFX.Play(SfxType.Denied, 0.55f);
            AddStrike();
            item.body.linearVelocity = Vector3.zero;
            item.body.angularVelocity = Vector3.zero;
            item.body.isKinematic = true;
            item.gameObject.transform.SetPositionAndRotation(item.homePosition, item.homeRotation);
            item.body.isKinematic = false;
            return;
        }

        InstallCell(item, nearestSocket);
    }

    private void InstallCell(CellItem item, int socketIndex)
    {
        item.installed = true;
        installed[socketIndex] = true;
        installedCount++;
        item.body.linearVelocity = Vector3.zero;
        item.body.angularVelocity = Vector3.zero;
        item.body.isKinematic = true;
        if (item.grab != null) item.grab.enabled = false;
        if (item.handGrab != null) item.handGrab.enabled = false;
        item.gameObject.transform.SetParent(runtimeRoot, true);
        item.gameObject.transform.SetPositionAndRotation(sockets[socketIndex].position, sockets[socketIndex].rotation);
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
