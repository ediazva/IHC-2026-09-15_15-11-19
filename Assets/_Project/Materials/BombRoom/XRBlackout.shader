Shader "BombRoom/XRBlackout"
{
    Properties
    {
        _Opacity ("Opacity", Range(0, 1)) = 0
        _Radius ("Visible Circle Radius", Range(0.01, 0.5)) = 0.18
        _Edge ("Circle Edge", Range(0.001, 0.05)) = 0.012
        _Aspect ("Eye Aspect", Float) = 1
    }
    SubShader
    {
        Tags { "RenderPipeline"="UniversalPipeline" "Queue"="Overlay+50" "RenderType"="Transparent" }
        Pass
        {
            Name "BlackoutForEachEye"
            Tags { "LightMode"="SRPDefaultUnlit" }
            Cull Off
            ZWrite Off
            ZTest Always
            Blend SrcAlpha OneMinusSrcAlpha

            HLSLPROGRAM
            #pragma target 3.0
            #pragma vertex Vert
            #pragma fragment Frag
            #pragma multi_compile_instancing
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

            CBUFFER_START(UnityPerMaterial)
                float _Opacity;
                float _Radius;
                float _Edge;
                float _Aspect;
            CBUFFER_END

            struct Attributes
            {
                float4 positionOS : POSITION;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct Varyings
            {
                float4 positionCS : SV_POSITION;
                float4 screenPos : TEXCOORD0;
                UNITY_VERTEX_OUTPUT_STEREO
            };

            Varyings Vert(Attributes input)
            {
                Varyings output;
                UNITY_SETUP_INSTANCE_ID(input);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(output);
                output.positionCS = TransformObjectToHClip(input.positionOS.xyz);
                output.screenPos = ComputeScreenPos(output.positionCS);
                return output;
            }

            half4 Frag(Varyings input) : SV_Target
            {
                UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX(input);
                float2 uv = input.screenPos.xy / input.screenPos.w;
                float2 fromCenter = (uv - 0.5) * float2(_Aspect, 1.0);
                float black = smoothstep(_Radius - _Edge, _Radius + _Edge, length(fromCenter));
                return half4(0, 0, 0, black * _Opacity);
            }
            ENDHLSL
        }
    }
}
