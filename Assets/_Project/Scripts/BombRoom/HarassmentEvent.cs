using UnityEngine;
using System.Collections;

/// <summary>
/// Random, non-text distraction. The bomb communicates the target colour; the
/// player recalls it and searches the room's fixed-colour wall buttons.
/// </summary>
public class HarassmentEvent : MonoBehaviour
{
    [Header("Random timing (only while the bomb is Running)")]
    [Min(1f)] public float initialEventMinDelay = 25f;
    [Min(1f)] public float initialEventMaxDelay = 40f;
    [Min(1f)] public float minInterval = 45f;
    [Min(1f)] public float maxInterval = 75f;
    [Min(1f)] public float minTimeToPress = 6f;
    [Min(1f)] public float maxTimeToPress = 22f;
    [Min(0f)] public float targetCueSeconds = 1.1f;
    [Range(0f, 1f)] public float chainProbability = 0f;
    [Min(0)] public int maxConsecutiveChains = 0;

    [Header("Consequences")]
    public float correctBonusSeconds = 10f;
    public float wrongButtonPenaltySeconds = 15f;
    public float timeoutPenaltySeconds = 15f;

    [Header("Vision effect")]
    [Range(0f, 1f)] public float obscuredVignette = 0f;
    [Range(-5f, 0f)] public float obscuredExposure = -1.5f;

    [Header("References (assigned by the room builder)")]
    public BombManager bomb;
    public HarassmentButton[] buttons;
    public VisibilityController visibilityController;
    public Renderer bombBodyRenderer;

    private TimerSystem timer;
    private BombUI bombUI;
    private HarassmentButton targetButton;
    private float nextEventIn;
    private float remainingToRespond;
    private int consecutiveChains;
    private bool eventActive;
    private bool subscribedToBomb;
    private bool subscribedToButtons;
    private bool warnedNoBomb;
    private bool firstEventScheduled;
    private bool eventScheduled;
    private Coroutine obscureRoutine;

    private void Start()
    {
        // The room builder assigns dynamically-created button references after
        // AddComponent has already run OnEnable. Bind again here once setup is
        // complete so a correct-colour poke can always finish the event.
        SubscribeButtons();
        TryBindBombManager();
    }

    private void OnDestroy()
    {
        if (bomb != null && subscribedToBomb) bomb.OnStateChanged -= OnBombStateChanged;
        RestoreEffects();
    }

    private void TryBindBombManager()
    {
        if (bomb == null && bombBodyRenderer != null)
            bomb = bombBodyRenderer.GetComponentInParent<BombManager>(true);
        if (bomb == null)
            bomb = FindAnyObjectByType<BombManager>(FindObjectsInactive.Include);
        if (bomb == null)
        {
            if (!warnedNoBomb)
            {
                Debug.LogWarning("[HarassmentEvent] Waiting for BombManager (it may be hidden in the intro box).", this);
                warnedNoBomb = true;
            }
            return;
        }

        timer = bomb.Timer;
        if (bombUI == null) bombUI = FindAnyObjectByType<BombUI>(FindObjectsInactive.Include);
        if (!subscribedToBomb)
        {
            bomb.OnStateChanged += OnBombStateChanged;
            subscribedToBomb = true;
            if (bomb.State == BombState.Running) ScheduleNextEvent();
        }
    }

    private void OnBombStateChanged(BombState state)
    {
        if (state == BombState.Running)
        {
            firstEventScheduled = false;
            ScheduleNextEvent();
            return;
        }

        eventScheduled = false;
        FinishEvent(scheduleAgain: false, allowChain: false);
    }

    private void Update()
    {
        if (bomb == null || !subscribedToBomb) TryBindBombManager();
        if (bomb == null || bomb.State != BombState.Running) return;
        // Start order differs between the hidden gift and the bomb. Scheduling
        // here also covers an already-running bomb when the event is enabled.
        if (!eventActive && !eventScheduled) ScheduleNextEvent();

        if (eventActive)
        {
            remainingToRespond -= Time.deltaTime;
            if (remainingToRespond <= 0f) OnTimeout();
            return;
        }

        nextEventIn -= Time.deltaTime;
        if (nextEventIn <= 0f) TriggerEvent();
    }

    private void ScheduleNextEvent()
    {
        eventActive = false;
        targetButton = null;
        eventScheduled = true;
        if (!firstEventScheduled)
        {
            float min = Mathf.Max(1f, initialEventMinDelay);
            float max = Mathf.Max(min, initialEventMaxDelay);
            nextEventIn = Random.Range(min, max);
            firstEventScheduled = true;
        }
        else
        {
            nextEventIn = Random.Range(Mathf.Max(1f, minInterval), Mathf.Max(minInterval, maxInterval));
        }
        Debug.Log($"[HarassmentEvent] Próximo apagón en {nextEventIn:F1}s (bomba={bomb?.State}).", this);
    }

    private void TriggerEvent()
    {
        if (bomb == null || bomb.State != BombState.Running) return;
        TriggerVisionEvent();
    }

    private void TriggerVisionEvent()
    {
        if (buttons == null || buttons.Length == 0)
        {
            Debug.LogError("[HarassmentEvent] No wall buttons assigned for the blindness event.", this);
            ScheduleNextEvent();
            return;
        }

        // Choose from valid button references so colour and socket can never
        // become mismatched by array holes or a partial scene rebuild.
        int validCount = 0;
        foreach (HarassmentButton button in buttons)
            if (button != null) validCount++;
        if (validCount == 0)
        {
            Debug.LogError("[HarassmentEvent] All assigned wall buttons are null.", this);
            ScheduleNextEvent();
            return;
        }

        int pick = Random.Range(0, validCount);
        targetButton = null;
        foreach (HarassmentButton button in buttons)
        {
            if (button == null) continue;
            if (pick-- == 0) { targetButton = button; break; }
        }

        eventActive = true;
        eventScheduled = false;
        remainingToRespond = Random.Range(Mathf.Max(1f, minTimeToPress), Mathf.Max(minTimeToPress, maxTimeToPress));

        // Briefly show both the cube colour and the matching button location
        // before the solid blackout so the player can memorize the target.
        if (bombUI != null) bombUI.SetEventGlow(targetButton.buttonColor, 2.2f);
        else if (bombBodyRenderer != null)
        {
            bombBodyRenderer.sharedMaterial.EnableKeyword("_EMISSION");
            bombBodyRenderer.sharedMaterial.SetColor("_EmissionColor", targetButton.buttonColor * 2.2f);
        }

        targetButton.SetHighlight(true);
        SFX.Tone(440f, 0.32f, 0.45f);
        if (visibilityController != null)
        {
            visibilityController.obscuredVignette = obscuredVignette;
            visibilityController.obscuredPostExposure = obscuredExposure;
            obscureRoutine = StartCoroutine(ObscureAfterTargetCue());
        }
        Debug.Log($"[HarassmentEvent] Apagón; objetivo={targetButton.buttonName}, tiempo={remainingToRespond:F1}s");
    }

    private IEnumerator ObscureAfterTargetCue()
    {
        yield return new WaitForSeconds(targetCueSeconds);
        obscureRoutine = null;
        if (bombUI != null) bombUI.ClearEventGlow();
        else if (bombBodyRenderer != null)
            bombBodyRenderer.sharedMaterial.SetColor("_EmissionColor", Color.black);
        if (eventActive && bomb != null && bomb.State == BombState.Running && visibilityController != null)
            visibilityController.SetObscured(true);
    }

    private void OnButtonPressed(HarassmentButton pressedButton)
    {
        if (!eventActive || pressedButton == null) return;

        if (pressedButton == targetButton)
        {
            if (timer != null) timer.AddTime(correctBonusSeconds);
            SFX.Play(SfxType.Solved, 0.8f);
            FinishEvent(scheduleAgain: true, allowChain: true);
            return;
        }

        // An incorrect poke gives feedback and a time penalty, but does NOT
        // dismiss the distraction. Only the matching colour button clears it.
        SFX.Play(SfxType.Denied, 0.8f);
        if (timer != null) timer.ApplyPenalty(wrongButtonPenaltySeconds);
    }

    private void OnTimeout()
    {
        if (timer != null) timer.ApplyPenalty(timeoutPenaltySeconds);
        SFX.Play(SfxType.Denied, 0.8f);
        // Keep the effect/target active after a timeout. A terminal bomb-state
        // transition still cleans it up; otherwise the player can continue.
        if (eventActive && bomb != null && bomb.State == BombState.Running)
            remainingToRespond = Random.Range(Mathf.Max(1f, minTimeToPress), Mathf.Max(minTimeToPress, maxTimeToPress));
    }

    private void FinishEvent(bool scheduleAgain, bool allowChain)
    {
        bool wasActive = eventActive;
        eventActive = false;
        if (targetButton != null) targetButton.SetHighlight(false);
        targetButton = null;
        if (obscureRoutine != null)
        {
            StopCoroutine(obscureRoutine);
            obscureRoutine = null;
        }

        if (wasActive) RestoreEffects();

        if (!scheduleAgain || bomb == null || bomb.State != BombState.Running)
        {
            eventScheduled = false;
            return;
        }

        if (allowChain && consecutiveChains < maxConsecutiveChains && Random.value < chainProbability)
        {
            consecutiveChains++;
            TriggerEvent();
            return;
        }

        consecutiveChains = 0;
        ScheduleNextEvent();
    }

    private void RestoreEffects()
    {
        if (visibilityController != null) visibilityController.SetObscured(false);
        if (bombUI != null) bombUI.ClearEventGlow();
        else if (bombBodyRenderer != null)
            bombBodyRenderer.sharedMaterial.SetColor("_EmissionColor", Color.black);
    }

    private void OnEnable()
    {
        SubscribeButtons();
    }

    private void OnDisable()
    {
        if (bomb != null && subscribedToBomb) bomb.OnStateChanged -= OnBombStateChanged;
        subscribedToBomb = false;
        if (subscribedToButtons && buttons != null)
            foreach (HarassmentButton button in buttons)
                if (button != null) button.OnPressed -= OnButtonPressed;
        subscribedToButtons = false;

        if (obscureRoutine != null)
        {
            StopCoroutine(obscureRoutine);
            obscureRoutine = null;
        }
        if (targetButton != null) targetButton.SetHighlight(false);
        eventActive = false;
        eventScheduled = false;
        firstEventScheduled = false;
        targetButton = null;
        RestoreEffects();
    }

    private void SubscribeButtons()
    {
        if (subscribedToButtons || buttons == null) return;
        foreach (HarassmentButton button in buttons)
            if (button != null) button.OnPressed += OnButtonPressed;
        subscribedToButtons = true;
    }
}
