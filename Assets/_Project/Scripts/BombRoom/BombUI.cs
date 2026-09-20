using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;

/// <summary>
/// HUD en mundo de la bomba: cuenta regresiva, LED de errores (strikes),
/// feedback de cortes, mensaje de estado y efectos de victoria/explosión.
/// Los elementos (canvas, textos, LEDs, materiales) están construidos en el
/// editor; en tiempo de ejecución solo se enganchan los eventos y se clonan
/// los materiales para no tocar los assets.
/// </summary>
public class BombUI : MonoBehaviour
{
    [Header("Referencias (asignadas por el constructor de la escena)")]
    public BombManager bomb;
    public Renderer[] strikeLeds;
    public Renderer bombBodyRenderer;
    public Color bombBodyColor = new Color(0.09f, 0.09f, 0.11f);

    [Header("Textos del HUD")]
    public TextMeshProUGUI timeText;
    public TextMeshProUGUI statusText;
    public TextMeshProUGUI feedbackText;

    private TimerSystem timer;
    private StrikeSystem strikes;
    private readonly List<CablesModule> cables = new List<CablesModule>();
    private readonly List<SimonModule> simon = new List<SimonModule>();
    private readonly List<BombArmButton> armButtons = new List<BombArmButton>();
    private readonly List<MazeModule> mazes = new List<MazeModule>();

    // Emisión del cuerpo del cubo cuando se ROZA o se AGARRA: feedback visual
    // de que la mano está haciendo contacto (hover = azul, select = verde).
    private HandGrabInteractable bodyHandGrab;
    private GrabInteractable bombGrab;
    private InteractableState hgState = InteractableState.Normal;
    private InteractableState gState = InteractableState.Normal;
    private bool flashActive;

    private readonly List<Material> ledMats = new List<Material>();
    private Color bombBaseEmission;

    private Coroutine feedbackRoutine;

    private void Awake()
    {
        if (bomb == null) bomb = FindAnyObjectByType<BombManager>();
        if (timeText == null || statusText == null || feedbackText == null) BuildCanvas();
    }

    private void Start()
    {
        if (bomb == null) bomb = FindAnyObjectByType<BombManager>();

        timer = bomb != null ? bomb.Timer : null;
        strikes = bomb != null ? bomb.Strikes : null;

        cables.Clear();
        cables.AddRange(FindObjectsByType<CablesModule>());

        simon.Clear();
        simon.AddRange(FindObjectsByType<SimonModule>());

        armButtons.Clear();
        armButtons.AddRange(FindObjectsByType<BombArmButton>());

        mazes.Clear();
        mazes.AddRange(FindObjectsByType<MazeModule>());

        // Interactables del cubo para el feedback de contacto (emisión al tocar/agarrar).
        bodyHandGrab = null;
        bombGrab = null;
        if (bomb != null)
        {
            Transform body = bomb.transform.Find("Body");
            if (body != null) bodyHandGrab = body.GetComponent<HandGrabInteractable>();
            bombGrab = bomb.GetComponent<GrabInteractable>();
        }
        hgState = InteractableState.Normal;
        gState = InteractableState.Normal;

        // Instancias propias de los materiales para no ensuciar los assets.
        ledMats.Clear();
        if (strikeLeds != null)
        {
            for (int i = 0; i < strikeLeds.Length; i++)
            {
                if (strikeLeds[i] == null) continue;
                Material m = new Material(strikeLeds[i].sharedMaterial);
                m.SetColor("_BaseColor", new Color(0.13f, 0.13f, 0.14f));
                m.DisableKeyword("_EMISSION");
                m.SetColor("_EmissionColor", Color.black);
                strikeLeds[i].sharedMaterial = m;
                ledMats.Add(m);
            }
        }

        if (bombBodyRenderer != null)
        {
            bombBodyRenderer.sharedMaterial = new Material(bombBodyRenderer.sharedMaterial);
            bombBaseEmission = Color.black;
        }

        NormalizeHudScale();

        Subscribe();

        UpdateLeds();
        UpdateStatus(bomb != null ? bomb.State : BombState.Idle);
    }

    private void Subscribe()
    {
        if (timer != null)
        {
            timer.OnTimeChanged += OnTimeChanged;
        }
        if (strikes != null)
        {
            strikes.OnStrikeAdded += OnStrikeAdded;
        }
        if (bomb != null)
        {
            bomb.OnStateChanged += UpdateStatus;
            bomb.OnReset += OnBombReset;
        }
        foreach (var c in cables)
        {
            if (c == null) continue;
            c.OnCableConnected += OnCableConnected;
            c.OnCableWrong += OnCableWrong;
        }
        foreach (var s in simon)
        {
            if (s == null) continue;
            s.OnSimonWrong += OnSimonWrong;
            s.OnRoundComplete += OnRoundComplete;
            s.OnSimonComplete += OnSimonComplete;
        }
        foreach (var b in armButtons)
        {
            if (b == null) continue;
            b.OnPressedDenied += OnArmDenied;
        }
        foreach (var m in mazes)
        {
            if (m == null) continue;
            m.OnBallGranted += OnBallGrantedHint;
        }
        if (bodyHandGrab != null) bodyHandGrab.WhenStateChanged += OnHandGrabStateChanged;
        if (bombGrab != null) bombGrab.WhenStateChanged += OnGrabStateChanged;
    }

    private void Unsubscribe()
    {
        if (timer != null) timer.OnTimeChanged -= OnTimeChanged;
        if (strikes != null) strikes.OnStrikeAdded -= OnStrikeAdded;
        if (bomb != null)
        {
            bomb.OnStateChanged -= UpdateStatus;
            bomb.OnReset -= OnBombReset;
        }
        foreach (var c in cables)
        {
            if (c == null) continue;
            c.OnCableConnected -= OnCableConnected;
            c.OnCableWrong -= OnCableWrong;
        }
        foreach (var s in simon)
        {
            if (s == null) continue;
            s.OnSimonWrong -= OnSimonWrong;
            s.OnRoundComplete -= OnRoundComplete;
            s.OnSimonComplete -= OnSimonComplete;
        }
        foreach (var b in armButtons)
        {
            if (b == null) continue;
            b.OnPressedDenied -= OnArmDenied;
        }
        foreach (var m in mazes)
        {
            if (m == null) continue;
            m.OnBallGranted -= OnBallGrantedHint;
        }
        if (bodyHandGrab != null) bodyHandGrab.WhenStateChanged -= OnHandGrabStateChanged;
        if (bombGrab != null) bombGrab.WhenStateChanged -= OnGrabStateChanged;
    }

    private void OnDestroy()
    {
        Unsubscribe();
    }

    // ------------------------------------------------------------------ Timer

    private void OnTimeChanged(float timeLeft)
    {
        int rem = Mathf.CeilToInt(timeLeft);
        timeText.text = FormatSeconds(rem);

        if (rem <= 10) timeText.color = new Color(1f, 0.28f, 0.25f);
        else if (rem <= 30) timeText.color = new Color(1f, 0.82f, 0.2f);
        else timeText.color = new Color(0.35f, 1f, 0.4f);

        if (bomb != null && bomb.State == BombState.Running && rem <= 20 && rem > 0)
            SFX.Play(SfxType.Tick, 0.3f);
    }

    // ------------------------------------------------------------------ Estado

    private void UpdateStatus(BombState state)
    {
        switch (state)
        {
            case BombState.Idle:
                statusText.text = "ARMANDO BOMBA…";
                statusText.color = Color.gray;
                break;

            case BombState.Running:
                var parts = new List<string>();
                if (cables.Count > 0)
                {
                    int done = 0;
                    foreach (var c in cables)
                        if (c != null) done += c.ConnectedCount;
                    parts.Add($"cables {done}/3");
                }
                if (simon.Count > 0)
                {
                    int done = 0, total = 0;
                    foreach (var s in simon)
                    {
                        if (s == null) continue;
                        done += s.RoundsCompleted;
                        total += s.TotalRounds;
                    }
                    parts.Add($"simón {done}/{total}");
                }
                statusText.text = parts.Count > 0 ? "Resuelve: " + string.Join(" · ", parts) : "Resuelve los módulos";
                statusText.color = Color.white;
                break;

            case BombState.Finalizado:
                statusText.text = "¡PULSA EL BOTÓN ROJO!";
                statusText.color = new Color(1f, 0.55f, 0.2f);
                ShowFeedback("LISTO [OK]", new Color(1f, 0.75f, 0.2f));
                SFX.Play(SfxType.Solved, 0.9f);
                break;

            case BombState.Defused:
                statusText.text = "BOMBA DESARMADA ✓";
                statusText.color = new Color(0.35f, 1f, 0.4f);
                ShowFeedback("DESARMADA!", new Color(0.35f, 1f, 0.4f));
                SFX.Play(SfxType.Solved, 0.9f);
                break;

            case BombState.Exploded:
                statusText.text = "BOOM";
                statusText.color = new Color(1f, 0.2f, 0.15f);
                StartCoroutine(ExplosionFx());
                break;
        }
    }

    // ------------------------------------------------------------------ Strikes

    private void OnStrikeAdded(int count)
    {
        UpdateLeds();
        ShowFeedback("ERROR ¡BOOBY TRAP!", new Color(1f, 0.4f, 0.25f));
        SFX.Play(SfxType.Strike, 1f);
        if (bombBodyRenderer != null)
        {
            StopAllCoroutines();
            StartCoroutine(StrikeFlash());
        }
    }

    private IEnumerator StrikeFlash()
    {
        flashActive = true;
        float t = 0f;
        while (t < 0.35f)
        {
            t += Time.deltaTime;
            float e = Mathf.Sin(t * 30f) > 0f ? 1.4f : 0f;
            bombBodyRenderer.sharedMaterial.SetColor("_EmissionColor", new Color(1f, 0.2f, 0.05f) * e);
            yield return null;
        }
        flashActive = false;
        UpdateBodyHighlight();
    }

    // ------------------------------------------------------------------ Contacto (emisión del cubo)

    private void OnHandGrabStateChanged(InteractableStateChangeArgs args)
    {
        hgState = args.NewState;
        UpdateBodyHighlight();
    }

    private void OnGrabStateChanged(InteractableStateChangeArgs args)
    {
        gState = args.NewState;
        UpdateBodyHighlight();
    }

    /// <summary>
    /// Enciende la emisión del cuerpo del cubo según el contacto: rozado (hover)
    /// azul suave, agarrado (select) verde intenso. Se salta mientras parpadea
    /// el flash de strike para no pisarlo.
    /// </summary>
    private void UpdateBodyHighlight()
    {
        if (bombBodyRenderer == null || flashActive) return;
        if (bomb != null && bomb.State != BombState.Running)
        {
            bombBodyRenderer.sharedMaterial.SetColor("_EmissionColor", bombBaseEmission);
            return;
        }

        bool select = hgState == InteractableState.Select || gState == InteractableState.Select;
        bool hover = !select
                     && (hgState == InteractableState.Hover || gState == InteractableState.Hover);

        Color emission;
        if (select) emission = new Color(0.3f, 1f, 0.45f) * 1.4f;
        else if (hover) emission = new Color(0.35f, 0.75f, 1f) * 0.6f;
        else emission = bombBaseEmission;

        bombBodyRenderer.sharedMaterial.EnableKeyword("_EMISSION");
        bombBodyRenderer.sharedMaterial.SetColor("_EmissionColor", emission);
    }

    private void UpdateLeds()
    {
        if (strikeLeds == null) return;
        int lit = strikes != null ? strikes.Strikes : 0;
        for (int i = 0; i < strikeLeds.Length; i++)
        {
            if (strikeLeds[i] == null || ledMats.Count <= i || ledMats[i] == null) continue;
            if (i < lit)
            {
                ledMats[i].SetColor("_BaseColor", new Color(1f, 0.15f, 0.1f));
                ledMats[i].EnableKeyword("_EMISSION");
                ledMats[i].SetColor("_EmissionColor", new Color(1f, 0.15f, 0.1f) * 2.5f);
            }
            else
            {
                ledMats[i].SetColor("_BaseColor", new Color(0.13f, 0.13f, 0.14f));
                ledMats[i].DisableKeyword("_EMISSION");
                ledMats[i].SetColor("_EmissionColor", Color.black);
            }
        }
    }

    // ------------------------------------------------------------------ Cables

    private void OnCableConnected(Color color)
    {
        ShowFeedback($"CONECTADO {BombRoomPalette.NameOf(color)} [OK]", new Color(0.35f, 1f, 0.4f));
        RefreshStatus();
    }

    private void OnCableWrong()
    {
        ShowFeedback("CABLE EQUIVOCADO [!]", new Color(1f, 0.45f, 0.2f));
        RefreshStatus();
    }

    // ------------------------------------------------------------------ Simón

    private void OnSimonWrong()
    {
        ShowFeedback("SECUENCIA MAL [X]", new Color(1f, 0.45f, 0.2f));
        RefreshStatus();
    }

    private void OnRoundComplete(int round, int total)
    {
        ShowFeedback($"RONDA {round}/{total} OK!", new Color(0.35f, 1f, 0.4f));
        RefreshStatus();
    }

    private void OnSimonComplete()
    {
        ShowFeedback("SIMON OK!", new Color(0.35f, 1f, 0.4f));
        RefreshStatus();
    }

    // ------------------------------------------------------------------ Bolita

    private void OnBallGrantedHint()
    {
        ShowFeedback("¡SIMÓN OK! LA BOLITA CAYÓ EN EL LABERINTO → CARA +X, BOCA SUPERIOR",
            new Color(0.4f, 0.85f, 1f), 6f);
        RefreshStatus();
    }

    private void RefreshStatus()
    {
        if (bomb != null) UpdateStatus(bomb.State);
    }

    private void OnArmDenied()
    {
        ShowFeedback("¡Todavía no! Resuelve los módulos", new Color(1f, 0.6f, 0.3f));
    }

    private void OnBombReset()
    {
        UpdateLeds();
        timeText.text = FormatSeconds(timer != null ? timer.RemainingSeconds : 0);
        flashActive = false;
        hgState = InteractableState.Normal;
        gState = InteractableState.Normal;
        UpdateBodyHighlight();
        StopAllCoroutines();
        ShowFeedback("", Color.white);
    }

    // ------------------------------------------------------------------ Feedback

    private void ShowFeedback(string msg, Color color, float duration = 2f)
    {
        feedbackText.text = msg;
        feedbackText.color = color;
        if (feedbackRoutine != null) StopCoroutine(feedbackRoutine);
        if (string.IsNullOrEmpty(msg)) return;
        feedbackRoutine = StartCoroutine(ClearFeedbackAfter(duration));
    }

    private IEnumerator ClearFeedbackAfter(float seconds)
    {
        yield return new WaitForSeconds(seconds);
        feedbackText.text = "";
    }

    // ------------------------------------------------------------------ Explosión

    private IEnumerator ExplosionFx()
    {
        const float duration = 0.9f;
        float t = 0f;

        // Pulso de escala de la bomba (impacto).
        Vector3 baseScale = bombBodyRenderer != null ? bombBodyRenderer.transform.localScale : Vector3.one;
        while (t < duration)
        {
            t += Time.deltaTime;
            float p = t / duration;
            float s = 1f + Mathf.Sin(p * Mathf.PI) * 0.18f;
            if (bombBodyRenderer != null)
                bombBodyRenderer.transform.localScale = baseScale * s;

            bombBodyRenderer?.sharedMaterial.SetColor("_EmissionColor",
                Color.Lerp(bombBaseEmission, new Color(1f, 0.3f, 0.05f) * 2f, 1f - p));
            yield return null;
        }

        if (bombBodyRenderer != null)
        {
            bombBodyRenderer.transform.localScale = baseScale;
            bombBodyRenderer.sharedMaterial.SetColor("_EmissionColor", Color.black);
        }

        SFX.Play(SfxType.Explosion, 1f);

        Light flash = new GameObject("BoomFlash").AddComponent<Light>();
        flash.type = LightType.Point;
        flash.color = new Color(1f, 0.55f, 0.12f);
        flash.range = 7f;
        flash.intensity = 8f;
        flash.transform.position = bombBodyRenderer != null
            ? bombBodyRenderer.transform.position
            : transform.position;

        float f = 0f;
        while (f < 0.7f)
        {
            f += Time.deltaTime;
            flash.intensity = Mathf.Lerp(8f, 0f, f / 0.7f);
            yield return null;
        }
        Destroy(flash.gameObject);
    }

    // ------------------------------------------------------------------ Canvas (respaldo)

    private void BuildCanvas()
    {
        GameObject canvasGo = new GameObject("BombHUDCanvas");
        canvasGo.transform.SetParent(transform, false);
        canvasGo.transform.localPosition = new Vector3(0f, 0.02f, 0.05f);
        canvasGo.transform.localRotation = Quaternion.identity;
        canvasGo.transform.localScale = new Vector3(0.0032f, 0.0032f, 0.0032f);

        Canvas canvas = canvasGo.AddComponent<Canvas>();
        canvas.renderMode = RenderMode.WorldSpace;

        timeText = CreateText(canvasGo.transform, "TimeText", new Vector2(0, 40), new Vector2(300, 130), 160, Color.green);
        statusText = CreateText(canvasGo.transform, "StatusText", new Vector2(0, -95), new Vector2(340, 60), 52, Color.white);
        feedbackText = CreateText(canvasGo.transform, "FeedbackText", new Vector2(0, -175), new Vector2(360, 50), 48, Color.white);
    }

    private static TextMeshProUGUI CreateText(Transform parent, string name, Vector2 position, Vector2 size, float fontSize, Color color)
    {
        GameObject go = new GameObject(name, typeof(RectTransform));
        go.transform.SetParent(parent, false);

        RectTransform rt = (RectTransform)go.transform;
        rt.anchorMin = rt.anchorMax = new Vector2(0.5f, 0.5f);
        rt.pivot = new Vector2(0.5f, 0.5f);
        rt.anchoredPosition = position;
        rt.sizeDelta = size;

        TextMeshProUGUI text = go.AddComponent<TextMeshProUGUI>();
        text.alignment = TextAlignmentOptions.Center;
        text.fontSize = fontSize;
        text.color = color;
        text.overflowMode = TextOverflowModes.Overflow;
        if (TMP_Settings.defaultFontAsset != null)
            text.font = TMP_Settings.defaultFontAsset;

        return text;
    }

    // ------------------------------------------------------------------ Util

    /// <summary>
    /// Escala el canvas del HUD para que el reloj tenga ~18 cm de alto sea
    /// cual sea el tamaño de los rects autorados en el editor: así el contador
    /// se lee bien flotando sobre la bomba.
    /// </summary>
    private void NormalizeHudScale()
    {
        Transform canvas = transform.Find("BombHUDCanvas");
        if (canvas == null || timeText == null || timeText.rectTransform == null) return;
        float h = timeText.rectTransform.rect.height;
        float scale = 0.18f / Mathf.Max(0.001f, h);
        canvas.localScale = new Vector3(scale, scale, scale);
    }

    private void LateUpdate()
    {
        // HUD flotante: siempre por ENCIMA de la bomba (arriba del mundo, NO gira
        // con el cubo al inclinarlo) y orientado de cara al jugador. Así el
        // contador se ve desde cualquier lado mientras giras el cubo.
        Transform billboard = transform.Find("BombHUDCanvas");
        Camera cam = Camera.main;
        if (billboard != null && cam != null && bomb != null)
        {
            billboard.position = bomb.transform.position + Vector3.up * 0.60f;
            Vector3 toCanvas = billboard.position - cam.transform.position;
            if (toCanvas.sqrMagnitude > 0.0001f)
                billboard.rotation = Quaternion.LookRotation(toCanvas, cam.transform.up);
        }

        if (timer == null || bomb == null || timeText == null) return;
        if (bomb.State == BombState.Running && timer.RemainingSeconds <= 10)
        {
            timeText.alpha = Mathf.Sin(Time.timeSinceLevelLoad * 7f) > 0f ? 1f : 0.28f;
        }
        else
        {
            timeText.alpha = 1f;
        }
    }

    private static string FormatSeconds(int seconds)
    {
        return Mathf.Max(0, seconds).ToString();
    }
}