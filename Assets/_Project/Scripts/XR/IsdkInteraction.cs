using System;
using System.Reflection;
using UnityEngine;
using Oculus.Interaction;
using Oculus.Interaction.Grab;
using Oculus.Interaction.GrabAPI;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction.Surfaces;

/// <summary>
/// Helpers para crear interactables de Meta Interaction SDK (ISDK) desde código,
/// tanto en el EDITOR (migración de escena) como en tiempo de ejecución
/// (resets dinámicos). Agnóstico de la escena para reutilizarlo en los módulos.
///
/// Uso típico:
///   Isdk.Poke(button, outwardDir)      // botón táctil
///   Isdk.Grab(stub, rigidbody)         // objeto agarrable con la mano
/// </summary>
public static class Isdk
{
    /// <summary>Holgura extra del área punteable respecto al botón.</summary>
    private const float PokePadding = 0.014f;

    /// <summary>Nombre del hijo que aloja la superficie de punteo.</summary>
    public const string PokeSurfaceName = "IsdkPokeSurface";

    /// <summary>
    /// Crea (o reutiliza) un <see cref="PokeInteractable"/> en <paramref name="go"/>.
    /// La superficie de punteo es un plano con normal hacia
    /// <paramref name="pokeLocalDir"/> (dirección, en local de <paramref name="go"/>,
    /// desde la que llegará el dedo). El tamaño del área se deduce del collider
    /// (Box/Capsule/Sphere) o, en su defecto, del localScale.
    /// </summary>
    public static PokeInteractable Poke(GameObject go, Vector3 pokeLocalDir)
    {
        PokeInteractable poke = go.GetComponent<PokeInteractable>();

        Vector2 area = PokeArea(go, pokeLocalDir);

        // Superficie propia en un hijo (independiente de la orientación del cubo).
        GameObject surfaceGo = go.transform.Find(PokeSurfaceName)?.gameObject;
        if (surfaceGo == null)
        {
            surfaceGo = new GameObject(PokeSurfaceName);
            surfaceGo.transform.SetParent(go.transform, false);
        }

        Vector3 worldDir = go.transform.TransformDirection(pokeLocalDir.normalized);
        Quaternion look = Quaternion.LookRotation(-worldDir);
        // Coloca la superficie de punteo EN LA CARA EXTERNA del botón (no en el
        // centro), de modo que el dedo dispara sin tener que hundir la mano.
        float halfThickness = 0.5f * PokeThickness(go, worldDir);
        surfaceGo.transform.position = go.transform.position + worldDir * halfThickness;
        surfaceGo.transform.rotation = look;

        BoundsClipper clipper = surfaceGo.GetComponent<BoundsClipper>();
        if (clipper == null) clipper = surfaceGo.AddComponent<BoundsClipper>();
        float depth = Mathf.Max(area.x, area.y, 0.08f);
        clipper.Size = new Vector3(area.x + PokePadding, area.y + PokePadding, depth * 4f);

        PlaneSurface plane = surfaceGo.GetComponent<PlaneSurface>();
        if (plane == null) plane = surfaceGo.AddComponent<PlaneSurface>();
        plane.Facing = PlaneSurface.NormalFacing.Backward;

        ClippedPlaneSurface clipped = surfaceGo.GetComponent<ClippedPlaneSurface>();
        if (clipped == null)
        {
            clipped = surfaceGo.AddComponent<ClippedPlaneSurface>();
            clipped.InjectAllClippedPlaneSurface(plane, new IBoundsClipper[] { clipper });
        }

        if (poke == null)
            poke = go.AddComponent<PokeInteractable>();
        poke.InjectAllPokeInteractable(clipped);
        return poke;
    }

    /// <summary>
    /// Crea (o reutiliza) un <see cref="GrabInteractable"/> en <paramref name="go"/>.
    /// Además prepara el movimiento real del agarre en ISDK: añade un
    /// <see cref="Grabbable"/> (el elemento "pointable" que recibe los eventos de
    /// agarre) con un <see cref="GrabFreeTransformer"/>, de modo que el objeto
    /// SÍ se mueve con la mano mientras está agarrado (una o dos manos).
    /// Requiere un Rigidbody; si <paramref name="rb"/> es null se busca en el objeto.
    /// </summary>
    public static GrabInteractable Grab(GameObject go, Rigidbody rb = null)
    {
        if (rb == null) rb = go.GetComponent<Rigidbody>();
        if (rb == null)
        {
            rb = go.AddComponent<Rigidbody>();
            rb.isKinematic = true;
            rb.useGravity = false;
        }

        GrabInteractable grab = go.GetComponent<GrabInteractable>();
        if (grab != null)
        {
            grab.InjectAllGrabInteractable(rb);
        }
        else
        {
            grab = go.AddComponent<GrabInteractable>();
            grab.InjectAllGrabInteractable(rb);
        }

        Grabbable grabable = go.GetComponent<Grabbable>();
        if (grabable == null) grabable = go.AddComponent<Grabbable>();
        grabable.InjectOptionalRigidbody(rb);
        grabable.InjectOptionalKinematicWhileSelected(true);
        grabable.InjectOptionalThrowWhenUnselected(false);

        GrabFreeTransformer free = go.GetComponent<GrabFreeTransformer>();
        if (free == null) free = go.AddComponent<GrabFreeTransformer>();
        grabable.InjectOptionalOneGrabTransformer(free);
        grabable.InjectOptionalTwoGrabTransformer(free);

        grab.InjectOptionalPointableElement(grabable);
        return grab;
    }

    /// <summary>
    /// Desuscribe y vuelve a suscribir el estado de un interactable de forma idempotente.
    /// Devuelve el handler creado para poder desuscribirlo más adelante.
    /// </summary>
    public static Action<InteractableStateChangeArgs> Bind(
        PokeInteractable interactable,
        Action onPress,
        Action onRelease,
        Action<InteractableStateChangeArgs> previous = null)
    {
        if (interactable == null) return previous;
        if (previous != null) interactable.WhenStateChanged -= previous;

        Action<InteractableStateChangeArgs> handler = args =>
        {
            if (args.NewState == InteractableState.Select)
            {
                onPress?.Invoke();
            }
            else if (args.PreviousState == InteractableState.Select
                     && args.NewState != InteractableState.Select)
            {
                onRelease?.Invoke();
            }
        };
        interactable.WhenStateChanged += handler;
        return handler;
    }

    /// <inheritdoc cref="ScopeGrabColliders(GrabInteractable, Collider[])"/>
    public static void ScopeGrabColliders(GrabInteractable grab, Collider collider)
    {
        ScopeGrabColliders(grab, new Collider[] { collider });
    }

    /// <summary>
    /// Acota los colliders candidatos de un <see cref="GrabInteractable"/> a la
    /// lista dada. ISDK rellena esa lista en su propio Start desde el Rigidbody
    /// (GetComponentsInChildren), lo que hace que la bomba "robe" el agarre de
    /// los mangos de los cables (empate en puntuación). El campo es privado en
    /// el SDK, así que se ajusta por reflexión y debe reaplicarse cuando el
    /// interactable arranca.
    /// </summary>
    public static void ScopeGrabColliders(GrabInteractable grab, params Collider[] colliders)
    {
        if (grab == null || colliders == null) return;
        FieldInfo field = typeof(GrabInteractable).GetField(
            "_colliders",
            BindingFlags.NonPublic | BindingFlags.Instance);
        if (field != null) field.SetValue(grab, colliders);
    }

    /// <summary>
    /// Acota los colliders que <see cref="HandGrabInteractable"/> usa para el
    /// agarre con la MANO DESNUDA (candidatura y pose). La propiedad
    /// <c>Colliders</c> se rellena en el Start del SDK con TODOS los colliders
    /// bajo el Rigidbody: si el laberinto se regenera en runtime y destruye sus
    /// colliders, esa lista queda con referencias caducas y el HandGrabInteractor
    /// revienta con NullReferenceException CADA FRAME. Se ajusta por reflexión
    /// y debe reaplicarse siempre que cambien los colliders de la bomba.
    /// </summary>
    public static void ScopeHandGrabColliders(HandGrabInteractable handGrab, params Collider[] colliders)
    {
        if (handGrab == null || colliders == null) return;
        FieldInfo field = typeof(HandGrabInteractable).GetField(
            "<Colliders>k__BackingField",
            BindingFlags.NonPublic | BindingFlags.Instance);
        if (field != null) field.SetValue(handGrab, colliders);
    }

    /// <summary>Igual que <see cref="Bind(PokeInteractable,...)"/> pero para agarres.</summary>
    public static Action<InteractableStateChangeArgs> Bind(
        GrabInteractable interactable,
        Action onGrab,
        Action onRelease,
        Action<InteractableStateChangeArgs> previous = null)
    {
        if (interactable == null) return previous;
        if (previous != null) interactable.WhenStateChanged -= previous;

        Action<InteractableStateChangeArgs> handler = args =>
        {
            if (args.NewState == InteractableState.Select)
            {
                onGrab?.Invoke();
            }
            else if (args.PreviousState == InteractableState.Select
                     && args.NewState != InteractableState.Select)
            {
                onRelease?.Invoke();
            }
        };
        interactable.WhenStateChanged += handler;
        return handler;
    }

    /// <summary>
    /// Crea (o reutiliza) un <see cref="HandGrabInteractable"/> en <paramref name="go"/>,
    /// el componente que el SDK de Interacción usa para AGARRAR CON LA MANO DESNUDA
    /// (el <see cref="GrabInteractable"/> solo lo hace el mando). Los mangos/cubo
    /// solo tenían GrabInteractable, por eso en el Quest la mano no agarraba nada.
    ///
    /// Sin HandGrabPose autoriados, ISDK usa la superficie del collider como punto
    /// de agarre (CalculateBestPose fallback), de modo que vale para objetos 100%
    /// runtime. Reutiliza el <see cref="Grabbable"/> (elemento pointable) y el
    /// <see cref="GrabFreeTransformer"/> del objeto para que realmente se mueva
    /// con la mano.
    ///
    /// El componente se pone en <paramref name="go"/> (donde se quiere "tocar"),
    /// p. ej. en el hijo "Body" de la bomba para que sus colliders (GetComponentsInChildren
    /// del Rigidbody) sean solo los del cuerpo y no robe el agarre de los cables.
    /// </summary>
    public static HandGrabInteractable HandGrab(GameObject go, Rigidbody rb = null)
    {
        if (go == null) return null;
        if (rb == null)
        {
            rb = go.GetComponent<Rigidbody>();
            if (rb == null) rb = go.GetComponentInParent<Rigidbody>();
        }
        if (rb == null)
        {
            rb = go.AddComponent<Rigidbody>();
            rb.isKinematic = true;
            rb.useGravity = false;
        }

        Grabbable grabable = go.GetComponentInParent<Grabbable>();
        if (grabable == null) grabable = go.AddComponent<Grabbable>();

        GrabFreeTransformer free = go.GetComponentInParent<GrabFreeTransformer>();
        if (free == null) free = go.AddComponent<GrabFreeTransformer>();
        grabable.InjectOptionalOneGrabTransformer(free);
        grabable.InjectOptionalTwoGrabTransformer(free);

        HandGrabInteractable handGrab = go.GetComponent<HandGrabInteractable>();
        if (handGrab == null) handGrab = go.AddComponent<HandGrabInteractable>();
        handGrab.InjectAllHandGrabInteractable(
            GrabTypeFlags.All,
            rb,
            GrabbingRule.DefaultPinchRule,
            GrabbingRule.DefaultPalmRule);
        handGrab.InjectOptionalPointableElement(grabable);
        return handGrab;
    }

    /// <summary>Igual que <see cref="Bind(GrabInteractable,...)"/> pero para agarres de mano.</summary>
    public static Action<InteractableStateChangeArgs> Bind(
        HandGrabInteractable interactable,
        Action onGrab,
        Action onRelease,
        Action<InteractableStateChangeArgs> previous = null)
    {
        if (interactable == null) return previous;
        if (previous != null) interactable.WhenStateChanged -= previous;

        Action<InteractableStateChangeArgs> handler = args =>
        {
            if (args.NewState == InteractableState.Select)
            {
                onGrab?.Invoke();
            }
            else if (args.PreviousState == InteractableState.Select
                     && args.NewState != InteractableState.Select)
            {
                onRelease?.Invoke();
            }
        };
        interactable.WhenStateChanged += handler;
        return handler;
    }

    /// <summary>
    /// Grosor (en metros, mundo) del objeto a lo largo de <paramref name="worldDir"/>.
    /// Se usa para colocar la superficie de punteo en la cara exterior del botón.
    /// </summary>
    private static float PokeThickness(GameObject go, Vector3 worldDir)
    {
        Vector3 n = worldDir.normalized;
        Vector3 size;
        Collider col = go.GetComponent<Collider>();
        size = col != null ? col.bounds.size : go.transform.localScale;
        return Mathf.Abs(size.x) * Mathf.Abs(n.x)
             + Mathf.Abs(size.y) * Mathf.Abs(n.y)
             + Mathf.Abs(size.z) * Mathf.Abs(n.z);
    }

    private static Vector2 PokeArea(GameObject go, Vector3 pokeLocalDir)
    {
        Collider col = go.GetComponent<Collider>();
        if (col is BoxCollider box)
        {
            return TangentsArea(box.size, pokeLocalDir);
        }
        if (col is CapsuleCollider cap)
        {
            return TangentsArea(new Vector3(cap.radius * 2f, cap.height, cap.radius * 2f), pokeLocalDir);
        }
        if (col is SphereCollider sphere)
        {
            return new Vector2(sphere.radius * 2f, sphere.radius * 2f);
        }
        return TangentsArea(go.transform.localScale, pokeLocalDir);
    }

    /// <summary>
    /// Devuelve las dos dimensiones del collider perpendiculares a la dirección de punteo.
    /// </summary>
    private static Vector2 TangentsArea(Vector3 size, Vector3 pokeLocalDir)
    {
        Vector3 normal = pokeLocalDir.normalized;
        float ax = Mathf.Abs(normal.x);
        float ay = Mathf.Abs(normal.y);
        float az = Mathf.Abs(normal.z);

        // El eje dominante es el de la normal; los otros dos son los tangentes.
        if (ax >= ay && ax >= az)
            return new Vector2(size.z, size.y);
        if (ay >= ax && ay >= az)
            return new Vector2(size.x, size.z);
        return new Vector2(size.x, size.y);
    }
}
