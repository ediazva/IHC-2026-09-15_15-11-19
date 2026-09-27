using UnityEngine;

/// <summary>
/// Random, non-text distraction. The bomb communicates the target colour; the
/// player recalls it and searches the room's fixed-colour wall buttons.
/// </summary>
public class HarassmentEvent : MonoBehaviour
{
    [Header("Random timing (only while the bomb is Running)")]
    [Min(1f)] public float minInterval = 8f;
    [Min(1f)] public float maxInterval = 55f;
    [Min(1f)] public float minTimeToPress = 6f;
    [Min(1f)] public float maxTimeToPress = 22f;
    [Range(0f, 1f)] public float chainProbability = 0.15f;
    [Min(0)] public int maxConsecutiveChains = 1;

    [Header("Consequences")]
    public float correctBonusSeconds = 10f;
    public float wrongButtonPenaltySeconds = 15f;
    public float timeoutPenaltySeconds = 15f;

    [Header("Vision effect")]
    [Range(0f, 1f)] public float obscuredVignette = 0.78f;
    [Range(-5f, 0f)] public float obscuredExposure = -1.5f;

    [Header("References (assigned by the room builder)")]
    public HarassmentButton[] buttons;
    public VisibilityController visibilityController;
    public Renderer bombBodyRenderer;

    private BombManager bomb;
    private TimerSystem timer;
    private BombUI bombUI;
    private HarassmentButton targetButton;
    private float nextEventIn;
    private float remainingToRespond;
    private int consecutiveChains;
    private bool eventActive;
    private bool subscribedToBomb;
    private bool warnedNoBomb;

    private void Start()
    {
        TryBindBombManager();
    }

    private void OnDestroy()
    {
        if (bomb != null && subscribedToBomb) bomb.OnStateChanged -= OnBombStateChanged;
        RestoreEffects();
    }

    private void TryBindBombManager()
    {
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
            ScheduleNextEvent();
            return;
        }

        FinishEvent(scheduleAgain: false, allowChain: false);
    }

    private void Update()
    {
        if (bomb == null || !subscribedToBomb) TryBindBombManager();
        if (bomb == null || bomb.State != BombState.Running) return;

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
        nextEventIn = Random.Range(Mathf.Max(1f, minInterval), Mathf.Max(minInterval, maxInterval));
    }

    private void TriggerEvent()
    {
        if (bomb == null || bomb.State != BombState.Running) return;
        if (buttons == null || buttons.Length == 0)
        {
            Debug.LogError("[HarassmentEvent] No wall buttons assigned; rescheduling instead of retrying every frame.", this);
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
        remainingToRespond = Random.Range(Mathf.Max(1f, minTimeToPress), Mathf.Max(minTimeToPress, maxTimeToPress));

        // Keep all wall buttons at their normal colour: searching/remembering
        // is part of the challenge, so there is deliberately no target marker.
        if (bombUI != null) bombUI.SetEventGlow(targetButton.buttonColor, 2.2f);
        else if (bombBodyRenderer != null)
        {
            bombBodyRenderer.sharedMaterial.EnableKeyword("_EMISSION");
            bombBodyRenderer.sharedMaterial.SetColor("_EmissionColor", targetButton.buttonColor * 2.2f);
        }

        if (visibilityController != null)
        {
            visibilityController.obscuredVignette = obscuredVignette;
            visibilityController.obscuredPostExposure = obscuredExposure;
            visibilityController.SetObscured(true);
        }

        SFX.Tone(440f, 0.32f, 0.45f);
        Debug.Log($"[HarassmentEvent] Active; target colour={targetButton.buttonName}, time={remainingToRespond:F1}s");
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
        SFX.Play(SfxType.Strike, 0.8f);
        // Keep the effect/target active after a timeout. A terminal bomb-state
        // transition still cleans it up; otherwise the player can continue.
        if (eventActive && bomb != null && bomb.State == BombState.Running)
            remainingToRespond = Random.Range(Mathf.Max(1f, minTimeToPress), Mathf.Max(minTimeToPress, maxTimeToPress));
    }

    private void FinishEvent(bool scheduleAgain, bool allowChain)
    {
        bool wasActive = eventActive;
        eventActive = false;
        targetButton = null;

        if (wasActive) RestoreEffects();

        if (!scheduleAgain || bomb == null || bomb.State != BombState.Running) return;

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
        if (buttons == null) return;
        foreach (HarassmentButton button in buttons)
            if (button != null) button.OnPressed += OnButtonPressed;
    }

    private void OnDisable()
    {
        if (buttons != null)
            foreach (HarassmentButton button in buttons)
                if (button != null) button.OnPressed -= OnButtonPressed;

        eventActive = false;
        RestoreEffects();
    }
}
