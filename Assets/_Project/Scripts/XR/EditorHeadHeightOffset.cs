using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR;

namespace VRInteractionPrototype
{
    /// <summary>
    /// En el Editor sin casco conectado (Game view), la cámara queda pegada al suelo
    /// porque no hay tracking de cabeza. Este componente eleva el rig hasta la altura
    /// de ojos de una persona de pie para poder ver la escena correctamente.
    /// En la Quest real se detecta el HMD y no se modifica nada.
    /// </summary>
    [DisallowMultipleComponent]
    public class EditorHeadHeightOffset : MonoBehaviour
    {
        [SerializeField]
        private float editorEyeHeight = 1.6f;
        [SerializeField]
        private Vector3 editorStartPosition = new Vector3(0f, 1.6f, -1.35f);
        [SerializeField]
        private float editorMoveSpeed = 1.4f;
        [SerializeField]
        private float editorLookSensitivity = 120f;

        private bool editorFallbackActive;
        private float yaw;

        private void Start()
        {
            if (!Application.isEditor)
                return;

            if (HasRealHmd())
                return;

            transform.SetPositionAndRotation(new Vector3(editorStartPosition.x, editorEyeHeight, editorStartPosition.z), Quaternion.identity);
            yaw = transform.eulerAngles.y;
            editorFallbackActive = true;
            Debug.Log($"<color=#7CFC00>[Bomba VR] Sin casco real: colocando cámara inicial en {transform.position}.</color>");
        }

        private void Update()
        {
            if (!editorFallbackActive) return;

            Keyboard keyboard = Keyboard.current;
            Mouse mouse = Mouse.current;
            if (keyboard == null) return;

            if (mouse != null && mouse.rightButton.isPressed)
            {
                yaw += mouse.delta.ReadValue().x * editorLookSensitivity * 0.01f * Time.deltaTime;
                transform.rotation = Quaternion.Euler(0f, yaw, 0f);
            }

            Vector3 move = Vector3.zero;
            if (keyboard.wKey.isPressed) move += transform.forward;
            if (keyboard.sKey.isPressed) move -= transform.forward;
            if (keyboard.dKey.isPressed) move += transform.right;
            if (keyboard.aKey.isPressed) move -= transform.right;
            if (keyboard.eKey.isPressed) move += Vector3.up;
            if (keyboard.qKey.isPressed) move -= Vector3.up;

            move.y = keyboard.eKey.isPressed || keyboard.qKey.isPressed ? move.y : 0f;
            if (move.sqrMagnitude > 0.001f)
                transform.position += move.normalized * editorMoveSpeed * Time.deltaTime;
        }

        private static bool HasRealHmd()
        {
            var devices = new List<UnityEngine.XR.InputDevice>();
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
