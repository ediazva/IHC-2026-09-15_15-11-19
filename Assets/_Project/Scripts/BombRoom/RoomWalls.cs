using UnityEngine;

/// <summary>
/// Procedural, visible 2.2x2.2m room shell. Dimensions describe the clear INTERIOR
/// and all generated geometry/colliders share the same local coordinate system.
/// The front wall has a doorway so the player can enter the play area.
/// </summary>
public class RoomWalls : MonoBehaviour
{
    [Header("Clear interior dimensions (metres)")]
    [Min(1f)] public float roomWidth = 2.2f;
    [Min(1f)] public float roomDepth = 2.2f;
    [Min(2f)] public float roomHeight = 2.4f;
    [Min(0.04f)] public float wallThickness = 0.10f;
    [Min(2.4f)] public float floorWidth = 8f;
    [Min(2.4f)] public float floorDepth = 8f;
    [Min(0.5f)] public float doorwayWidth = 0.80f;
    [Min(1.6f)] public float doorwayHeight = 2.05f;
    public bool createCeiling;

    [Header("Visual materials")]
    public Material wallMaterial;
    public Material floorMaterial;

    private const string GeneratedRootName = "__GeneratedRoomGeometry";

    private void Awake()
    {
        // Editor construction serializes the generated children. Runtime creates
        // them only for rooms instantiated dynamically without those children.
        Transform generated = transform.Find(GeneratedRootName);
        Transform floor = generated != null ? generated.Find("RoomFloor") : null;
        bool floorSizeChanged = floor == null ||
            Mathf.Abs(floor.localScale.x - Mathf.Max(floorWidth, roomWidth + wallThickness * 2f)) > 0.01f ||
            Mathf.Abs(floor.localScale.z - Mathf.Max(floorDepth, roomDepth + wallThickness * 2f)) > 0.01f;
        if (generated == null || floorSizeChanged)
            RebuildGeometry();
    }

    /// <summary>Builds visible primitives and matching BoxColliders.</summary>
    public void RebuildGeometry()
    {
        Transform old = transform.Find(GeneratedRootName);
        if (old != null)
        {
            if (Application.isPlaying) Destroy(old.gameObject);
            else DestroyImmediate(old.gameObject);
        }

        var generated = new GameObject(GeneratedRootName).transform;
        generated.SetParent(transform, false);
        generated.localPosition = Vector3.zero;
        generated.localRotation = Quaternion.identity;
        generated.localScale = Vector3.one;

        float halfW = roomWidth * 0.5f;
        float halfD = roomDepth * 0.5f;
        float halfT = wallThickness * 0.5f;

        // Floor interior aligns with y=0; the top surface is at y=0.
        CreatePanel(generated, "RoomFloor", new Vector3(0f, -halfT, 0f),
            new Vector3(Mathf.Max(floorWidth, roomWidth + wallThickness * 2f), wallThickness,
                Mathf.Max(floorDepth, roomDepth + wallThickness * 2f)), floorMaterial);

        // Side walls and rear wall surround the 2x2m clear interior.
        CreatePanel(generated, "Wall_Left",
            new Vector3(-halfW - halfT, roomHeight * 0.5f, 0f),
            new Vector3(wallThickness, roomHeight, roomDepth + wallThickness * 2f), wallMaterial);
        CreatePanel(generated, "Wall_Right",
            new Vector3(halfW + halfT, roomHeight * 0.5f, 0f),
            new Vector3(wallThickness, roomHeight, roomDepth + wallThickness * 2f), wallMaterial);
        CreatePanel(generated, "Wall_Back",
            new Vector3(0f, roomHeight * 0.5f, halfD + halfT),
            new Vector3(roomWidth, roomHeight, wallThickness), wallMaterial);

        // Front wall is split around a doorway; no invisible wall blocks entry.
        float doorW = Mathf.Clamp(doorwayWidth, 0.5f, roomWidth - 0.2f);
        float doorH = Mathf.Clamp(doorwayHeight, 1.8f, roomHeight - 0.05f);
        float jambWidth = (roomWidth - doorW) * 0.5f;
        float frontZ = -halfD - halfT;
        if (jambWidth > 0.01f)
        {
            CreatePanel(generated, "Wall_Front_LeftJamb",
                new Vector3(-(doorW + jambWidth) * 0.5f, roomHeight * 0.5f, frontZ),
                new Vector3(jambWidth, roomHeight, wallThickness), wallMaterial);
            CreatePanel(generated, "Wall_Front_RightJamb",
                new Vector3((doorW + jambWidth) * 0.5f, roomHeight * 0.5f, frontZ),
                new Vector3(jambWidth, roomHeight, wallThickness), wallMaterial);
        }
        float headerHeight = roomHeight - doorH;
        if (headerHeight > 0.01f)
        {
            CreatePanel(generated, "Wall_Front_Header",
                new Vector3(0f, doorH + headerHeight * 0.5f, frontZ),
                new Vector3(doorW, headerHeight, wallThickness), wallMaterial);
        }

        if (createCeiling)
        {
            CreatePanel(generated, "RoomCeiling",
                new Vector3(0f, roomHeight + halfT, 0f),
                new Vector3(roomWidth + wallThickness * 2f, wallThickness, roomDepth + wallThickness * 2f), wallMaterial);
        }

    }

    private static GameObject CreatePanel(Transform parent, string name, Vector3 localPosition, Vector3 size, Material material)
    {
        GameObject panel = GameObject.CreatePrimitive(PrimitiveType.Cube);
        panel.name = name;
        panel.transform.SetParent(parent, false);
        panel.transform.localPosition = localPosition;
        panel.transform.localRotation = Quaternion.identity;
        panel.transform.localScale = size;
        panel.layer = LayerMask.NameToLayer("Default");
        Renderer renderer = panel.GetComponent<Renderer>();
        if (renderer != null && material != null) renderer.sharedMaterial = material;
        Collider collider = panel.GetComponent<Collider>();
        if (collider != null) collider.isTrigger = false;
        return panel;
    }

    /// <summary>
    /// Returns a world pose for a button mounted on an interior wall.
    /// Indices: 0 left, 1 right, 2 rear, 3 front-left jamb (if used).
    /// The normal always points from the wall into the room.
    /// </summary>
    public bool TryGetButtonPose(int wallIndex, float heightFromFloor, float lateralOffset,
        float buttonDepth, out Vector3 worldPosition, out Vector3 worldInwardNormal)
    {
        Vector3 localPosition;
        Vector3 localNormal;
        float halfW = roomWidth * 0.5f;
        float halfD = roomDepth * 0.5f;
        float inset = Mathf.Max(0.015f, buttonDepth * 0.5f);

        switch (wallIndex)
        {
            case 0: // left wall; lateral offset runs along room depth
                localPosition = new Vector3(-halfW + inset, heightFromFloor, Mathf.Clamp(lateralOffset, -halfD + 0.2f, halfD - 0.2f));
                localNormal = Vector3.right;
                break;
            case 1: // right wall
                localPosition = new Vector3(halfW - inset, heightFromFloor, Mathf.Clamp(lateralOffset, -halfD + 0.2f, halfD - 0.2f));
                localNormal = Vector3.left;
                break;
            case 2: // rear wall
                localPosition = new Vector3(Mathf.Clamp(lateralOffset, -halfW + 0.2f, halfW - 0.2f), heightFromFloor, halfD - inset);
                localNormal = Vector3.back;
                break;
            case 3: // front-left jamb, safe from the doorway opening
                float jambCentre = (doorwayWidth + (roomWidth - doorwayWidth) * 0.5f) * 0.5f;
                localPosition = new Vector3(-jambCentre, heightFromFloor, -halfD + inset);
                localNormal = Vector3.forward;
                break;
            default:
                worldPosition = Vector3.zero;
                worldInwardNormal = Vector3.forward;
                return false;
        }

        worldPosition = transform.TransformPoint(localPosition);
        worldInwardNormal = transform.TransformDirection(localNormal).normalized;
        return true;
    }
}
