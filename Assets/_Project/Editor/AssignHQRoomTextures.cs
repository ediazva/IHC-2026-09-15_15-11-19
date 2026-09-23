using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace VRInteractionPrototype.Editor
{
    /// <summary>
    /// Asigna texturas descargadas a los materiales del modelo Headquarters_Room.
    /// Coincide por nombre de material (ej. "Board") con carpeta de texturas (ej. "Board/vhqoaii_4K_Albedo.jpg").
    /// Uso: abrir BombRoom.unity y ejecutar VR Setup / Assign HQ Room Textures.
    /// </summary>
    public static class AssignHQRoomTextures
    {
        private const string ModelPath = "Assets/_Project/Models/HeadquartersRoom/Headquarters_Room.fbx";
        private const string TextureRoot = "Assets/_Project/Textures/HeadquartersRoom";

        private static readonly Dictionary<string, (string albedo, string normal, string roughness, string ao, string metalness)> Map = new()
        {
            ["Board"] = ("Board/vhqoaii_4K_Albedo.jpg", "Board/vhqoaii_4K_Normal.jpg", "Board/vhqoaii_4K_Roughness.jpg", "Board/vhqoaii_4K_AO.jpg", null),
            ["Wall"] = ("Wall/1/xevlegbs_4K_Albedo.jpg", "Wall/1/xevlegbs_4K_Normal.jpg", "Wall/1/xevlegbs_4K_Roughness.jpg", "Wall/1/xevlegbs_4K_AO.jpg", null),
            ["Wall.001"] = ("Wall/2/ugtmehro_4K_Albedo.jpg", "Wall/2/ugtmehro_4K_Normal.jpg", "Wall/2/ugtmehro_4K_Roughness.jpg", "Wall/2/ugtmehro_4K_AO.jpg", null),
            ["Wall.002"] = ("Wall/3/xeohdaj_4K_Albedo.jpg", "Wall/3/xeohdaj_4K_Normal.jpg", "Wall/3/xeohdaj_4K_Roughness.jpg", "Wall/3/xeohdaj_4K_AO.jpg", null),
            ["Cabinet for cells"] = ("Cabinet for cells/Cabinet for cells_4K_Albedo.jpg", "Cabinet for cells/Cabinet for cells_4K_Normal.jpg", "Cabinet for cells/Cabinet for cells_4K_Roughness.jpg", "Cabinet for cells/Cabinet for cells_4K_AO.jpg", null),
            ["Nightstand"] = ("Nightstand/vigjfivg_4K_Albedo.jpg", "Nightstand/vigjfivg_4K_Normal.jpg", "Nightstand/vigjfivg_4K_Roughness.jpg", "Nightstand/vigjfivg_4K_AO.jpg", null),
            ["Switch"] = ("Switch/1/sefndiic_4K_Albedo.jpg", "Switch/1/sefndiic_4K_Normal.jpg", "Switch/1/sefndiic_4K_Roughness.jpg", "Switch/1/sefndiic_4K_AO.jpg", "Switch/1/sefndiic_4K_Metalness.jpg"),
            ["Switch.001"] = ("Switch/2/scksebop_4K_Albedo.jpg", "Switch/2/scksebop_4K_Normal.jpg", "Switch/2/scksebop_4K_Roughness.jpg", null, "Switch/2/scksebop_4K_Metalness.jpg"),
            ["Pushpin"] = (null, null, null, null, null),
            ["Pushpin .001"] = (null, null, null, null, null),
            ["Pushpin .002"] = (null, null, null, null, null),
            ["Pushpin .003"] = (null, null, null, null, null),
            ["Материал.002"] = (null, null, null, null, null),
            ["Wires"] = ("Wires/tjymdfmfw_4K_Albedo.jpg", "Wires/tjymdfmfw_4K_Normal.jpg", "Wires/tjymdfmfw_4K_Roughness.jpg", "Wires/tjymdfmfw_4K_AO.jpg", null),
            ["Wires .001"] = (null, null, null, null, null),
            ["Metal Cells"] = ("Metal Cells/Metal Cells_4K_Albedo.jpg", "Metal Cells/Metal Cells _4K_Normal.jpg", "Metal Cells/Metal Cells _4K_Roughness.jpg", "Metal Cells/Metal Cells_4k_Ao.jpg", null),
            ["Radio"] = ("Radio/1/tjylcjvn_4K_Albedo.jpg", "Radio/1/tjylcjvn_4K_Normal.jpg", "Radio/1/tjylcjvn_4K_Roughness.jpg", "Radio/1/tjylcjvn_4K_AO.jpg", null),
            ["Radio.001"] = (null, null, null, null, null),
            ["Radio.002"] = (null, null, null, null, null),
            ["Battery"] = ("Battery/tjsiegin_4K_Albedo.jpg", "Battery/tjsiegin_4K_Normal.jpg", "Battery/tjsiegin_4K_Roughness.jpg", "Battery/tjsiegin_4K_AO.jpg", null),
            ["Pipe"] = ("Pipe/tjzjeaaaw_4K_Albedo.jpg", "Pipe/tjzjeaaaw_4K_Normal.jpg", "Pipe/tjzjeaaaw_4K_Roughness.jpg", "Pipe/tjzjeaaaw_4K_AO.jpg", null),
            ["Closet"] = ("Closet/uexnedfew_4K_Albedo.jpg", "Closet/uexnedfew_4K_Normal.jpg", "Closet/uexnedfew_4K_Roughness.jpg", "Closet/uexnedfew_4K_AO.jpg", null),
            ["Сeiling lamp"] = ("Ceiling lamp/?eiling lamp_4K_Albedo.jpg", "Ceiling lamp/?eiling lamp_4K_Normal.jpg", "Ceiling lamp/?eiling lamp_4K_Roughness.jpg", "Ceiling lamp/?eiling lamp_4K_AO.jpg", null),
            ["Материал.003"] = (null, null, null, null, null),
            ["Chair .001"] = ("Chair/1/vdcjcbb_4K_Albedo.jpg", "Chair/1/vdcjcbb_4K_Normal.jpg", "Chair/1/vdcjcbb_4K_Roughness.jpg", "Chair/1/vdcjcbb_4K_AO.jpg", null),
            ["Chair"] = ("Chair/2/sjfvdh0c_4K_Albedo.jpg", "Chair/2/sjfvdh0c_4K_Normal.jpg", "Chair/2/sjfvdh0c_4K_Roughness.jpg", null, null),
            ["Lamp.001"] = ("Lamp/tkwmea1o_4K_Albedo.jpg", "Lamp/tkwmea1o_4K_Normal.jpg", "Lamp/tkwmea1o_4K_Roughness.jpg", "Lamp/tkwmea1o_4K_AO.jpg", null),
            ["Lamp"] = (null, null, null, null, null),
            ["Материал"] = (null, null, null, null, null),
            ["Wall cabinet"] = ("Wall cabinet/vdcjfiw_4K_Albedo.jpg", "Wall cabinet/vdcjfiw_4K_Normal.jpg", "Wall cabinet/vdcjfiw_4K_Roughness.jpg", "Wall cabinet/vdcjfiw_4K_AO.jpg", null),
        };

        [MenuItem("VR Setup/Assign HQ Room Textures")]
        public static void Assign()
        {
            GameObject modelAsset = AssetDatabase.LoadAssetAtPath<GameObject>(ModelPath);
            if (modelAsset == null)
            {
                Debug.LogError($"[AssignHQRoomTextures] Modelo no encontrado en {ModelPath}");
                return;
            }

            GameObject room = GameObject.Find("HeadquartersRoom");
            if (room == null)
            {
                Debug.LogError("[AssignHQRoomTextures] 'HeadquartersRoom' no esta en la escena. Ejecuta AutoPlaceModels o PlaceHeadquartersRoom primero.");
                return;
            }

            Renderer[] renderers = room.GetComponentsInChildren<Renderer>(true);
            int assigned = 0, skipped = 0;

            foreach (Renderer r in renderers)
            {
                Material[] mats = r.sharedMaterials;
                bool changed = false;
                for (int i = 0; i < mats.Length; i++)
                {
                    Material mat = mats[i];
                    string baseName = mat.name.Split('(')[0].TrimEnd(' ', '.');
                    if (Map.TryGetValue(baseName, out var paths))
                    {
                        if (SetTexture(mat, paths.albedo, "_BaseColorMap") |
                            SetTexture(mat, paths.normal, "_BumpMap", isNormal: true) |
                            SetTexture(mat, paths.roughness, "_RoughnessMap") |
                            SetTexture(mat, paths.ao, "_OcclusionMap") |
                            SetTexture(mat, paths.metalness, "_MetallicGlossMap"))
                        {
                            changed = true;
                            mat.name = baseName; // limpia "(Instance)"
                        }
                    }
                }
                if (changed) { r.sharedMaterials = mats; assigned++; }
                else skipped++;
            }

            EditorUtility.SetDirty(room);
            Debug.Log($"[AssignHQRoomTextures] Materiales actualizados: {assigned}, sin cambios: {skipped}. Guarda la escena.");
        }

        private static bool SetTexture(Material mat, string relPath, string propName, bool isNormal = false)
        {
            if (string.IsNullOrEmpty(relPath)) return false;
            string full = Path.Combine(TextureRoot, relPath).Replace('\\', '/');
            Texture tex = AssetDatabase.LoadAssetAtPath<Texture>(full);
            if (tex == null)
            {
                Debug.LogWarning($"[AssignHQRoomTextures] No se encontro textura: {full}");
                return false;
            }
            if (isNormal)
            {
                TextureImporter ti = AssetImporter.GetAtPath(full) as TextureImporter;
                if (ti != null && ti.textureType != TextureImporterType.NormalMap)
                {
                    ti.textureType = TextureImporterType.NormalMap;
                    ti.SaveAndReimport();
                }
            }
            if (mat.GetTexture(propName) != tex)
            {
                mat.SetTexture(propName, tex);
                return true;
            }
            return false;
        }
    }
}