using UnityEngine;
using UnityEditor;

namespace VRInteractionPrototype.Editor
{
    /// <summary>Legacy menu retained to explain that the game now uses its procedural room.</summary>
    public static class PlaceHeadquartersRoom
    {
        [MenuItem("VR Setup/Place Headquarters Room")]
        public static void PlaceRoom()
        {
            Debug.LogWarning("[PlaceHeadquartersRoom] HeadquartersRoom is legacy. Use Bomba VR > Reconstruir sala 2.2x2.2m to build the procedural room.");
        }
    }
}
