using System;
using System.Collections;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;
using UnityEngine;
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

    [Header("Reveal")]
    public float pullDistance = 0.18f;
    public float boxHeight = 0.68f;
    public float floatHeight = 0.45f;
    public float riseSpeed = 1.8f;
    public float spinDegreesPerSecond = 55f;

    private Vector3 laceStartPosition;
    private Vector3 bombRestPosition;
    private Quaternion bombRestRotation;
    private Vector3 laceLocalPosition;
    private Quaternion laceLocalRotation;
    private bool revealed;
    private bool floating;
    private bool bombActivated;

    private GrabInteractable laceGrab;
    private GrabInteractable bombGrab;
    private HandGrabInteractable bombHandGrab;
    private Action<InteractableStateChangeArgs> laceHandler;
    private Action<InteractableStateChangeArgs> bombGrabHandler;
    private Action<InteractableStateChangeArgs> bombHandGrabHandler;

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
            bomb.gameObject.SetActive(false);
        }
    }

    private void Start()
    {
        SnapWrappingToTable();
        laceGrab = laceHandle != null ? laceHandle.GetComponent<GrabInteractable>() : null;
        laceHandler = Isdk.Bind(laceGrab, null, CheckPulledFarEnough, laceHandler);

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
#if UNITY_EDITOR
        if (!revealed && Keyboard.current != null && Keyboard.current.spaceKey.wasPressedThisFrame)
            Reveal();
#endif

        if (!revealed && laceHandle != null)
            CheckPulledFarEnough();

        if (!floating || bomb == null) return;

        Vector3 target = bombRestPosition + Vector3.up * floatHeight;
        bomb.position = Vector3.MoveTowards(bomb.position, target, riseSpeed * Time.deltaTime);
        bomb.Rotate(Vector3.up, spinDegreesPerSecond * Time.deltaTime, Space.World);
    }

    private void CheckPulledFarEnough()
    {
        if (revealed || laceHandle == null) return;
        if (Vector3.Distance(laceHandle.position, laceStartPosition) < pullDistance) return;

        Reveal();
    }

    private void Reveal()
    {
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
        if (bomb != null) bomb.rotation = bombRestRotation;
    }

    private void SetBombInteractionEnabled(bool enabled)
    {
        if (bombGrab != null) bombGrab.enabled = enabled;
        if (bombHandGrab != null) bombHandGrab.enabled = enabled;
    }

    private void OnDestroy()
    {
        if (laceGrab != null && laceHandler != null) laceGrab.WhenStateChanged -= laceHandler;
        if (bombGrab != null && bombGrabHandler != null) bombGrab.WhenStateChanged -= bombGrabHandler;
        if (bombHandGrab != null && bombHandGrabHandler != null) bombHandGrab.WhenStateChanged -= bombHandGrabHandler;
    }
}
