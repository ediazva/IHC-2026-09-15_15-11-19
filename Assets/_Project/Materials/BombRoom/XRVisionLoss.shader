Shader "BombRoom/XRVisionLoss"
{
    SubShader
    {
        Tags { "RenderType"="Opaque" "RenderPipeline"="UniversalPipeline" }
        ZWrite Off ZTest Always Cull Off

        Pass
        {
            Name "VisionLossForEachEye"

            HLSLPROGRAM
            #pragma vertex Vert
            #pragma fragment Frag
            #pragma multi_compile_instancing
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"
            #include "Packages/com.unity.render-pipelines.core/Runtime/Utilities/Blit.hlsl"

            float _HarassmentVisionStrength;
            float _HarassmentVisionBrightness;
            float _HarassmentVisionVignette;

            half4 Frag(Varyings input) : SV_Target
            {
                UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX(input);
                half4 source = SAMPLE_TEXTURE2D_X(_BlitTexture, sampler_LinearClamp, input.texcoord);
                half gray = dot(source.rgb, half3(0.2126h, 0.7152h, 0.0722h));
                half brightest = max(source.r, max(source.g, source.b));
                half darkest = min(source.r, min(source.g, source.b));
                // Grayscale alone leaves red, blue and yellow cables at different
                // brightnesses. Flatten visibly coloured pixels to the same gray
                // while keeping neutral walls and silhouettes readable.
                half chroma = brightest - darkest;
                half relativeChroma = chroma / max(brightest, 0.001h);
                half colourMask = smoothstep(0.08h, 0.20h, chroma)
                    * smoothstep(0.15h, 0.35h, relativeChroma);
                gray = lerp(min(gray, 0.75h), 0.52h, colourMask);
                half edge = smoothstep(0.18h, 0.72h, length(input.texcoord - 0.5h) * 1.414h);
                half dim = _HarassmentVisionBrightness * (1.0h - _HarassmentVisionVignette * edge);
                half3 obscured = gray * dim;
                return half4(lerp(source.rgb, obscured, saturate(_HarassmentVisionStrength)), source.a);
            }
            ENDHLSL
        }
    }
}
