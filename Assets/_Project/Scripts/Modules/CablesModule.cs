using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Interactables;

/// <summary>
/// Módulo de cables estilo "Among Us": en la cara frontal del cubo hay 3 cables
/// (rojo, azul y amarillo) y 3 tomas de colores desordenados. El jugador agarra
/// el conector de cada cable y lo suelta sobre la toma de su mismo color para
/// conectarlo. Al conectar los 3, el módulo queda resuelto.
///
/// Todo el puzzle vive DENTRO de una sola cara del cubo (la frontal).
///
/// Soporta dos vías de creación:
///  * Escena autorada en el editor: los cables ya existen como GameObjects y
///    aquí solo se adoptan (lista serializada "cables").
///  * Construcción dinámica (reset en tiempo de ejecución): Build() regenera
///    el layout con las tomas barajadas.
/// </summary>
public class CablesModule : ModuleBase
{
    /// <summary>Medidas del puzzle, en metros, en espacio local del cubo.</summary>
    public static class Layout
    {
        public const float LeftX = -0.34f;   // salida del cable en la pared izquierda
        public const float MidX = -0.14f;    // posición de reposo del mango (stub)
        public const float RightX = 0.30f;   // tomas de la derecha (sockets)
        public const float PlaneZ = 0.315f;  // cara frontal del cubo (+Z)
        public const float Row0Y = 0.10f;
        public const float RowSpacing = 0.15f;
        public const float PlugRadius = 0.045f;
        public const float SocketSize = 0.095f;
        public const float CordRadius = 0.013f;
        public const float SnapDistance = 0.14f;
    }

    /// <summary>Colores del puzzle: rojo, azul y amarillo.</summary>
    public static readonly Color[] PuzzleColors =
    {
        BombRoomPalette.Colors[0], // rojo
        BombRoomPalette.Colors[1], // azul
        BombRoomPalette.Colors[3], // amarillo
    };

    [Serializable]
    public class CableState
    {
        public GameObject stub;
        public Transform stubTip;
        public GameObject plug;
        public GameObject socket;
        public LineRenderer cord;
        public Color color;
        public bool connected;

        [NonSerialized] public Vector3 homeLocalPos;
        [NonSerialized] public Quaternion homeLocalRot;
        [NonSerialized] public XRGrabInteractable grab;
        [NonSerialized] public Material plugMaterial;
        [NonSerialized] public Material stubMaterial;
        public Material material => plugMaterial;
    }

    [Header("Estado (lo crea el constructor de la escena)")]
    [SerializeField] private List<CableState> cables = new List<CableState>();

    private int connectedCount;

    public event Action<Color> OnCableConnected;
    public event Action OnCableWrong;

    public int Total => cables.Count;
    public int ConnectedCount => connectedCount;

    private void Awake()
    {
        Title = "CABLES";
    }

    private void Start()
    {
        if (cables != null && cables.Count > 0)
        {
            AdoptExisting();
            return;
        }
        Build();
    }

    public override void ResetModule()
    {
        base.ResetModule();
        for (int i = transform.childCount - 1; i >= 0; i--)
            Destroy(transform.GetChild(i).gameObject);

        cables.Clear();
        connectedCount = 0;
        Build();
    }

    // ------------------------------------------------------------------ Autorado en el editor

    private void AdoptExisting()
    {
        connectedCount = 0;
        foreach (CableState cable in cables)
        {
            if (cable == null || cable.stub == null || cable.plug == null) continue;
            PrepareCable(cable);
        }
    }

    /// <summary>Prepara un cable ya existente en la escena (editor o reset).</summary>
    private void PrepareCable(CableState cable)
    {
        cable.connected = false;

        // Asegurar que plug está unido como hijo de stub para que se muevan siempre juntos
        if (cable.plug.transform.parent != cable.stub.transform)
        {
            cable.plug.transform.SetParent(cable.stub.transform, true);
        }

        // Limpiar rigidbodies o interactables previos en plug para evitar conflictos
        var oldGrab = cable.plug.GetComponent<XRGrabInteractable>();
        if (oldGrab != null) Destroy(oldGrab);
        var oldRb = cable.plug.GetComponent<Rigidbody>();
        if (oldRb != null) Destroy(oldRb);

        // Asegurar colliders activos en stub y plug
        CapsuleCollider stubCol = cable.stub.GetComponent<CapsuleCollider>();
        if (stubCol == null)
        {
            stubCol = cable.stub.AddComponent<CapsuleCollider>();
            stubCol.direction = 1; // Eje Y del cilindro
            stubCol.radius = 0.5f;
            stubCol.height = 2f;
        }
        stubCol.enabled = true;

        SphereCollider plugCol = cable.plug.GetComponent<SphereCollider>();
        if (plugCol == null)
        {
            plugCol = cable.plug.AddComponent<SphereCollider>();
            plugCol.radius = 0.5f;
        }
        plugCol.enabled = true;

        // Guardar posición y rotación inicial del conjunto agarrable (stub)
        cable.homeLocalPos = cable.stub.transform.localPosition;
        cable.homeLocalRot = cable.stub.transform.localRotation;

        // Instanciar materiales para control de emisión independiente
        Renderer rendPlug = cable.plug.GetComponent<Renderer>();
        if (rendPlug != null)
        {
            if (rendPlug.sharedMaterial != null)
                cable.plugMaterial = new Material(rendPlug.sharedMaterial);
            else
                cable.plugMaterial = Fx.Lit(cable.color);
            rendPlug.sharedMaterial = cable.plugMaterial;
        }

        Renderer rendStub = cable.stub.GetComponent<Renderer>();
        if (rendStub != null)
        {
            if (rendStub.sharedMaterial != null)
                cable.stubMaterial = new Material(rendStub.sharedMaterial);
            else
                cable.stubMaterial = Fx.Lit(cable.color);
            rendStub.sharedMaterial = cable.stubMaterial;
        }

        // Rigidbody kinemático en stub
        Rigidbody rb = cable.stub.GetComponent<Rigidbody>();
        if (rb == null) rb = cable.stub.AddComponent<Rigidbody>();
        rb.isKinematic = true;
        rb.useGravity = false;

        // XRGrabInteractable en stub que incluye ambos colliders (stub y plug)
        XRGrabInteractable grab = cable.grab != null
            ? cable.grab
            : cable.stub.GetComponent<XRGrabInteractable>();
        if (grab == null) grab = cable.stub.AddComponent<XRGrabInteractable>();

        grab.useDynamicAttach = true;
        grab.trackPosition = true;
        grab.trackRotation = true;
        grab.throwOnDetach = false;
        grab.movementType = XRBaseInteractable.MovementType.Instantaneous;

        grab.colliders.Clear();
        grab.colliders.Add(stubCol);
        grab.colliders.Add(plugCol);

        cable.grab = grab;
        CableState captured = cable;
        grab.selectEntered.RemoveAllListeners();
        grab.selectExited.RemoveAllListeners();
        grab.selectEntered.AddListener(_ => OnPlugGrabbed(captured));
        grab.selectExited.AddListener(_ => OnPlugReleased(captured));
    }

    // ------------------------------------------------------------------ Construcción dinámica

    private void Build()
    {
        cables.Clear();
        connectedCount = 0;

        GameObject wiresParent = new GameObject("Cables");
        wiresParent.transform.SetParent(transform, false);

        // Tomas con colores desordenados.
        int[] permutation = ShuffledPermutation();
        GameObject[] socketByColor = new GameObject[PuzzleColors.Length];
        for (int row = 0; row < PuzzleColors.Length; row++)
        {
            int colorIndex = permutation[row];
            float y = Layout.Row0Y - row * Layout.RowSpacing;
            GameObject socket = CreateSocket(wiresParent.transform, row, y, PuzzleColors[colorIndex]);
            socketByColor[colorIndex] = socket;
        }

        for (int i = 0; i < PuzzleColors.Length; i++)
        {
            float y = Layout.Row0Y - i * Layout.RowSpacing;
            CableState cable = CreateCable(wiresParent.transform, i, y, PuzzleColors[i]);
            cable.socket = socketByColor[i];
            cables.Add(cable);
            PrepareCable(cable);
        }
    }

    private static int[] ShuffledPermutation()
    {
        int[] perm = new int[PuzzleColors.Length];
        for (int i = 0; i < perm.Length; i++) perm[i] = i;
        for (int i = perm.Length - 1; i > 0; i--)
        {
            int j = UnityEngine.Random.Range(0, i + 1);
            (perm[i], perm[j]) = (perm[j], perm[i]);
        }
        return perm;
    }

    private static CableState CreateCable(Transform parent, int index, float y, Color color)
    {
        // 1. Salida en la pared de la bomba (ancla del cordón)
        GameObject tip = new GameObject($"Cable_{index}_Tip");
        tip.transform.SetParent(parent, false);
        tip.transform.localPosition = new Vector3(Layout.LeftX, y, Layout.PlaneZ);

        // 2. Mango del cable (cilindro horizontal agarrable)
        GameObject stub = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
        stub.name = $"Cable_{index}_Stub";
        stub.transform.SetParent(parent, false);
        stub.transform.localPosition = new Vector3(Layout.MidX, y, Layout.PlaneZ);
        stub.transform.localRotation = Quaternion.Euler(0f, 0f, -90f);
        stub.transform.localScale = new Vector3(0.035f, 0.045f, 0.035f);
        stub.GetComponent<Renderer>().sharedMaterial = Fx.Lit(color);

        CapsuleCollider stubCol = stub.GetComponent<CapsuleCollider>();
        if (stubCol == null) stubCol = stub.AddComponent<CapsuleCollider>();
        stubCol.direction = 1;
        stubCol.radius = 0.5f;
        stubCol.height = 2f;

        // 3. Clavija de contacto (esfera unida al mango en el extremo derecho)
        GameObject plug = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        plug.name = $"Cable_{index}_Plug";
        plug.transform.SetParent(stub.transform, false);
        plug.transform.localPosition = new Vector3(0f, 1.0f, 0f);
        plug.transform.localRotation = Quaternion.identity;
        plug.transform.localScale = new Vector3(0.07f / 0.035f, 0.07f / 0.045f, 0.07f / 0.035f);
        plug.GetComponent<Renderer>().sharedMaterial = Fx.Lit(color);

        SphereCollider plugCol = plug.GetComponent<SphereCollider>();
        if (plugCol == null) plugCol = plug.AddComponent<SphereCollider>();
        plugCol.radius = 0.5f;

        // 4. Cordón flexible (LineRenderer entre la pared y el mango)
        GameObject cord = new GameObject($"Cable_{index}_Cord");
        cord.transform.SetParent(parent, false);
        LineRenderer line = cord.AddComponent<LineRenderer>();
        ConfigureLine(line, color);
        Vector3 backPoint = stub.transform.position + (stub.transform.position - plug.transform.position);
        line.SetPosition(0, tip.transform.position);
        line.SetPosition(1, backPoint);

        return new CableState
        {
            stub = stub,
            stubTip = tip.transform,
            plug = plug,
            socket = null,
            cord = line,
            color = color,
            connected = false
        };
    }

    private static GameObject CreateSocket(Transform parent, int index, float y, Color color)
    {
        GameObject socket = GameObject.CreatePrimitive(PrimitiveType.Cube);
        socket.name = $"Socket_{index}";
        socket.transform.SetParent(parent, false);
        socket.transform.localPosition = new Vector3(Layout.RightX, y, Layout.PlaneZ);
        socket.transform.localScale = Vector3.one * Layout.SocketSize;
        socket.GetComponent<Renderer>().sharedMaterial = Fx.Lit(color, 1.4f);
        Fx.StripCollider(socket);
        return socket;
    }

    public static void ConfigureLine(LineRenderer line, Color color, Material material = null)
    {
        line.positionCount = 2;
        line.useWorldSpace = true;
        line.startWidth = Layout.CordRadius * 2f;
        line.endWidth = Layout.CordRadius * 2f;
        line.numCapVertices = 4;
        line.numCornerVertices = 2;
        line.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        line.textureMode = LineTextureMode.Stretch;
        line.sharedMaterial = material != null ? material : Fx.Lit(color, 1.2f);
        line.startColor = color;
        line.endColor = color;
    }

    // ------------------------------------------------------------------ Interacción

    private void OnPlugGrabbed(CableState cable)
    {
        if (cable == null || cable.connected) return;
        SetEmission(cable, 1.6f);
    }

    private void OnPlugReleased(CableState cable)
    {
        if (cable == null || cable.connected) return;

        Vector3 plugPos = cable.plug.transform.position;
        Vector3 stubPos = cable.stub.transform.position;
        CableState nearest = null;
        float bestDistance = Layout.SnapDistance;

        foreach (CableState other in cables)
        {
            if (other.socket == null) continue;
            Vector3 sockPos = other.socket.transform.position;
            float dPlug = Vector3.Distance(plugPos, sockPos);
            float dStub = Vector3.Distance(stubPos, sockPos);
            float d = Mathf.Min(dPlug, dStub);
            if (d < bestDistance)
            {
                bestDistance = d;
                nearest = other;
            }
        }

        if (nearest == null)
        {
            SetEmission(cable, 0.25f);
            ReturnHome(cable);
            return;
        }

        if (nearest == cable)
        {
            Connect(cable);
        }
        else
        {
            SetEmission(cable, 0.25f);
            OnCableWrong?.Invoke();
            SFX.Play(SfxType.Denied, 0.6f);
            AddStrike();
            ReturnHome(cable);
        }
    }

    private void Connect(CableState cable)
    {
        cable.connected = true;
        connectedCount++;

        if (cable.grab != null) cable.grab.enabled = false;

        // Orientar horizontalmente hacia la toma
        cable.stub.transform.localRotation = cable.homeLocalRot;

        // Alinear la clavija (plug) exactamente en el centro de la toma (socket)
        Vector3 delta = cable.socket.transform.position - cable.plug.transform.position;
        cable.stub.transform.position += delta;

        SetEmission(cable, 2.2f);
        SFX.Play(SfxType.Snip, 0.8f);

        OnCableConnected?.Invoke(cable.color);

        if (connectedCount >= cables.Count)
            Solve();
    }

    private void ReturnHome(CableState cable)
    {
        cable.stub.transform.localPosition = cable.homeLocalPos;
        cable.stub.transform.localRotation = cable.homeLocalRot;
    }

    private void SetEmission(CableState cable, float intensity)
    {
        if (cable == null) return;
        if (cable.plugMaterial != null)
        {
            cable.plugMaterial.EnableKeyword("_EMISSION");
            cable.plugMaterial.SetColor("_EmissionColor", cable.color * intensity);
        }
        if (cable.stubMaterial != null)
        {
            cable.stubMaterial.EnableKeyword("_EMISSION");
            cable.stubMaterial.SetColor("_EmissionColor", cable.color * intensity);
        }
    }

    private void LateUpdate()
    {
        for (int i = 0; i < cables.Count; i++)
        {
            CableState cable = cables[i];
            if (cable == null || cable.cord == null || cable.stubTip == null || cable.stub == null || cable.plug == null) continue;

            cable.cord.SetPosition(0, cable.stubTip.position);

            // El extremo posterior del mango donde entra el cordón
            Vector3 backDir = (cable.stub.transform.position - cable.plug.transform.position);
            Vector3 backPoint = cable.stub.transform.position + backDir;
            cable.cord.SetPosition(1, backPoint);
        }
    }
}
