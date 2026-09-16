using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Interactables;
using UnityEngine.XR.Interaction.Toolkit.Transformers;

namespace VRInteractionPrototype
{
    /// <summary>
    /// Reusable component that configures physical VR interaction behaviors on grabbable objects.
    /// Ensures consistent Rigidbody physics, collision settings, and natural throwing dynamics in VR.
    /// </summary>
    [RequireComponent(typeof(Rigidbody))]
    [RequireComponent(typeof(XRGrabInteractable))]
    [SelectionBase]
    public class VRPhysicsInteractable : MonoBehaviour
    {
        [Header("Physics Settings")]
        [Tooltip("Mass of the object in kilograms.")]
        [SerializeField] private float mass = 0.5f;

        [Tooltip("Linear drag slows down object translation in air.")]
        [SerializeField] private float drag = 0.05f;

        [Tooltip("Angular drag slows down object rotation in air.")]
        [SerializeField] private float angularDrag = 0.2f;

        [Tooltip("Use ContinuousDynamic collision detection to prevent fast-moving or thrown objects from tunneling.")]
        [SerializeField] private CollisionDetectionMode collisionDetection = CollisionDetectionMode.ContinuousDynamic;

        [Tooltip("Interpolation smooths visual motion between physics fixed timesteps.")]
        [SerializeField] private RigidbodyInterpolation interpolation = RigidbodyInterpolation.Interpolate;

        [Header("Throwing & Release Dynamics")]
        [Tooltip("Multiplier applied to the hand velocity when releasing/throwing an object in VR.")]
        [Range(1f, 3f)]
        [SerializeField] private float throwVelocityMultiplier = 1.35f;

        [Tooltip("Multiplier applied to the hand angular velocity when throwing.")]
        [Range(0.5f, 2f)]
        [SerializeField] private float throwAngularVelocityMultiplier = 1.0f;

        [Tooltip("Duration in seconds over which release velocity is averaged/smoothed to remove hand tracking jitter.")]
        [Range(0.05f, 0.5f)]
        [SerializeField] private float throwSmoothingTime = 0.15f;

        [Tooltip("Dynamic attach allows grabbing the object at the exact contact point without sudden snapping.")]
        [SerializeField] private bool useDynamicAttach = true;

        [Header("Out-of-Bounds Reset")]
        [Tooltip("If enabled, respawns the object back to its initial position if it falls below the reset height.")]
        [SerializeField] private bool enableAutoRespawn = true;
        [SerializeField] private float resetFloorHeight = -2.0f;

        private Rigidbody rb;
        private XRGrabInteractable grabInteractable;
        private Vector3 initialPosition;
        private Quaternion initialRotation;

        public float Mass { get => mass; set { mass = value; ApplyPhysicsSettings(); } }
        public float Drag { get => drag; set { drag = value; ApplyPhysicsSettings(); } }
        public float AngularDrag { get => angularDrag; set { angularDrag = value; ApplyPhysicsSettings(); } }
        public float ThrowVelocityMultiplier { get => throwVelocityMultiplier; set { throwVelocityMultiplier = value; ApplyGrabSettings(); } }
        public float ThrowAngularVelocityMultiplier { get => throwAngularVelocityMultiplier; set { throwAngularVelocityMultiplier = value; ApplyGrabSettings(); } }

        private void Awake()
        {
            rb = GetComponent<Rigidbody>();
            grabInteractable = GetComponent<XRGrabInteractable>();

            initialPosition = transform.position;
            initialRotation = transform.rotation;

            ApplyPhysicsSettings();
            ApplyGrabSettings();
        }

        private void Start()
        {
            // Ensure grab transformer exists for multi-hand interaction and rotation
            if (GetComponent<XRGeneralGrabTransformer>() == null)
            {
                gameObject.AddComponent<XRGeneralGrabTransformer>();
            }
        }

        /// <summary>
        /// Configure custom physics and throwing parameters for this specific object.
        /// </summary>
        public void Configure(float customMass, float customDrag = 0.05f, float customAngularDrag = 0.2f, float customThrowScale = 1.35f, float customThrowAngScale = 1.0f)
        {
            mass = customMass;
            drag = customDrag;
            angularDrag = customAngularDrag;
            throwVelocityMultiplier = customThrowScale;
            throwAngularVelocityMultiplier = customThrowAngScale;

            ApplyPhysicsSettings();
            ApplyGrabSettings();
        }

        /// <summary>
        /// Applies realistic Rigidbody settings tuned for VR physical interaction.
        /// </summary>
        public void ApplyPhysicsSettings()
        {
            if (rb == null) rb = GetComponent<Rigidbody>();
            if (rb == null) return;

            rb.mass = mass;
            rb.linearDamping = drag;
            rb.angularDamping = angularDrag;
            rb.collisionDetectionMode = collisionDetection;
            rb.interpolation = interpolation;
            rb.useGravity = true;
            rb.isKinematic = false;
        }

        /// <summary>
        /// Configures XRGrabInteractable parameters for responsive grabbing and natural throwing.
        /// </summary>
        public void ApplyGrabSettings()
        {
            if (grabInteractable == null) grabInteractable = GetComponent<XRGrabInteractable>();
            if (grabInteractable == null) return;

            // Movement type: Instantaneous follows the hand faithfully without spring lag
            grabInteractable.movementType = XRBaseInteractable.MovementType.Instantaneous;
            grabInteractable.trackPosition = true;
            grabInteractable.trackRotation = true;

            // Natural dynamic attach (grabs where touched)
            grabInteractable.useDynamicAttach = useDynamicAttach;

            // Throw physics configuration
            grabInteractable.throwOnDetach = true;
            grabInteractable.throwVelocityScale = throwVelocityMultiplier;
            grabInteractable.throwAngularVelocityScale = throwAngularVelocityMultiplier;
            grabInteractable.throwSmoothingDuration = throwSmoothingTime;
        }

        private void Update()
        {
            // Check out-of-bounds drop
            if (enableAutoRespawn && transform.position.y < resetFloorHeight)
            {
                ResetToSpawn();
            }
        }

        /// <summary>
        /// Resets the object to its spawn transform if dropped out of reach.
        /// </summary>
        public void ResetToSpawn()
        {
            if (grabInteractable != null && grabInteractable.isSelected)
            {
                return; // Don't reset if currently held
            }

            if (rb != null)
            {
                rb.linearVelocity = Vector3.zero;
                rb.angularVelocity = Vector3.zero;
            }

            transform.position = initialPosition;
            transform.rotation = initialRotation;
        }

        private void OnValidate()
        {
            if (Application.isPlaying)
            {
                ApplyPhysicsSettings();
                ApplyGrabSettings();
            }
        }
    }
}

