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
    public GameObject giftBody;
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

    [Header("Touch reveal")]
    [Min(0.1f)] public float revealTransitionDuration = 0.55f;
    public Color giftGlowColor = new Color(1f, 0.72f, 0.18f);
    [Min(0f)] public float giftGlowIntensity = 1.5f;

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
    private readonly List<PokeInteractable> giftPokes = new List<PokeInteractable>();
    private readonly List<Action<InteractableStateChangeArgs>> giftPokeHandlers = new List<Action<InteractableStateChangeArgs>>();
    private readonly List<GameObject> giftPokeHelpers = new List<GameObject>();
    private Renderer giftRenderer;
    private Material giftMaterial;
    private Vector3 giftBaseScale;
    private Coroutine revealTransition;

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
        if (laceHandle == null) return;
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

        if (giftBody != null)
        {
            giftRenderer = giftBody.GetComponentInChildren<Renderer>();
            if (giftRenderer != null && giftRenderer.sharedMaterial != null)
            {
                giftMaterial = new Material(giftRenderer.sharedMaterial);
                giftRenderer.sharedMaterial = giftMaterial;
                giftMaterial.EnableKeyword("_EMISSION");
            }
            giftBaseScale = giftBody.transform.localScale;
            SetupGiftPokeSurfaces();
        }

        if (skipPresentIntro)
            Reveal();
    }

    private void SetupGiftPokeSurfaces()
    {
        Collider bodyCollider = giftBody != null ? giftBody.GetComponent<Collider>() : null;
        if (bodyCollider == null)
        {
            Debug.LogError("[PresentBoxReveal] Gift body has no collider; cannot poke it.", this);
            return;
        }

        Vector3 size = bodyCollider is BoxCollider box ? box.size :
            new Vector3(bodyCollider.bounds.size.x / Mathf.Max(0.001f, giftBody.transform.lossyScale.x),
                bodyCollider.bounds.size.y / Mathf.Max(0.001f, giftBody.transform.lossyScale.y),
                bodyCollider.bounds.size.z / Mathf.Max(0.001f, giftBody.transform.lossyScale.z));
        float thickness = Mathf.Min(size.x, size.y, size.z) * 0.12f;

        // One poke plane per face, all bound to the same reveal action. The
        // gift prefab is one mesh, so we add invisible trigger/collider helpers
        // instead of guessing which imported face the player can reach.
        AddGiftPokeFace("GiftPoke_Front", new Vector3(0f, 0f, size.z * 0.5f),
            new Vector3(size.x, size.y, thickness), Quaternion.identity);
        AddGiftPokeFace("GiftPoke_Back", new Vector3(0f, 0f, -size.z * 0.5f),
            new Vector3(size.x, size.y, thickness), Quaternion.LookRotation(Vector3.back, Vector3.up));
        AddGiftPokeFace("GiftPoke_Left", new Vector3(-size.x * 0.5f, 0f, 0f),
            new Vector3(size.z, size.y, thickness), Quaternion.LookRotation(Vector3.left, Vector3.up));
        AddGiftPokeFace("GiftPoke_Right", new Vector3(size.x * 0.5f, 0f, 0f),
            new Vector3(size.z, size.y, thickness), Quaternion.LookRotation(Vector3.right, Vector3.up));
        AddGiftPokeFace("GiftPoke_Top", new Vector3(0f, size.y * 0.5f, 0f),
            new Vector3(size.x, size.z, thickness), Quaternion.LookRotation(Vector3.up, Vector3.forward));
        AddGiftPokeFace("GiftPoke_Bottom", new Vector3(0f, -size.y * 0.5f, 0f),
            new Vector3(size.x, size.z, thickness), Quaternion.LookRotation(Vector3.down, Vector3.back));
    }

    private void AddGiftPokeFace(string surfaceName, Vector3 localPosition, Vector3 localScale, Quaternion localRotation)
    {
        GameObject face = new GameObject(surfaceName, typeof(BoxCollider));
        face.layer = giftBody.layer;
        face.transform.SetParent(giftBody.transform, false);
        face.transform.localPosition = localPosition;
        face.transform.localRotation = localRotation;
        face.transform.localScale = localScale;
        face.GetComponent<BoxCollider>().isTrigger = true;

        PokeInteractable poke = Isdk.Poke(face, Vector3.forward);
        Action<InteractableStateChangeArgs> handler = Isdk.Bind(poke, Reveal, null);
        giftPokeHelpers.Add(face);
        giftPokes.Add(poke);
        giftPokeHandlers.Add(handler);
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

        if (!revealed && laceHandle != null)
        {
            UpdateOvrPinchPull(OVRInput.Axis1D.PrimaryIndexTrigger, OVRInput.Controller.LHand, ref leftPinching, ref leftPinchStartedOnLace, ref leftPinchStart);
            UpdateOvrPinchPull(OVRInput.Axis1D.SecondaryIndexTrigger, OVRInput.Controller.RHand, ref rightPinching, ref rightPinchStartedOnLace, ref rightPinchStart);
            CheckPulledFarEnough();
        }

        if (floating && bomb != null)
            bomb.Rotate(Vector3.up, spinDegreesPerSecond * Time.deltaTime, Space.World);

        if (!revealed && giftMaterial != null)
        {
            float pulse = 0.35f + 0.55f * (0.5f + 0.5f * Mathf.Sin(Time.time * 3.5f));
            giftMaterial.SetColor("_EmissionColor", giftGlowColor * (giftGlowIntensity * pulse));
        }
    }

    private void CheckPulledFarEnough()
    {
        if (revealed || laceHandle == null) return;
        if (Vector3.Distance(laceHandle.position, laceStartPosition) < pullDistance) return;

        Reveal();
    }

    private void OnUpdatedHands(XRHandSubsystem subsystem, XRHandSubsystem.UpdateSuccessFlags updateSuccessFlags, XRHandSubsystem.UpdateType updateType)
    {
        if (revealed || laceHandle == null || updateType != XRHandSubsystem.UpdateType.Dynamic) return;

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
        if (revealTransition != null) StopCoroutine(revealTransition);
        revealTransition = StartCoroutine(PlayGiftRevealTransition());
    }

    private IEnumerator PlayGiftRevealTransition()
    {
        SFX.Tone(660f, 0.28f, 0.65f);
        float duration = Mathf.Max(0.1f, revealTransitionDuration);
        float t = 0f;
        while (t < duration)
        {
            t += Time.unscaledDeltaTime;
            float progress = Mathf.SmoothStep(0f, 1f, Mathf.Clamp01(t / duration));
            if (giftBody != null)
                giftBody.transform.localScale = Vector3.Lerp(giftBaseScale, giftBaseScale * 0.025f, progress);
            if (giftMaterial != null)
                giftMaterial.SetColor("_EmissionColor", giftGlowColor * Mathf.Lerp(giftGlowIntensity, 4f, progress));
            yield return null;
        }

        if (wrappingRoot != null) wrappingRoot.SetActive(false);
        revealTransition = null;
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
        for (int i = 0; i < giftPokes.Count; i++)
            if (giftPokes[i] != null && giftPokeHandlers[i] != null)
                giftPokes[i].WhenStateChanged -= giftPokeHandlers[i];
        for (int i = 0; i < giftPokeHelpers.Count; i++)
            if (giftPokeHelpers[i] != null) Destroy(giftPokeHelpers[i]);
        if (giftMaterial != null) Destroy(giftMaterial);
    }
}
