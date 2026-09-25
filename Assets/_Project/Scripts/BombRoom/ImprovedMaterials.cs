using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

/// <summary>
/// Materiales mejorados para la estética de la bomba.
/// Crea materiales PBR realistas en tiempo de ejecución sin depender de assets importados.
/// </summary>
public static class ImprovedMaterials
{
    // Cache de materiales para evitar recrearlos
    private static Material s_bombBody;
    private static Material s_metalDark;
    private static Material s_metalBrushed;
    private static Material s_plasticBlack;
    private static Material s_plasticColored;
    private static Material s_wood;
    private static Material s_glass;
    private static Material s_ledOn;
    private static Material s_ledOff;
    private static Material s_cableRubber;
    private static Material s_buttonPlastic;
    private static Material s_goldContact;

    static ImprovedMaterials()
    {
        InitializeMaterials();
    }

    private static void InitializeMaterials()
    {
        Shader urpLit = Shader.Find("Universal Render Pipeline/Lit");
        Shader standard = Shader.Find("Standard");
        Shader fallback = urpLit ?? standard;

        // Bomb Body - Gris metálico (gunmetal) con buena respuesta a luz
        s_bombBody = new Material(fallback);
        s_bombBody.name = "Mat_BombBody_Improved";
        s_bombBody.SetColor("_BaseColor", new Color(0.35f, 0.38f, 0.42f, 1f));
        s_bombBody.SetFloat("_Metallic", 0.7f);
        s_bombBody.SetFloat("_Smoothness", 0.45f);
        s_bombBody.SetFloat("_OcclusionStrength", 1f);

        // Metal oscuro para tornillos, bordes
        s_metalDark = new Material(fallback);
        s_metalDark.name = "Mat_MetalDark";
        s_metalDark.SetColor("_BaseColor", new Color(0.18f, 0.18f, 0.2f, 1f));
        s_metalDark.SetFloat("_Metallic", 0.9f);
        s_metalDark.SetFloat("_Smoothness", 0.4f);

        // Metal cepillado para contactos
        s_metalBrushed = new Material(fallback);
        s_metalBrushed.name = "Mat_MetalBrushed";
        s_metalBrushed.SetColor("_BaseColor", new Color(0.65f, 0.65f, 0.68f, 1f));
        s_metalBrushed.SetFloat("_Metallic", 0.95f);
        s_metalBrushed.SetFloat("_Smoothness", 0.6f);

        // Plástico negro para carcasa de cables
        s_plasticBlack = new Material(fallback);
        s_plasticBlack.name = "Mat_PlasticBlack";
        s_plasticBlack.SetColor("_BaseColor", new Color(0.05f, 0.05f, 0.06f, 1f));
        s_plasticBlack.SetFloat("_Metallic", 0f);
        s_plasticBlack.SetFloat("_Smoothness", 0.15f);

        // Plástico coloreado para botones
        s_plasticColored = new Material(fallback);
        s_plasticColored.name = "Mat_PlasticColored";
        s_plasticColored.SetFloat("_Metallic", 0f);
        s_plasticColored.SetFloat("_Smoothness", 0.25f);

        // Madera para laberinto
        s_wood = new Material(fallback);
        s_wood.name = "Mat_Wood";
        s_wood.SetColor("_BaseColor", new Color(0.45f, 0.32f, 0.2f, 1f));
        s_wood.SetFloat("_Metallic", 0f);
        s_wood.SetFloat("_Smoothness", 0.1f);

        // Vidrio para LEDs
        s_glass = new Material(fallback);
        s_glass.name = "Mat_Glass";
        s_glass.SetColor("_BaseColor", new Color(1f, 1f, 1f, 0.3f));
        s_glass.SetFloat("_Metallic", 0f);
        s_glass.SetFloat("_Smoothness", 1f);
        s_glass.SetFloat("_Surface", 1f); // Transparent
        s_glass.SetFloat("_Blend", 1f);
        s_glass.SetFloat("_SrcBlend", (float)BlendMode.SrcAlpha);
        s_glass.SetFloat("_DstBlend", (float)BlendMode.OneMinusSrcAlpha);
        s_glass.SetFloat("_ZWrite", 0);
        s_glass.renderQueue = 3000;
        s_glass.EnableKeyword("_SURFACE_TYPE_TRANSPARENT");

        // LED encendido
        s_ledOn = new Material(fallback);
        s_ledOn.name = "Mat_LED_On";
        s_ledOn.SetColor("_BaseColor", Color.black);
        s_ledOn.SetFloat("_Metallic", 0f);
        s_ledOn.SetFloat("_Smoothness", 0.5f);
        s_ledOn.EnableKeyword("_EMISSION");

        // LED apagado
        s_ledOff = new Material(fallback);
        s_ledOff.name = "Mat_LED_Off";
        s_ledOff.SetColor("_BaseColor", new Color(0.1f, 0.1f, 0.12f, 1f));
        s_ledOff.SetFloat("_Metallic", 0.1f);
        s_ledOff.SetFloat("_Smoothness", 0.3f);

        // Goma de cable
        s_cableRubber = new Material(fallback);
        s_cableRubber.name = "Mat_CableRubber";
        s_cableRubber.SetColor("_BaseColor", new Color(0.08f, 0.08f, 0.09f, 1f));
        s_cableRubber.SetFloat("_Metallic", 0f);
        s_cableRubber.SetFloat("_Smoothness", 0.1f);

        // Plástico de botón
        s_buttonPlastic = new Material(fallback);
        s_buttonPlastic.name = "Mat_ButtonPlastic";
        s_buttonPlastic.SetFloat("_Metallic", 0f);
        s_buttonPlastic.SetFloat("_Smoothness", 0.3f);

        // Contacto dorado
        s_goldContact = new Material(fallback);
        s_goldContact.name = "Mat_GoldContact";
        s_goldContact.SetColor("_BaseColor", new Color(0.9f, 0.75f, 0.3f, 1f));
        s_goldContact.SetFloat("_Metallic", 1f);
        s_goldContact.SetFloat("_Smoothness", 0.8f);
    }

    public static Material BombBody => s_bombBody;
    public static Material MetalDark => s_metalDark;
    public static Material MetalBrushed => s_metalBrushed;
    public static Material PlasticBlack => s_plasticBlack;
    public static Material Wood => s_wood;
    public static Material Glass => s_glass;
    public static Material CableRubber => s_cableRubber;
    public static Material ButtonPlastic => s_buttonPlastic;
    public static Material GoldContact => s_goldContact;

    public static Material GetColoredPlastic(Color color)
    {
        Material mat = new Material(s_plasticColored);
        mat.SetColor("_BaseColor", color);
        return mat;
    }

    public static Material GetLedOn(Color color)
    {
        Material mat = new Material(s_ledOn);
        mat.SetColor("_EmissionColor", color * 3f);
        mat.SetColor("_BaseColor", color * 0.3f);
        return mat;
    }

    public static Material GetLedOff(Color color)
    {
        Material mat = new Material(s_ledOff);
        mat.SetColor("_BaseColor", color * 0.15f);
        return mat;
    }

    public static Material GetButtonPlastic(Color color)
    {
        Material mat = new Material(s_buttonPlastic);
        mat.SetColor("_BaseColor", color);
        return mat;
    }

    public static Material GetWoodVariant(float darkness = 0f)
    {
        Material mat = new Material(s_wood);
        Color baseColor = s_wood.GetColor("_BaseColor");
        mat.SetColor("_BaseColor", baseColor * (1f - darkness * 0.3f));
        return mat;
    }
}