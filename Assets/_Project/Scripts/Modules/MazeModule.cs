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
///    tablero. El diseño actual solo tiene una cazoleta verde de destino
///    (Goal); no se generan hoyos rojos ni trampas intermedias.
///
/// Cada inicio de partida regenera el laberinto con una semilla aleatoria
/// (useFixedSeed permite fijarla para reproducibilidad/dificultad).
/// </summary>
public class MazeModule : ModuleBase
{
    /// <summary>Medidas físicas del módulo (metros, en local del cubo).</summary>
    public static class Layout
    {
        public const float FaceOffsetX = 0.206f;  // plano de la cara +X del cuerpo (0.4 de ancho)
        public const float BackX = 0.004f;        // placa de cierre pegada a la cara del cubo
        public const float BackThickness = 0.004f;
        public const float SheetX = 0.012f;       // lámina donde rueda la bolita
        public const float SheetThickness = 0.004f;
        public const float DishX = 0.016f;        // cazoletas (trampa/FINAL) en/frente de la lámina para que la bolita caiga
        public const float DishThickness = 0.004f;
        public const float DishSpan = 0.94f;      // fracción de celda de cada cazoleta
        public const float SlotDishY = 0.012f;    // platito de recepción sobre el hueco de entrada
    }

    [Header("Generación (cada partida cambia de forma, seed aleatoria)")]
    [Tooltip("Tamaño en celdas (NxN). 5 => laberinto de ~15 cm.")]
    public int gridSize = 10;

    [Tooltip("Tamaño de cada celda en metros.")]
    public float cellSize = 0.03f;

    [Tooltip("Grosor de las paredes.")]
    public float wallThickness = 0.012f;

    [Tooltip("Altura de las paredes sobre la lámina.")]
    public float wallHeight = 0.05f;

    [Tooltip("Radio de la bolita.")]
    public float ballRadius = 0.008f;

    [Header("Sensibilidad física")]
    [Tooltip("Multiplicador de aceleración de la gravedad sobre el tablero; 1 es física normal.")]
    [Range(0.5f, 3f)] public float tiltSensitivity = 1.7f;

    [Tooltip("Fija una semilla concreta para depurar/dificultad (useFixedSeed).")]
    public bool useFixedSeed;

    [Tooltip("Semilla usada cuando useFixedSeed está activo.")]
    public int fixedSeed = 42;

    [Header("Bolita")]
    [Tooltip("Obsoleto: la bolita ahora aparece desde el inicio.")]
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
    private PhysicsMaterial ballPhysicsMaterial;
    private float ballPlaneLocalX;
    private float mazeMinY;
    private float mazeMaxY;
    private float mazeMinZ;
    private float mazeMaxZ;

    private float BallRollPlaneLocalX => Layout.SheetX + Layout.SheetThickness * 0.5f + ballRadius;

    private void Awake()
    {
        Title = "LABERINTO";
    }

    private void OnEnable()
    {
    }

    private void OnDisable()
    {
    }

    private void Start()
    {
        Rebuild(PickSeed());
    }

    private void FixedUpdate()
    {
        ApplyTiltAcceleration();
        ConstrainBallToMazePlane();
        RecoverBallIfOutOfBounds();
    }

    public override void ResetModule()
    {
        base.ResetModule();
        StopAllCoroutines();
        ballGranted = false;
        Rebuild(PickSeed()); // laberinto distinto en cada reinicio de partida
    }

    private int PickSeed()
    {
        LastSeed = useFixedSeed ? fixedSeed : UnityEngine.Random.Range(0, int.MaxValue);
        return LastSeed;
    }

    /// <summary>Entrega la bolita al laberinto (inicio o tras resolver módulo fuente).</summary>
    private void GrantBall()
    {
        if (ball == null || ballGranted) return;
        ballGranted = true;
        PlaceBall(startMarker != null ? startMarker.localPosition : rewardLocalPos);
        StartCoroutine(ReleaseBallAfterSpawn());

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
        localPos.x = ballPlaneLocalX;
        ballRb.isKinematic = true;
        ball.transform.position = transform.TransformPoint(localPos);
        ballRb.linearVelocity = Vector3.zero;
        ballRb.angularVelocity = Vector3.zero;
    }

    private IEnumerator ReleaseBallAfterSpawn()
    {
        yield return new WaitForSeconds(0.35f);

        if (ballRb == null || IsSolved) yield break;
        ballRb.linearVelocity = Vector3.zero;
        ballRb.angularVelocity = Vector3.zero;
        // A dynamic Rigidbody must not remain a transform child of the moving,
        // kinematic bomb. Its world pose stays put until it collides with the
        // bomb-mounted maze geometry and is steered by projected gravity.
        ball.SetParent(null, true);
        ballRb.isKinematic = false;
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

    private void RecoverBallIfOutOfBounds()
    {
        if (ball == null || ballRb == null || ballRb.isKinematic || startMarker == null || IsSolved) return;

        Vector3 localPos = transform.InverseTransformPoint(ball.position);
        float margin = Mathf.Max(cellSize, ballRadius * 3f);
        if (localPos.y < mazeMinY - margin || localPos.y > mazeMaxY + margin ||
            localPos.z < mazeMinZ - margin || localPos.z > mazeMaxZ + margin)
        {
            ResetBallToStart();
        }
    }

    private void ConstrainBallToMazePlane()
    {
        if (ball == null || ballRb == null || ballRb.isKinematic) return;

        Vector3 localPos = transform.InverseTransformPoint(ball.position);
        float xError = localPos.x - ballPlaneLocalX;

        if (Mathf.Abs(xError) > 0.004f)
        {
            localPos.x = ballPlaneLocalX;
            ballRb.MovePosition(transform.TransformPoint(localPos));
        }

        Vector3 localVelocity = transform.InverseTransformDirection(ballRb.linearVelocity);
        if (Mathf.Abs(localVelocity.x) > 0.005f)
        {
            localVelocity.x = 0f;
            ballRb.linearVelocity = transform.TransformDirection(localVelocity);
        }
    }

    private void ApplyTiltAcceleration()
    {
        if (ball == null || ballRb == null || ballRb.isKinematic || IsSolved) return;

        Vector3 gravityAlongBoard = Vector3.ProjectOnPlane(Physics.gravity, transform.right);
        ballRb.AddForce(gravityAlongBoard * Mathf.Max(0.1f, tiltSensitivity), ForceMode.Acceleration);
    }

    /// <summary>
    /// Trigger de la bolita reenviado por MazeBallListener; solo existe el goal verde.
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

        PhysicsMaterial wallPhysMat = new PhysicsMaterial("MazeWall")
        {
            dynamicFriction = 0.4f,
            staticFriction = 0.4f,
            bounciness = 0f,
            frictionCombine = PhysicsMaterialCombine.Average,
            bounceCombine = PhysicsMaterialCombine.Average,
        };

        Color floorColor = BombRoomPalette.Colors[2]; // blanco sucio
        Color wallColor = BombRoomPalette.Colors[5];  // negro/gris oscuro

        // 1. Placa de cierre contra la cara del cubo.
        Fx.Cube(floorGo.transform, "MazeBack", new Vector3(Layout.BackX, 0f, 0f),
            new Vector3(Layout.BackThickness, n * cellSize, n * cellSize), wallColor);
        AssignPhysMat(floorGo.transform, wallPhysMat);

        // 2. Lámina de rodadura: una loseta por celda (se omiten meta y trampas).
        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < n; c++)
            {
                if (IsGoalCell(data, r, c)) continue;
                Fx.Cube(floorGo.transform, "MazeTile",
                    new Vector3(Layout.SheetX, CenterY(n, r), CenterZ(n, c)),
                    new Vector3(Layout.SheetThickness, cellSize, cellSize), floorColor);
            }
        }

        AssignPhysMat(floorGo.transform, wallPhysMat);

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
        mazeMinY = bottomY;
        mazeMaxY = topY;
        mazeMinZ = leftZ;
        mazeMaxZ = rightZ;
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

        AssignPhysMat(wallsGo.transform, wallPhysMat);

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

        // 6. Única cazoleta verde de destino. No se construyen hoyos rojos.
        CreateGoalDish(n, data.goal.r, data.goal.c);

        // 7. Marcador del punto de inicio (celda inicial) para el reset de la bolita.
        GameObject startGo = new GameObject("StartMarker");
        startGo.transform.SetParent(transform, false);
        startGo.transform.localPosition = new Vector3(
            BallRollPlaneLocalX, CenterY(n, Mathf.Max(0, data.start.r - 1)), CenterZ(n, data.start.c));
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
        GrantBall();

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

    private static void AssignPhysMat(Transform parent, PhysicsMaterial mat)
    {
        if (parent == null) return;
        foreach (Collider col in parent.GetComponentsInChildren<Collider>(true))
        {
            if (col != null && !col.isTrigger)
                col.material = mat;
        }
    }

    private static bool IsGoalCell(MazeSpiralGenerator.MazeData data, int r, int c)
    {
        return r == data.goal.r && c == data.goal.c;
    }

    private float CenterY(int n, int r) => (r - (n - 1) * 0.5f) * cellSize;
    private float CenterZ(int n, int c) => (c - (n - 1) * 0.5f) * cellSize;
    private float BoundaryY(int n, int r) => (r - n * 0.5f) * cellSize;
    private float BoundaryZ(int n, int c) => (c - n * 0.5f) * cellSize;

    /// <summary>Única cazoleta verde de destino con collider trigger.</summary>
    private void CreateGoalDish(int n, int r, int c)
    {
        const string name = "MazeGoalDish";
        Color color = BombRoomPalette.Colors[4];

        GameObject dish = GameObject.CreatePrimitive(PrimitiveType.Cube);
        dish.name = name;
        dish.transform.SetParent(transform, false);
        float span = cellSize * Layout.DishSpan;
        dish.transform.localPosition = new Vector3(Layout.DishX, CenterY(n, r), CenterZ(n, c));
        dish.transform.localScale = new Vector3(Layout.DishThickness, span, span);
        dish.GetComponent<Renderer>().sharedMaterial = Fx.Lit(color, 1.6f);

        BoxCollider col = dish.GetComponent<BoxCollider>();
        col.isTrigger = true;

        SetTagSafe(dish, "Goal");
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
        ballPhysicsMaterial = new PhysicsMaterial("Marble")
        {
            dynamicFriction = 0.15f,
            staticFriction = 0.15f,
            bounciness = 0f,
            frictionCombine = PhysicsMaterialCombine.Minimum,
            bounceCombine = PhysicsMaterialCombine.Minimum,
        };
        col.material = ballPhysicsMaterial;

        Rigidbody rb = ballGo.AddComponent<Rigidbody>();
        rb.mass = 0.02f;
        rb.linearDamping = 0.1f;
        rb.angularDamping = 0.05f;
        rb.useGravity = false;
        rb.isKinematic = false;
        rb.collisionDetectionMode = CollisionDetectionMode.ContinuousDynamic;
        rb.interpolation = RigidbodyInterpolation.Interpolate;
        ballPlaneLocalX = BallRollPlaneLocalX;

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
        GameObject oldBall = ball != null ? ball.gameObject : null;
        if (oldBall != null && oldBall.transform.parent == transform)
            oldBall.transform.SetParent(null, true);

        GameObject[] children = new GameObject[transform.childCount];
        for (int i = 0; i < transform.childCount; i++)
            children[i] = transform.GetChild(i).gameObject;
        foreach (GameObject go in children)
        {
            if (go == null) continue;
            if (Application.isPlaying) Destroy(go);
            else DestroyImmediate(go);
        }
        if (oldBall != null)
        {
            if (Application.isPlaying) Destroy(oldBall);
            else DestroyImmediate(oldBall);
        }
        if (ballPhysicsMaterial != null)
        {
            if (Application.isPlaying) Destroy(ballPhysicsMaterial);
            else DestroyImmediate(ballPhysicsMaterial);
            ballPhysicsMaterial = null;
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
            // La etiqueta Goal no está definida: la detección funciona también
            // por el nombre fijo MazeGoalDish.
        }
    }
}
