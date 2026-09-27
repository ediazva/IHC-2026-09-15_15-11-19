using UnityEngine;

public class RoomDimensionLogger : MonoBehaviour
{
    void Start()
    {
        Renderer roomRenderer = GetComponentInChildren<Renderer>();
        if (roomRenderer == null)
        {
            Debug.LogError("[RoomDimensions] No Renderer encontrado en HeadquartersRoom");
            return;
        }

        Bounds b = roomRenderer.bounds;
        Debug.Log($"[RoomDimensions] Size: {b.size.x:F3} x {b.size.y:F3} x {b.size.z:F3}");
        Debug.Log($"[RoomDimensions] Center: {b.center.x:F3}, {b.center.y:F3}, {b.center.z:F3}");
        Debug.Log($"[RoomDimensions] Min: {b.min.x:F3}, {b.min.y:F3}, {b.min.z:F3}");
        Debug.Log($"[RoomDimensions] Max: {b.max.x:F3}, {b.max.y:F3}, {b.max.z:F3}");
    }
}
