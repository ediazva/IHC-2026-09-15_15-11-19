using UnityEngine;

/// <summary>
/// Paleta única de colores de la bomba (cables y LED indicador) y sus nombres
/// en español. Compartida por CablesModule, BombUI y el constructor de la escena
/// para que siempre coincidan.
/// </summary>
public static class BombRoomPalette
{
    public static readonly Color[] Colors =
    {
        new Color(0.85f, 0.15f, 0.12f), // rojo
        new Color(0.15f, 0.45f, 0.95f), // azul
        new Color(0.92f, 0.92f, 0.92f), // blanco
        new Color(0.95f, 0.82f, 0.15f), // amarillo
        new Color(0.20f, 0.75f, 0.25f), // verde
        new Color(0.10f, 0.10f, 0.12f), // negro
    };

    private static readonly string[] Names =
    {
        "ROJO",
        "AZUL",
        "BLANCO",
        "AMARILLO",
        "VERDE",
        "NEGRO",
    };

    public static string NameOf(Color color)
    {
        string best = "?";
        float bestDist = float.MaxValue;
        for (int i = 0; i < Colors.Length; i++)
        {
            Color c = Colors[i];
            float d = (c.r - color.r) * (c.r - color.r)
                    + (c.g - color.g) * (c.g - color.g)
                    + (c.b - color.b) * (c.b - color.b);
            if (d < bestDist)
            {
                bestDist = d;
                best = Names[i];
            }
        }
        return best;
    }
}