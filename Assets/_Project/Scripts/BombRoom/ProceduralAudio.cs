using System.Collections.Generic;
using UnityEngine;

public enum SfxType
{
    Tick,
    Snip,
    Strike,
    Solved,
    Explosion,
    Denied
}

/// <summary>
/// Genera todos los efectos de sonido del juego por código (AudioClip.Create)
/// para que el prototipo funcione sin importar ningún audio externo.
/// </summary>
public static class SFX
{
    private const int SampleRate = 44100;
    private static readonly Dictionary<SfxType, AudioClip> cache = new Dictionary<SfxType, AudioClip>();
    private static AudioSource source;

    public static void Play(SfxType type, float volume = 1f)
    {
        EnsureSource();
        AudioClip clip = GetClip(type);
        if (clip != null) source.PlayOneShot(clip, volume);
    }

    /// <summary>Nota suave con decaimiento (interfaces tipo "Simón", menús...).</summary>
    public static void Tone(float frequency, float duration = 0.3f, float volume = 0.55f, float decay = 5f)
    {
        EnsureSource();
        AudioClip clip = Sine(frequency, duration, decay);
        if (clip != null) source.PlayOneShot(clip, volume);
    }

    private static void EnsureSource()
    {
        if (source != null && source.gameObject != null) return;

        GameObject go = new GameObject("SFX");
        go.transform.SetParent(Camera.main != null ? Camera.main.transform : null);
        go.transform.localPosition = Vector3.zero;
        source = go.AddComponent<AudioSource>();
        source.spatialBlend = 0.65f;
        source.playOnAwake = false;
        source.maxDistance = 8f;
        source.rolloffMode = AudioRolloffMode.Linear;
    }

    private static AudioClip GetClip(SfxType type)
    {
        if (cache.TryGetValue(type, out AudioClip existing)) return existing;

        AudioClip clip = type switch
        {
            SfxType.Tick => Sine(880f, 0.05f, 0.5f),
            SfxType.Snip => Noise(0.09f, 0.9f),
            SfxType.Strike => Buzz(190f, 0.45f, 0.6f),
            SfxType.Solved => Chord(new[] { 660f, 880f, 1320f }, 0.35f, 0.4f),
            SfxType.Explosion => ExplosionClip(),
            SfxType.Denied => Sine(150f, 0.14f, 0.7f),
            _ => null
        };

        if (clip != null) cache[type] = clip;
        return clip;
    }

    private static AudioClip Sine(float freq, float duration, float decay)
    {
        int n = Mathf.CeilToInt(duration * SampleRate);
        float[] data = new float[n];
        float step = freq * Mathf.PI * 2f / SampleRate;
        for (int i = 0; i < n; i++)
        {
            float env = Mathf.Exp(-decay * i / (float)SampleRate);
            data[i] = Mathf.Sin(step * i) * env;
        }
        return Make("sine", data, duration);
    }

    private static AudioClip Buzz(float freq, float duration, float decay)
    {
        int n = Mathf.CeilToInt(duration * SampleRate);
        float[] data = new float[n];
        float step = freq * Mathf.PI * 2f / SampleRate;
        for (int i = 0; i < n; i++)
        {
            float env = Mathf.Exp(-decay * i / (float)SampleRate);
            data[i] = (Mathf.Sin(step * i) > 0f ? 0.7f : -0.7f) + Mathf.Sin(step * i * 2f) * 0.3f;
            data[i] *= env;
        }
        return Make("buzz", data, duration);
    }

    private static AudioClip Chord(float[] freqs, float duration, float decay)
    {
        int n = Mathf.CeilToInt(duration * SampleRate);
        float[] data = new float[n];
        for (int i = 0; i < n; i++)
        {
            float env = Mathf.Exp(-decay * i / (float)SampleRate);
            float v = 0f;
            for (int k = 0; k < freqs.Length; k++)
            {
                float step = freqs[k] * Mathf.PI * 2f / SampleRate;
                v += Mathf.Sin(step * i) / freqs.Length;
            }
            data[i] = v * env;
        }
        return Make("chord", data, duration);
    }

    private static AudioClip Noise(float duration, float decay)
    {
        int n = Mathf.CeilToInt(duration * SampleRate);
        float[] data = new float[n];
        for (int i = 0; i < n; i++)
        {
            float env = Mathf.Exp(-decay * i / (float)SampleRate);
            data[i] = (Random.value * 2f - 1f) * env;
        }
        return Make("noise", data, duration);
    }

    private static AudioClip ExplosionClip()
    {
        float duration = 1.6f;
        int n = Mathf.CeilToInt(duration * SampleRate);
        float[] data = new float[n];
        float rumbleStep = 55f * Mathf.PI * 2f / SampleRate;
        float last = 0f;
        for (int i = 0; i < n; i++)
        {
            float env = Mathf.Exp(-2.4f * i / (float)SampleRate);
            float noise = (Random.value * 2f - 1f);
            last = last * 0.94f + noise * 0.06f; // ruido "marrón" grave
            data[i] = (last * 0.8f + Mathf.Sin(rumbleStep * i) * 0.5f + noise * 0.4f) * env;
        }
        return Make("explosion", data, duration);
    }

    private static AudioClip Make(string name, float[] data, float duration)
    {
        AudioClip clip = AudioClip.Create(name, data.Length, 1, SampleRate, false);
        clip.SetData(data, 0);
        return clip;
    }
}
