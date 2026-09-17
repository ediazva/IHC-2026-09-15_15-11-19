using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

namespace VRInteractionPrototype
{
    /// <summary>
    /// Desactiva automáticamente el simulador de XRI si se detecta un casco VR real
    /// o si la aplicación se ejecuta en un visor autónomo (Android / Meta Quest).
    /// Esto evita que el simulador capture y bloquee el tracking de la cabeza y mandos.
    /// </summary>
    [DefaultExecutionOrder(-32000)]
    public class XRSimulatorAutoDisable : MonoBehaviour
    {
        [SerializeField]
        private GameObject simulatorUi;

        private void Awake()
        {
            // 1. En compilaciones autónomas (Meta Quest / Android), el simulador nunca debe ejecutarse.
            if (!Application.isEditor)
            {
                CleanupAndDestroy();
                return;
            }

            // 2. En el Editor, si hay un visor VR activo (Meta Quest Link, AirLink, Meta XR Simulator u OpenXR)
            if (XRSettings.isDeviceActive || HasRealHmd())
            {
                Debug.Log("<color=#7CFC00>[Bomba VR] Casco VR detectado. Desactivando simulador XR para habilitar el tracking del visor.</color>");
                CleanupAndDestroy();
            }
        }

        private void CleanupAndDestroy()
        {
            if (simulatorUi != null)
            {
                Destroy(simulatorUi);
            }
            else
            {
                var ui = GameObject.Find("XR Interaction Simulator UI");
                if (ui != null) Destroy(ui);
            }

            Destroy(gameObject);
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
    }
}
