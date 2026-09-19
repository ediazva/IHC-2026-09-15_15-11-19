using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

namespace VRInteractionPrototype
{
    /// <summary>
    /// En el Editor sin casco conectado (Game view), la cámara queda pegada al suelo
    /// porque no hay tracking de cabeza. Este componente eleva el rig hasta la altura
    /// de ojos de una persona de pie para poder ver la escena correctamente.
    /// En la Quest real (o con Meta XR Simulator activo) se detecta el HMD y no se modifica nada.
    /// </summary>
    [DisallowMultipleComponent]
    public class EditorHeadHeightOffset : MonoBehaviour
    {
        [SerializeField]
        private float editorEyeHeight = 1.6f;

        private void Start()
        {
            if (!Application.isEditor)
                return;

            if (XRSettings.isDeviceActive || HasRealHmd() || HasSimulatedHmd())
                return;

            var p = transform.position;
            transform.position = new Vector3(p.x, editorEyeHeight, p.z);
            Debug.Log($"<color=#7CFC00>[Bomba VR] Sin casco: elevando cámara a {editorEyeHeight}m para la vista del Editor.</color>");
        }

        private static bool HasRealHmd()
        {
            var devices = new List<InputDevice>();
            InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.HeadMounted, devices);
            foreach (var dev in devices)
            {
                if (dev.isValid && !dev.name.Contains("Simulated"))
                    return true;
            }
            return false;
        }

        private static bool HasSimulatedHmd()
        {
            var devices = new List<InputDevice>();
            InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.HeadMounted, devices);
            foreach (var dev in devices)
            {
                if (dev.isValid && dev.name.Contains("Simulated"))
                    return true;
            }
            return false;
        }
    }
}