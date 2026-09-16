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
        public const float LeftX = -0.34f;   // extremo izquierdo de los cables
        public const float MidX = -0.09f;    // conector en reposo
        public const float RightX = 0.30f;   // tomas de la derecha
        public const float PlaneZ = 0.315f;  // cara frontal del cubo (+Z)
        public const float Row0Y = 0.10f;
        public const float RowSpacing = 0.15f;
        public const float PlugRadius = 0.038f;
        public const float SocketSize = 0.085f;
        public const float CordRadius = 0.013f;
        public const float SnapDistance = 0.12f;
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
        [NonSerialized] public Material material;
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
            if (cable == null || cable.plug == null) continue;
            PrepareCable(cable);
        }
    }

    /// <summary>Prepara un cable ya existente en la escena (editor o reset).</summary>
    private void PrepareCable(CableState cable)
    {
        cable.connected = false;
        cable.homeLocalPos = cable.plug.transform.localPosition;
        cable.homeLocalRot = cable.plug.transform.localRotation;

        Renderer rend = cable.plug.GetComponent<Renderer>();
        if (rend != null)
        {
            if (rend.sharedMaterial != null)
            {
                cable.material = new Material(rend.sharedMaterial);
                rend.sharedMaterial = cable.material;
            }
            else if (cable.material == null)
            {
                cable.material = Fx.Lit(cable.color);
                rend.sharedMaterial = cable.material;
            }
        }

        Rigidbody rb = cable.plug.GetComponent<Rigidbody>();
        if (rb == null) rb = cable.plug.AddComponent<Rigidbody>();
        rb.isKinematic = true;
        rb.useGravity = false;

        XRGrabInteractable grab = cable.grab != null
            ? cable.grab
            : cable.plug.GetComponent<XRGrabInteractable>();
        if (grab == null) grab = cable.plug.AddComponent<XRGrabInteractable>();
        grab.useDynamicAttach = true;
        grab.trackPosition = true;
        grab.trackRotation = true;
        grab.throwOnDetach = false;
        grab.movementType = XRBaseInteractable.MovementType.Instantaneous;

        cable.grab = grab;
        CableState captured = cable;
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
        Vector3 rowPos = new Vector3(0f, y, Layout.PlaneZ);

        GameObject stub = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
        stub.name = $"Cable_{index}_Stub";
        stub.transform.SetParent(parent, false);
        float stubLen = (Layout.MidX - Layout.LeftX) * 0.5f;
        float stubCenterX = (Layout.LeftX + Layout.MidX) * 0.5f;
        stub.transform.localPosition = new Vector3(stubCenterX, y, Layout.PlaneZ);
        stub.transform.localRotation = Quaternion.Euler(0f, 0f, 90f);
        stub.transform.localScale = new Vector3(Layout.CordRadius * 2f, stubLen, Layout.CordRadius * 2f);
        stub.GetComponent<Renderer>().sharedMaterial = Fx.Lit(color);
        Fx.StripCollider(stub);

        GameObject tip = new GameObject($"Cable_{index}_Tip");
        tip.transform.SetParent(parent, false);
        tip.transform.localPosition = new Vector3(Layout.MidX, y, Layout.PlaneZ);

        GameObject plug = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        plug.name = $"Cable_{index}_Plug";
        plug.transform.SetParent(parent, false);
        plug.transform.localPosition = new Vector3(Layout.MidX, y, Layout.PlaneZ);
        plug.transform.localScale = Vector3.one * (Layout.PlugRadius * 2f);
        plug.GetComponent<Renderer>().sharedMaterial = Fx.Lit(color);
        Fx.StripCollider(plug);

        GameObject cord = new GameObject($"Cable_{index}_Cord");
        cord.transform.SetParent(parent, false);
        LineRenderer line = cord.AddComponent<LineRenderer>();
        ConfigureLine(line, color);

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

        Vector3 pos = cable.plug.transform.position;
        CableState nearest = null;
        float bestDistance = Layout.SnapDistance;

        foreach (CableState other in cables)
        {
            if (other.socket == null) continue;
            float d = Vector3.Distance(pos, other.socket.transform.position);
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
        cable.plug.transform.position = cable.socket.transform.position;
        SetEmission(cable, 2.2f);
        SFX.Play(SfxType.Snip, 0.8f);

        OnCableConnected?.Invoke(cable.color);

        if (connectedCount >= cables.Count)
            Solve();
    }

    private void ReturnHome(CableState cable)
    {
        cable.plug.transform.localPosition = cable.homeLocalPos;
        cable.plug.transform.localRotation = cable.homeLocalRot;
    }

    private void SetEmission(CableState cable, float intensity)
    {
        if (cable.material == null) return;
        cable.material.EnableKeyword("_EMISSION");
        cable.material.SetColor("_EmissionColor", cable.color * intensity);
    }

    private void LateUpdate()
    {
        for (int i = 0; i < cables.Count; i++)
        {
            CableState cable = cables[i];
            if (cable == null || cable.cord == null || cable.stubTip == null || cable.plug == null) continue;

            cable.cord.SetPosition(0, cable.stubTip.position);
            cable.cord.SetPosition(1, cable.plug.transform.position);
        }
    }
}
