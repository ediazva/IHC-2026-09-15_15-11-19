using System;
using System.Collections;
using System.Collections.Generic;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;
using UnityEngine;
using UnityEngine.XR.Hands;
#if UNITY_EDITOR
using UnityEngine.InputSystem;
#endif

/// <summary>
/// Intro interaction: the bomb starts wrapped as a gift. Pulling the lace hides
/// the wrapping and makes the bomb float/spin until the player touches/grabs it.
/// </summary>
public class PresentBoxReveal : MonoBehaviour
{
    [Header("References")]
    public Transform bomb;
    public Transform laceHandle;
    public GameObject wrappingRoot;
    public Transform tableTop;

    [Header("Intro")]
    public bool skipPresentIntro = true;

    [Header("Reveal")]
    public float pullDistance = 0.18f;
    public float boxHeight = 0.68f;
    public float floatHeight = 0.45f;
    public float riseSpeed = 1.8f;
    public float spinDegreesPerSecond = 55f;

    [Header("Pinch Reveal")]
    public float pinchFingerDistance = 0.035f;
    public float pinchStartRadius = 0.35f;
    public float ovrPinchThreshold = 0.8f;

    private Vector3 laceStartPosition;
    private Vector3 bombRestPosition;
    private Quaternion bombRestRotation;
    private Vector3 laceLocalPosition;
    private Quaternion laceLocalRotation;
    private bool revealed;
    private bool floating;
    private bool bombActivated;

    private GrabInteractable laceGrab;
    private HandGrabInteractable laceHandGrab;
    private GrabInteractable bombGrab;
    private HandGrabInteractable bombHandGrab;
    private Action<InteractableStateChangeArgs> laceGrabHandler;
    private Action<InteractableStateChangeArgs> laceHandGrabHandler;
    private Action<InteractableStateChangeArgs> bombGrabHandler;
    private Action<InteractableStateChangeArgs> bombHandGrabHandler;

    private XRHandSubsystem handSubsystem;
    private static readonly List<XRHandSubsystem> handSubsystems = new List<XRHandSubsystem>();
    private bool leftPinching;
    private bool rightPinching;
    private bool leftPinchStartedOnLace;
    private bool rightPinchStartedOnLace;
    private Vector3 leftPinchStart;
    private Vector3 rightPinchStart;
    private Transform trackingSpace;

    private void OnEnable()
    {
        TrySubscribeHandSubsystem();
    }

    private void TrySubscribeHandSubsystem()
    {
        if (handSubsystem != null) return;

        SubsystemManager.GetSubsystems(handSubsystems);
        if (handSubsystems.Count == 0) return;

        handSubsystem = handSubsystems[0];
        handSubsystem.updatedHands += OnUpdatedHands;
    }

    private void OnDisable()
    {
        if (handSubsystem == null) return;

        handSubsystem.updatedHands -= OnUpdatedHands;
        handSubsystem = null;
    }

    private void Awake()
    {
        SnapWrappingToTable();

        if (laceHandle != null)
        {
            laceLocalPosition = laceHandle.localPosition;
            laceLocalRotation = laceHandle.localRotation;
            laceStartPosition = laceHandle.position;
        }
        if (bomb != null)
        {
            bombRestPosition = bomb.position;
            bombRestRotation = bomb.rotation;
            if (!skipPresentIntro)
                bomb.gameObject.SetActive(false);
        }

        if (skipPresentIntro && wrappingRoot != null)
            wrappingRoot.SetActive(false);
    }

    private void Start()
    {
        SnapWrappingToTable();
        laceGrab = laceHandle != null ? laceHandle.GetComponent<GrabInteractable>() : null;
        laceHandGrab = laceHandle != null ? laceHandle.GetComponent<HandGrabInteractable>() : null;
        laceGrabHandler = BindLaceReveal(laceGrab, laceGrabHandler);
        laceHandGrabHandler = BindLaceReveal(laceHandGrab, laceHandGrabHandler);

        if (skipPresentIntro)
            Reveal();
    }

    private void SnapWrappingToTable()
    {
        if (wrappingRoot == null) return;

        if (tableTop == null)
        {
            GameObject top = GameObject.Find("Table/Top");
            if (top != null) tableTop = top.transform;
        }

        float topY = 0.74f;
        if (tableTop != null)
        {
            Renderer renderer = tableTop.GetComponent<Renderer>();
            Collider collider = tableTop.GetComponent<Collider>();
            if (collider != null) topY = collider.bounds.max.y;
            else if (renderer != null) topY = renderer.bounds.max.y;
            else topY = tableTop.position.y;
        }

        float halfHeight = boxHeight * 0.5f;
        Vector3 center = bomb != null ? bomb.position : wrappingRoot.transform.position;
        wrappingRoot.transform.position = new Vector3(center.x, topY + halfHeight, center.z);

        if (laceHandle != null && laceLocalPosition != Vector3.zero)
        {
            laceHandle.localPosition = laceLocalPosition;
            laceHandle.localRotation = laceLocalRotation;
            laceStartPosition = laceHandle.position;
        }
    }

    private void Update()
    {
        TrySubscribeHandSubsystem();

#if UNITY_EDITOR
        if (!revealed && Keyboard.current != null && Keyboard.current.spaceKey.wasPressedThisFrame)
            Reveal();
#endif

        if (!revealed)
        {
            UpdateOvrPinchPull(OVRInput.Axis1D.PrimaryIndexTrigger, OVRInput.Controller.LHand, ref leftPinching, ref leftPinchStartedOnLace, ref leftPinchStart);
            UpdateOvrPinchPull(OVRInput.Axis1D.SecondaryIndexTrigger, OVRInput.Controller.RHand, ref rightPinching, ref rightPinchStartedOnLace, ref rightPinchStart);
        }

        if (!revealed && laceHandle != null)
            CheckPulledFarEnough();

        if (floating && bomb != null)
            bomb.Rotate(Vector3.up, spinDegreesPerSecond * Time.deltaTime, Space.World);
    }

    private void CheckPulledFarEnough()
    {
        if (revealed || laceHandle == null) return;
        if (Vector3.Distance(laceHandle.position, laceStartPosition) < pullDistance) return;

        Reveal();
    }

    private void OnUpdatedHands(XRHandSubsystem subsystem, XRHandSubsystem.UpdateSuccessFlags updateSuccessFlags, XRHandSubsystem.UpdateType updateType)
    {
        if (revealed || updateType != XRHandSubsystem.UpdateType.Dynamic) return;

        if (HasUpdateSuccessFlag(updateSuccessFlags, XRHandSubsystem.UpdateSuccessFlags.LeftHandJoints)
            && UpdatePinchPull(subsystem.leftHand, ref leftPinching, ref leftPinchStartedOnLace, ref leftPinchStart)) return;

        if (HasUpdateSuccessFlag(updateSuccessFlags, XRHandSubsystem.UpdateSuccessFlags.RightHandJoints)
            && UpdatePinchPull(subsystem.rightHand, ref rightPinching, ref rightPinchStartedOnLace, ref rightPinchStart)) return;
    }

    private bool UpdatePinchPull(XRHand hand, ref bool wasPinching, ref bool startedOnLace, ref Vector3 pinchStart)
    {
        if (!TryGetPinchPosition(hand, out Vector3 pinchPosition))
        {
            wasPinching = false;
            startedOnLace = false;
            return false;
        }

        if (!wasPinching)
        {
            wasPinching = true;
            startedOnLace = IsNearLace(pinchPosition);
            pinchStart = pinchPosition;
            return false;
        }

        if (!startedOnLace) return false;
        if (Vector3.Distance(pinchPosition, pinchStart) < pullDistance) return false;

        Reveal();
        return true;
    }

    private void UpdateOvrPinchPull(OVRInput.Axis1D pinchAxis, OVRInput.Controller controller, ref bool wasPinching, ref bool startedOnLace, ref Vector3 pinchStart)
    {
        if (revealed) return;

        if (OVRInput.Get(pinchAxis) < ovrPinchThreshold)
        {
            wasPinching = false;
            startedOnLace = false;
            return;
        }

        Vector3 pinchPosition = OvrControllerWorldPosition(controller);
        if (!wasPinching)
        {
            wasPinching = true;
            startedOnLace = IsNearLace(pinchPosition);
            pinchStart = pinchPosition;
            return;
        }

        if (!startedOnLace) return;
        if (Vector3.Distance(pinchPosition, pinchStart) < pullDistance) return;

        Reveal();
    }

    private bool IsNearLace(Vector3 position)
    {
        if (laceHandle == null) return true;

        return Vector3.Distance(position, laceHandle.position) <= pinchStartRadius;
    }

    private Vector3 OvrControllerWorldPosition(OVRInput.Controller controller)
    {
        if (trackingSpace == null)
        {
            GameObject trackingSpaceGo = GameObject.Find("TrackingSpace");
            if (trackingSpaceGo != null) trackingSpace = trackingSpaceGo.transform;
        }

        Vector3 localPosition = OVRInput.GetLocalControllerPosition(controller);
        return trackingSpace != null ? trackingSpace.TransformPoint(localPosition) : localPosition;
    }

    private bool TryGetPinchPosition(XRHand hand, out Vector3 pinchPosition)
    {
        pinchPosition = default;
        if (!hand.isTracked) return false;

        XRHandJoint thumbTip = hand.GetJoint(XRHandJointID.ThumbTip);
        XRHandJoint indexTip = hand.GetJoint(XRHandJointID.IndexTip);
        if (!thumbTip.TryGetPose(out Pose thumbPose) || !indexTip.TryGetPose(out Pose indexPose)) return false;
        if (Vector3.Distance(thumbPose.position, indexPose.position) > pinchFingerDistance) return false;

        pinchPosition = (thumbPose.position + indexPose.position) * 0.5f;
        return true;
    }

    private static bool HasUpdateSuccessFlag(XRHandSubsystem.UpdateSuccessFlags successFlags, XRHandSubsystem.UpdateSuccessFlags successFlag)
    {
        return (successFlags & successFlag) == successFlag;
    }

    private Action<InteractableStateChangeArgs> BindLaceReveal(GrabInteractable interactable, Action<InteractableStateChangeArgs> previous)
    {
        if (interactable == null) return previous;
        if (previous != null) interactable.WhenStateChanged -= previous;

        Action<InteractableStateChangeArgs> handler = args =>
        {
            if (args.PreviousState == InteractableState.Select)
                CheckPulledFarEnough();
        };
        interactable.WhenStateChanged += handler;
        return handler;
    }

    private Action<InteractableStateChangeArgs> BindLaceReveal(HandGrabInteractable interactable, Action<InteractableStateChangeArgs> previous)
    {
        if (interactable == null) return previous;
        if (previous != null) interactable.WhenStateChanged -= previous;

        Action<InteractableStateChangeArgs> handler = args =>
        {
            if (args.PreviousState == InteractableState.Select)
                CheckPulledFarEnough();
        };
        interactable.WhenStateChanged += handler;
        return handler;
    }

    private void Reveal()
    {
        if (revealed) return;

        revealed = true;

        if (wrappingRoot != null) wrappingRoot.SetActive(false);
        StartCoroutine(SpawnBombAndStartTimer());
    }

    private IEnumerator SpawnBombAndStartTimer()
    {
        if (bomb == null || bombActivated) yield break;

        bombActivated = true;
        bomb.position = bombRestPosition;
        bomb.rotation = bombRestRotation;
        bomb.gameObject.SetActive(true);
        floating = true;

        yield return null;

        BindBombTouchHandlers();
        SetBombInteractionEnabled(true);
        bomb.GetComponent<BombManager>()?.Begin();
    }

    private void BindBombTouchHandlers()
    {
        if (bomb == null) return;

        bombGrab = bomb.GetComponent<GrabInteractable>();
        bombGrabHandler = BindAnyTouch(bombGrab, bombGrabHandler);

        Transform body = bomb.Find("Body");
        bombHandGrab = body != null ? body.GetComponent<HandGrabInteractable>() : bomb.GetComponentInChildren<HandGrabInteractable>();
        bombHandGrabHandler = BindAnyTouch(bombHandGrab, bombHandGrabHandler);
    }

    private Action<InteractableStateChangeArgs> BindAnyTouch(GrabInteractable interactable, Action<InteractableStateChangeArgs> previous)
    {
        if (interactable == null) return previous;
        if (previous != null) interactable.WhenStateChanged -= previous;

        Action<InteractableStateChangeArgs> handler = args =>
        {
            if (args.NewState == InteractableState.Hover || args.NewState == InteractableState.Select)
                StopFloating();
        };
        interactable.WhenStateChanged += handler;
        return handler;
    }

    private Action<InteractableStateChangeArgs> BindAnyTouch(HandGrabInteractable interactable, Action<InteractableStateChangeArgs> previous)
    {
        if (interactable == null) return previous;
        if (previous != null) interactable.WhenStateChanged -= previous;

        Action<InteractableStateChangeArgs> handler = args =>
        {
            if (args.NewState == InteractableState.Hover || args.NewState == InteractableState.Select)
                StopFloating();
        };
        interactable.WhenStateChanged += handler;
        return handler;
    }

    private void StopFloating()
    {
        if (!revealed) return;

        floating = false;
    }

    private void SetBombInteractionEnabled(bool enabled)
    {
        if (bombGrab != null) bombGrab.enabled = enabled;
        if (bombHandGrab != null) bombHandGrab.enabled = enabled;
    }

    private void OnDestroy()
    {
        if (laceGrab != null && laceGrabHandler != null) laceGrab.WhenStateChanged -= laceGrabHandler;
        if (laceHandGrab != null && laceHandGrabHandler != null) laceHandGrab.WhenStateChanged -= laceHandGrabHandler;
        if (bombGrab != null && bombGrabHandler != null) bombGrab.WhenStateChanged -= bombGrabHandler;
        if (bombHandGrab != null && bombHandGrabHandler != null) bombHandGrab.WhenStateChanged -= bombHandGrabHandler;
    }
}
