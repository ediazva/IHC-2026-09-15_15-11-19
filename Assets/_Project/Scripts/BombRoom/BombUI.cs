using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;

/// <summary>
/// HUD dual de la bomba:
///  - Controller HUD (principal): anclado a mano derecha, timer grande MM:SS, panel oscuro
///  - Cube HUD (secundario): en cara superior del cubo, solo timer pequeño, gira con el cubo
///  - Explosión cinemática usando prefab Mirza Beig
///  - Feedback visual de strikes, contactos, estado
/// </summary>
public class BombUI : MonoBehaviour
{
    [Header("Referencias (asignadas por el constructor de la escena)")]
    public BombManager bomb;
    public Renderer[] strikeLeds;
    public Renderer bombBodyRenderer;
    public Color bombBodyColor = new Color(0.09f, 0.09f, 0.11f);

    [Header("Prefab explosión fuego (Mirza Beig)")]
    public GameObject explosionFirePrefab;

    [Header("Textos del HUD (se crean en runtime si no existen)")]
    public TextMeshProUGUI controllerTimeText;
    public TextMeshProUGUI cubeTimeText;
    public TextMeshProUGUI statusText;
    public TextMeshProUGUI feedbackText;

    private TimerSystem timer;
    private StrikeSystem strikes;
    private readonly List<CablesModule> cables = new List<CablesModule>();
    private readonly List<SimonModule> simon = new List<SimonModule>();
    private readonly List<BombArmButton> armButtons = new List<BombArmButton>();
    private readonly List<MazeModule> mazes = new List<MazeModule>();

    // Emisión del cuerpo del cubo (hover/select)
    private HandGrabInteractable bodyHandGrab;
    private GrabInteractable bombGrab;
    private InteractableState hgState = InteractableState.Normal;
    private InteractableState gState = InteractableState.Normal;
    private bool flashActive;

    private readonly List<Material> ledMats = new List<Material>();
    private Color bombBaseEmission;

    // HUDs
    private GameObject controllerHudGo;
    private GameObject cubeHudGo;
    private Canvas controllerCanvas;
    private Canvas cubeCanvas;
    private Coroutine feedbackRoutine;

    private void Awake()
    {
        if (bomb == null) bomb = FindAnyObjectByType<BombManager>();
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

        // Interactables del cubo para feedback de contacto
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

        // Materiales propios para LEDs y cuerpo
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

        // Construir HUDs duales
        BuildControllerHUD();
        BuildCubeHUD();

        Subscribe();

        UpdateLeds();
        UpdateStatus(bomb != null ? bomb.State : BombState.Idle);
    }

    private void Subscribe()
    {
        if (timer != null) timer.OnTimeChanged += OnTimeChanged;
        if (strikes != null) strikes.OnStrikeAdded += OnStrikeAdded;
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
        string mmss = FormatTimeMMSS(rem);

        if (controllerTimeText != null) controllerTimeText.text = mmss;
        if (cubeTimeText != null) cubeTimeText.text = mmss;

        Color timerColor;
        if (rem <= 10) timerColor = new Color(1f, 0.28f, 0.25f);
        else if (rem <= 30) timerColor = new Color(1f, 0.82f, 0.2f);
        else timerColor = new Color(0.35f, 1f, 0.4f);

        if (controllerTimeText != null) controllerTimeText.color = timerColor;
        if (cubeTimeText != null) cubeTimeText.color = timerColor;

        // Parpadeo <10s en ambos HUDs
        if (bomb != null && bomb.State == BombState.Running && rem <= 10 && rem > 0)
            SFX.Play(SfxType.Tick, 0.3f);
    }

    private static string FormatTimeMMSS(int totalSeconds)
    {
        totalSeconds = Mathf.Max(0, totalSeconds);
        int m = totalSeconds / 60;
        int s = totalSeconds % 60;
        return $"{m:00}:{s:00}";
    }

    // ------------------------------------------------------------------ Estado

    private void UpdateStatus(BombState state)
    {
        if (statusText == null) return;

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
                    foreach (var c in cables) if (c != null) done += c.ConnectedCount;
                    parts.Add($"cables {done}/3");
                }
                if (simon.Count > 0)
                {
                    int done = 0, total = 0;
                    foreach (var s in simon) { if (s == null) continue; done += s.RoundsCompleted; total += s.TotalRounds; }
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

    private void UpdateBodyHighlight()
    {
        if (bombBodyRenderer == null || flashActive) return;
        if (bomb != null && bomb.State != BombState.Running)
        {
            bombBodyRenderer.sharedMaterial.SetColor("_EmissionColor", bombBaseEmission);
            return;
        }

        bool select = hgState == InteractableState.Select || gState == InteractableState.Select;
        bool hover = !select && (hgState == InteractableState.Hover || gState == InteractableState.Hover);

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
        ShowFeedback("¡SIMÓN OK! LA BOLITA CAYÓ EN EL LABERINTO → CARA +X, BOCA SUPERIOR", new Color(0.4f, 0.85f, 1f), 6f);
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
        string mmss = FormatTimeMMSS(timer != null ? Mathf.CeilToInt(timer.RemainingSeconds) : 0);
        if (controllerTimeText != null) controllerTimeText.text = mmss;
        if (cubeTimeText != null) cubeTimeText.text = mmss;
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
        if (feedbackText == null) return;
        feedbackText.text = msg;
        feedbackText.color = color;
        if (feedbackRoutine != null) StopCoroutine(feedbackRoutine);
        if (string.IsNullOrEmpty(msg)) return;
        feedbackRoutine = StartCoroutine(ClearFeedbackAfter(duration));
    }

    private IEnumerator ClearFeedbackAfter(float seconds)
    {
        yield return new WaitForSeconds(seconds);
        if (feedbackText != null) feedbackText.text = "";
    }

    // ------------------------------------------------------------------ Explosión Cinemática (Mirza Beig)

    private IEnumerator ExplosionFx()
    {
        // 1. Instanciar prefab de explosión fuego
        if (explosionFirePrefab != null && bomb != null)
        {
            GameObject explosion = Instantiate(explosionFirePrefab, bomb.transform.position, Quaternion.identity);
            Destroy(explosion, 3f);
        }

        // 2. Pulso de escala + emisión en cuerpo de bomba (complemento)
        const float duration = 0.9f;
        float t = 0f;
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

        // 3. Flash de luz puntual
        Light flash = new GameObject("BoomFlash").AddComponent<Light>();
        flash.type = LightType.Point;
        flash.color = new Color(1f, 0.55f, 0.12f);
        flash.range = 7f;
        flash.intensity = 8f;
        flash.transform.position = bombBodyRenderer != null ? bombBodyRenderer.transform.position : transform.position;

        float f = 0f;
        while (f < 0.7f)
        {
            f += Time.deltaTime;
            flash.intensity = Mathf.Lerp(8f, 0f, f / 0.7f);
            yield return null;
        }
        Destroy(flash.gameObject);
    }

    // ------------------------------------------------------------------ HUD Dual Construction

    private void BuildControllerHUD()
    {
        // Buscar RightHandAnchor en la escena
        Transform rightHand = FindRightHandAnchor();
        if (rightHand == null)
        {
            Debug.LogWarning("[BombUI] RightHandAnchor no encontrado, HUD controlador no creado");
            return;
        }

        controllerHudGo = new GameObject("ControllerHUD");
        controllerHudGo.transform.SetParent(rightHand, false);
        controllerHudGo.transform.localPosition = new Vector3(0f, 0f, 0.08f); // Delante de la mano
        controllerHudGo.transform.localRotation = Quaternion.Euler(0f, 180f, 0f); // Mirando al usuario

        controllerCanvas = controllerHudGo.AddComponent<Canvas>();
        controllerCanvas.renderMode = RenderMode.WorldSpace;

        // Panel fondo semitransparente oscuro
        GameObject panel = new GameObject("Panel");
        panel.transform.SetParent(controllerHudGo.transform, false);
        RectTransform panelRect = panel.AddComponent<RectTransform>();
        panelRect.anchorMin = panelRect.anchorMax = new Vector2(0.5f, 0.5f);
        panelRect.pivot = new Vector2(0.5f, 0.5f);
        panelRect.sizeDelta = new Vector2(220, 120);
        UnityEngine.UI.Image panelImg = panel.AddComponent<UnityEngine.UI.Image>();
        panelImg.color = new Color(0.03f, 0.033f, 0.04f, 0.85f);
        panelImg.raycastTarget = false;

        // Timer grande centrado
        GameObject timerGo = new GameObject("ControllerTimeText");
        timerGo.transform.SetParent(controllerHudGo.transform, false);
        RectTransform timerRect = timerGo.AddComponent<RectTransform>();
        timerRect.anchorMin = timerRect.anchorMax = new Vector2(0.5f, 0.5f);
        timerRect.pivot = new Vector2(0.5f, 0.5f);
        timerRect.anchoredPosition = Vector2.zero;
        timerRect.sizeDelta = new Vector2(200, 100);

        controllerTimeText = timerGo.AddComponent<TextMeshProUGUI>();
        controllerTimeText.alignment = TextAlignmentOptions.Center;
        controllerTimeText.fontSize = 90;
        controllerTimeText.color = new Color(0.35f, 1f, 0.4f);
        controllerTimeText.textWrappingMode = TextWrappingModes.NoWrap;
        controllerTimeText.overflowMode = TextOverflowModes.Overflow;
        controllerTimeText.outlineWidth = 0.15f;
        controllerTimeText.outlineColor = Color.black;
        if (TMP_Settings.defaultFontAsset != null) controllerTimeText.font = TMP_Settings.defaultFontAsset;

        // Escalado: 1 unidad canvas = 1 metro, queremos ~5cm alto texto
        controllerHudGo.transform.localScale = new Vector3(0.0015f, 0.0015f, 0.0015f);
    }

    private void BuildCubeHUD()
    {
        if (bomb == null) return;

        cubeHudGo = new GameObject("CubeHUD");
        cubeHudGo.transform.SetParent(bomb.transform, false);
        cubeHudGo.transform.localPosition = new Vector3(0f, 0.35f, 0f); // Cara superior
        cubeHudGo.transform.localRotation = Quaternion.Euler(90f, 0f, 0f); // Mirando hacia arriba

        cubeCanvas = cubeHudGo.AddComponent<Canvas>();
        cubeCanvas.renderMode = RenderMode.WorldSpace;

        // Panel fondo pequeño
        GameObject panel = new GameObject("Panel");
        panel.transform.SetParent(cubeHudGo.transform, false);
        RectTransform panelRect = panel.AddComponent<RectTransform>();
        panelRect.anchorMin = panelRect.anchorMax = new Vector2(0.5f, 0.5f);
        panelRect.pivot = new Vector2(0.5f, 0.5f);
        panelRect.sizeDelta = new Vector2(160, 70);
        UnityEngine.UI.Image panelImg = panel.AddComponent<UnityEngine.UI.Image>();
        panelImg.color = new Color(0.03f, 0.033f, 0.04f, 0.75f);
        panelImg.raycastTarget = false;

        // Timer pequeño
        GameObject timerGo = new GameObject("CubeTimeText");
        timerGo.transform.SetParent(cubeHudGo.transform, false);
        RectTransform timerRect = timerGo.AddComponent<RectTransform>();
        timerRect.anchorMin = timerRect.anchorMax = new Vector2(0.5f, 0.5f);
        timerRect.pivot = new Vector2(0.5f, 0.5f);
        timerRect.anchoredPosition = Vector2.zero;
        timerRect.sizeDelta = new Vector2(150, 60);

        cubeTimeText = timerGo.AddComponent<TextMeshProUGUI>();
        cubeTimeText.alignment = TextAlignmentOptions.Center;
        cubeTimeText.fontSize = 50;
        cubeTimeText.color = new Color(0.35f, 1f, 0.4f);
        cubeTimeText.textWrappingMode = TextWrappingModes.NoWrap;
        cubeTimeText.overflowMode = TextOverflowModes.Overflow;
        cubeTimeText.outlineWidth = 0.12f;
        cubeTimeText.outlineColor = Color.black;
        if (TMP_Settings.defaultFontAsset != null) cubeTimeText.font = TMP_Settings.defaultFontAsset;

        // Escala para ~2.5cm alto en mundo
        cubeHudGo.transform.localScale = new Vector3(0.001f, 0.001f, 0.001f);
    }

    private Transform FindRightHandAnchor()
    {
        // Buscar en la escena el anchor de mano derecha
        var anchors = Object.FindObjectsByType<Transform>(FindObjectsInactive.Include);
        foreach (var t in anchors)
        {
            if (t.name.Contains("RightHand") || t.name.Contains("RightController") || t.name.Contains("RightHandAnchor"))
                return t;
        }
        // Fallback: buscar en Camera.main hacia abajo
        if (Camera.main != null)
        {
            var camAnchors = Camera.main.GetComponentsInChildren<Transform>(true);
            foreach (var t in camAnchors)
            {
                if (t.name.Contains("RightHand") || t.name.Contains("RightController"))
                    return t;
            }
        }
        return null;
    }

    private void LateUpdate()
    {
        // Controller HUD: ya está anclado a la mano, no necesita billboard
        // Solo asegurar que siga activo y visible
        if (controllerHudGo != null && controllerHudGo.activeInHierarchy != (bomb != null && bomb.State != BombState.Exploded))
        {
            controllerHudGo.SetActive(bomb != null && bomb.State != BombState.Exploded);
        }

        // Cube HUD: seguir cara superior del cubo (ya es child, pero asegurar posición)
        if (cubeHudGo != null && bomb != null)
        {
            cubeHudGo.transform.position = bomb.transform.position + bomb.transform.up * 0.35f;
            cubeHudGo.transform.rotation = Quaternion.LookRotation(bomb.transform.up, -bomb.transform.forward);
        }

        // Parpadeo timer <10s en AMBOS HUDs
        if (timer == null || bomb == null) return;
        if (bomb.State == BombState.Running && timer.RemainingSeconds <= 10)
        {
            float alpha = Mathf.Sin(Time.timeSinceLevelLoad * 7f) > 0f ? 1f : 0.28f;
            if (controllerTimeText != null) controllerTimeText.alpha = alpha;
            if (cubeTimeText != null) cubeTimeText.alpha = alpha;
        }
        else
        {
            if (controllerTimeText != null) controllerTimeText.alpha = 1f;
            if (cubeTimeText != null) cubeTimeText.alpha = 1f;
        }
    }
}