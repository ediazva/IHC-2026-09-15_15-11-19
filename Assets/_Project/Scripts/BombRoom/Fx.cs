using UnityEngine;

/// <summary>
/// Utilidades para crear materiales/mallas procedurales en tiempo de ejecución
/// sin depender de assets importados: se genera todo con primitivas Unity y
/// materiales URP Lit.
/// </summary>
public static class Fx
{
    public static Material Lit(Color color, float emissiveIntensity = 0f)
    {
        Shader shader = Shader.Find("Universal Render Pipeline/Lit");
        if (shader == null) shader = Shader.Find("Standard");

        Material mat = new Material(shader);
        mat.SetColor("_BaseColor", color);
        if (mat.HasProperty("_Color")) mat.SetColor("_Color", color);

        if (emissiveIntensity > 0f)
        {
            mat.EnableKeyword("_EMISSION");
            mat.SetColor("_EmissionColor", color * emissiveIntensity);
            if (mat.HasProperty("_Emission"))
                mat.SetColor("_Emission", color * emissiveIntensity);
        }
        else
        {
            mat.SetColor("_EmissionColor", Color.black);
        }

        return mat;
    }

    /// <summary>Crea un cubo primitivo con material. Devuelve su transform.</summary>
    public static Transform Cube(Transform parent, string name, Vector3 localPos, Vector3 scale, Color color, float emission = 0f)
    {
        GameObject go = GameObject.CreatePrimitive(PrimitiveType.Cube);
        go.name = name;
        go.transform.SetParent(parent, false);
        go.transform.localPosition = localPos;
        go.transform.localScale = scale;
        go.GetComponent<Renderer>().sharedMaterial = Lit(color, emission);
        return go.transform;
    }

    /// <summary>Crea una esfera primitiva con material. Devuelve su transform.</summary>
    public static Transform Sphere(Transform parent, string name, Vector3 localPos, float radius, Color color, float emission = 0f)
    {
        GameObject go = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        go.name = name;
        go.transform.SetParent(parent, false);
        go.transform.localPosition = localPos;
        go.transform.localScale = Vector3.one * (radius * 2f);
        go.GetComponent<Renderer>().sharedMaterial = Lit(color, emission);
        return go.transform;
    }

    /// <summary>Elimina el collider de un objeto primitivo (para piezas solo visuales).</summary>
    public static void StripCollider(GameObject go)
    {
        Collider col = go.GetComponent<Collider>();
        if (col != null) Object.Destroy(col);
    }
}