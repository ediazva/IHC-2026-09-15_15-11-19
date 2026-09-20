using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

/// <summary>
/// MÓDULO LABERINTO: laberinto de canicas (tipo juguete de madera) incrustado
/// en una CARA del cubo (por defecto la derecha, +X). Resolución física:
///
///  * Se genera un laberinto NxN (backtracking recursivo) con paredes con
///    BoxCollider, sin Rigidbody, en la cara del cubo.
///  * La bolita la regala OTRO módulo (ballSource, típicamente Simón): al
///    resolverlo aparece en el platito del hueco de inserción. Se introduce por
///    el hueco etiquetado "AQUÍ INTRODUCE LA BOLITA".
///  * Se juega AGARRANDO E INCLINANDO TODO EL CUBO: la bolita rueda por el
///    tablero. Si entra en una celda trampa (Hole) -> AddStrike() y vuelve a la
///    celda inicial. Si cae en el agujero del FINAL (Goal) -> Solve().
///
/// Cada inicio de partida regenera el laberinto con una semilla aleatoria
/// (useFixedSeed permite fijarla para reproducibilidad/dificultad).
/// </summary>
public class MazeModule : ModuleBase
{
    /// <summary>Medidas físicas del módulo (metros, en local del cubo).</summary>
    public static class Layout
    {
        public const float FaceOffsetX = 0.306f;  // plano de la cara +X del cuerpo (0.6 de ancho)
        public const float BackX = 0.004f;        // placa de cierre pegada a la cara del cubo
        public const float BackThickness = 0.004f;
        public const float SheetX = 0.012f;       // lámina donde rueda la bolita
        public const float SheetThickness = 0.004f;
        public const float DishX = 0.009f;        // cazoletas (trampa/FINAL) detrás de la lámina
        public const float DishThickness = 0.004f;
        public const float DishSpan = 0.94f;      // fracción de celda de cada cazoleta
        public const float SlotDishY = 0.012f;    // platito de recepción sobre el hueco de entrada
    }

    [Header("Generación (cada partida cambia de forma, seed aleatoria)")]
    [Tooltip("Tamaño en celdas (NxN). 5 => laberinto de ~15 cm.")]
    public int gridSize = 5;

    [Tooltip("Tamaño de cada celda en metros.")]
    public float cellSize = 0.03f;

    [Tooltip("Grosor de las paredes.")]
    public float wallThickness = 0.008f;

    [Tooltip("Altura de las paredes sobre la lámina.")]
    public float wallHeight = 0.05f;

    [Tooltip("Radio de la bolita.")]
    public float ballRadius = 0.0065f;

    [Tooltip("Fija una semilla concreta para depurar/dificultad (useFixedSeed).")]
    public bool useFixedSeed;

    [Tooltip("Semilla usada cuando useFixedSeed está activo.")]
    public int fixedSeed = 42;

    [Header("Bolita")]
    [Tooltip("Si está asignado, la bolita aparece al resolver ese módulo. Si no, aparece desde el inicio.")]
    public ModuleBase ballSource;

    /// <summary>Última semilla generada (para logs/debug).</summary>
    public int LastSeed { get; private set; }

    /// <summary>
    /// Se dispara cuando la bolita se entrega al laberinto.
    /// </summary>
    public event Action OnBallGranted;

    private Transform startMarker;
    private Transform ball;
    private Rigidbody ballRb;
    private Vector3 rewardLocalPos;
    private bool ballGranted;

    private Renderer slotDishRenderer;
    private Renderer ballRenderer;
    private Transform ballBeacon;

    private void Awake()
    {
        Title = "LABERINTO";
    }

    private void OnEnable()
    {
        if (ballSource != null) ballSource.OnSolved += OnBallSourceSolved;
    }

    private void OnDisable()
    {
        if (ballSource != null) ballSource.OnSolved -= OnBallSourceSolved;
    }

    private void Start()
    {
        Rebuild(PickSeed());
        if (ballSource == null)
        {
            GrantBall();
        }
    }

    public override void ResetModule()
    {
        base.ResetModule();
        StopAllCoroutines();
        ballGranted = false;
        Rebuild(PickSeed()); // laberinto distinto en cada reinicio de partida
        if (ballSource == null)
        {
            GrantBall();
        }
    }

    private int PickSeed()
    {
        LastSeed = useFixedSeed ? fixedSeed : UnityEngine.Random.Range(0, int.MaxValue);
        return LastSeed;
    }

    private void OnBallSourceSolved(ModuleBase source)
    {
        GrantBall();
    }

    /// <summary>Entrega la bolita al laberinto (inicio o tras resolver módulo fuente).</summary>
    private void GrantBall()
    {
        if (ball == null || ballGranted) return;
        ballGranted = true;
        PlaceBall(rewardLocalPos);
        SFX.Play(SfxType.Solved, 0.5f);

        if (ballBeacon != null) ballBeacon.gameObject.SetActive(true);
        OnBallGranted?.Invoke();
        StartCoroutine(RewardGlow());
    }

    /// <summary>
    /// Pulso de brillo sobre el platito y la bolita (y beacon flotante arriba)
    /// durante unos segundos tras la entrega, para que el jugador vea DÓNDE ha
    /// caído la bolita (boca superior de la cara +X del cubo).
    /// </summary>
    private IEnumerator RewardGlow()
    {
        const float duration = 5f;
        Color glow = BombRoomPalette.Colors[1]; // azul, como la bolita
        float t = 0f;
        while (t < duration)
        {
            t += Time.deltaTime;
            float pulse = 0.75f + 0.55f * Mathf.Sin(t * 10f);
            SetEmissive(ballRenderer, glow * pulse);
            SetEmissive(slotDishRenderer, glow * (pulse * 0.5f));
            yield return null;
        }
        // Brillo estable para que la bolita no se pierda entre el cubo y el suelo.
        SetEmissive(ballRenderer, glow * 0.8f);
        SetEmissive(slotDishRenderer, glow * 0.35f);
    }

    private static void SetEmissive(Renderer renderer, Color emission)
    {
        if (renderer == null || renderer.sharedMaterial == null) return;
        Material mat = renderer.sharedMaterial;
        if (emission.maxColorComponent > 0.01f)
        {
            mat.EnableKeyword("_EMISSION");
            mat.SetColor("_EmissionColor", emission);
        }
        else
        {
            mat.DisableKeyword("_EMISSION");
            mat.SetColor("_EmissionColor", Color.black);
        }
    }

    private void PlaceBall(Vector3 localPos)
    {
        if (ballRb == null) return;
        ball.transform.localPosition = localPos;
        ballRb.linearVelocity = Vector3.zero;
        ballRb.angularVelocity = Vector3.zero;
    }

    private void ResetBallToStart()
    {
        if (ball == null || startMarker == null) return;
        if (ballRb != null)
        {
            ballRb.isKinematic = true;
            ball.transform.position = startMarker.position;
            ballRb.linearVelocity = Vector3.zero;
            ballRb.angularVelocity = Vector3.zero;
            ballRb.isKinematic = false;
        }
    }

    /// <summary>
    /// Evento de disparo de la bolita (lo reenvía MazeBallListener). Goal &
    /// Hole funcionan por nombre de la cazoleta y por tag ("Goal"/"Hole") con
    /// fallback por nombre si las etiquetas no están definidas en el proyecto.
    /// </summary>
    public void NotifyBallTrigger(Collider other)
    {
        if (IsSolved || other == null) return;

        if (IsTriggerOf(other, "Goal", "MazeGoal"))
        {
            Solve();
            if (ballRb != null) ballRb.isKinematic = true;
            SFX.Play(SfxType.Solved, 0.8f);
        }
        else if (IsTriggerOf(other, "Hole", "MazeHole"))
        {
            AddStrike();
            SFX.Play(SfxType.Denied, 0.6f);
            ResetBallToStart();
        }
    }

    private static bool IsTriggerOf(Collider other, string tag, string namePart)
    {
        if (other != null && other.name != null &&
            other.name.IndexOf(namePart, System.StringComparison.OrdinalIgnoreCase) >= 0)
        {
            return true;
        }
        try
        {
            return other != null && other.CompareTag(tag);
        }
        catch
        {
            return false;
        }
    }

    // ------------------------------------------------------------------ Reconstrucción

    /// <summary>Regenera todo el laberinto bajo el holder.</summary>
    public void Rebuild(int seed)
    {
        ClearChildren();

        MazeSpiralGenerator.MazeData data = MazeSpiralGenerator.Generate(gridSize, seed);

        int n = data.n;
        float wallX = Layout.SheetX + wallHeight * 0.5f;

        GameObject floorGo = new GameObject("MazeFloor");
        floorGo.transform.SetParent(transform, false);
        GameObject wallsGo = new GameObject("MazeWalls");
        wallsGo.transform.SetParent(transform, false);

        Color floorColor = BombRoomPalette.Colors[2]; // blanco sucio
        Color wallColor = BombRoomPalette.Colors[5];  // negro/gris oscuro

        // 1. Placa de cierre contra la cara del cubo.
        Fx.Cube(floorGo.transform, "MazeBack", new Vector3(Layout.BackX, 0f, 0f),
            new Vector3(Layout.BackThickness, n * cellSize, n * cellSize), wallColor);

        // 2. Lámina de rodadura: una loseta por celda (se omiten meta y trampas).
        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < n; c++)
            {
                if (IsGoalOrHole(data, r, c)) continue;
                Fx.Cube(floorGo.transform, "MazeTile",
                    new Vector3(Layout.SheetX, CenterY(n, r), CenterZ(n, c)),
                    new Vector3(Layout.SheetThickness, cellSize, cellSize), floorColor);
            }
        }

        // 3. Paredes INTERIORES (entre celdas). Se omiten las del perímetro
        // (r=0, r=n, c=0, c=n): el marco MazeRim* ya las dibuja, y duplicarlas
        // añade ~2N colliders solapados que generan fricción/rechinido al
        // sostener y mover el cubo (agarre "tosco").
        for (int r = 1; r < n; r++)
        {
            for (int c = 0; c < n; c++)
            {
                if (!data.hWall[r, c]) continue;
                Fx.Cube(wallsGo.transform, "MazeWallH",
                    new Vector3(wallX, BoundaryY(n, r), CenterZ(n, c)),
                    new Vector3(wallHeight, wallThickness, cellSize), wallColor);
            }
        }
        for (int r = 0; r < n; r++)
        {
            for (int c = 1; c < n; c++)
            {
                if (!data.vWall[r, c]) continue;
                Fx.Cube(wallsGo.transform, "MazeWallV",
                    new Vector3(wallX, CenterY(n, r), BoundaryZ(n, c)),
                    new Vector3(wallHeight, cellSize, wallThickness), wallColor);
            }
        }

        // 4. Marco exterior (hueco de entrada en el borde superior sobre la celda inicial).
        float bottomY = BoundaryY(n, 0);
        float topY = BoundaryY(n, n);
        float leftZ = BoundaryZ(n, 0);
        float rightZ = BoundaryZ(n, n);
        float slotLeft = CenterZ(n, data.start.c) - cellSize * 0.5f;
        float slotRight = CenterZ(n, data.start.c) + cellSize * 0.5f;
        float slotCenter = (slotLeft + slotRight) * 0.5f;

        Fx.Cube(wallsGo.transform, "MazeRimBottom", new Vector3(wallX, bottomY, 0f),
            new Vector3(wallHeight, wallThickness, n * cellSize), wallColor);
        Fx.Cube(wallsGo.transform, "MazeRimLeft", new Vector3(wallX, 0f, leftZ),
            new Vector3(wallHeight, n * cellSize, wallThickness), wallColor);
        Fx.Cube(wallsGo.transform, "MazeRimRight", new Vector3(wallX, 0f, rightZ),
            new Vector3(wallHeight, n * cellSize, wallThickness), wallColor);
        Fx.Cube(wallsGo.transform, "MazeRimTopL", new Vector3(wallX, topY, (leftZ + slotLeft) * 0.5f),
            new Vector3(wallHeight, wallThickness, slotLeft - leftZ), wallColor);
        Fx.Cube(wallsGo.transform, "MazeRimTopR", new Vector3(wallX, topY, (slotRight + rightZ) * 0.5f),
            new Vector3(wallHeight, wallThickness, rightZ - slotRight), wallColor);

        // 5. Embudo visual (sin collider) que guía la bolita hacia el hueco.
        float funnelLen = (slotRight - slotLeft) * 0.9f;
        float slope = Mathf.Atan2(0.006f, 0.012f) * Mathf.Rad2Deg;
        Transform guideL = Fx.Cube(wallsGo.transform, "MazeSlotGuideL",
            new Vector3(Layout.SheetX + wallHeight * 0.4f, topY - 0.006f, slotLeft + 0.005f),
            new Vector3(0.002f, 0.014f, funnelLen), wallColor);
        guideL.localRotation = Quaternion.Euler(0f, 0f, slope);
        Fx.StripCollider(guideL.gameObject);

        Transform guideR = Fx.Cube(wallsGo.transform, "MazeSlotGuideR",
            new Vector3(Layout.SheetX + wallHeight * 0.4f, topY - 0.006f, slotRight - 0.005f),
            new Vector3(0.002f, 0.014f, funnelLen), wallColor);
        guideR.localRotation = Quaternion.Euler(0f, 0f, -slope);
        Fx.StripCollider(guideR.gameObject);

        // 6. Cazoletas: meta (Goal) y trampas (Hole) como huecos con trigger.
        CreateDish(n, data.goal.r, data.goal.c, true);
        for (int i = 0; i < data.holes.Count; i++)
            CreateDish(n, data.holes[i].r, data.holes[i].c, false);

        // 7. Marcador del punto de inicio (celda inicial) para el reset de la bolita.
        GameObject startGo = new GameObject("StartMarker");
        startGo.transform.SetParent(transform, false);
        startGo.transform.localPosition = new Vector3(
            Layout.SheetX, CenterY(n, data.start.r), CenterZ(n, data.start.c));
        startMarker = startGo.transform;

        // 8. Platito de recepción en la boca del hueco de entrada (la bolita cae aquí desde Simón).
        Vector3 dishPos = new Vector3(
            Layout.SheetX + wallHeight * 0.5f,
            topY + Layout.SlotDishY,
            slotCenter);
        Transform dish = Fx.Cube(transform, "MazeSlotDish", dishPos,
            new Vector3(0.02f, 0.002f, (slotRight - slotLeft) * 1.1f), floorColor);
        slotDishRenderer = dish.GetComponent<Renderer>();
        rewardLocalPos = dishPos + Vector3.up * (ballRadius * 0.6f);

        // 9. Etiquetas (TextMesh 3D: el fontSize va en UNIDADES MUNDO, así que
        // valores como 2f generan textos de metros. Con contorno negro para que
        // se lean sobre el fondo oscuro del cubo).
        AddLabel("MazeSlotLabel",
            new Vector3(Layout.SheetX + wallHeight * 0.5f + 0.004f, topY + 0.028f, slotCenter),
            "INTRODUCE LA BOLITA AQUÍ", 0.032f, BombRoomPalette.Colors[2]);
        AddLabel("MazeFinalLabel",
            new Vector3(Layout.SheetX + 0.004f, CenterY(n, data.goal.r), CenterZ(n, data.goal.c)),
            "FINAL", 0.05f, BombRoomPalette.Colors[4]);

        // 10. Beacon sobre la boca del hueco: invisible hasta que llega la bolita.
        ballBeacon = AddLabel("MazeBallBeacon",
            new Vector3(Layout.SheetX + wallHeight * 0.5f, topY + 0.055f, slotCenter),
            "★ BOLITA AQUÍ ★", 0.034f, BombRoomPalette.Colors[3]);
        ballBeacon.gameObject.SetActive(false);

        BuildBall(startGo.transform.localPosition);

        Debug.Log($"[Bomba VR] Laberinto regenerado seed={seed} ({n}x{n}, {data.holes.Count} trampa(s))");

        // Los colliders se han recreado: reacotar el agarre del cubo para que
        // la cara del laberinto siga siendo agarrable y exclusiva del cubo.
        // Diferimos para que BombManager.Start() haya creado GrabInteractable/HandGrabInteractable.
        StartCoroutine(DeferredReapplyGrabScope());
    }

    private IEnumerator DeferredReapplyGrabScope()
    {
        yield return null;
        yield return null;
        GetComponentInParent<BombManager>()?.ReapplyGrabScope();
    }

    private static bool IsGoalOrHole(MazeSpiralGenerator.MazeData data, int r, int c)
    {
        if (r == data.goal.r && c == data.goal.c) return true;
        for (int i = 0; i < data.holes.Count; i++)
            if (data.holes[i].r == r && data.holes[i].c == c)
                return true;
        return false;
    }

    private float CenterY(int n, int r) => (r - (n - 1) * 0.5f) * cellSize;
    private float CenterZ(int n, int c) => (c - (n - 1) * 0.5f) * cellSize;
    private float BoundaryY(int n, int r) => (r - n * 0.5f) * cellSize;
    private float BoundaryZ(int n, int c) => (c - n * 0.5f) * cellSize;

    /// <summary>Cazoleta "hueco" en una celda (meta o trampa) con collider trigger.</summary>
    private void CreateDish(int n, int r, int c, bool goal)
    {
        string name = goal ? "MazeGoalDish" : "MazeHoleDish";
        Color color = goal ? BombRoomPalette.Colors[4] : BombRoomPalette.Colors[0];

        GameObject dish = GameObject.CreatePrimitive(PrimitiveType.Cube);
        dish.name = name;
        dish.transform.SetParent(transform, false);
        float span = cellSize * Layout.DishSpan;
        dish.transform.localPosition = new Vector3(Layout.DishX, CenterY(n, r), CenterZ(n, c));
        dish.transform.localScale = new Vector3(Layout.DishThickness, span, span);
        dish.GetComponent<Renderer>().sharedMaterial = Fx.Lit(color, goal ? 0.6f : 0.25f);

        BoxCollider col = dish.GetComponent<BoxCollider>();
        col.isTrigger = true;

        SetTagSafe(dish, goal ? "Goal" : "Hole");
    }

    private void BuildBall(Vector3 startLocalPos)
    {
        GameObject ballGo = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        ballGo.name = "Ball";
        ballGo.transform.SetParent(transform, false);
        ballGo.transform.localPosition = startLocalPos;
        ballGo.transform.localScale = Vector3.one * (ballRadius * 2f);
        ballGo.GetComponent<Renderer>().sharedMaterial = Fx.Lit(BombRoomPalette.Colors[1], 0.3f);

        SphereCollider col = ballGo.GetComponent<SphereCollider>();
        col.material = new PhysicsMaterial("Marble")
        {
            dynamicFriction = 0.15f,
            staticFriction = 0.15f,
            bounciness = 0f,
            frictionCombine = PhysicsMaterialCombine.Minimum,
            bounceCombine = PhysicsMaterialCombine.Minimum,
        };

        Rigidbody rb = ballGo.AddComponent<Rigidbody>();
        rb.mass = 0.02f;
        rb.linearDamping = 0.1f;
        rb.angularDamping = 0.05f;
        rb.useGravity = true;
        rb.isKinematic = false;
        rb.collisionDetectionMode = CollisionDetectionMode.Continuous;
        rb.interpolation = RigidbodyInterpolation.Interpolate;

        Isdk.Grab(ballGo, rb);
        Isdk.HandGrab(ballGo, rb);

        MazeBallListener listener = ballGo.AddComponent<MazeBallListener>();
        listener.owner = this;

        ball = ballGo.transform;
        ballRb = rb;
        ballRenderer = ballGo.GetComponent<Renderer>();
        ballGo.SetActive(true);
    }

    private Transform AddLabel(string name, Vector3 localPos, string text, float size, Color color)
    {
        GameObject go = new GameObject(name);
        go.transform.SetParent(transform, false);
        go.transform.localPosition = localPos;
        go.transform.localRotation = Quaternion.Euler(0f, 90f, 0f);

        TextMeshPro tmp = go.AddComponent<TextMeshPro>();
        tmp.text = text;
        tmp.fontSize = size;
        tmp.color = color;
        tmp.alignment = TextAlignmentOptions.Center;
        tmp.textWrappingMode = TextWrappingModes.NoWrap;
        tmp.outlineWidth = size * 0.14f;
        tmp.outlineColor = Color.black;

        return go.transform;
    }

    private void ClearChildren()
    {
        GameObject[] children = new GameObject[transform.childCount];
        for (int i = 0; i < transform.childCount; i++)
            children[i] = transform.GetChild(i).gameObject;
        foreach (GameObject go in children)
        {
            if (go == null) continue;
            if (Application.isPlaying) Destroy(go);
            else DestroyImmediate(go);
        }
        startMarker = null;
        ball = null;
        ballRb = null;
        ballRenderer = null;
        slotDishRenderer = null;
        ballBeacon = null;
    }

    private static void SetTagSafe(GameObject go, string tag)
    {
        try
        {
            go.tag = tag;
        }
        catch (UnityException)
        {
            // La etiqueta no está definida en el proyecto: la detección funciona
            // igual por el nombre de la cazoleta (MazeGoalDish / MazeHoleDish).
        }
    }
}