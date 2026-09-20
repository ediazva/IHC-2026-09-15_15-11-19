#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_2_t53AA40360DDB151AE9E6933A1F6E258903C5BD42;
struct Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC;
struct Dictionary_2_t3D61F3C6314B396E1252276C5242F7F6E3B0A820;
struct Dictionary_2_t40E00C7968484A24FC0C6EA319105BF0BBB1C5D8;
struct Dictionary_2_tECEFA12444072B7EEBDF40AF0B53BEC6F0CE3861;
struct Dictionary_2_t9C2E4757F3F81A8C8C7EE942D896FEA71985ECB1;
struct Dictionary_2_t11734BDB084B9B3CF7FF66FF72AA2F3FBD7396D6;
struct Dictionary_2_t05D7CDBF9637AF1A0E82218EB3E706E8BD067759;
struct Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8;
struct Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53;
struct Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C;
struct EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75;
struct EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3;
struct HashSetConverter_1_t07AED516E155858A831CBBF39932DF99326957EF;
struct HashSetConverter_1_t3DB6667DB3B106CEB7BA636144EB98E44AE837C3;
struct HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9;
struct HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F;
struct HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED;
struct HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4;
struct HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37;
struct HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828;
struct HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD;
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
struct HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24;
struct HashSet_1_t5D299319344B033FF28ED1EFC8AFEF3FBD8D26A6;
struct HashSet_1_t5E509F80BEFAF0D1157AC4103467D54FC40D9459;
struct ICollection_1_tD8211F2A18EEC19E355C2BB34BFEAF0E1DC0670B;
struct ICollection_1_t9C522F1222A0777DE9A268A8B6D9F66A61CAEFCD;
struct IEnumerable_1_tC40B79B900D68FEC552405A66591CE33BECE375E;
struct IEnumerable_1_t03809B0B75271F0DFECE7AC7C591D35F3A2866E3;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t9172917DB5A215B645D6CC01DEB99EC8A65483CF;
struct IEnumerator_1_tAC97CB9A47A113BF32EDC8C55CDFAE18F3B0412F;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t0D069508A0B01510C49ECB8313CA1826DECC45E1;
struct IEqualityComparer_1_tBAA61C1230BFF51E52AB1C44CAE74D820472FCDE;
struct IEqualityComparer_1_t7D5C7DCB9872C11931DE2E18C2C9AE7B05A5B33A;
struct IEqualityComparer_1_t39D05926269EEB769466313536BE17B159C0F8E2;
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t95351C62AE7A3DC1F5A634C37AF7444A078B5B99;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t9CDB2E77DE70F06FC5ED90C78DB6B9C356ECCEA9;
struct IReadOnlyList_1_t4F009AA654F0054FD0DC2D5B509CADB4CB6AECA9;
struct List_1_t9CEE2998D6E0D27CA64916B517759F8657596864;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20;
struct ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150;
struct ObjectPool_1_tB01A360159214F30397EC893BAAA14B3205B7C47;
struct Predicate_1_tC37CC55BD5786907DB2D2694565582B139C103D4;
struct Predicate_1_tA7DD37E14214700250384729C1F8EA9CC1647D9C;
struct SetElementProperty_t289C8D92DD4214A46FC3E74E8FE7C6EDE8B1C0C9;
struct Stack_1_t8A69A1B0DE92EA0F504C742E29AE30CC75B506A0;
struct Stack_1_t2CB236599BE1BE25AA9FC0C3F10A27404E72E223;
struct UnityAction_1_tE91D7881104262139C090ED0EADCBE71D6E519AF;
struct UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409;
struct UnityAction_1_t980FBD10D55F595EE81A8BC767D6819F54D8A642;
struct KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530;
struct OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960;
struct SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB;
struct SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232;
struct SlotU5BU5D_t50B2FB607ACE0208F48AF08FB4BD685E5D87FF8E;
struct SlotU5BU5D_t5C810FA747371E4866C672AD5391206A35CB5ADD;
struct SlotU5BU5D_tAE9D97FF1C6F21F50CD14CE5C80E7EF54ACA07F6;
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7;
struct SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6;
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A;
struct WitResponseData_t735EE935128B934B69E2489847E5A7AD375C2105;
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseData_t735EE935128B934B69E2489847E5A7AD375C2105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0F19052576940E4C653C32FF5A8A81D0ABB73F97;
IL2CPP_EXTERN_C String_t* _stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414;
IL2CPP_EXTERN_C String_t* _stringLiteral325E9B626B8674DB0D0742BC125F644ED8FFFFCB;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0;
IL2CPP_EXTERN_C String_t* _stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E;
IL2CPP_EXTERN_C String_t* _stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE8697FF635A0BB21392DD8D91CB3D0303148C10A;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530;
struct OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960;
struct SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB;
struct SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_tDC5AC4C57D5D24496026F6F41261DB057567262F  : public RuntimeObject
{
};
struct U3CU3Ec_t0FF56B0CA81E481CEA50A59D56491E25FF6104C7  : public RuntimeObject
{
};
struct EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75  : public RuntimeObject
{
};
struct EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3  : public RuntimeObject
{
};
struct HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9  : public RuntimeObject
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___m_InternalList;
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___m_InternalHashSet;
	int32_t ___m_Count;
};
struct HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F  : public RuntimeObject
{
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___m_InternalList;
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___m_InternalHashSet;
	int32_t ___m_Count;
};
struct HashSetPool_1_tCDE4475FE632D305A8B40C161E3E5D5E24FB73B2  : public RuntimeObject
{
};
struct HashSetPool_1_t703447E09A777B65F717CFC90E4FB4CA574AADA6  : public RuntimeObject
{
};
struct HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t060CC5F2F5C5AB98F0751E1BC2D027BE37B1566D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t50B2FB607ACE0208F48AF08FB4BD685E5D87FF8E* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t8EC9BFC88B56819EF11F4CD75AB4A53C02EF8C38  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t5C810FA747371E4866C672AD5391206A35CB5ADD* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tAE9D97FF1C6F21F50CD14CE5C80E7EF54ACA07F6* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20  : public RuntimeObject
{
	Stack_1_t8A69A1B0DE92EA0F504C742E29AE30CC75B506A0* ___m_Stack;
	UnityAction_1_tE91D7881104262139C090ED0EADCBE71D6E519AF* ___m_ActionOnGet;
	UnityAction_1_tE91D7881104262139C090ED0EADCBE71D6E519AF* ___m_ActionOnRelease;
	bool ___m_CollectionCheck;
	int32_t ___U3CcountAllU3Ek__BackingField;
};
struct ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150  : public RuntimeObject
{
	Stack_1_t2CB236599BE1BE25AA9FC0C3F10A27404E72E223* ___m_Stack;
	UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409* ___m_ActionOnGet;
	UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409* ___m_ActionOnRelease;
	bool ___m_CollectionCheck;
	int32_t ___U3CcountAllU3Ek__BackingField;
};
struct BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1  : public RuntimeObject
{
	int32_t ____length;
	int32_t* ____arrayPtr;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	bool ____useStackAlloc;
};
struct JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6  : public RuntimeObject
{
	bool ___U3CCanReadU3Ek__BackingField;
	bool ___U3CCanWriteU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C  : public RuntimeObject
{
};
struct ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B 
{
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ____set;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____current;
};
struct Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ____list;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB;
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct HashCode64_1_t4EDB30F0347588B1F3B226E3F7B326521C648A15 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tFE953F6C1A9DF203E81CA195BD3AF4DA2C6B9316 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t2CAB206394781A294A414DFE29454A1799B7526A__padding[1];
	};
};
struct HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 
{
	int32_t ___hash;
	int32_t ___lastFrameUsed;
	Il2CppSharedGenericObject* ___compiledGraph;
};
typedef Il2CppFullySharedGenericStruct HashEntry_1_t34DE0D7C69589FE5B61C95DA5669D5B2F315C535;
struct HashSetConverter_1_t07AED516E155858A831CBBF39932DF99326957EF  : public JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6
{
};
struct HashSetConverter_1_t3DB6667DB3B106CEB7BA636144EB98E44AE837C3  : public JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6
{
};
struct HashSetScope_1_t3BE1488ECFDD798A9B48C547C6370C249365B845 
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ____set;
};
struct HashSetScope_1_t97FCE4CBE8C665E6986EB69670255A01FD6D4951 
{
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ____set;
};
struct HashSetScope_1_t317EFD29C1784F174ADF1207112F5153998695D6 
{
	HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ____set;
};
struct HashSetScope_1_t0362F98B157A45247CAC68CEAE4ECB84343BA969 
{
	HashSet_1_t5D299319344B033FF28ED1EFC8AFEF3FBD8D26A6* ____set;
};
struct HashSetScope_1_tE6C005EDA27065714BAC4E1CBA9E02B243CF184C 
{
	HashSet_1_t5E509F80BEFAF0D1157AC4103467D54FC40D9459* ____set;
};
struct PooledObject_tF0578D2ED5B0FC8E22A1DB912ED155A6A5F7F8E7 
{
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___m_ToReturn;
	ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20* ___m_Pool;
};
struct PooledObject_t432123EBFF2674A3A6835051E8FF82B14E1A757A 
{
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___m_ToReturn;
	ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* ___m_Pool;
};
struct PooledObject_t42DFE6F40709CEDB91999103D5FA096C28E0A1DD 
{
	Il2CppSharedGenericObject* ___m_ToReturn;
	ObjectPool_1_tB01A360159214F30397EC893BAAA14B3205B7C47* ___m_Pool;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A  : public WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C
{
	List_1_t9CEE2998D6E0D27CA64916B517759F8657596864* ___m_List;
};
struct WitResponseData_t735EE935128B934B69E2489847E5A7AD375C2105  : public WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C
{
	String_t* ___m_Data;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct LongDoubleUnion_t17011746129284B81F310F56E20D549A6F6710D0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___longValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___longValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___doubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_forAlignmentOnly;
		};
	};
};
struct HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4 
{
	uint8_t* ___Ptr;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B 
{
	uint8_t* ___Ptr;
	int32_t* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC 
{
	uint8_t* ___Ptr;
	Il2CppFullySharedGenericStruct* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 
{
	Guid_t ____id;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
	Guid_t ___U3CUuidU3Ek__BackingField;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct AlignOfHelper_1_t273EAC6E531567E9A44C7A35B5D7DABDD659FC23 
{
	uint8_t ___dummy;
	HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4 ___data;
};
struct AlignOfHelper_1_t245EB4127E14738DE7A1928AA9BD796398AB3E50 
{
	uint8_t ___dummy;
	HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B ___data;
};
struct Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E 
{
	HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ____set;
	int32_t ____index;
	int32_t ____version;
	OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ____current;
};
struct KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C 
{
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct PropertyBag_1_t474B4314A78E9CC97DD8CF6E3ADACCDDAFB0841A  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct Slot_tA4E7BE6FA729CAE00F8988B0513FE507A34753DD 
{
	int32_t ___hashCode;
	int32_t ___next;
	OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___value;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1 
{
	HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ____set;
	int32_t ____index;
	int32_t ____version;
	KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ____current;
};
struct Predicate_1_tC37CC55BD5786907DB2D2694565582B139C103D4  : public MulticastDelegate_t
{
};
struct Predicate_1_tA7DD37E14214700250384729C1F8EA9CC1647D9C  : public MulticastDelegate_t
{
};
struct SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78  : public PropertyBag_1_t474B4314A78E9CC97DD8CF6E3ADACCDDAFB0841A
{
	SetElementProperty_t289C8D92DD4214A46FC3E74E8FE7C6EDE8B1C0C9* ___m_Property;
};
struct Slot_t3885E775D38CEAE68B0526AC77F4AB191DD959D5 
{
	int32_t ___hashCode;
	int32_t ___next;
	KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___value;
};
struct UnityAction_1_tE91D7881104262139C090ED0EADCBE71D6E519AF  : public MulticastDelegate_t
{
};
struct UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED  : public SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct U3CU3Ec_tDC5AC4C57D5D24496026F6F41261DB057567262F_StaticFields
{
	U3CU3Ec_tDC5AC4C57D5D24496026F6F41261DB057567262F* ___U3CU3E9;
};
struct U3CU3Ec_t0FF56B0CA81E481CEA50A59D56491E25FF6104C7_StaticFields
{
	U3CU3Ec_t0FF56B0CA81E481CEA50A59D56491E25FF6104C7* ___U3CU3E9;
};
struct EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75_StaticFields
{
	EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* ___defaultComparer;
};
struct EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3_StaticFields
{
	EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* ___defaultComparer;
};
struct HashSetPool_1_tCDE4475FE632D305A8B40C161E3E5D5E24FB73B2_StaticFields
{
	ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20* ___s_Pool;
};
struct HashSetPool_1_t703447E09A777B65F717CFC90E4FB4CA574AADA6_StaticFields
{
	ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* ___s_Pool;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct HashCode64_1_t4EDB30F0347588B1F3B226E3F7B326521C648A15_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tFE953F6C1A9DF203E81CA195BD3AF4DA2C6B9316_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803_StaticFields
{
	int64_t ___Value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t11734BDB084B9B3CF7FF66FF72AA2F3FBD7396D6* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t05D7CDBF9637AF1A0E82218EB3E706E8BD067759* ___Sources;
	Dictionary_2_t3D61F3C6314B396E1252276C5242F7F6E3B0A820* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t40E00C7968484A24FC0C6EA319105BF0BBB1C5D8* ___ContinueWithInvokers;
	Dictionary_2_tECEFA12444072B7EEBDF40AF0B53BEC6F0CE3861* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t9C2E4757F3F81A8C8C7EE942D896FEA71985ECB1* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t53AA40360DDB151AE9E6933A1F6E258903C5BD42* ____onCombinedTaskCompleted;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	String_t* ___s_nullMessage;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t3885E775D38CEAE68B0526AC77F4AB191DD959D5 m_Items[1];

	inline Slot_t3885E775D38CEAE68B0526AC77F4AB191DD959D5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t3885E775D38CEAE68B0526AC77F4AB191DD959D5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t3885E775D38CEAE68B0526AC77F4AB191DD959D5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___value), (void*)NULL);
	}
	inline Slot_t3885E775D38CEAE68B0526AC77F4AB191DD959D5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t3885E775D38CEAE68B0526AC77F4AB191DD959D5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t3885E775D38CEAE68B0526AC77F4AB191DD959D5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___value), (void*)NULL);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C m_Items[1];

	inline KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tA4E7BE6FA729CAE00F8988B0513FE507A34753DD m_Items[1];

	inline Slot_tA4E7BE6FA729CAE00F8988B0513FE507A34753DD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tA4E7BE6FA729CAE00F8988B0513FE507A34753DD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tA4E7BE6FA729CAE00F8988B0513FE507A34753DD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_tA4E7BE6FA729CAE00F8988B0513FE507A34753DD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tA4E7BE6FA729CAE00F8988B0513FE507A34753DD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tA4E7BE6FA729CAE00F8988B0513FE507A34753DD value)
	{
		m_Items[index] = value;
	}
};
struct OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 m_Items[1];

	inline OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HashMapHelper_1_get_IsCreated_mFD6A2975F04E9C84A9886543625D8E8BCA71E398_fshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_fshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucketSize_m2A7DED1791178844328490156FD5FF62C0684DDD_fshared (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HashMapHelper_1_CalculateDataSize_mA76B484054E6232053F2C05D270444720439279A (int32_t ___0_capacity, int32_t ___1_bucketCapacity, int32_t ___2_sizeOfTValue, int64_t* ___3_outKeyOffset, int64_t* ___4_outNextOffset, int64_t* ___5_outBucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Clear_m08F7FBA8BE840C96DBB073B5BFBC33BC2745AEBE_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Init_mE677108A28CEC3C56984E4A02DFEE18AD8AE470F (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Dispose_mB9A6E998C327368FCA81FFF52F90700CE2557703_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m1F2E37212086F85A441145A7B080D43DC4AE96E4 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_ResizeExact_m2C1676B2361CE379FFF7E5D7ED38BFA7D70079F5 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, int32_t ___0_newCapacity, int32_t ___1_newBucketCapacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_TryAdd_m7352EB6E2C6878171229CEB76D23789F80A3E68C (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271 (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_Find_m92E24EA23797F3B042470461B1915B0552345046 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Resize_mCB33DC355438C39398997816A75650D27F8078FA (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, int32_t ___0_newCapacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucket_m8AFC31D9FC9DFFB709084906F98F39D88FAE72ED_inline (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 CollectionHelper_CreateNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m37DDAEDF9B9C55C4598679FA86B596B53362B6E3 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HashMapHelper_1_CalculateDataSize_m8FE1A181ADA26C64F0619E7FBEA9A84254A93E87 (int32_t ___0_capacity, int32_t ___1_bucketCapacity, int32_t ___2_sizeOfTValue, int64_t* ___3_outKeyOffset, int64_t* ___4_outNextOffset, int64_t* ___5_outBucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Init_mAEAE496CF1D61CF8193E421F3702384A3EE9B0A8 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m805FE99DED95E176759F6DBEF0B7B3120EB67B47 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_ResizeExact_mE445D4814DFEB2380D424B61555B9116D1975FC0 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_newCapacity, int32_t ___1_newBucketCapacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_TryAdd_mF0B5C6B252BBEFA7CD9E6910F6308F44B8E29693 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_Find_m932136D4BE80E55BE7133D5054684109A079E1E6 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Resize_m08A148EBCF2668336D4AB83C01F5178F03EE36BD (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_newCapacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucket_mB186F7D304E7E0D50F8F82E094C5C3C75AD55F71_inline (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0823862A6DDE661D7383395095FB6E793F8C2162_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B HashSet_1_GetEnumerator_m424EB03E25DE615E5944D7BCC698FFE80BEFF568_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m915D35B9BB2A77C5396F4FE1A1C53F1C93B8E337_fshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_m06AE6B158E72B471CF5FC6BCF63AA55CE70CC9A4_gshared_inline (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m33C5B6897405249EFA048F6A8D00FF1E0568B3A9_gshared (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1__ctor_mD856FE22C9C41D24B4FB5BB17716AA3D8B01411D_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4FE49541969583230751E3D25B00AE7237082428_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 HashSetList_1_GetEnumerator_mDA562A8B4D5B348DF79199149178B309A9C3643B_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m0AC731A08F1400089DD478E2D366804833660796_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_mA328CEBE6E025549E9D544B0DC20F1CCEC010DC5_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_RefreshList_mD1EE2ABA0256C6CD0B0F026650294B0E66C0FCAB_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWith_mA903B579E3CF8D3229E3A4A33FDDA90927B265A1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_mC329DA1E059D245AA4538A60A872DCE595C383BD_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_m38AAE9B4945B12DF09933F7D7334834516C211CD_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_mD773B1FACC75D6E5BFB552068D84885D11794A67_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m3A1ECC947A3B4FE6D317D91F10171AB8606D3E21_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_m00247290D467B6DDE695DFE3E5EE9D027AB90D68_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_m512996FD5292D9C85E6448D053D3316CAA9C5BD1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWith_m3E85DE0761C9795EE9D5EC13C6A32B2585DD0974_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m655A34E010FCB41069350D2D616558180A0C0AFF_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ObjectPool_1_Get_mC477E9202FD626D53F1175EF625DF47A96A39DE1_gshared (ObjectPool_1_tB01A360159214F30397EC893BAAA14B3205B7C47* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_t42DFE6F40709CEDB91999103D5FA096C28E0A1DD ObjectPool_1_Get_m4E923E4311EA500B7240A9EFFB9119B714AAFD10_gshared (ObjectPool_1_tB01A360159214F30397EC893BAAA14B3205B7C47* __this, Il2CppSharedGenericObject** ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_mDA498404E0FED30B2CC57A73B32D49F043D3E629_gshared (ObjectPool_1_tB01A360159214F30397EC893BAAA14B3205B7C47* __this, Il2CppSharedGenericObject* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mEFEA54F750A1FFB6264069F934F996B052C6FD49_gshared (UnityAction_1_t980FBD10D55F595EE81A8BC767D6819F54D8A642* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m4581D16C68999546FCC08E2F103FBF180AC9F74F_gshared (ObjectPool_1_tB01A360159214F30397EC893BAAA14B3205B7C47* __this, UnityAction_1_t980FBD10D55F595EE81A8BC767D6819F54D8A642* ___0_actionOnGet, UnityAction_1_t980FBD10D55F595EE81A8BC767D6819F54D8A642* ___1_actionOnRelease, bool ___2_collectionCheck, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* OVRObjectPool_HashSet_TisGuid_t_mA2421D052A3ED55B53F5691182A281CEC7474C05 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRObjectPool_Return_TisGuid_t_mDCF0957D8C8D58802EAE50BE4F4BF8DC70314276 (HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetScope_1_Dispose_m107134107265DC6A3C72C1655EE7D7EF739C0365 (HashSetScope_1_t3BE1488ECFDD798A9B48C547C6370C249365B845* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetScope_1_Dispose_m3764AF28B69E1F038ACD982F1F76713A3D6C16BC_fshared (HashSetScope_1_t97FCE4CBE8C665E6986EB69670255A01FD6D4951* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* OVRObjectPool_HashSet_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m9BAA32D34CBBB854724DE4CE2B62EEF39E60ACBA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRObjectPool_Return_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m460BDEC9AA09F3744D4FB52800D4FAA92C36B8AB_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetScope_1_Dispose_m63F7F32041FA62A66658495A5CDFF7EFD041B2D5_gshared (HashSetScope_1_t317EFD29C1784F174ADF1207112F5153998695D6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* EqualityComparer_1_get_Default_mB5C35C04AE32653F7C5AA18004C7C11C533CB9CF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m7802525BBD8C26A751EC85518917D44C49CD3EAA_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA49811F99EE364E8682EF5C096FE60C96F3AD7B5_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB3840B8C004904C6D22CBF8D16C0A208715557ED_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m1BF5879FB39DC78AA59BEEBB3379AB6EE06F8E16_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_set1, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m21ACCD9DD0FBE0E39C41716A3F8DD91A58376B11_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mE578CED2AA7DB7457EA49C6AF43ADA4211FEBEEE_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mF59B4E04263C83469CDA33BBB491202183779A7C_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m643089CF3D68E8E15DA2F0AB120D532528DB0250_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m5CFE21F548A2D7C90C24B6687AE52AA973F4A16D_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, int32_t ___0_index, int32_t ___1_hashCode, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mD6E7FA0786C2899EB19B90B682122F80985BEB10_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m5E75EE53C36BEFA22FA3B8AA54975EF7E4412954_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m6C6C6F9D44528D862FC4AEC97133A0F193A9FDE3_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4CE0E336BBE99D478D21DFD50B4F52BE8296E759_gshared (Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1* __this, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mF0A335200B469C339FF31F73AC4FDE7519808326_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_m7C9954A3B1264009511603357C0E72C90C934660_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_m80D590E9DEB3D9AC2B4C452C9B17B8C9BB6EA710_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mA918D90144B534D559EDB13F7FA22F3A3C0F12E9_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_m8E2682E138E42FE2F2A0E4F623C20C98EBB096B8_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m5D61B08D4E55D7DAEF19A9C96DD274E29C1EC3BC_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA764DCA3CB14CB2CBDF742A163492FF4DA515B63_fshared_inline (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m606662D9C6A942FD399652076387A0996788063C_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C HashSet_1_CheckUniqueAndUnfoundElements_m2461ACD261D99090E3C8D0C11CDF5A97331B6BDA_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_mDC24442D626419E0FD9E58C05F199448B345A22F_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m6252E7EFDEADFCFEB3F744EB257B09E797C4E7B6_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mE11ECE6AE323498DACB411E0144082E560B4E9BF_gshared_inline (Predicate_1_tC37CC55BD5786907DB2D2694565582B139C103D4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m72DB8BC79BF77ED7B30D23854E8F0986A451E66C_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m8AE85AECEC0DCB926E09123EC66BBC4608C22E2C_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1 HashSet_1_GetEnumerator_mC0B98642A51F02F42597A9CB77AE069EAAC0D1C1_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C Enumerator_get_Current_m3D344377F66D8F581F50C0E4266312331A3B18E9_gshared_inline (Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3916E3DB05C40504C01B0B53B683BFCC6E56A3F8_gshared (Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m1D90A5B78C45F3917D4917C6CC1E19CDAE39E978_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m8C5EA03CBF82A0F69B892FF3E0DA2E85A99DD954_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_value, int32_t* ___1_location, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m3025B6666A254AEDE933EDE04AD66D456C52AD00_fshared_inline (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* EqualityComparer_1_get_Default_mC5AA5E9B22FFF977E3B27ECA51A2C51421F309AE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m459CC7B5030064B461AE133A6205111D6E1E2323_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0F1F63E75AF1373CF714B16042D8F80BA13AE80C_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF112A45900BD83A4359CFE48CF9E30C561C73D4C_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mC83A0071EE4568CDE90BE0BF91D13C8EA5408EF9_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_set1, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m9A559486DD2624E95E51756ED8E8E34A7CB994E0_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mE252B6520A101FCE1DEC1227C38EFB7E7FC20E4B_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m1ED575D623E91D1506556E225A501BEC930E858B_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m7C525F2E1383AD1139218753824B0F4F061BD00A_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mE04D262D02D31838D8F558F006EE726C0D11C8BF_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, int32_t ___0_index, int32_t ___1_hashCode, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m7E6600254D23C774B1117F9C4AC61F9FBAEC0572_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m2317654C2E438BD6FCE03432097BC3A7ADEA6825_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mDF72DDBE28CCB7A7BAFF83A867A453E7B83DFE97_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC69423F9A9601A1D62B510015C5F0104A9251702_gshared (Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E* __this, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m922012922DB192A27E46DAED8906923F1A0057D4_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_mD64C94B08969B65209343FBF352D5135CED47AA8_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_mFA08904864F0740363FBA450B3B3092FA92F311E_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mA3DE1CF94CFA11E7851ED5CF1113B8459A39EE62_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_mB4174F2B4AE41A2435C5AE9C7E255B11860875AE_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_mBA3D136A774A6AFE3C8E0EB09A9AA50D3E57B17B_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m0A9D3C003795F8E0DA90FDBF170F3D0D8E3DB7C6_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A HashSet_1_CheckUniqueAndUnfoundElements_m1B9125BE575F9C600F8BA0DD3D7D62EB289502D7_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_mB838E30BBB9A72AE55DB315E2CE8764EF176D409_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mE2B8A7330144ED8A66E2FEEA8167C23A46362B71_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mBB3EB0BDC78B0E295B7DFE088D13E907D2F3D495_gshared_inline (Predicate_1_tA7DD37E14214700250384729C1F8EA9CC1647D9C* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mEBE957DEE0B4165F0B9D0A496ED24EBC6AB7A07D_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mC1D3FF4821CB4BC95204C370A5BE97C93486C37C_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E HashSet_1_GetEnumerator_m0C9BC1E7C691A7BCF983AF708022BB1A5984124C_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 Enumerator_get_Current_mF50FEE300ADF1C11F6AA21E6CA46C10A445CFCBC_gshared_inline (Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m099F0C871E7E6261D5DB28F215FF4F5C136A1584_gshared (Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m774043E345EF36D4CE51AFEE118697C8BC5E40E3_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m9F88E301CD384C6B5E85A70BEC0739D5E817B9AD_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_value, int32_t* ___1_location, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m32D4BAEAEAB8B63CD58530C3821D9E05084CFD66_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m9C0FADCA718C9341E229CEE17C8FE4855AC72880_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtilityInternal_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mDC8A7125EE74C940B9F940440D412BA4B3A42575_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m5DB7C8854924D1E1D01E14FB83112EBF8905533C_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* EqualityComparer_1_CreateComparer_mA8D8B4B11F146BECFDB9E40DD2D2BD7C835D93A8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* EqualityComparer_1_CreateComparer_mA2149646CB8D5D9EC8FFF21C2F3446B36761E61B_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t273EAC6E531567E9A44C7A35B5D7DABDD659FC23_m2FCB00D512044D1C5DB62954E2684D67CB44E6C3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m4AEA1F2D0EBC5D0A1C2819C02415E77F093D96E2_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t245EB4127E14738DE7A1928AA9BD796398AB3E50_m7E4E66C593913FCDFC8C03C06EFC4FFDC9A96BCF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m0E37BE54FFDD9D93D5ADCA4464466720A0534F51_inline (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_HashStringWithFNV1A64_m3E38919BF51D34D084240B8B6EFB6A753411A335 (String_t* ___0_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_HashStringWithFNV1A64_mB99A3F00B50E38FE98BAD95DC4268387AC1FD933 (String_t* ___0_text, const RuntimeMethod* method) ;
inline bool HashMapHelper_1_get_IsCreated_mC66B418A2E82E1D64B853B0B4C1595E262AF5280_inline (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4*, const RuntimeMethod*))HashMapHelper_1_get_IsCreated_mFD6A2975F04E9C84A9886543625D8E8BCA71E398_fshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_m4BDBABBBAA2F9B553AE1155DFBDB552E23BB2F73_inline (int32_t ___0_x, const RuntimeMethod* method) ;
inline int32_t HashMapHelper_1_CalcCapacityCeilPow2_mA35827F49DBC9E8A4CDC5A3AC37FB9C5A52ED749_inline (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4*, int32_t, const RuntimeMethod*))HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_fshared_inline)(__this, ___0_capacity, method);
}
inline int32_t HashMapHelper_1_GetBucketSize_m6EE89D3EB6F9BFEA0E02B36E8A0D77660554B40E (int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))HashMapHelper_1_GetBucketSize_m2A7DED1791178844328490156FD5FF62C0684DDD_fshared)(___0_capacity, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HashMapHelper_1_CalculateDataSize_mA76B484054E6232053F2C05D270444720439279A (int32_t ___0_capacity, int32_t ___1_bucketCapacity, int32_t ___2_sizeOfTValue, int64_t* ___3_outKeyOffset, int64_t* ___4_outNextOffset, int64_t* ___5_outBucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5 (int64_t ___0_size, int32_t ___1_align, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) ;
inline void HashMapHelper_1_Clear_m21C0538171B411CAC9BA30B06CF6ECCC4043C5CD (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, const RuntimeMethod* method)
{
	((  void (*) (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4*, const RuntimeMethod*))HashMapHelper_1_Clear_m08F7FBA8BE840C96DBB073B5BFBC33BC2745AEBE_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Init_mE677108A28CEC3C56984E4A02DFEE18AD8AE470F (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void HashMapHelper_1_Dispose_m70C52F149ADA2FD42187D1791136FF3E6C2B041C (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, const RuntimeMethod* method)
{
	((  void (*) (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4*, const RuntimeMethod*))HashMapHelper_1_Dispose_mB9A6E998C327368FCA81FFF52F90700CE2557703_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m1F2E37212086F85A441145A7B080D43DC4AE96E4 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_inline (int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_ResizeExact_m2C1676B2361CE379FFF7E5D7ED38BFA7D70079F5 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, int32_t ___0_newCapacity, int32_t ___1_newBucketCapacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_TryAdd_m7352EB6E2C6878171229CEB76D23789F80A3E68C (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271 (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410 (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_Find_m92E24EA23797F3B042470461B1915B0552345046 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Resize_mCB33DC355438C39398997816A75650D27F8078FA (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, int32_t ___0_newCapacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucket_m8AFC31D9FC9DFFB709084906F98F39D88FAE72ED_inline (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityId_Equals_mF0F102A496CE0685C89D0C8EF34E77F9EE064EB8 (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_other, const RuntimeMethod* method) ;
inline bool HashMapHelper_1_MoveNextSearch_m0A42BBF91BDB10F8123E512278A903D2002E8EAB (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method)
{
	return ((  bool (*) (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4*, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626_fshared)(__this, ___0_bucketIndex, ___1_nextIndex, ___2_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 CollectionHelper_CreateNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m37DDAEDF9B9C55C4598679FA86B596B53362B6E3 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool HashMapHelper_1_get_IsCreated_m72820491FD19358BB92A409A68582B9FEE307DB5_inline (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B*, const RuntimeMethod*))HashMapHelper_1_get_IsCreated_mFD6A2975F04E9C84A9886543625D8E8BCA71E398_fshared_inline)(__this, method);
}
inline int32_t HashMapHelper_1_CalcCapacityCeilPow2_m2FAAB96F17C0306951B2DB5C5C0117C51EE2DE93_inline (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B*, int32_t, const RuntimeMethod*))HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_fshared_inline)(__this, ___0_capacity, method);
}
inline int32_t HashMapHelper_1_GetBucketSize_mAA80DACF0E3552D25AAB97114F1FE732C2D00BA7 (int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))HashMapHelper_1_GetBucketSize_m2A7DED1791178844328490156FD5FF62C0684DDD_fshared)(___0_capacity, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HashMapHelper_1_CalculateDataSize_m8FE1A181ADA26C64F0619E7FBEA9A84254A93E87 (int32_t ___0_capacity, int32_t ___1_bucketCapacity, int32_t ___2_sizeOfTValue, int64_t* ___3_outKeyOffset, int64_t* ___4_outNextOffset, int64_t* ___5_outBucketOffset, const RuntimeMethod* method) ;
inline void HashMapHelper_1_Clear_m0E8C4F4833A4FED2CF7B3881A8592B23B6AC2F31 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, const RuntimeMethod* method)
{
	((  void (*) (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B*, const RuntimeMethod*))HashMapHelper_1_Clear_m08F7FBA8BE840C96DBB073B5BFBC33BC2745AEBE_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Init_mAEAE496CF1D61CF8193E421F3702384A3EE9B0A8 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
inline void HashMapHelper_1_Dispose_mDCF706CC6456C34A9AF923AA221897977481C613 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, const RuntimeMethod* method)
{
	((  void (*) (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B*, const RuntimeMethod*))HashMapHelper_1_Dispose_mB9A6E998C327368FCA81FFF52F90700CE2557703_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m805FE99DED95E176759F6DBEF0B7B3120EB67B47 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_ResizeExact_mE445D4814DFEB2380D424B61555B9116D1975FC0 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_newCapacity, int32_t ___1_newBucketCapacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_TryAdd_mF0B5C6B252BBEFA7CD9E6910F6308F44B8E29693 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_Find_m932136D4BE80E55BE7133D5054684109A079E1E6 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Resize_m08A148EBCF2668336D4AB83C01F5178F03EE36BD (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_newCapacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucket_mB186F7D304E7E0D50F8F82E094C5C3C75AD55F71_inline (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
inline bool HashMapHelper_1_MoveNextSearch_m2576560D409AC6BF8713E8BD9070962379245FCA (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method)
{
	return ((  bool (*) (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B*, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626_fshared)(__this, ___0_bucketIndex, ___1_nextIndex, ___2_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B (void* ___0_destination, uint8_t ___1_value, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline void HashSet_1__ctor_m0823862A6DDE661D7383395095FB6E793F8C2162 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1__ctor_m0823862A6DDE661D7383395095FB6E793F8C2162_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitResponseArray_GetEnumerator_mE3D7CAB439F65B7778D55123748DFC6C515D6026 (WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* __this, const RuntimeMethod* method) ;
inline bool HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, Il2CppSharedGenericObject*, const RuntimeMethod*))HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseArray__ctor_m721A235EE997F78DFEBD437510486DE59A685F55 (WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* __this, const RuntimeMethod* method) ;
inline Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B HashSet_1_GetEnumerator_m424EB03E25DE615E5944D7BCC698FFE80BEFF568 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_GetEnumerator_m424EB03E25DE615E5944D7BCC698FFE80BEFF568_gshared)(__this, method);
}
inline void Enumerator_Dispose_mC5F51F21D770B5682BEF3AFA3FEA3CAFE435AB7F (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B*, const RuntimeMethod*))Enumerator_Dispose_m915D35B9BB2A77C5396F4FE1A1C53F1C93B8E337_fshared)(__this, method);
}
inline Il2CppSharedGenericObject* Enumerator_get_Current_m06AE6B158E72B471CF5FC6BCF63AA55CE70CC9A4_inline (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B*, const RuntimeMethod*))Enumerator_get_Current_m06AE6B158E72B471CF5FC6BCF63AA55CE70CC9A4_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseData__ctor_mC5CAD7423156DB2AFA917797D3C239BDF94A0BAD (WitResponseData_t735EE935128B934B69E2489847E5A7AD375C2105* __this, String_t* ___0_aData, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_m33C5B6897405249EFA048F6A8D00FF1E0568B3A9 (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B*, const RuntimeMethod*))Enumerator_MoveNext_m33C5B6897405249EFA048F6A8D00FF1E0568B3A9_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_mC9121064B1F93F5E907EDF233D40EC0CBC302B25 (JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* __this, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared)(__this, ___0_index, method);
}
inline void HashSetList_1__ctor_mD856FE22C9C41D24B4FB5BB17716AA3D8B01411D (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSetList_1__ctor_mD856FE22C9C41D24B4FB5BB17716AA3D8B01411D_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1__ctor_m4FE49541969583230751E3D25B00AE7237082428 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m4FE49541969583230751E3D25B00AE7237082428_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared)(__this, method);
}
inline Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 HashSetList_1_GetEnumerator_mDA562A8B4D5B348DF79199149178B309A9C3643B (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 (*) (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9*, const RuntimeMethod*))HashSetList_1_GetEnumerator_mDA562A8B4D5B348DF79199149178B309A9C3643B_gshared)(__this, method);
}
inline void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
inline bool HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, Il2CppSharedGenericObject*, const RuntimeMethod*))HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386_gshared)(__this, ___0_item, method);
}
inline bool List_1_Remove_m0AC731A08F1400089DD478E2D366804833660796 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_Remove_m0AC731A08F1400089DD478E2D366804833660796_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_ExceptWith_mA328CEBE6E025549E9D544B0DC20F1CCEC010DC5 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ExceptWith_mA328CEBE6E025549E9D544B0DC20F1CCEC010DC5_gshared)(__this, ___0_other, method);
}
inline void HashSetList_1_RefreshList_mD1EE2ABA0256C6CD0B0F026650294B0E66C0FCAB (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9*, const RuntimeMethod*))HashSetList_1_RefreshList_mD1EE2ABA0256C6CD0B0F026650294B0E66C0FCAB_gshared)(__this, method);
}
inline void HashSet_1_IntersectWith_mA903B579E3CF8D3229E3A4A33FDDA90927B265A1 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IntersectWith_mA903B579E3CF8D3229E3A4A33FDDA90927B265A1_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_IsProperSubsetOf_mC329DA1E059D245AA4538A60A872DCE595C383BD (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IsProperSubsetOf_mC329DA1E059D245AA4538A60A872DCE595C383BD_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_IsProperSupersetOf_m38AAE9B4945B12DF09933F7D7334834516C211CD (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IsProperSupersetOf_m38AAE9B4945B12DF09933F7D7334834516C211CD_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_IsSubsetOf_mD773B1FACC75D6E5BFB552068D84885D11794A67 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IsSubsetOf_mD773B1FACC75D6E5BFB552068D84885D11794A67_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_IsSupersetOf_m3A1ECC947A3B4FE6D317D91F10171AB8606D3E21 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IsSupersetOf_m3A1ECC947A3B4FE6D317D91F10171AB8606D3E21_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Overlaps_m00247290D467B6DDE695DFE3E5EE9D027AB90D68 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Overlaps_m00247290D467B6DDE695DFE3E5EE9D027AB90D68_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_SetEquals_m512996FD5292D9C85E6448D053D3316CAA9C5BD1 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_SetEquals_m512996FD5292D9C85E6448D053D3316CAA9C5BD1_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_SymmetricExceptWith_m3E85DE0761C9795EE9D5EC13C6A32B2585DD0974 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_SymmetricExceptWith_m3E85DE0761C9795EE9D5EC13C6A32B2585DD0974_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_Clear_m4C8B89A7D6EE903FEDF2AE7EB15C12372E770087 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared)(__this, method);
}
inline void List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline)(__this, method);
}
inline bool HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, Il2CppSharedGenericObject*, const RuntimeMethod*))HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m75919E1737F4EC8D7DD329629C11CACA64EF5BE3 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_AddRange_m655A34E010FCB41069350D2D616558180A0C0AFF (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m655A34E010FCB41069350D2D616558180A0C0AFF_gshared)(__this, ___0_collection, method);
}
inline int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ObjectPool_1_Get_mC7EA455A853C47435D58F14E4AEE2A478D1EDA54 (ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* (*) (ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20*, const RuntimeMethod*))ObjectPool_1_Get_mC477E9202FD626D53F1175EF625DF47A96A39DE1_gshared)(__this, method);
}
inline PooledObject_tF0578D2ED5B0FC8E22A1DB912ED155A6A5F7F8E7 ObjectPool_1_Get_mA791397D45446D728240C874EB1853108B33C6BD (ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20* __this, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2** ___0_v, const RuntimeMethod* method)
{
	return ((  PooledObject_tF0578D2ED5B0FC8E22A1DB912ED155A6A5F7F8E7 (*) (ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20*, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2**, const RuntimeMethod*))ObjectPool_1_Get_m4E923E4311EA500B7240A9EFFB9119B714AAFD10_gshared)(__this, ___0_v, method);
}
inline void ObjectPool_1_Release_m4C16FE356E556464270B5BF3BE9F49ED4A1979D0 (ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20* __this, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20*, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))ObjectPool_1_Release_mDA498404E0FED30B2CC57A73B32D49F043D3E629_gshared)(__this, ___0_element, method);
}
inline void UnityAction_1__ctor_m2852CF8FCEBCAE485F8F43CD4A6DD64D53B76B71 (UnityAction_1_tE91D7881104262139C090ED0EADCBE71D6E519AF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tE91D7881104262139C090ED0EADCBE71D6E519AF*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mEFEA54F750A1FFB6264069F934F996B052C6FD49_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ObjectPool_1__ctor_m7987C522CD796BB6C78908999127474CE691CE4B (ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20* __this, UnityAction_1_tE91D7881104262139C090ED0EADCBE71D6E519AF* ___0_actionOnGet, UnityAction_1_tE91D7881104262139C090ED0EADCBE71D6E519AF* ___1_actionOnRelease, bool ___2_collectionCheck, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20*, UnityAction_1_tE91D7881104262139C090ED0EADCBE71D6E519AF*, UnityAction_1_tE91D7881104262139C090ED0EADCBE71D6E519AF*, bool, const RuntimeMethod*))ObjectPool_1__ctor_m4581D16C68999546FCC08E2F103FBF180AC9F74F_gshared)(__this, ___0_actionOnGet, ___1_actionOnRelease, ___2_collectionCheck, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* OVRObjectPool_HashSet_TisGuid_t_mA2421D052A3ED55B53F5691182A281CEC7474C05 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRObjectPool_Return_TisGuid_t_mDCF0957D8C8D58802EAE50BE4F4BF8DC70314276 (HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetScope_1_Dispose_m107134107265DC6A3C72C1655EE7D7EF739C0365 (HashSetScope_1_t3BE1488ECFDD798A9B48C547C6370C249365B845* __this, const RuntimeMethod* method) ;
inline void HashSetScope_1_Dispose_m3764AF28B69E1F038ACD982F1F76713A3D6C16BC (HashSetScope_1_t97FCE4CBE8C665E6986EB69670255A01FD6D4951* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSetScope_1_t97FCE4CBE8C665E6986EB69670255A01FD6D4951*, const RuntimeMethod*))HashSetScope_1_Dispose_m3764AF28B69E1F038ACD982F1F76713A3D6C16BC_fshared)(__this, method);
}
inline HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* OVRObjectPool_HashSet_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m9BAA32D34CBBB854724DE4CE2B62EEF39E60ACBA (const RuntimeMethod* method)
{
	return ((  HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* (*) (const RuntimeMethod*))OVRObjectPool_HashSet_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m9BAA32D34CBBB854724DE4CE2B62EEF39E60ACBA_gshared)(method);
}
inline void OVRObjectPool_Return_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m460BDEC9AA09F3744D4FB52800D4FAA92C36B8AB (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))OVRObjectPool_Return_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m460BDEC9AA09F3744D4FB52800D4FAA92C36B8AB_gshared)(___0_set, method);
}
inline void HashSetScope_1_Dispose_m63F7F32041FA62A66658495A5CDFF7EFD041B2D5 (HashSetScope_1_t317EFD29C1784F174ADF1207112F5153998695D6* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSetScope_1_t317EFD29C1784F174ADF1207112F5153998695D6*, const RuntimeMethod*))HashSetScope_1_Dispose_m63F7F32041FA62A66658495A5CDFF7EFD041B2D5_gshared)(__this, method);
}
inline EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* EqualityComparer_1_get_Default_mB5C35C04AE32653F7C5AA18004C7C11C533CB9CF_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB5C35C04AE32653F7C5AA18004C7C11C533CB9CF_gshared_inline)(method);
}
inline void HashSet_1__ctor_m7802525BBD8C26A751EC85518917D44C49CD3EAA (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m7802525BBD8C26A751EC85518917D44C49CD3EAA_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_mA49811F99EE364E8682EF5C096FE60C96F3AD7B5 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mA49811F99EE364E8682EF5C096FE60C96F3AD7B5_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_mB3840B8C004904C6D22CBF8D16C0A208715557ED (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mB3840B8C004904C6D22CBF8D16C0A208715557ED_gshared)(__this, ___0_collection, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline bool HashSet_1_AreEqualityComparersEqual_m1BF5879FB39DC78AA59BEEBB3379AB6EE06F8E16 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_set1, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m1BF5879FB39DC78AA59BEEBB3379AB6EE06F8E16_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m21ACCD9DD0FBE0E39C41716A3F8DD91A58376B11 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, const RuntimeMethod*))HashSet_1_CopyFrom_m21ACCD9DD0FBE0E39C41716A3F8DD91A58376B11_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_mE578CED2AA7DB7457EA49C6AF43ADA4211FEBEEE (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_mE578CED2AA7DB7457EA49C6AF43ADA4211FEBEEE_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_mF59B4E04263C83469CDA33BBB491202183779A7C (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_mF59B4E04263C83469CDA33BBB491202183779A7C_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_m643089CF3D68E8E15DA2F0AB120D532528DB0250 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, const RuntimeMethod*))HashSet_1_TrimExcess_m643089CF3D68E8E15DA2F0AB120D532528DB0250_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
inline void HashSet_1_AddValue_m5CFE21F548A2D7C90C24B6687AE52AA973F4A16D (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, int32_t ___0_index, int32_t ___1_hashCode, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, int32_t, int32_t, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, const RuntimeMethod*))HashSet_1_AddValue_m5CFE21F548A2D7C90C24B6687AE52AA973F4A16D_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline bool HashSet_1_AddIfNotPresent_mD6E7FA0786C2899EB19B90B682122F80985BEB10 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, const RuntimeMethod*))HashSet_1_AddIfNotPresent_mD6E7FA0786C2899EB19B90B682122F80985BEB10_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m5E75EE53C36BEFA22FA3B8AA54975EF7E4412954 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m5E75EE53C36BEFA22FA3B8AA54975EF7E4412954_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_m6C6C6F9D44528D862FC4AEC97133A0F193A9FDE3 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_m6C6C6F9D44528D862FC4AEC97133A0F193A9FDE3_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_m4CE0E336BBE99D478D21DFD50B4F52BE8296E759 (Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1* __this, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1*, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, const RuntimeMethod*))Enumerator__ctor_m4CE0E336BBE99D478D21DFD50B4F52BE8296E759_gshared)(__this, ___0_set, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void HashSet_1_CopyTo_mF0A335200B469C339FF31F73AC4FDE7519808326 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530*, const RuntimeMethod*))HashSet_1_CopyTo_mF0A335200B469C339FF31F73AC4FDE7519808326_gshared)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void HashSet_1_Clear_m3883E29488A3B967A88B7868772B44435FAAD553 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, const RuntimeMethod*))HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared)(__this, method);
}
inline void HashSet_1_IntersectWithHashSetWithSameEC_m7C9954A3B1264009511603357C0E72C90C934660 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, const RuntimeMethod*))HashSet_1_IntersectWithHashSetWithSameEC_m7C9954A3B1264009511603357C0E72C90C934660_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_IntersectWithEnumerable_m80D590E9DEB3D9AC2B4C452C9B17B8C9BB6EA710 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IntersectWithEnumerable_m80D590E9DEB3D9AC2B4C452C9B17B8C9BB6EA710_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Remove_mA918D90144B534D559EDB13F7FA22F3A3C0F12E9 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, const RuntimeMethod*))HashSet_1_Remove_mA918D90144B534D559EDB13F7FA22F3A3C0F12E9_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SymmetricExceptWithUniqueHashSet_m8E2682E138E42FE2F2A0E4F623C20C98EBB096B8 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithUniqueHashSet_m8E2682E138E42FE2F2A0E4F623C20C98EBB096B8_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_SymmetricExceptWithEnumerable_m5D61B08D4E55D7DAEF19A9C96DD274E29C1EC3BC (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, RuntimeObject*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithEnumerable_m5D61B08D4E55D7DAEF19A9C96DD274E29C1EC3BC_gshared)(__this, ___0_other, method);
}
inline int32_t HashSet_1_get_Count_mCAC83DA50655866CCA8BF2C12195D4816E14DD01_inline (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, const RuntimeMethod*))HashSet_1_get_Count_mA764DCA3CB14CB2CBDF742A163492FF4DA515B63_fshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_m606662D9C6A942FD399652076387A0996788063C (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_m606662D9C6A942FD399652076387A0996788063C_gshared)(__this, ___0_other, method);
}
inline ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C HashSet_1_CheckUniqueAndUnfoundElements_m2461ACD261D99090E3C8D0C11CDF5A97331B6BDA (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_m2461ACD261D99090E3C8D0C11CDF5A97331B6BDA_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_mDC24442D626419E0FD9E58C05F199448B345A22F (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_mDC24442D626419E0FD9E58C05F199448B345A22F_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_m6252E7EFDEADFCFEB3F744EB257B09E797C4E7B6 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, const RuntimeMethod*))HashSet_1_Contains_m6252E7EFDEADFCFEB3F744EB257B09E797C4E7B6_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
inline bool Predicate_1_Invoke_mE11ECE6AE323498DACB411E0144082E560B4E9BF_inline (Predicate_1_tC37CC55BD5786907DB2D2694565582B139C103D4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_tC37CC55BD5786907DB2D2694565582B139C103D4*, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, const RuntimeMethod*))Predicate_1_Invoke_mE11ECE6AE323498DACB411E0144082E560B4E9BF_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
inline void HashSet_1_SetCapacity_m72DB8BC79BF77ED7B30D23854E8F0986A451E66C (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_m72DB8BC79BF77ED7B30D23854E8F0986A451E66C_gshared)(__this, ___0_newSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void HashSet_1_IncreaseCapacity_m8AE85AECEC0DCB926E09123EC66BBC4608C22E2C (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_m8AE85AECEC0DCB926E09123EC66BBC4608C22E2C_gshared)(__this, method);
}
inline Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1 HashSet_1_GetEnumerator_mC0B98642A51F02F42597A9CB77AE069EAAC0D1C1 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1 (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, const RuntimeMethod*))HashSet_1_GetEnumerator_mC0B98642A51F02F42597A9CB77AE069EAAC0D1C1_gshared)(__this, method);
}
inline void Enumerator_Dispose_m6D9205D258C774695CEAEAC5FE93B0CEA92FF7C7 (Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1*, const RuntimeMethod*))Enumerator_Dispose_m915D35B9BB2A77C5396F4FE1A1C53F1C93B8E337_fshared)(__this, method);
}
inline KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C Enumerator_get_Current_m3D344377F66D8F581F50C0E4266312331A3B18E9_inline (Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C (*) (Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1*, const RuntimeMethod*))Enumerator_get_Current_m3D344377F66D8F581F50C0E4266312331A3B18E9_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m3916E3DB05C40504C01B0B53B683BFCC6E56A3F8 (Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1*, const RuntimeMethod*))Enumerator_MoveNext_m3916E3DB05C40504C01B0B53B683BFCC6E56A3F8_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C (int32_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, int32_t* ___0_bitArrayPtr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_bitArray, int32_t ___1_length, const RuntimeMethod* method) ;
inline int32_t HashSet_1_InternalIndexOf_m1D90A5B78C45F3917D4917C6CC1E19CDAE39E978 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, const RuntimeMethod*))HashSet_1_InternalIndexOf_m1D90A5B78C45F3917D4917C6CC1E19CDAE39E978_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, int32_t ___0_bitPosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, int32_t ___0_bitPosition, const RuntimeMethod* method) ;
inline bool HashSet_1_AddOrGetLocation_m8C5EA03CBF82A0F69B892FF3E0DA2E85A99DD954 (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_value, int32_t* ___1_location, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, int32_t*, const RuntimeMethod*))HashSet_1_AddOrGetLocation_m8C5EA03CBF82A0F69B892FF3E0DA2E85A99DD954_gshared)(__this, ___0_value, ___1_location, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_mBA202198A2D7607A4856A12A52477D5E19F1139C_inline (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*, const RuntimeMethod*))HashSet_1_get_Comparer_m3025B6666A254AEDE933EDE04AD66D456C52AD00_fshared_inline)(__this, method);
}
inline EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* EqualityComparer_1_get_Default_mC5AA5E9B22FFF977E3B27ECA51A2C51421F309AE_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC5AA5E9B22FFF977E3B27ECA51A2C51421F309AE_gshared_inline)(method);
}
inline void HashSet_1__ctor_m459CC7B5030064B461AE133A6205111D6E1E2323 (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m459CC7B5030064B461AE133A6205111D6E1E2323_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_m0F1F63E75AF1373CF714B16042D8F80BA13AE80C (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m0F1F63E75AF1373CF714B16042D8F80BA13AE80C_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_mF112A45900BD83A4359CFE48CF9E30C561C73D4C (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mF112A45900BD83A4359CFE48CF9E30C561C73D4C_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_mC83A0071EE4568CDE90BE0BF91D13C8EA5408EF9 (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_set1, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_mC83A0071EE4568CDE90BE0BF91D13C8EA5408EF9_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m9A559486DD2624E95E51756ED8E8E34A7CB994E0 (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, const RuntimeMethod*))HashSet_1_CopyFrom_m9A559486DD2624E95E51756ED8E8E34A7CB994E0_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_mE252B6520A101FCE1DEC1227C38EFB7E7FC20E4B (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_mE252B6520A101FCE1DEC1227C38EFB7E7FC20E4B_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_m1ED575D623E91D1506556E225A501BEC930E858B (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_m1ED575D623E91D1506556E225A501BEC930E858B_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_m7C525F2E1383AD1139218753824B0F4F061BD00A (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, const RuntimeMethod*))HashSet_1_TrimExcess_m7C525F2E1383AD1139218753824B0F4F061BD00A_gshared)(__this, method);
}
inline void HashSet_1_AddValue_mE04D262D02D31838D8F558F006EE726C0D11C8BF (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, int32_t ___0_index, int32_t ___1_hashCode, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, int32_t, int32_t, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, const RuntimeMethod*))HashSet_1_AddValue_mE04D262D02D31838D8F558F006EE726C0D11C8BF_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_m7E6600254D23C774B1117F9C4AC61F9FBAEC0572 (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, const RuntimeMethod*))HashSet_1_AddIfNotPresent_m7E6600254D23C774B1117F9C4AC61F9FBAEC0572_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m2317654C2E438BD6FCE03432097BC3A7ADEA6825 (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m2317654C2E438BD6FCE03432097BC3A7ADEA6825_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_mDF72DDBE28CCB7A7BAFF83A867A453E7B83DFE97 (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_mDF72DDBE28CCB7A7BAFF83A867A453E7B83DFE97_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_mC69423F9A9601A1D62B510015C5F0104A9251702 (Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E* __this, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E*, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, const RuntimeMethod*))Enumerator__ctor_mC69423F9A9601A1D62B510015C5F0104A9251702_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_m922012922DB192A27E46DAED8906923F1A0057D4 (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960*, const RuntimeMethod*))HashSet_1_CopyTo_m922012922DB192A27E46DAED8906923F1A0057D4_gshared)(__this, ___0_array, method);
}
inline void HashSet_1_Clear_mA99119AE2B4B524C2154035DBE00FD84716FDD1B (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, const RuntimeMethod*))HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared)(__this, method);
}
inline void HashSet_1_IntersectWithHashSetWithSameEC_mD64C94B08969B65209343FBF352D5135CED47AA8 (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, const RuntimeMethod*))HashSet_1_IntersectWithHashSetWithSameEC_mD64C94B08969B65209343FBF352D5135CED47AA8_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_IntersectWithEnumerable_mFA08904864F0740363FBA450B3B3092FA92F311E (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IntersectWithEnumerable_mFA08904864F0740363FBA450B3B3092FA92F311E_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Remove_mA3DE1CF94CFA11E7851ED5CF1113B8459A39EE62 (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, const RuntimeMethod*))HashSet_1_Remove_mA3DE1CF94CFA11E7851ED5CF1113B8459A39EE62_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SymmetricExceptWithUniqueHashSet_mB4174F2B4AE41A2435C5AE9C7E255B11860875AE (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithUniqueHashSet_mB4174F2B4AE41A2435C5AE9C7E255B11860875AE_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_SymmetricExceptWithEnumerable_mBA3D136A774A6AFE3C8E0EB09A9AA50D3E57B17B (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, RuntimeObject*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithEnumerable_mBA3D136A774A6AFE3C8E0EB09A9AA50D3E57B17B_gshared)(__this, ___0_other, method);
}
inline int32_t HashSet_1_get_Count_mC0398A20BC1A2D7BBD1EE8116867E23163B483BE_inline (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, const RuntimeMethod*))HashSet_1_get_Count_mA764DCA3CB14CB2CBDF742A163492FF4DA515B63_fshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_m0A9D3C003795F8E0DA90FDBF170F3D0D8E3DB7C6 (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_m0A9D3C003795F8E0DA90FDBF170F3D0D8E3DB7C6_gshared)(__this, ___0_other, method);
}
inline ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A HashSet_1_CheckUniqueAndUnfoundElements_m1B9125BE575F9C600F8BA0DD3D7D62EB289502D7 (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_m1B9125BE575F9C600F8BA0DD3D7D62EB289502D7_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_mB838E30BBB9A72AE55DB315E2CE8764EF176D409 (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_mB838E30BBB9A72AE55DB315E2CE8764EF176D409_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_mE2B8A7330144ED8A66E2FEEA8167C23A46362B71 (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, const RuntimeMethod*))HashSet_1_Contains_mE2B8A7330144ED8A66E2FEEA8167C23A46362B71_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_mBB3EB0BDC78B0E295B7DFE088D13E907D2F3D495_inline (Predicate_1_tA7DD37E14214700250384729C1F8EA9CC1647D9C* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_tA7DD37E14214700250384729C1F8EA9CC1647D9C*, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, const RuntimeMethod*))Predicate_1_Invoke_mBB3EB0BDC78B0E295B7DFE088D13E907D2F3D495_gshared_inline)(__this, ___0_obj, method);
}
inline void HashSet_1_SetCapacity_mEBE957DEE0B4165F0B9D0A496ED24EBC6AB7A07D (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_mEBE957DEE0B4165F0B9D0A496ED24EBC6AB7A07D_gshared)(__this, ___0_newSize, method);
}
inline void HashSet_1_IncreaseCapacity_mC1D3FF4821CB4BC95204C370A5BE97C93486C37C (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_mC1D3FF4821CB4BC95204C370A5BE97C93486C37C_gshared)(__this, method);
}
inline Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E HashSet_1_GetEnumerator_m0C9BC1E7C691A7BCF983AF708022BB1A5984124C (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, const RuntimeMethod*))HashSet_1_GetEnumerator_m0C9BC1E7C691A7BCF983AF708022BB1A5984124C_gshared)(__this, method);
}
inline void Enumerator_Dispose_m9AF0FA6AE49B33E52C24F1AE729567689BB23246 (Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E*, const RuntimeMethod*))Enumerator_Dispose_m915D35B9BB2A77C5396F4FE1A1C53F1C93B8E337_fshared)(__this, method);
}
inline OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 Enumerator_get_Current_mF50FEE300ADF1C11F6AA21E6CA46C10A445CFCBC_inline (Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E* __this, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 (*) (Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E*, const RuntimeMethod*))Enumerator_get_Current_mF50FEE300ADF1C11F6AA21E6CA46C10A445CFCBC_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m099F0C871E7E6261D5DB28F215FF4F5C136A1584 (Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E*, const RuntimeMethod*))Enumerator_MoveNext_m099F0C871E7E6261D5DB28F215FF4F5C136A1584_gshared)(__this, method);
}
inline int32_t HashSet_1_InternalIndexOf_m774043E345EF36D4CE51AFEE118697C8BC5E40E3 (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, const RuntimeMethod*))HashSet_1_InternalIndexOf_m774043E345EF36D4CE51AFEE118697C8BC5E40E3_gshared)(__this, ___0_item, method);
}
inline bool HashSet_1_AddOrGetLocation_m9F88E301CD384C6B5E85A70BEC0739D5E817B9AD (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_value, int32_t* ___1_location, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, int32_t*, const RuntimeMethod*))HashSet_1_AddOrGetLocation_m9F88E301CD384C6B5E85A70BEC0739D5E817B9AD_gshared)(__this, ___0_value, ___1_location, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_mBBA94DC481A87DF04E57939CF162C1359440368E_inline (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*, const RuntimeMethod*))HashSet_1_get_Comparer_m3025B6666A254AEDE933EDE04AD66D456C52AD00_fshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_mCD77943688E8533316BC0238E5B9344B6433E3C0_inline (uint32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m32D4BAEAEAB8B63CD58530C3821D9E05084CFD66_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m9C0FADCA718C9341E229CEE17C8FE4855AC72880_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtilityInternal_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mDC8A7125EE74C940B9F940440D412BA4B3A42575_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m5DB7C8854924D1E1D01E14FB83112EBF8905533C_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* EqualityComparer_1_CreateComparer_mA8D8B4B11F146BECFDB9E40DD2D2BD7C835D93A8 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mA8D8B4B11F146BECFDB9E40DD2D2BD7C835D93A8_gshared)(method);
}
inline EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* EqualityComparer_1_CreateComparer_mA2149646CB8D5D9EC8FFF21C2F3446B36761E61B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mA2149646CB8D5D9EC8FFF21C2F3446B36761E61B_gshared)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t273EAC6E531567E9A44C7A35B5D7DABDD659FC23_m2FCB00D512044D1C5DB62954E2684D67CB44E6C3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m4AEA1F2D0EBC5D0A1C2819C02415E77F093D96E2_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t245EB4127E14738DE7A1928AA9BD796398AB3E50_m7E4E66C593913FCDFC8C03C06EFC4FFDC9A96BCF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m0E37BE54FFDD9D93D5ADCA4464466720A0534F51_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 57811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCode64_1__cctor_mC2727CF7325EEF36A0910109DA084BC36802B362 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(27, L_1);
		int64_t L_3;
		L_3 = BurstRuntime_HashStringWithFNV1A64_m3E38919BF51D34D084240B8B6EFB6A753411A335(L_2, NULL);
		((HashCode64_1_t4EDB30F0347588B1F3B226E3F7B326521C648A15_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___Value = L_3;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 135457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCode64_1__cctor_m8BED2EBA8FDA003AAFB53DF78E8CD8B594B2665E_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(27, L_1);
		int64_t L_3;
		L_3 = BurstRuntime_HashStringWithFNV1A64_mB99A3F00B50E38FE98BAD95DC4268387AC1FD933(L_2, NULL);
		((HashCode64_1_tFE953F6C1A9DF203E81CA195BD3AF4DA2C6B9316_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___Value = L_3;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 57811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCode64_1__cctor_m1A47E3C4E4C8DF53C16ACBAFD4858C8E736B2A49_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(27, L_1);
		int64_t L_3;
		L_3 = BurstRuntime_HashStringWithFNV1A64_m3E38919BF51D34D084240B8B6EFB6A753411A335(L_2, NULL);
		((HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___Value = L_3;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 92364
// Method Definition Index: 92365
// Method Definition Index: 92366
// Method Definition Index: 92367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_get_IsEmpty_mC95600A328DE9AC00659667282A7FDCDDF4D6742 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = HashMapHelper_1_get_IsCreated_mC66B418A2E82E1D64B853B0B4C1595E262AF5280_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->___Count;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)1;
	}
}
// Method Definition Index: 92368
// Method Definition Index: 92369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Init_mE677108A28CEC3C56984E4A02DFEE18AD8AE470F (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	{
		__this->___Count = 0;
		int32_t L_0 = ___2_minGrowth;
		int32_t L_1;
		L_1 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(1, L_0, NULL);
		int32_t L_2;
		L_2 = math_lzcnt_m4BDBABBBAA2F9B553AE1155DFBDB552E23BB2F73_inline(((int32_t)il2cpp_codegen_subtract(L_1, 1)), NULL);
		uint8_t L_3 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_2)),NULL));
		__this->___Log2MinGrowth = (int32_t)L_3;
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashMapHelper_1_CalcCapacityCeilPow2_mA35827F49DBC9E8A4CDC5A3AC37FB9C5A52ED749_inline(__this, L_4, NULL);
		___0_capacity = L_5;
		int32_t L_6 = ___0_capacity;
		__this->___Capacity = L_6;
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = HashMapHelper_1_GetBucketSize_m6EE89D3EB6F9BFEA0E02B36E8A0D77660554B40E(L_7, NULL);
		__this->___BucketCapacity = L_8;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9 = ___3_allocator;
		__this->___Allocator = L_9;
		int32_t L_10 = ___1_sizeOfValueT;
		__this->___SizeOfTValue = L_10;
		int32_t L_11 = ___0_capacity;
		int32_t L_12 = __this->___BucketCapacity;
		int32_t L_13 = ___1_sizeOfValueT;
		int64_t L_14;
		L_14 = HashMapHelper_1_CalculateDataSize_mA76B484054E6232053F2C05D270444720439279A(L_11, L_12, L_13, (&V_0), (&V_1), (&V_2), NULL);
		V_3 = L_14;
		int64_t L_15 = V_3;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_16 = ___3_allocator;
		void* L_17;
		L_17 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_15, ((int32_t)64), L_16, NULL);
		__this->___Ptr = (uint8_t*)L_17;
		uint8_t* L_18 = __this->___Ptr;
		int64_t L_19 = V_0;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_19,NULL));
		__this->___Keys = (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, L_20));
		uint8_t* L_21 = __this->___Ptr;
		int64_t L_22 = V_1;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_22,NULL));
		__this->___Next = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, L_23));
		uint8_t* L_24 = __this->___Ptr;
		int64_t L_25 = V_2;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_25,NULL));
		__this->___Buckets = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, L_26));
		HashMapHelper_1_Clear_m21C0538171B411CAC9BA30B06CF6ECCC4043C5CD(__this, NULL);
		return;
	}
}
// Method Definition Index: 92370
// Method Definition Index: 92371
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* HashMapHelper_1_Alloc_m42F50FB85C8ADF3D998C2DD4D52A80FA0EF6B15B (int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* V_0 = NULL;
	{
		uint32_t L_0 = sizeof(HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4);
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_0,NULL));
		int32_t L_2;
		L_2 = UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402_inline(NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		void* L_4;
		L_4 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_1, L_2, L_3, NULL);
		V_0 = (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4*)L_4;
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_5 = V_0;
		int32_t L_6 = ___0_capacity;
		int32_t L_7 = ___1_sizeOfValueT;
		int32_t L_8 = ___2_minGrowth;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9 = ___3_allocator;
		HashMapHelper_1_Init_mE677108A28CEC3C56984E4A02DFEE18AD8AE470F((HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4*)L_5, L_6, L_7, L_8, L_9, NULL);
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_10 = V_0;
		return L_10;
	}
}
// Method Definition Index: 92372
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Free_mB266A747C6C87DD6A51E5EE72A27423F7D82472C (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_data, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_0 = ___0_data;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8697FF635A0BB21392DD8D91CB3D0303148C10A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0010:
	{
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_3 = ___0_data;
		HashMapHelper_1_Dispose_m70C52F149ADA2FD42187D1791136FF3E6C2B041C((HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4*)L_3, NULL);
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_4 = ___0_data;
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_5 = ___0_data;
		NullCheck(L_5);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = L_5->___Allocator;
		Unmanaged_Free_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m1F2E37212086F85A441145A7B080D43DC4AE96E4(L_4, L_6, NULL);
		return;
	}
}
// Method Definition Index: 92373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Resize_mCB33DC355438C39398997816A75650D27F8078FA (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, int32_t ___0_newCapacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_newCapacity;
		int32_t L_1 = __this->___Count;
		int32_t L_2;
		L_2 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(L_0, L_1, NULL);
		___0_newCapacity = L_2;
		int32_t L_3 = ___0_newCapacity;
		int32_t L_4;
		L_4 = HashMapHelper_1_GetBucketSize_m6EE89D3EB6F9BFEA0E02B36E8A0D77660554B40E(L_3, NULL);
		int32_t L_5;
		L_5 = math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_inline(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = __this->___Capacity;
		int32_t L_7 = ___0_newCapacity;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_8 = __this->___BucketCapacity;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_002d;
		}
	}
	{
		return;
	}

IL_002d:
	{
		int32_t L_10 = ___0_newCapacity;
		int32_t L_11 = V_0;
		HashMapHelper_1_ResizeExact_m2C1676B2361CE379FFF7E5D7ED38BFA7D70079F5(__this, L_10, L_11, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return;
	}
}
// Method Definition Index: 92374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_ResizeExact_m2C1676B2361CE379FFF7E5D7ED38BFA7D70079F5 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, int32_t ___0_newCapacity, int32_t ___1_newBucketCapacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	uint8_t* V_4 = NULL;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* V_5 = NULL;
	int32_t* V_6 = NULL;
	int32_t* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		int32_t L_0 = ___0_newCapacity;
		int32_t L_1 = ___1_newBucketCapacity;
		int32_t L_2 = __this->___SizeOfTValue;
		int64_t L_3;
		L_3 = HashMapHelper_1_CalculateDataSize_mA76B484054E6232053F2C05D270444720439279A(L_0, L_1, L_2, (&V_0), (&V_1), (&V_2), NULL);
		V_3 = L_3;
		uint8_t* L_4 = __this->___Ptr;
		V_4 = L_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_5 = __this->___Keys;
		V_5 = L_5;
		int32_t* L_6 = __this->___Next;
		V_6 = L_6;
		int32_t* L_7 = __this->___Buckets;
		V_7 = L_7;
		int32_t L_8 = __this->___BucketCapacity;
		int64_t L_9 = V_3;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_10 = __this->___Allocator;
		void* L_11;
		L_11 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_9, ((int32_t)64), L_10, NULL);
		__this->___Ptr = (uint8_t*)L_11;
		uint8_t* L_12 = __this->___Ptr;
		int64_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_13,NULL));
		__this->___Keys = (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, L_14));
		uint8_t* L_15 = __this->___Ptr;
		int64_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_16,NULL));
		__this->___Next = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_17));
		uint8_t* L_18 = __this->___Ptr;
		int64_t L_19 = V_2;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_19,NULL));
		__this->___Buckets = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, L_20));
		int32_t L_21 = ___0_newCapacity;
		__this->___Capacity = L_21;
		int32_t L_22 = ___1_newBucketCapacity;
		__this->___BucketCapacity = L_22;
		HashMapHelper_1_Clear_m21C0538171B411CAC9BA30B06CF6ECCC4043C5CD(__this, NULL);
		V_8 = 0;
		V_9 = L_8;
		goto IL_00f6;
	}

IL_0096:
	{
		int32_t* L_23 = V_7;
		int32_t L_24 = V_8;
		intptr_t L_25 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_24,NULL));
		int32_t L_26 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(L_25, 4)))));
		V_10 = L_26;
		goto IL_00eb;
	}

IL_00a3:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_27 = V_5;
		int32_t L_28 = V_10;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		uint32_t L_30 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		int32_t L_31;
		L_31 = HashMapHelper_1_TryAdd_m7352EB6E2C6878171229CEB76D23789F80A3E68C(__this, (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, (int32_t)L_30)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		V_11 = L_31;
		uint8_t* L_32 = __this->___Ptr;
		int32_t L_33 = __this->___SizeOfTValue;
		int32_t L_34 = V_11;
		uint8_t* L_35 = V_4;
		int32_t L_36 = __this->___SizeOfTValue;
		int32_t L_37 = V_10;
		int32_t L_38 = __this->___SizeOfTValue;
		int64_t L_39 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_38,NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_32, ((int32_t)il2cpp_codegen_multiply(L_33, L_34)))), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_35, ((int32_t)il2cpp_codegen_multiply(L_36, L_37)))), L_39, NULL);
		int32_t* L_40 = V_6;
		int32_t L_41 = V_10;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))));
		V_10 = L_43;
	}

IL_00eb:
	{
		int32_t L_44 = V_10;
		if ((!(((uint32_t)L_44) == ((uint32_t)(-1)))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_45 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00f6:
	{
		int32_t L_46 = V_8;
		int32_t L_47 = V_9;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0096;
		}
	}
	{
		uint8_t* L_48 = V_4;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_49 = __this->___Allocator;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_48, L_49, NULL);
		return;
	}
}
// Method Definition Index: 92375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_TrimExcess_m9B603D5D5B8B417C3E826E82653D1B57E463A7F3 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___Count;
		int32_t L_1;
		L_1 = HashMapHelper_1_CalcCapacityCeilPow2_mA35827F49DBC9E8A4CDC5A3AC37FB9C5A52ED749_inline(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = HashMapHelper_1_GetBucketSize_m6EE89D3EB6F9BFEA0E02B36E8A0D77660554B40E(L_3, NULL);
		HashMapHelper_1_ResizeExact_m2C1676B2361CE379FFF7E5D7ED38BFA7D70079F5(__this, L_2, L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return;
	}
}
// Method Definition Index: 92376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HashMapHelper_1_CalculateDataSize_mA76B484054E6232053F2C05D270444720439279A (int32_t ___0_capacity, int32_t ___1_bucketCapacity, int32_t ___2_sizeOfTValue, int64_t* ___3_outKeyOffset, int64_t* ___4_outNextOffset, int64_t* ___5_outBucketOffset, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	{
		uint32_t L_0 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_0,NULL));
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_0 = L_2;
		int32_t L_3 = ___2_sizeOfTValue;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = ___0_capacity;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		V_1 = ((int64_t)il2cpp_codegen_multiply(L_4, L_6));
		int32_t L_7 = ___0_capacity;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_1, L_8));
		int64_t L_9 = V_0;
		int32_t L_10 = ___0_capacity;
		int64_t L_11 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_9, L_11));
		int64_t L_12 = V_0;
		int32_t L_13 = ___1_bucketCapacity;
		int64_t L_14 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_13,NULL));
		V_4 = ((int64_t)il2cpp_codegen_multiply(L_12, L_14));
		int64_t L_15 = V_1;
		int64_t L_16 = V_2;
		int64_t L_17 = V_3;
		int64_t L_18 = V_4;
		int64_t* L_19 = ___3_outKeyOffset;
		int64_t L_20 = V_1;
		il2cpp_codegen_stind<int64_t>((int64_t*)L_19, (int64_t)L_20);
		int64_t* L_21 = ___4_outNextOffset;
		int64_t* L_22 = ___3_outKeyOffset;
		int64_t L_23 = il2cpp_codegen_ldind<int64_t, int64_t>(L_22);
		int64_t L_24 = V_2;
		il2cpp_codegen_stind<int64_t>((int64_t*)L_21, (int64_t)((int64_t)il2cpp_codegen_add(L_23, L_24)));
		int64_t* L_25 = ___5_outBucketOffset;
		int64_t* L_26 = ___4_outNextOffset;
		int64_t L_27 = il2cpp_codegen_ldind<int64_t, int64_t>(L_26);
		int64_t L_28 = V_3;
		il2cpp_codegen_stind<int64_t>((int64_t*)L_25, (int64_t)((int64_t)il2cpp_codegen_add(L_27, L_28)));
		return ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_15, L_16)), L_17)), L_18));
	}
}
// Method Definition Index: 92377
// Method Definition Index: 92378
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucket_m8AFC31D9FC9DFFB709084906F98F39D88FAE72ED (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_0 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&V_0), NULL);
		uint64_t L_3 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_2,NULL));
		int32_t L_4 = __this->___BucketCapacity;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_4, 1)),NULL));
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_3&L_5)),NULL));
		return L_6;
	}
}
// Method Definition Index: 92379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_TryAdd_m7352EB6E2C6878171229CEB76D23789F80A3E68C (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_0 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_0);
		int32_t L_2;
		L_2 = HashMapHelper_1_Find_m92E24EA23797F3B042470461B1915B0552345046(__this, L_1, NULL);
		if ((!(((uint32_t)(-1)) == ((uint32_t)L_2))))
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_3 = __this->___AllocatedIndex;
		int32_t L_4 = __this->___Capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = __this->___FirstFreeIdx;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_6 = __this->___Capacity;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)536870912)))))
		{
			goto IL_0038;
		}
	}
	{
		return (-1);
	}

IL_0038:
	{
		int32_t L_7 = __this->___Capacity;
		int32_t L_8 = __this->___Log2MinGrowth;
		int32_t L_9;
		L_9 = HashMapHelper_1_CalcCapacityCeilPow2_mA35827F49DBC9E8A4CDC5A3AC37FB9C5A52ED749_inline(__this, ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(1<<((int32_t)(L_8&((int32_t)31))))))), NULL);
		V_2 = L_9;
		int32_t L_10 = V_2;
		HashMapHelper_1_Resize_mCB33DC355438C39398997816A75650D27F8078FA(__this, L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
	}

IL_0058:
	{
		int32_t L_11 = __this->___FirstFreeIdx;
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_13 = __this->___Next;
		int32_t L_14 = V_0;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_14,NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		__this->___FirstFreeIdx = L_16;
		goto IL_0089;
	}

IL_0077:
	{
		int32_t L_17 = __this->___AllocatedIndex;
		V_3 = L_17;
		int32_t L_18 = V_3;
		__this->___AllocatedIndex = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_3;
		V_0 = L_19;
	}

IL_0089:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_20 = __this->___Keys;
		int32_t L_21 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_22 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_23 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_22);
		UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2_inline((void*)L_20, L_21, L_23, NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_24 = ___0_key;
		int32_t L_25;
		L_25 = HashMapHelper_1_GetBucket_m8AFC31D9FC9DFFB709084906F98F39D88FAE72ED_inline(__this, L_24, NULL);
		V_1 = L_25;
		int32_t* L_26 = __this->___Next;
		int32_t L_27 = V_0;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t* L_29 = __this->___Buckets;
		int32_t L_30 = V_1;
		intptr_t L_31 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_30,NULL));
		int32_t L_32 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(L_31, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), (int32_t)L_32);
		int32_t* L_33 = __this->___Buckets;
		int32_t L_34 = V_1;
		intptr_t L_35 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_34,NULL));
		int32_t L_36 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(L_35, 4)))), (int32_t)L_36);
		int32_t L_37 = __this->___Count;
		__this->___Count = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = V_0;
		return L_38;
	}

IL_00d8:
	{
		return (-1);
	}
}
// Method Definition Index: 92380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_Find_m92E24EA23797F3B042470461B1915B0552345046 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___AllocatedIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_1;
		L_1 = HashMapHelper_1_GetBucket_m8AFC31D9FC9DFFB709084906F98F39D88FAE72ED_inline(__this, (&___0_key), NULL);
		V_0 = L_1;
		int32_t* L_2 = __this->___Buckets;
		int32_t L_3 = V_0;
		intptr_t L_4 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(L_4, 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		int32_t L_7 = __this->___Capacity;
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t* L_8 = __this->___Next;
		V_2 = L_8;
		goto IL_0044;
	}

IL_0031:
	{
		int32_t* L_9 = V_2;
		int32_t L_10 = V_1;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))));
		V_1 = L_12;
		int32_t L_13 = V_1;
		int32_t L_14 = __this->___Capacity;
		if ((!(((uint32_t)L_13) >= ((uint32_t)L_14))))
		{
			goto IL_0044;
		}
	}
	{
		return (-1);
	}

IL_0044:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_15 = __this->___Keys;
		int32_t L_16 = V_1;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64_inline((void*)L_15, L_16, NULL);
		V_3 = L_17;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_18 = ___0_key;
		bool L_19;
		L_19 = EntityId_Equals_mF0F102A496CE0685C89D0C8EF34E77F9EE064EB8((&V_3), L_18, NULL);
		if (!L_19)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0063:
	{
		return (-1);
	}
}
// Method Definition Index: 92382
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_TryRemove_m80DEF9B8C1CBD5BBF6B9A94C3EAE732497B59C84 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->___Capacity;
		if (!L_0)
		{
			goto IL_00de;
		}
	}
	{
		V_0 = 0;
		int32_t L_1;
		L_1 = HashMapHelper_1_GetBucket_m8AFC31D9FC9DFFB709084906F98F39D88FAE72ED_inline(__this, (&___0_key), NULL);
		V_1 = L_1;
		V_2 = (-1);
		int32_t* L_2 = __this->___Buckets;
		int32_t L_3 = V_1;
		intptr_t L_4 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(L_4, 4)))));
		V_3 = L_5;
		goto IL_00b9;
	}

IL_002a:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6 = __this->___Keys;
		int32_t L_7 = V_3;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_8;
		L_8 = UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64_inline((void*)L_6, L_7, NULL);
		V_4 = L_8;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_9 = ___0_key;
		bool L_10;
		L_10 = EntityId_Equals_mF0F102A496CE0685C89D0C8EF34E77F9EE064EB8((&V_4), L_9, NULL);
		if (!L_10)
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t* L_13 = __this->___Buckets;
		int32_t L_14 = V_1;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_14,NULL));
		int32_t* L_16 = __this->___Next;
		int32_t L_17 = V_3;
		intptr_t L_18 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_17,NULL));
		int32_t L_19 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(L_18, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))), (int32_t)L_19);
		goto IL_0082;
	}

IL_006a:
	{
		int32_t* L_20 = __this->___Next;
		int32_t L_21 = V_2;
		intptr_t L_22 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_21,NULL));
		int32_t* L_23 = __this->___Next;
		int32_t L_24 = V_3;
		intptr_t L_25 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_24,NULL));
		int32_t L_26 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(L_25, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(L_22, 4)))), (int32_t)L_26);
	}

IL_0082:
	{
		int32_t* L_27 = __this->___Next;
		int32_t L_28 = V_3;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		int32_t* L_31 = __this->___Next;
		int32_t L_32 = V_3;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = __this->___FirstFreeIdx;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))), (int32_t)L_34);
		int32_t L_35 = V_3;
		__this->___FirstFreeIdx = L_35;
		V_3 = L_30;
		goto IL_00c9;
	}

IL_00aa:
	{
		int32_t L_36 = V_3;
		V_2 = L_36;
		int32_t* L_37 = __this->___Next;
		int32_t L_38 = V_3;
		intptr_t L_39 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_38,NULL));
		int32_t L_40 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_39, 4)))));
		V_3 = L_40;
	}

IL_00b9:
	{
		int32_t L_41 = V_3;
		if ((((int32_t)L_41) < ((int32_t)0)))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_42 = V_3;
		int32_t L_43 = __this->___Capacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_002a;
		}
	}

IL_00c9:
	{
		int32_t L_44 = __this->___Count;
		int32_t L_45 = V_0;
		__this->___Count = ((int32_t)il2cpp_codegen_subtract(L_44, L_45));
		int32_t L_46 = V_0;
		if (L_46)
		{
			goto IL_00dc;
		}
	}
	{
		return (-1);
	}

IL_00dc:
	{
		int32_t L_47 = V_0;
		return L_47;
	}

IL_00de:
	{
		return (-1);
	}
}
// Method Definition Index: 92383
// Method Definition Index: 92384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_MoveNext_m8ADE78E6E0763B1D64881142507F07C09DFF8335 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t* L_0 = ___1_nextIndex;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t* L_2 = ___2_index;
		int32_t* L_3 = ___1_nextIndex;
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_2, (int32_t)L_4);
		int32_t* L_5 = ___1_nextIndex;
		int32_t* L_6 = __this->___Next;
		int32_t* L_7 = ___1_nextIndex;
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(L_7);
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(L_9, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_10);
		return (bool)1;
	}

IL_001a:
	{
		int32_t* L_11 = ___0_bucketIndex;
		int32_t* L_12 = ___1_nextIndex;
		int32_t* L_13 = ___2_index;
		bool L_14;
		L_14 = HashMapHelper_1_MoveNextSearch_m0A42BBF91BDB10F8123E512278A903D2002E8EAB(__this, L_11, L_12, L_13, NULL);
		return L_14;
	}
}
// Method Definition Index: 92385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 HashMapHelper_1_GetKeyArray_mCF2AB0A473FC7307EBB8AA78FC09097E30EC58CE (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->___Count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___0_allocator;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_2;
		L_2 = CollectionHelper_CreateNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m37DDAEDF9B9C55C4598679FA86B596B53362B6E3(L_0, L_1, 0, NULL);
		V_0 = L_2;
		V_1 = 0;
		V_2 = 0;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length);
		V_3 = L_3;
		int32_t L_4 = __this->___BucketCapacity;
		V_4 = L_4;
		goto IL_0065;
	}

IL_0024:
	{
		int32_t* L_5 = __this->___Buckets;
		int32_t L_6 = V_1;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 4)))));
		V_5 = L_8;
		goto IL_005c;
	}

IL_0034:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_11 = __this->___Keys;
		int32_t L_12 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64_inline((void*)L_11, L_12, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, ((&V_0))->___m_Buffer, L_10, (L_13));
		int32_t* L_14 = __this->___Next;
		int32_t L_15 = V_5;
		intptr_t L_16 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_15,NULL));
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(L_16, 4)))));
		V_5 = L_17;
	}

IL_005c:
	{
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0065:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_3;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0024;
		}
	}

IL_006e:
	{
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_24 = V_0;
		return L_24;
	}
}
// Method Definition Index: 92388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_CheckIndexOutOfBounds_mEDA6BD9DD59097EC248A0E243166E07E48BF5064 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = __this->___Capacity;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral325E9B626B8674DB0D0742BC125F644ED8FFFFCB)), L_4, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_001f:
	{
		return;
	}
}
// Method Definition Index: 92389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_CheckCapacity_m3AB56587EFAFD9E1B91E978B2A4BA2214F72DEC2 (int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)536870912))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = ((int32_t)536870912);
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F19052576940E4C653C32FF5A8A81D0ABB73F97)), L_3, L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0028:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 92364
// Method Definition Index: 92365
// Method Definition Index: 92366
// Method Definition Index: 92367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_get_IsEmpty_m13B64019C63D367AFC5E2E7692151DCB57E41C5D (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = HashMapHelper_1_get_IsCreated_m72820491FD19358BB92A409A68582B9FEE307DB5_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->___Count;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)1;
	}
}
// Method Definition Index: 92368
// Method Definition Index: 92369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Init_mAEAE496CF1D61CF8193E421F3702384A3EE9B0A8 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	{
		__this->___Count = 0;
		int32_t L_0 = ___2_minGrowth;
		int32_t L_1;
		L_1 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(1, L_0, NULL);
		int32_t L_2;
		L_2 = math_lzcnt_m4BDBABBBAA2F9B553AE1155DFBDB552E23BB2F73_inline(((int32_t)il2cpp_codegen_subtract(L_1, 1)), NULL);
		uint8_t L_3 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_2)),NULL));
		__this->___Log2MinGrowth = (int32_t)L_3;
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashMapHelper_1_CalcCapacityCeilPow2_m2FAAB96F17C0306951B2DB5C5C0117C51EE2DE93_inline(__this, L_4, NULL);
		___0_capacity = L_5;
		int32_t L_6 = ___0_capacity;
		__this->___Capacity = L_6;
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = HashMapHelper_1_GetBucketSize_mAA80DACF0E3552D25AAB97114F1FE732C2D00BA7(L_7, NULL);
		__this->___BucketCapacity = L_8;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9 = ___3_allocator;
		__this->___Allocator = L_9;
		int32_t L_10 = ___1_sizeOfValueT;
		__this->___SizeOfTValue = L_10;
		int32_t L_11 = ___0_capacity;
		int32_t L_12 = __this->___BucketCapacity;
		int32_t L_13 = ___1_sizeOfValueT;
		int64_t L_14;
		L_14 = HashMapHelper_1_CalculateDataSize_m8FE1A181ADA26C64F0619E7FBEA9A84254A93E87(L_11, L_12, L_13, (&V_0), (&V_1), (&V_2), NULL);
		V_3 = L_14;
		int64_t L_15 = V_3;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_16 = ___3_allocator;
		void* L_17;
		L_17 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_15, ((int32_t)64), L_16, NULL);
		__this->___Ptr = (uint8_t*)L_17;
		uint8_t* L_18 = __this->___Ptr;
		int64_t L_19 = V_0;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_19,NULL));
		__this->___Keys = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, L_20));
		uint8_t* L_21 = __this->___Ptr;
		int64_t L_22 = V_1;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_22,NULL));
		__this->___Next = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, L_23));
		uint8_t* L_24 = __this->___Ptr;
		int64_t L_25 = V_2;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_25,NULL));
		__this->___Buckets = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, L_26));
		HashMapHelper_1_Clear_m0E8C4F4833A4FED2CF7B3881A8592B23B6AC2F31(__this, NULL);
		return;
	}
}
// Method Definition Index: 92370
// Method Definition Index: 92371
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* HashMapHelper_1_Alloc_m319010500F74422AF1728AEE6DB7B51789D08AD9 (int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* V_0 = NULL;
	{
		uint32_t L_0 = sizeof(HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B);
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_0,NULL));
		int32_t L_2;
		L_2 = UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E_inline(NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		void* L_4;
		L_4 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_1, L_2, L_3, NULL);
		V_0 = (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B*)L_4;
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_5 = V_0;
		int32_t L_6 = ___0_capacity;
		int32_t L_7 = ___1_sizeOfValueT;
		int32_t L_8 = ___2_minGrowth;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9 = ___3_allocator;
		HashMapHelper_1_Init_mAEAE496CF1D61CF8193E421F3702384A3EE9B0A8((HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B*)L_5, L_6, L_7, L_8, L_9, NULL);
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_10 = V_0;
		return L_10;
	}
}
// Method Definition Index: 92372
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Free_m184B353C9A4B65D322B577CCFBC1857DE1E33D04 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_data, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_0 = ___0_data;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8697FF635A0BB21392DD8D91CB3D0303148C10A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0010:
	{
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_3 = ___0_data;
		HashMapHelper_1_Dispose_mDCF706CC6456C34A9AF923AA221897977481C613((HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B*)L_3, NULL);
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_4 = ___0_data;
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_5 = ___0_data;
		NullCheck(L_5);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = L_5->___Allocator;
		Unmanaged_Free_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m805FE99DED95E176759F6DBEF0B7B3120EB67B47(L_4, L_6, NULL);
		return;
	}
}
// Method Definition Index: 92373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Resize_m08A148EBCF2668336D4AB83C01F5178F03EE36BD (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_newCapacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_newCapacity;
		int32_t L_1 = __this->___Count;
		int32_t L_2;
		L_2 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(L_0, L_1, NULL);
		___0_newCapacity = L_2;
		int32_t L_3 = ___0_newCapacity;
		int32_t L_4;
		L_4 = HashMapHelper_1_GetBucketSize_mAA80DACF0E3552D25AAB97114F1FE732C2D00BA7(L_3, NULL);
		int32_t L_5;
		L_5 = math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_inline(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = __this->___Capacity;
		int32_t L_7 = ___0_newCapacity;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_8 = __this->___BucketCapacity;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_002d;
		}
	}
	{
		return;
	}

IL_002d:
	{
		int32_t L_10 = ___0_newCapacity;
		int32_t L_11 = V_0;
		HashMapHelper_1_ResizeExact_mE445D4814DFEB2380D424B61555B9116D1975FC0(__this, L_10, L_11, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return;
	}
}
// Method Definition Index: 92374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_ResizeExact_mE445D4814DFEB2380D424B61555B9116D1975FC0 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_newCapacity, int32_t ___1_newBucketCapacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	uint8_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t* V_6 = NULL;
	int32_t* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		int32_t L_0 = ___0_newCapacity;
		int32_t L_1 = ___1_newBucketCapacity;
		int32_t L_2 = __this->___SizeOfTValue;
		int64_t L_3;
		L_3 = HashMapHelper_1_CalculateDataSize_m8FE1A181ADA26C64F0619E7FBEA9A84254A93E87(L_0, L_1, L_2, (&V_0), (&V_1), (&V_2), NULL);
		V_3 = L_3;
		uint8_t* L_4 = __this->___Ptr;
		V_4 = L_4;
		int32_t* L_5 = __this->___Keys;
		V_5 = L_5;
		int32_t* L_6 = __this->___Next;
		V_6 = L_6;
		int32_t* L_7 = __this->___Buckets;
		V_7 = L_7;
		int32_t L_8 = __this->___BucketCapacity;
		int64_t L_9 = V_3;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_10 = __this->___Allocator;
		void* L_11;
		L_11 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_9, ((int32_t)64), L_10, NULL);
		__this->___Ptr = (uint8_t*)L_11;
		uint8_t* L_12 = __this->___Ptr;
		int64_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_13,NULL));
		__this->___Keys = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, L_14));
		uint8_t* L_15 = __this->___Ptr;
		int64_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_16,NULL));
		__this->___Next = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_17));
		uint8_t* L_18 = __this->___Ptr;
		int64_t L_19 = V_2;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_19,NULL));
		__this->___Buckets = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, L_20));
		int32_t L_21 = ___0_newCapacity;
		__this->___Capacity = L_21;
		int32_t L_22 = ___1_newBucketCapacity;
		__this->___BucketCapacity = L_22;
		HashMapHelper_1_Clear_m0E8C4F4833A4FED2CF7B3881A8592B23B6AC2F31(__this, NULL);
		V_8 = 0;
		V_9 = L_8;
		goto IL_00f6;
	}

IL_0096:
	{
		int32_t* L_23 = V_7;
		int32_t L_24 = V_8;
		intptr_t L_25 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_24,NULL));
		int32_t L_26 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(L_25, 4)))));
		V_10 = L_26;
		goto IL_00eb;
	}

IL_00a3:
	{
		int32_t* L_27 = V_5;
		int32_t L_28 = V_10;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		uint32_t L_30 = sizeof(int32_t);
		int32_t L_31;
		L_31 = HashMapHelper_1_TryAdd_mF0B5C6B252BBEFA7CD9E6910F6308F44B8E29693(__this, (int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, (int32_t)L_30)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		V_11 = L_31;
		uint8_t* L_32 = __this->___Ptr;
		int32_t L_33 = __this->___SizeOfTValue;
		int32_t L_34 = V_11;
		uint8_t* L_35 = V_4;
		int32_t L_36 = __this->___SizeOfTValue;
		int32_t L_37 = V_10;
		int32_t L_38 = __this->___SizeOfTValue;
		int64_t L_39 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_38,NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_32, ((int32_t)il2cpp_codegen_multiply(L_33, L_34)))), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_35, ((int32_t)il2cpp_codegen_multiply(L_36, L_37)))), L_39, NULL);
		int32_t* L_40 = V_6;
		int32_t L_41 = V_10;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))));
		V_10 = L_43;
	}

IL_00eb:
	{
		int32_t L_44 = V_10;
		if ((!(((uint32_t)L_44) == ((uint32_t)(-1)))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_45 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00f6:
	{
		int32_t L_46 = V_8;
		int32_t L_47 = V_9;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0096;
		}
	}
	{
		uint8_t* L_48 = V_4;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_49 = __this->___Allocator;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_48, L_49, NULL);
		return;
	}
}
// Method Definition Index: 92375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_TrimExcess_m672BF5EF147ABDA26D69D2337CDD297FF64BE507 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___Count;
		int32_t L_1;
		L_1 = HashMapHelper_1_CalcCapacityCeilPow2_m2FAAB96F17C0306951B2DB5C5C0117C51EE2DE93_inline(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = HashMapHelper_1_GetBucketSize_mAA80DACF0E3552D25AAB97114F1FE732C2D00BA7(L_3, NULL);
		HashMapHelper_1_ResizeExact_mE445D4814DFEB2380D424B61555B9116D1975FC0(__this, L_2, L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return;
	}
}
// Method Definition Index: 92376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HashMapHelper_1_CalculateDataSize_m8FE1A181ADA26C64F0619E7FBEA9A84254A93E87 (int32_t ___0_capacity, int32_t ___1_bucketCapacity, int32_t ___2_sizeOfTValue, int64_t* ___3_outKeyOffset, int64_t* ___4_outNextOffset, int64_t* ___5_outBucketOffset, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	{
		uint32_t L_0 = sizeof(int32_t);
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_0,NULL));
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_0 = L_2;
		int32_t L_3 = ___2_sizeOfTValue;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = ___0_capacity;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		V_1 = ((int64_t)il2cpp_codegen_multiply(L_4, L_6));
		int32_t L_7 = ___0_capacity;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_1, L_8));
		int64_t L_9 = V_0;
		int32_t L_10 = ___0_capacity;
		int64_t L_11 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_9, L_11));
		int64_t L_12 = V_0;
		int32_t L_13 = ___1_bucketCapacity;
		int64_t L_14 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_13,NULL));
		V_4 = ((int64_t)il2cpp_codegen_multiply(L_12, L_14));
		int64_t L_15 = V_1;
		int64_t L_16 = V_2;
		int64_t L_17 = V_3;
		int64_t L_18 = V_4;
		int64_t* L_19 = ___3_outKeyOffset;
		int64_t L_20 = V_1;
		il2cpp_codegen_stind<int64_t>((int64_t*)L_19, (int64_t)L_20);
		int64_t* L_21 = ___4_outNextOffset;
		int64_t* L_22 = ___3_outKeyOffset;
		int64_t L_23 = il2cpp_codegen_ldind<int64_t, int64_t>(L_22);
		int64_t L_24 = V_2;
		il2cpp_codegen_stind<int64_t>((int64_t*)L_21, (int64_t)((int64_t)il2cpp_codegen_add(L_23, L_24)));
		int64_t* L_25 = ___5_outBucketOffset;
		int64_t* L_26 = ___4_outNextOffset;
		int64_t L_27 = il2cpp_codegen_ldind<int64_t, int64_t>(L_26);
		int64_t L_28 = V_3;
		il2cpp_codegen_stind<int64_t>((int64_t*)L_25, (int64_t)((int64_t)il2cpp_codegen_add(L_27, L_28)));
		return ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_15, L_16)), L_17)), L_18));
	}
}
// Method Definition Index: 92377
// Method Definition Index: 92378
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucket_mB186F7D304E7E0D50F8F82E094C5C3C75AD55F71 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_key;
		int32_t L_1 = (*(int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		uint64_t L_3 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_2,NULL));
		int32_t L_4 = __this->___BucketCapacity;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_4, 1)),NULL));
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_3&L_5)),NULL));
		return L_6;
	}
}
// Method Definition Index: 92379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_TryAdd_mF0B5C6B252BBEFA7CD9E6910F6308F44B8E29693 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t* L_0 = ___0_key;
		int32_t L_1 = (*(int32_t*)L_0);
		int32_t L_2;
		L_2 = HashMapHelper_1_Find_m932136D4BE80E55BE7133D5054684109A079E1E6(__this, L_1, NULL);
		if ((!(((uint32_t)(-1)) == ((uint32_t)L_2))))
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_3 = __this->___AllocatedIndex;
		int32_t L_4 = __this->___Capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = __this->___FirstFreeIdx;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_6 = __this->___Capacity;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)536870912)))))
		{
			goto IL_0038;
		}
	}
	{
		return (-1);
	}

IL_0038:
	{
		int32_t L_7 = __this->___Capacity;
		int32_t L_8 = __this->___Log2MinGrowth;
		int32_t L_9;
		L_9 = HashMapHelper_1_CalcCapacityCeilPow2_m2FAAB96F17C0306951B2DB5C5C0117C51EE2DE93_inline(__this, ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(1<<((int32_t)(L_8&((int32_t)31))))))), NULL);
		V_2 = L_9;
		int32_t L_10 = V_2;
		HashMapHelper_1_Resize_m08A148EBCF2668336D4AB83C01F5178F03EE36BD(__this, L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
	}

IL_0058:
	{
		int32_t L_11 = __this->___FirstFreeIdx;
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_13 = __this->___Next;
		int32_t L_14 = V_0;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_14,NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		__this->___FirstFreeIdx = L_16;
		goto IL_0089;
	}

IL_0077:
	{
		int32_t L_17 = __this->___AllocatedIndex;
		V_3 = L_17;
		int32_t L_18 = V_3;
		__this->___AllocatedIndex = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_3;
		V_0 = L_19;
	}

IL_0089:
	{
		int32_t* L_20 = __this->___Keys;
		int32_t L_21 = V_0;
		int32_t* L_22 = ___0_key;
		int32_t L_23 = (*(int32_t*)L_22);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_20, L_21, L_23, NULL);
		int32_t* L_24 = ___0_key;
		int32_t L_25;
		L_25 = HashMapHelper_1_GetBucket_mB186F7D304E7E0D50F8F82E094C5C3C75AD55F71_inline(__this, L_24, NULL);
		V_1 = L_25;
		int32_t* L_26 = __this->___Next;
		int32_t L_27 = V_0;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t* L_29 = __this->___Buckets;
		int32_t L_30 = V_1;
		intptr_t L_31 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_30,NULL));
		int32_t L_32 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(L_31, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), (int32_t)L_32);
		int32_t* L_33 = __this->___Buckets;
		int32_t L_34 = V_1;
		intptr_t L_35 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_34,NULL));
		int32_t L_36 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(L_35, 4)))), (int32_t)L_36);
		int32_t L_37 = __this->___Count;
		__this->___Count = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = V_0;
		return L_38;
	}

IL_00d8:
	{
		return (-1);
	}
}
// Method Definition Index: 92380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_Find_m932136D4BE80E55BE7133D5054684109A079E1E6 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___AllocatedIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_1;
		L_1 = HashMapHelper_1_GetBucket_mB186F7D304E7E0D50F8F82E094C5C3C75AD55F71_inline(__this, (&___0_key), NULL);
		V_0 = L_1;
		int32_t* L_2 = __this->___Buckets;
		int32_t L_3 = V_0;
		intptr_t L_4 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(L_4, 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		int32_t L_7 = __this->___Capacity;
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t* L_8 = __this->___Next;
		V_2 = L_8;
		goto IL_0044;
	}

IL_0031:
	{
		int32_t* L_9 = V_2;
		int32_t L_10 = V_1;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))));
		V_1 = L_12;
		int32_t L_13 = V_1;
		int32_t L_14 = __this->___Capacity;
		if ((!(((uint32_t)L_13) >= ((uint32_t)L_14))))
		{
			goto IL_0044;
		}
	}
	{
		return (-1);
	}

IL_0044:
	{
		int32_t* L_15 = __this->___Keys;
		int32_t L_16 = V_1;
		int32_t L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_15, L_16, NULL);
		V_3 = L_17;
		int32_t L_18 = ___0_key;
		bool L_19;
		L_19 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_3), L_18, NULL);
		if (!L_19)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0063:
	{
		return (-1);
	}
}
// Method Definition Index: 92382
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_TryRemove_mACAF9C12A26C64EC4584BA0A8DC67AA3A32EFEC2 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___Capacity;
		if (!L_0)
		{
			goto IL_00de;
		}
	}
	{
		V_0 = 0;
		int32_t L_1;
		L_1 = HashMapHelper_1_GetBucket_mB186F7D304E7E0D50F8F82E094C5C3C75AD55F71_inline(__this, (&___0_key), NULL);
		V_1 = L_1;
		V_2 = (-1);
		int32_t* L_2 = __this->___Buckets;
		int32_t L_3 = V_1;
		intptr_t L_4 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(L_4, 4)))));
		V_3 = L_5;
		goto IL_00b9;
	}

IL_002a:
	{
		int32_t* L_6 = __this->___Keys;
		int32_t L_7 = V_3;
		int32_t L_8;
		L_8 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_6, L_7, NULL);
		V_4 = L_8;
		int32_t L_9 = ___0_key;
		bool L_10;
		L_10 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_4), L_9, NULL);
		if (!L_10)
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t* L_13 = __this->___Buckets;
		int32_t L_14 = V_1;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_14,NULL));
		int32_t* L_16 = __this->___Next;
		int32_t L_17 = V_3;
		intptr_t L_18 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_17,NULL));
		int32_t L_19 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(L_18, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))), (int32_t)L_19);
		goto IL_0082;
	}

IL_006a:
	{
		int32_t* L_20 = __this->___Next;
		int32_t L_21 = V_2;
		intptr_t L_22 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_21,NULL));
		int32_t* L_23 = __this->___Next;
		int32_t L_24 = V_3;
		intptr_t L_25 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_24,NULL));
		int32_t L_26 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(L_25, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(L_22, 4)))), (int32_t)L_26);
	}

IL_0082:
	{
		int32_t* L_27 = __this->___Next;
		int32_t L_28 = V_3;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		int32_t* L_31 = __this->___Next;
		int32_t L_32 = V_3;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = __this->___FirstFreeIdx;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))), (int32_t)L_34);
		int32_t L_35 = V_3;
		__this->___FirstFreeIdx = L_35;
		V_3 = L_30;
		goto IL_00c9;
	}

IL_00aa:
	{
		int32_t L_36 = V_3;
		V_2 = L_36;
		int32_t* L_37 = __this->___Next;
		int32_t L_38 = V_3;
		intptr_t L_39 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_38,NULL));
		int32_t L_40 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_39, 4)))));
		V_3 = L_40;
	}

IL_00b9:
	{
		int32_t L_41 = V_3;
		if ((((int32_t)L_41) < ((int32_t)0)))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_42 = V_3;
		int32_t L_43 = __this->___Capacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_002a;
		}
	}

IL_00c9:
	{
		int32_t L_44 = __this->___Count;
		int32_t L_45 = V_0;
		__this->___Count = ((int32_t)il2cpp_codegen_subtract(L_44, L_45));
		int32_t L_46 = V_0;
		if (L_46)
		{
			goto IL_00dc;
		}
	}
	{
		return (-1);
	}

IL_00dc:
	{
		int32_t L_47 = V_0;
		return L_47;
	}

IL_00de:
	{
		return (-1);
	}
}
// Method Definition Index: 92383
// Method Definition Index: 92384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_MoveNext_m20D255F6E8A69E3CB7806540E45C3B7439C0B1BB (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t* L_0 = ___1_nextIndex;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t* L_2 = ___2_index;
		int32_t* L_3 = ___1_nextIndex;
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_2, (int32_t)L_4);
		int32_t* L_5 = ___1_nextIndex;
		int32_t* L_6 = __this->___Next;
		int32_t* L_7 = ___1_nextIndex;
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(L_7);
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(L_9, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_10);
		return (bool)1;
	}

IL_001a:
	{
		int32_t* L_11 = ___0_bucketIndex;
		int32_t* L_12 = ___1_nextIndex;
		int32_t* L_13 = ___2_index;
		bool L_14;
		L_14 = HashMapHelper_1_MoveNextSearch_m2576560D409AC6BF8713E8BD9070962379245FCA(__this, L_11, L_12, L_13, NULL);
		return L_14;
	}
}
// Method Definition Index: 92385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C HashMapHelper_1_GetKeyArray_m750FBEB05F5D7C844A2E09FE7FC213DB8B45664E (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->___Count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___0_allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_2;
		L_2 = CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B(L_0, L_1, 0, NULL);
		V_0 = L_2;
		V_1 = 0;
		V_2 = 0;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length);
		V_3 = L_3;
		int32_t L_4 = __this->___BucketCapacity;
		V_4 = L_4;
		goto IL_0065;
	}

IL_0024:
	{
		int32_t* L_5 = __this->___Buckets;
		int32_t L_6 = V_1;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 4)))));
		V_5 = L_8;
		goto IL_005c;
	}

IL_0034:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t* L_11 = __this->___Keys;
		int32_t L_12 = V_5;
		int32_t L_13;
		L_13 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_11, L_12, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_10, (L_13));
		int32_t* L_14 = __this->___Next;
		int32_t L_15 = V_5;
		intptr_t L_16 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_15,NULL));
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(L_16, 4)))));
		V_5 = L_17;
	}

IL_005c:
	{
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0065:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_3;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0024;
		}
	}

IL_006e:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_24 = V_0;
		return L_24;
	}
}
// Method Definition Index: 92388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_CheckIndexOutOfBounds_m1CA9B093FF67E551C4A274FBA8D06165592CFE51 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = __this->___Capacity;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral325E9B626B8674DB0D0742BC125F644ED8FFFFCB)), L_4, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_001f:
	{
		return;
	}
}
// Method Definition Index: 92389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_CheckCapacity_mD12A12047A50945AFA163DE8684D95BDCDC03853 (int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)536870912))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = ((int32_t)536870912);
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F19052576940E4C653C32FF5A8A81D0ABB73F97)), L_3, L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0028:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 92364
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___Count;
		int32_t L_1;
		L_1 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(1, L_0, NULL);
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(L_1, L_2, NULL);
		___0_capacity = L_3;
		int32_t L_4 = ___0_capacity;
		int32_t L_5 = __this->___Log2MinGrowth;
		int32_t L_6;
		L_6 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(L_4, ((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))), NULL);
		int32_t L_7;
		L_7 = math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_inline(L_6, NULL);
		return L_7;
	}
}
// Method Definition Index: 92365
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucketSize_m2A7DED1791178844328490156FD5FF62C0684DDD_fshared (int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		return ((int32_t)il2cpp_codegen_multiply(L_0, 2));
	}
}
// Method Definition Index: 92366
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_get_IsCreated_mFD6A2975F04E9C84A9886543625D8E8BCA71E398_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t* L_0 = __this->___Ptr;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 92367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_get_IsEmpty_mE0B74C2611A6136BF9AB2B9588804B95871588A4_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->___Count;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)1;
	}
}
// Method Definition Index: 92368
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Clear_m08F7FBA8BE840C96DBB073B5BFBC33BC2745AEBE_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t* L_0 = __this->___Buckets;
		int32_t L_1 = __this->___BucketCapacity;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_0, (uint8_t)((int32_t)255), ((int64_t)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		int32_t* L_4 = __this->___Next;
		int32_t L_5 = __this->___Capacity;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_4, (uint8_t)((int32_t)255), ((int64_t)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		__this->___Count = 0;
		__this->___FirstFreeIdx = (-1);
		__this->___AllocatedIndex = 0;
		return;
	}
}
// Method Definition Index: 92369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Init_m927F4885890F61CA66BFC81AB69DC7930051AD6C_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	{
		__this->___Count = 0;
		int32_t L_0 = ___2_minGrowth;
		int32_t L_1;
		L_1 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(1, L_0, NULL);
		int32_t L_2;
		L_2 = math_lzcnt_m4BDBABBBAA2F9B553AE1155DFBDB552E23BB2F73_inline(((int32_t)il2cpp_codegen_subtract(L_1, 1)), NULL);
		uint8_t L_3 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_2)),NULL));
		__this->___Log2MinGrowth = (int32_t)L_3;
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = ((  int32_t (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, L_4, NULL);
		___0_capacity = L_5;
		int32_t L_6 = ___0_capacity;
		__this->___Capacity = L_6;
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = ((  int32_t (*) (int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(L_7, NULL);
		__this->___BucketCapacity = L_8;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9 = ___3_allocator;
		__this->___Allocator = L_9;
		int32_t L_10 = ___1_sizeOfValueT;
		__this->___SizeOfTValue = L_10;
		int32_t L_11 = ___0_capacity;
		int32_t L_12 = __this->___BucketCapacity;
		int32_t L_13 = ___1_sizeOfValueT;
		int64_t L_14;
		L_14 = ((  int64_t (*) (int32_t, int32_t, int32_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)))(L_11, L_12, L_13, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		V_3 = L_14;
		int64_t L_15 = V_3;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_16 = ___3_allocator;
		void* L_17;
		L_17 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_15, ((int32_t)64), L_16, NULL);
		__this->___Ptr = (uint8_t*)L_17;
		uint8_t* L_18 = __this->___Ptr;
		int64_t L_19 = V_0;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_19,NULL));
		__this->___Keys = (Il2CppFullySharedGenericStruct*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, L_20));
		uint8_t* L_21 = __this->___Ptr;
		int64_t L_22 = V_1;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_22,NULL));
		__this->___Next = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, L_23));
		uint8_t* L_24 = __this->___Ptr;
		int64_t L_25 = V_2;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_25,NULL));
		__this->___Buckets = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, L_26));
		((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))(__this, NULL);
		return;
	}
}
// Method Definition Index: 92370
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Dispose_mB9A6E998C327368FCA81FFF52F90700CE2557703_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t* L_0 = __this->___Ptr;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = __this->___Allocator;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_0, L_1, NULL);
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___Ptr = (uint8_t*)L_2;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___Keys = (Il2CppFullySharedGenericStruct*)L_3;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___Next = (int32_t*)L_4;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___Buckets = (int32_t*)L_5;
		__this->___Count = 0;
		__this->___BucketCapacity = 0;
		return;
	}
}
// Method Definition Index: 92371
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* HashMapHelper_1_Alloc_mA587387A73A1ABBDF140977263E65406EB478C9B_fshared (int32_t ___0_capacity, int32_t ___1_sizeOfValueT, int32_t ___2_minGrowth, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* V_0 = NULL;
	{
		uint32_t L_0 = sizeof(HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC);
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_0,NULL));
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		void* L_4;
		L_4 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_1, L_2, L_3, NULL);
		V_0 = (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*)L_4;
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_5 = V_0;
		int32_t L_6 = ___0_capacity;
		int32_t L_7 = ___1_sizeOfValueT;
		int32_t L_8 = ___2_minGrowth;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9 = ___3_allocator;
		((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))((HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*)L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_10 = V_0;
		return L_10;
	}
}
// Method Definition Index: 92372
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Free_m1ED84E39838BC07764D22979A69F466B5437B4B4_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* ___0_data, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_0 = ___0_data;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8697FF635A0BB21392DD8D91CB3D0303148C10A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0010:
	{
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_3 = ___0_data;
		((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))((HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*)L_3, NULL);
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_4 = ___0_data;
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_5 = ___0_data;
		NullCheck(L_5);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = L_5->___Allocator;
		((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_4, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return;
	}
}
// Method Definition Index: 92373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_Resize_mC3DBB7AC2D19CA5947C27ABAF144A44EDC4CBC9F_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_newCapacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_newCapacity;
		int32_t L_1 = __this->___Count;
		int32_t L_2;
		L_2 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(L_0, L_1, NULL);
		___0_newCapacity = L_2;
		int32_t L_3 = ___0_newCapacity;
		int32_t L_4;
		L_4 = ((  int32_t (*) (int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(L_3, NULL);
		int32_t L_5;
		L_5 = math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_inline(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = __this->___Capacity;
		int32_t L_7 = ___0_newCapacity;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_8 = __this->___BucketCapacity;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_002d;
		}
	}
	{
		return;
	}

IL_002d:
	{
		int32_t L_10 = ___0_newCapacity;
		int32_t L_11 = V_0;
		((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(__this, L_10, L_11, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return;
	}
}
// Method Definition Index: 92374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_ResizeExact_m1D828032D51F4A98A49FCBD93E69F6B6266C052B_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_newCapacity, int32_t ___1_newBucketCapacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
	//<source_info:<no-source>:1>
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	uint8_t* V_4 = NULL;
	Il2CppFullySharedGenericStruct* V_5 = NULL;
	int32_t* V_6 = NULL;
	int32_t* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		int32_t L_0 = ___0_newCapacity;
		int32_t L_1 = ___1_newBucketCapacity;
		int32_t L_2 = __this->___SizeOfTValue;
		int64_t L_3;
		L_3 = ((  int64_t (*) (int32_t, int32_t, int32_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)))(L_0, L_1, L_2, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		V_3 = L_3;
		uint8_t* L_4 = __this->___Ptr;
		V_4 = L_4;
		Il2CppFullySharedGenericStruct* L_5 = __this->___Keys;
		V_5 = L_5;
		int32_t* L_6 = __this->___Next;
		V_6 = L_6;
		int32_t* L_7 = __this->___Buckets;
		V_7 = L_7;
		int32_t L_8 = __this->___BucketCapacity;
		int64_t L_9 = V_3;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_10 = __this->___Allocator;
		void* L_11;
		L_11 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_9, ((int32_t)64), L_10, NULL);
		__this->___Ptr = (uint8_t*)L_11;
		uint8_t* L_12 = __this->___Ptr;
		int64_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_13,NULL));
		__this->___Keys = (Il2CppFullySharedGenericStruct*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, L_14));
		uint8_t* L_15 = __this->___Ptr;
		int64_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_16,NULL));
		__this->___Next = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_17));
		uint8_t* L_18 = __this->___Ptr;
		int64_t L_19 = V_2;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_19,NULL));
		__this->___Buckets = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, L_20));
		int32_t L_21 = ___0_newCapacity;
		__this->___Capacity = L_21;
		int32_t L_22 = ___1_newBucketCapacity;
		__this->___BucketCapacity = L_22;
		((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))(__this, NULL);
		V_8 = 0;
		V_9 = L_8;
		goto IL_00f6;
	}

IL_0096:
	{
		int32_t* L_23 = V_7;
		int32_t L_24 = V_8;
		intptr_t L_25 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_24,NULL));
		int32_t L_26 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(L_25, 4)))));
		V_10 = L_26;
		goto IL_00eb;
	}

IL_00a3:
	{
		Il2CppFullySharedGenericStruct* L_27 = V_5;
		int32_t L_28 = V_10;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		uint32_t L_30 = SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA;
		int32_t L_31;
		L_31 = ((  int32_t (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11)))(__this, (Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, (int32_t)L_30)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		V_11 = L_31;
		uint8_t* L_32 = __this->___Ptr;
		int32_t L_33 = __this->___SizeOfTValue;
		int32_t L_34 = V_11;
		uint8_t* L_35 = V_4;
		int32_t L_36 = __this->___SizeOfTValue;
		int32_t L_37 = V_10;
		int32_t L_38 = __this->___SizeOfTValue;
		int64_t L_39 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_38,NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_32, ((int32_t)il2cpp_codegen_multiply(L_33, L_34)))), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_35, ((int32_t)il2cpp_codegen_multiply(L_36, L_37)))), L_39, NULL);
		int32_t* L_40 = V_6;
		int32_t L_41 = V_10;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))));
		V_10 = L_43;
	}

IL_00eb:
	{
		int32_t L_44 = V_10;
		if ((!(((uint32_t)L_44) == ((uint32_t)(-1)))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_45 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00f6:
	{
		int32_t L_46 = V_8;
		int32_t L_47 = V_9;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0096;
		}
	}
	{
		uint8_t* L_48 = V_4;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_49 = __this->___Allocator;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_48, L_49, NULL);
		return;
	}
}
// Method Definition Index: 92375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_TrimExcess_m11F65CDF4D06B72940C6253AB3E86A6EA8E3962E_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___Count;
		int32_t L_1;
		L_1 = ((  int32_t (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = ((  int32_t (*) (int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(L_3, NULL);
		((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(__this, L_2, L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return;
	}
}
// Method Definition Index: 92376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HashMapHelper_1_CalculateDataSize_m391E36E42648D8D3005D220873B0F2245C662BEA_fshared (int32_t ___0_capacity, int32_t ___1_bucketCapacity, int32_t ___2_sizeOfTValue, int64_t* ___3_outKeyOffset, int64_t* ___4_outNextOffset, int64_t* ___5_outBucketOffset, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
	//<source_info:<no-source>:1>
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	{
		uint32_t L_0 = SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA;
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_0,NULL));
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_0 = L_2;
		int32_t L_3 = ___2_sizeOfTValue;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = ___0_capacity;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		V_1 = ((int64_t)il2cpp_codegen_multiply(L_4, L_6));
		int32_t L_7 = ___0_capacity;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_1, L_8));
		int64_t L_9 = V_0;
		int32_t L_10 = ___0_capacity;
		int64_t L_11 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_9, L_11));
		int64_t L_12 = V_0;
		int32_t L_13 = ___1_bucketCapacity;
		int64_t L_14 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_13,NULL));
		V_4 = ((int64_t)il2cpp_codegen_multiply(L_12, L_14));
		int64_t L_15 = V_1;
		int64_t L_16 = V_2;
		int64_t L_17 = V_3;
		int64_t L_18 = V_4;
		int64_t* L_19 = ___3_outKeyOffset;
		int64_t L_20 = V_1;
		il2cpp_codegen_stind<int64_t>((int64_t*)L_19, (int64_t)L_20);
		int64_t* L_21 = ___4_outNextOffset;
		int64_t* L_22 = ___3_outKeyOffset;
		int64_t L_23 = il2cpp_codegen_ldind<int64_t, int64_t>(L_22);
		int64_t L_24 = V_2;
		il2cpp_codegen_stind<int64_t>((int64_t*)L_21, (int64_t)((int64_t)il2cpp_codegen_add(L_23, L_24)));
		int64_t* L_25 = ___5_outBucketOffset;
		int64_t* L_26 = ___4_outNextOffset;
		int64_t L_27 = il2cpp_codegen_ldind<int64_t, int64_t>(L_26);
		int64_t L_28 = V_3;
		il2cpp_codegen_stind<int64_t>((int64_t*)L_25, (int64_t)((int64_t)il2cpp_codegen_add(L_27, L_28)));
		return ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_15, L_16)), L_17)), L_18));
	}
}
// Method Definition Index: 92377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetCount_mC24710C302A59B9751759EF7F815AF1E624D02B7_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___AllocatedIndex;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		V_0 = 0;
		int32_t L_1 = __this->___FirstFreeIdx;
		V_1 = L_1;
		goto IL_0027;
	}

IL_0016:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t* L_3 = __this->___Next;
		int32_t L_4 = V_1;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, 4)))));
		V_1 = L_6;
	}

IL_0027:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_8 = __this->___Capacity;
		int32_t L_9 = __this->___AllocatedIndex;
		int32_t L_10;
		L_10 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(L_8, L_9, NULL);
		int32_t L_11 = V_0;
		return ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
	}
}
// Method Definition Index: 92378
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucket_mE1172E80C9E112134E2C0611F1583E709528EFB1_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	memset(V_0, 0, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_key;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		Il2CppConstrainedCallData L_3;
		Il2CppMethodPointer L_4 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12), (void*)(Il2CppFullySharedGenericStruct*)V_0, &L_3, L_2);
		typedef int32_t ( *func_L_5)(void*,const RuntimeMethod*);
		int32_t L_6 = ((func_L_5)L_4)(L_3.thisPtr,L_3.method);
		uint64_t L_7 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = __this->___BucketCapacity;
		int64_t L_9 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_8, 1)),NULL));
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_7&L_9)),NULL));
		return L_10;
	}
}
// Method Definition Index: 92379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_TryAdd_mEA7DF62C16993CE3B2D2C3C6484114D7C2526580_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	const Il2CppFullySharedGenericStruct L_23 = L_1;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_key;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13), __this, L_1);
		if ((!(((uint32_t)(-1)) == ((uint32_t)L_2))))
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_3 = __this->___AllocatedIndex;
		int32_t L_4 = __this->___Capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = __this->___FirstFreeIdx;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_6 = __this->___Capacity;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)536870912)))))
		{
			goto IL_0038;
		}
	}
	{
		return (-1);
	}

IL_0038:
	{
		int32_t L_7 = __this->___Capacity;
		int32_t L_8 = __this->___Log2MinGrowth;
		int32_t L_9;
		L_9 = ((  int32_t (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(1<<((int32_t)(L_8&((int32_t)31))))))), NULL);
		V_2 = L_9;
		int32_t L_10 = V_2;
		((  void (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)))(__this, L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
	}

IL_0058:
	{
		int32_t L_11 = __this->___FirstFreeIdx;
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_13 = __this->___Next;
		int32_t L_14 = V_0;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_14,NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		__this->___FirstFreeIdx = L_16;
		goto IL_0089;
	}

IL_0077:
	{
		int32_t L_17 = __this->___AllocatedIndex;
		V_3 = L_17;
		int32_t L_18 = V_3;
		__this->___AllocatedIndex = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_3;
		V_0 = L_19;
	}

IL_0089:
	{
		Il2CppFullySharedGenericStruct* L_20 = __this->___Keys;
		int32_t L_21 = V_0;
		Il2CppFullySharedGenericStruct* L_22 = ___0_key;
		il2cpp_codegen_memcpy(L_23, L_22, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15), NULL, (void*)L_20, L_21, L_23);
		Il2CppFullySharedGenericStruct* L_24 = ___0_key;
		int32_t L_25;
		L_25 = ((  int32_t (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)))(__this, L_24, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		V_1 = L_25;
		int32_t* L_26 = __this->___Next;
		int32_t L_27 = V_0;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t* L_29 = __this->___Buckets;
		int32_t L_30 = V_1;
		intptr_t L_31 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_30,NULL));
		int32_t L_32 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(L_31, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), (int32_t)L_32);
		int32_t* L_33 = __this->___Buckets;
		int32_t L_34 = V_1;
		intptr_t L_35 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_34,NULL));
		int32_t L_36 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(L_35, 4)))), (int32_t)L_36);
		int32_t L_37 = __this->___Count;
		__this->___Count = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = V_0;
		return L_38;
	}

IL_00d8:
	{
		return (-1);
	}
}
// Method Definition Index: 92380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_Find_m230136C2D470770694EF15C9C0F2637F623E02BD_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	const Il2CppFullySharedGenericStruct L_18 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	memset(V_3, 0, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	{
		int32_t L_0 = __this->___AllocatedIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_1;
		L_1 = ((  int32_t (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)))(__this, (Il2CppFullySharedGenericStruct*)___0_key, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		V_0 = L_1;
		int32_t* L_2 = __this->___Buckets;
		int32_t L_3 = V_0;
		intptr_t L_4 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(L_4, 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		int32_t L_7 = __this->___Capacity;
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t* L_8 = __this->___Next;
		V_2 = L_8;
		goto IL_0044;
	}

IL_0031:
	{
		int32_t* L_9 = V_2;
		int32_t L_10 = V_1;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))));
		V_1 = L_12;
		int32_t L_13 = V_1;
		int32_t L_14 = __this->___Capacity;
		if ((!(((uint32_t)L_13) >= ((uint32_t)L_14))))
		{
			goto IL_0044;
		}
	}
	{
		return (-1);
	}

IL_0044:
	{
		Il2CppFullySharedGenericStruct* L_15 = __this->___Keys;
		int32_t L_16 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), NULL, (void*)L_15, L_16, (Il2CppFullySharedGenericStruct*)L_17);
		il2cpp_codegen_memcpy(V_3, L_17, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		il2cpp_codegen_memcpy(L_18, ___0_key, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		Il2CppConstrainedCallData L_20;
		Il2CppMethodPointer L_21 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18), (void*)(Il2CppFullySharedGenericStruct*)V_3, &L_20, L_19);
		bool L_22 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_21, L_20.method,L_20.thisPtr, L_18);
		if (!L_22)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_23 = V_1;
		return L_23;
	}

IL_0063:
	{
		return (-1);
	}
}
// Method Definition Index: 92382
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_TryRemove_mF0EBAE2241D4A51420C87201DDFF160F83CC271B_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	memset(V_4, 0, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	{
		int32_t L_0 = __this->___Capacity;
		if (!L_0)
		{
			goto IL_00de;
		}
	}
	{
		V_0 = 0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)))(__this, (Il2CppFullySharedGenericStruct*)___0_key, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		V_1 = L_1;
		V_2 = (-1);
		int32_t* L_2 = __this->___Buckets;
		int32_t L_3 = V_1;
		intptr_t L_4 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(L_4, 4)))));
		V_3 = L_5;
		goto IL_00b9;
	}

IL_002a:
	{
		Il2CppFullySharedGenericStruct* L_6 = __this->___Keys;
		int32_t L_7 = V_3;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), NULL, (void*)L_6, L_7, (Il2CppFullySharedGenericStruct*)L_8);
		il2cpp_codegen_memcpy(V_4, L_8, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		il2cpp_codegen_memcpy(L_9, ___0_key, SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18), (void*)(Il2CppFullySharedGenericStruct*)V_4, &L_11, L_10);
		bool L_13 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_12, L_11.method,L_11.thisPtr, L_9);
		if (!L_13)
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t* L_16 = __this->___Buckets;
		int32_t L_17 = V_1;
		intptr_t L_18 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_17,NULL));
		int32_t* L_19 = __this->___Next;
		int32_t L_20 = V_3;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		int32_t L_22 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(L_18, 4)))), (int32_t)L_22);
		goto IL_0082;
	}

IL_006a:
	{
		int32_t* L_23 = __this->___Next;
		int32_t L_24 = V_2;
		intptr_t L_25 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_24,NULL));
		int32_t* L_26 = __this->___Next;
		int32_t L_27 = V_3;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(L_25, 4)))), (int32_t)L_29);
	}

IL_0082:
	{
		int32_t* L_30 = __this->___Next;
		int32_t L_31 = V_3;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))));
		int32_t* L_34 = __this->___Next;
		int32_t L_35 = V_3;
		intptr_t L_36 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_35,NULL));
		int32_t L_37 = __this->___FirstFreeIdx;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(L_36, 4)))), (int32_t)L_37);
		int32_t L_38 = V_3;
		__this->___FirstFreeIdx = L_38;
		V_3 = L_33;
		goto IL_00c9;
	}

IL_00aa:
	{
		int32_t L_39 = V_3;
		V_2 = L_39;
		int32_t* L_40 = __this->___Next;
		int32_t L_41 = V_3;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))));
		V_3 = L_43;
	}

IL_00b9:
	{
		int32_t L_44 = V_3;
		if ((((int32_t)L_44) < ((int32_t)0)))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_45 = V_3;
		int32_t L_46 = __this->___Capacity;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_002a;
		}
	}

IL_00c9:
	{
		int32_t L_47 = __this->___Count;
		int32_t L_48 = V_0;
		__this->___Count = ((int32_t)il2cpp_codegen_subtract(L_47, L_48));
		int32_t L_49 = V_0;
		if (L_49)
		{
			goto IL_00dc;
		}
	}
	{
		return (-1);
	}

IL_00dc:
	{
		int32_t L_50 = V_0;
		return L_50;
	}

IL_00de:
	{
		return (-1);
	}
}
// Method Definition Index: 92383
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t* L_0 = ___0_bucketIndex;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___BucketCapacity;
		V_1 = L_2;
		goto IL_0039;
	}

IL_000c:
	{
		int32_t* L_3 = __this->___Buckets;
		int32_t L_4 = V_0;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, 4)))));
		V_2 = L_6;
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t* L_8 = ___2_index;
		int32_t L_9 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_8, (int32_t)L_9);
		int32_t* L_10 = ___0_bucketIndex;
		int32_t L_11 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_10, (int32_t)((int32_t)il2cpp_codegen_add(L_11, 1)));
		int32_t* L_12 = ___1_nextIndex;
		int32_t* L_13 = __this->___Next;
		int32_t L_14 = V_2;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_14,NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_12, (int32_t)L_16);
		return (bool)1;
	}

IL_0035:
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0039:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t* L_20 = ___2_index;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_20, (int32_t)(-1));
		int32_t* L_21 = ___0_bucketIndex;
		int32_t L_22 = __this->___BucketCapacity;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_21, (int32_t)L_22);
		int32_t* L_23 = ___1_nextIndex;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_23, (int32_t)(-1));
		return (bool)0;
	}
}
// Method Definition Index: 92384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_MoveNext_mC9D28D7DE9EB2A526DFD790777D5E118D33E86BC_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t* L_0 = ___1_nextIndex;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t* L_2 = ___2_index;
		int32_t* L_3 = ___1_nextIndex;
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_2, (int32_t)L_4);
		int32_t* L_5 = ___1_nextIndex;
		int32_t* L_6 = __this->___Next;
		int32_t* L_7 = ___1_nextIndex;
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(L_7);
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(L_9, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_10);
		return (bool)1;
	}

IL_001a:
	{
		int32_t* L_11 = ___0_bucketIndex;
		int32_t* L_12 = ___1_nextIndex;
		int32_t* L_13 = ___2_index;
		bool L_14;
		L_14 = ((  bool (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)))(__this, L_11, L_12, L_13, NULL);
		return L_14;
	}
}
// Method Definition Index: 92385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 HashMapHelper_1_GetKeyArray_m8C41E3030AFCF52994AB7EAFD3A1CBD600466A9D_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_TKey_t349D5E2348DC065C1656895AA09EC3114157BDEA);
	//<source_info:<no-source>:1>
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->___Count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___0_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2;
		L_2 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)))(L_0, L_1, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		V_0 = L_2;
		V_1 = 0;
		V_2 = 0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22)))((&V_0), NULL);
		V_3 = L_3;
		int32_t L_4 = __this->___BucketCapacity;
		V_4 = L_4;
		goto IL_0065;
	}

IL_0024:
	{
		int32_t* L_5 = __this->___Buckets;
		int32_t L_6 = V_1;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 4)))));
		V_5 = L_8;
		goto IL_005c;
	}

IL_0034:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		Il2CppFullySharedGenericStruct* L_11 = __this->___Keys;
		int32_t L_12 = V_5;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), NULL, (void*)L_11, L_12, (Il2CppFullySharedGenericStruct*)L_13);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23), (&V_0), L_10, L_13);
		int32_t* L_14 = __this->___Next;
		int32_t L_15 = V_5;
		intptr_t L_16 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_15,NULL));
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(L_16, 4)))));
		V_5 = L_17;
	}

IL_005c:
	{
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0065:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_3;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0024;
		}
	}

IL_006e:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_24 = V_0;
		return L_24;
	}
}
// Method Definition Index: 92388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_CheckIndexOutOfBounds_mDCEA1C2E040CE097BFFA931B9AEE32C201AA467E_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = __this->___Capacity;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral325E9B626B8674DB0D0742BC125F644ED8FFFFCB)), L_4, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_001f:
	{
		return;
	}
}
// Method Definition Index: 92389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashMapHelper_1_CheckCapacity_mC1FA3EF072EB64DF9F09EDAD94364D72FC5CCFB2_fshared (int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)536870912))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = ((int32_t)536870912);
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F19052576940E4C653C32FF5A8A81D0ABB73F97)), L_3, L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0028:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 125703
// Method Definition Index: 125704
// Method Definition Index: 125705
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetConverter_1_CanConvert_m6A0693253143CD8386659023036395FBEA7A2E08_gshared (HashSetConverter_1_t07AED516E155858A831CBBF39932DF99326957EF* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___0_objectType;
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 125706
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSetConverter_1_ReadJson_m472434FB37DA4EBBEB66F44D964083D8478CF2B9_gshared (HashSetConverter_1_t07AED516E155858A831CBBF39932DF99326957EF* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___0_serializer, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* V_2 = NULL;
	Il2CppSharedGenericObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___0_serializer;
		NullCheck(L_0);
		WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_1;
		L_1 = VirtualFuncInvoker0< WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* >::Invoke(27, L_0);
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_2 = (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		HashSet_1__ctor_m0823862A6DDE661D7383395095FB6E793F8C2162(L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_0 = L_2;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = WitResponseArray_GetEnumerator_mE3D7CAB439F65B7778D55123748DFC6C515D6026(L_1, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_4;
					if (!L_5)
					{
						goto IL_0053;
					}
				}
				{
					RuntimeObject* L_6 = V_4;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0053:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0036_1;
			}

IL_0014_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*)CastclassClass((RuntimeObject*)L_8, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_il2cpp_TypeInfo_var));
				HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_9 = V_0;
				WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_10 = V_2;
				il2cpp_codegen_initobj((&V_3), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_11 = V_3;
				NullCheck(L_10);
				Il2CppSharedGenericObject* L_12;
				L_12 = GenericVirtualFuncInvoker1< Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), L_10, L_11);
				NullCheck(L_9);
				bool L_13;
				L_13 = HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1(L_9, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
			}

IL_0036_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0054;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_16 = V_0;
		return (RuntimeObject*)L_16;
	}
}
// Method Definition Index: 125707
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* HashSetConverter_1_WriteJson_m2501BB98E75D78650797A71C0D5481535B7C07AA_gshared (HashSetConverter_1_t07AED516E155858A831CBBF39932DF99326957EF* __this, RuntimeObject* ___0_existingValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseData_t735EE935128B934B69E2489847E5A7AD375C2105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* V_0 = NULL;
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* V_1 = NULL;
	Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B V_2;
	memset((&V_2), 0, sizeof(V_2));
	Il2CppSharedGenericObject* V_3 = NULL;
	{
		WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_0 = (WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A*)il2cpp_codegen_object_new(WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A_il2cpp_TypeInfo_var);
		WitResponseArray__ctor_m721A235EE997F78DFEBD437510486DE59A685F55(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_existingValue;
		V_1 = ((HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_4 = V_1;
		NullCheck(L_4);
		Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B L_5;
		L_5 = HashSet_1_GetEnumerator_m424EB03E25DE615E5944D7BCC698FFE80BEFF568(L_4, NULL);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{
				Enumerator_Dispose_mC5F51F21D770B5682BEF3AFA3FEA3CAFE435AB7F((&V_2), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_001b_1:
			{
				Il2CppSharedGenericObject* L_6;
				L_6 = Enumerator_get_Current_m06AE6B158E72B471CF5FC6BCF63AA55CE70CC9A4_inline((&V_2), NULL);
				V_3 = L_6;
				WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_7 = V_0;
				NullCheck((RuntimeObject*)(V_3));
				String_t* L_8;
				L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)(V_3));
				WitResponseData_t735EE935128B934B69E2489847E5A7AD375C2105* L_9 = (WitResponseData_t735EE935128B934B69E2489847E5A7AD375C2105*)il2cpp_codegen_object_new(WitResponseData_t735EE935128B934B69E2489847E5A7AD375C2105_il2cpp_TypeInfo_var);
				WitResponseData__ctor_mC5CAD7423156DB2AFA917797D3C239BDF94A0BAD(L_9, L_8, NULL);
				NullCheck(L_7);
				VirtualActionInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(13, L_7, L_9);
			}

IL_003b_1:
			{
				bool L_10;
				L_10 = Enumerator_MoveNext_m33C5B6897405249EFA048F6A8D00FF1E0568B3A9((&V_2), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
				if (L_10)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0054;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_11 = V_0;
		return L_11;
	}
}
// Method Definition Index: 125708
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 125703
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetConverter_1_get_CanRead_m02C86B30AC2E8CF8E119948CE8366F4EDE5FADFA_fshared (HashSetConverter_1_t3DB6667DB3B106CEB7BA636144EB98E44AE837C3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)1;
	}
}
// Method Definition Index: 125704
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetConverter_1_get_CanWrite_m2EF23DD4B05C16F37B628A20E8B6C95CE4F4CAE0_fshared (HashSetConverter_1_t3DB6667DB3B106CEB7BA636144EB98E44AE837C3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)1;
	}
}
// Method Definition Index: 125705
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetConverter_1_CanConvert_m84987BB93C9E713CA7F1717E99D5B603329E9724_fshared (HashSetConverter_1_t3DB6667DB3B106CEB7BA636144EB98E44AE837C3* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___0_objectType;
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 125706
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSetConverter_1_ReadJson_mA463DCB8BE05D9EFC03A10282EFC4781032D97C0_fshared (HashSetConverter_1_t3DB6667DB3B106CEB7BA636144EB98E44AE837C3* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___0_serializer, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B);
	//<source_info:<no-source>:1>
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* V_2 = NULL;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B);
	memset(V_3, 0, SizeOf_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B);
	RuntimeObject* V_4 = NULL;
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___0_serializer;
		NullCheck(L_0);
		WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_1;
		L_1 = VirtualFuncInvoker0< WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* >::Invoke(27, L_0);
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_2 = (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_0 = L_2;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = WitResponseArray_GetEnumerator_mE3D7CAB439F65B7778D55123748DFC6C515D6026(L_1, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_4;
					if (!L_5)
					{
						goto IL_0053;
					}
				}
				{
					RuntimeObject* L_6 = V_4;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0053:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0036_1;
			}

IL_0014_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*)CastclassClass((RuntimeObject*)L_8, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_il2cpp_TypeInfo_var));
				HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = V_0;
				WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_10 = V_2;
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B);
				il2cpp_codegen_memcpy(L_11, V_3, SizeOf_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B);
				NullCheck(L_10);
				GenericVirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
				NullCheck(L_9);
				bool L_13;
				L_13 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? L_12: *(void**)L_12));
			}

IL_0036_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0054;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_16 = V_0;
		return (RuntimeObject*)L_16;
	}
}
// Method Definition Index: 125707
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* HashSetConverter_1_WriteJson_m4DBAF8D229CF84632F4ED418F5DAB41894CC8737_fshared (HashSetConverter_1_t3DB6667DB3B106CEB7BA636144EB98E44AE837C3* __this, RuntimeObject* ___0_existingValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseData_t735EE935128B934B69E2489847E5A7AD375C2105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Enumerator_t3B40F6C27CB62299453425DE5720583E98E54E3D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const uint32_t SizeOf_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B);
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_5 = alloca(SizeOf_Enumerator_t3B40F6C27CB62299453425DE5720583E98E54E3D);
	//<source_info:<no-source>:1>
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* V_0 = NULL;
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_1 = NULL;
	Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB V_2 = alloca(SizeOf_Enumerator_t3B40F6C27CB62299453425DE5720583E98E54E3D);
	memset(V_2, 0, SizeOf_Enumerator_t3B40F6C27CB62299453425DE5720583E98E54E3D);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B);
	memset(V_3, 0, SizeOf_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B);
	{
		WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_0 = (WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A*)il2cpp_codegen_object_new(WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A_il2cpp_TypeInfo_var);
		WitResponseArray__ctor_m721A235EE997F78DFEBD437510486DE59A685F55(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_existingValue;
		V_1 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_4 = V_1;
		NullCheck(L_4);
		InvokerActionInvoker1< Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), L_4, (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_5);
		il2cpp_codegen_memcpy(V_2, L_5, SizeOf_Enumerator_t3B40F6C27CB62299453425DE5720583E98E54E3D);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{
				Il2CppConstrainedCallData L_7;
				Il2CppMethodPointer L_8 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), (void*)(Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_2, &L_7, L_6);
				typedef void ( *func_L_9)(void*,const RuntimeMethod*);
				((func_L_9)L_8)(L_7.thisPtr,L_7.method);
				return;
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_001b_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_2, (Il2CppFullySharedGenericAny*)L_10);
				il2cpp_codegen_memcpy(V_3, L_10, SizeOf_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B);
				WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_11 = V_0;
				Il2CppConstrainedCallData L_13;
				Il2CppMethodPointer L_14 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), (void*)(Il2CppFullySharedGenericAny*)V_3, &L_13, L_12);
				typedef String_t* ( *func_L_15)(void*,const RuntimeMethod*);
				String_t* L_16 = ((func_L_15)L_14)(L_13.thisPtr,L_13.method);
				WitResponseData_t735EE935128B934B69E2489847E5A7AD375C2105* L_17 = (WitResponseData_t735EE935128B934B69E2489847E5A7AD375C2105*)il2cpp_codegen_object_new(WitResponseData_t735EE935128B934B69E2489847E5A7AD375C2105_il2cpp_TypeInfo_var);
				WitResponseData__ctor_mC5CAD7423156DB2AFA917797D3C239BDF94A0BAD(L_17, L_16, NULL);
				NullCheck(L_11);
				VirtualActionInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(13, L_11, L_17);
			}

IL_003b_1:
			{
				bool L_18;
				L_18 = ((  bool (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
				if (L_18)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0054;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 125708
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetConverter_1__ctor_mAA9CD62578CA0B3750FA7F065FC6DCF166E20E7C_fshared (HashSetConverter_1_t3DB6667DB3B106CEB7BA636144EB98E44AE837C3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		JsonConverter__ctor_mC9121064B1F93F5E907EDF233D40EC0CBC302B25((JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 131524
// Method Definition Index: 131525
// Method Definition Index: 131526
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* HashSetList_1_get_Item_m569FB610EDD4442DD641973F672418960775BC1B_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___m_InternalList;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_2;
		L_2 = List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 131527
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1__ctor_mBED863BDF21424A5500A17328D391DB99EFC1A42_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		HashSetList_1__ctor_mD856FE22C9C41D24B4FB5BB17716AA3D8B01411D(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 131528
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1__ctor_m79BA03929B6A6929ED92D463494918E225E50406_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		HashSetList_1__ctor_mD856FE22C9C41D24B4FB5BB17716AA3D8B01411D(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 131529
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1__ctor_mD856FE22C9C41D24B4FB5BB17716AA3D8B01411D_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_1 = (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
		List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516(L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		__this->___m_InternalList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalList), (void*)L_1);
		int32_t L_2 = ___0_capacity;
		RuntimeObject* L_3 = ___1_comparer;
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_4 = (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
		HashSet_1__ctor_m4FE49541969583230751E3D25B00AE7237082428(L_4, L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		__this->___m_InternalHashSet = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalHashSet), (void*)L_4);
		return;
	}
}
// Method Definition Index: 131530
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 HashSetList_1_GetEnumerator_mDA562A8B4D5B348DF79199149178B309A9C3643B_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___m_InternalList;
		NullCheck(L_0);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_1;
		L_1 = List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 131531
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSetList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6A0DE1942D9BC55C4448B2B0D374F8F2CF082204_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___m_InternalList;
		NullCheck(L_0);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_1;
		L_1 = List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9(L_0, NULL);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// Method Definition Index: 131532
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSetList_1_System_Collections_IEnumerable_GetEnumerator_mE2EB1F91B88C0208BBA5BF8305E4B865426C431E_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_0;
		L_0 = HashSetList_1_GetEnumerator_mDA562A8B4D5B348DF79199149178B309A9C3643B(__this, NULL);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 131533
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mAE62DAA9DBBF1FBFF1C8E39128DE001EEFC960A7_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		Il2CppSharedGenericObject* L_1 = ___0_item;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3 = __this->___m_InternalList;
		Il2CppSharedGenericObject* L_4 = ___0_item;
		NullCheck(L_3);
		List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		int32_t L_5 = __this->___m_Count;
		__this->___m_Count = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		return;
	}
}
// Method Definition Index: 131534
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_Add_m68FDB0106163249C323EA3554ACEB198F4C9779B_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		Il2CppSharedGenericObject* L_1 = ___0_item;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		bool L_3 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0029;
		}
		G_B1_0 = L_3;
	}
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_4 = __this->___m_InternalList;
		Il2CppSharedGenericObject* L_5 = ___0_item;
		NullCheck(L_4);
		List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_4, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		int32_t L_6 = __this->___m_Count;
		__this->___m_Count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		return G_B2_0;
	}
}
// Method Definition Index: 131535
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_Remove_m00413E4E4F5D5339CA083EFC653FA889194919E3_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	{
		int32_t L_0 = __this->___m_Count;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_1 = __this->___m_InternalHashSet;
		Il2CppSharedGenericObject* L_2 = ___0_item;
		NullCheck(L_1);
		bool L_3;
		L_3 = HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386(L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		bool L_4 = L_3;
		if (!L_4)
		{
			G_B4_0 = L_4;
			goto IL_0034;
		}
		G_B3_0 = L_4;
	}
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_5 = __this->___m_InternalList;
		Il2CppSharedGenericObject* L_6 = ___0_item;
		NullCheck(L_5);
		bool L_7;
		L_7 = List_1_Remove_m0AC731A08F1400089DD478E2D366804833660796(L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		int32_t L_8 = __this->___m_Count;
		__this->___m_Count = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		G_B4_0 = G_B3_0;
	}

IL_0034:
	{
		return G_B4_0;
	}
}
// Method Definition Index: 131536
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_ExceptWith_m9C9F60421983704D27FE41066FBA9CA0EAF8EC35_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		HashSet_1_ExceptWith_mA328CEBE6E025549E9D544B0DC20F1CCEC010DC5(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		HashSetList_1_RefreshList_mD1EE2ABA0256C6CD0B0F026650294B0E66C0FCAB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
// Method Definition Index: 131537
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_IntersectWith_m1F411B50AD121C0CA0A5BCFDF282BB6E8B9D1137_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		HashSet_1_IntersectWith_mA903B579E3CF8D3229E3A4A33FDDA90927B265A1(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		HashSetList_1_RefreshList_mD1EE2ABA0256C6CD0B0F026650294B0E66C0FCAB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
// Method Definition Index: 131538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_IsProperSubsetOf_m345D52DC9C2AD81B906774EE53ADEE95F9DDAF72_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_IsProperSubsetOf_mC329DA1E059D245AA4538A60A872DCE595C383BD(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_2;
	}
}
// Method Definition Index: 131539
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_IsProperSupersetOf_m22DFB00F31BE76065A5906D49838258C3D312DF8_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_IsProperSupersetOf_m38AAE9B4945B12DF09933F7D7334834516C211CD(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return L_2;
	}
}
// Method Definition Index: 131540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_IsSubsetOf_m872158E91B5A907EE74C0E9FC24F8531745459F9_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_IsSubsetOf_mD773B1FACC75D6E5BFB552068D84885D11794A67(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_2;
	}
}
// Method Definition Index: 131541
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_IsSupersetOf_m502A9B7A373D5633ACE7E83394985A5C2C0A70C6_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_IsSupersetOf_m3A1ECC947A3B4FE6D317D91F10171AB8606D3E21(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		return L_2;
	}
}
// Method Definition Index: 131542
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_Overlaps_m7E3CF9742F562A490D40DEB043DAB4B061041CED_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Overlaps_m00247290D467B6DDE695DFE3E5EE9D027AB90D68(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		return L_2;
	}
}
// Method Definition Index: 131543
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_SetEquals_m0D2670503767C2DEB85FC5369710174B34E50A44_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_SetEquals_m512996FD5292D9C85E6448D053D3316CAA9C5BD1(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return L_2;
	}
}
// Method Definition Index: 131544
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_SymmetricExceptWith_mACD7128FABAF96B6076AAFCD2AD3A9D44A2E3733_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		HashSet_1_SymmetricExceptWith_m3E85DE0761C9795EE9D5EC13C6A32B2585DD0974(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		HashSetList_1_RefreshList_mD1EE2ABA0256C6CD0B0F026650294B0E66C0FCAB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
// Method Definition Index: 131545
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_UnionWith_m3EFDB91A3BA5DDE9064F1C4E74700ABFE39EDDBE_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
		HashSetList_1_RefreshList_mD1EE2ABA0256C6CD0B0F026650294B0E66C0FCAB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
// Method Definition Index: 131546
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_Clear_m124BD6CF71D44D9DE859F4FD3F45AC0D464801E5_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		NullCheck(L_0);
		HashSet_1_Clear_m4C8B89A7D6EE903FEDF2AE7EB15C12372E770087(L_0, NULL);
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_1 = __this->___m_InternalList;
		NullCheck(L_1);
		List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_inline(L_1, NULL);
		__this->___m_Count = 0;
		return;
	}
}
// Method Definition Index: 131547
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_Contains_mBB4613D5CD265B270F4FA025942633F56B475C4F_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		Il2CppSharedGenericObject* L_1 = ___0_item;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return L_2;
	}
}
// Method Definition Index: 131548
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_CopyTo_mD7E3D68B152082EC1B1DCD86972D0301940D1860_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___m_InternalList;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		NullCheck(L_0);
		List_1_CopyTo_m75919E1737F4EC8D7DD329629C11CACA64EF5BE3(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 131549
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_GetObjectData_m2A0AC3DF6B400D5B1109F8AD59024CA4B67FB031_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_2 = ___1_context;
		NullCheck(L_0);
		VirtualActionInvoker2< SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 >::Invoke(17, L_0, L_1, L_2);
		HashSetList_1_RefreshList_mD1EE2ABA0256C6CD0B0F026650294B0E66C0FCAB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
// Method Definition Index: 131550
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_OnDeserialization_m7C10FA9AFB41925E073B6B0BCB7EC6FD8470EAB4_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_sender;
		NullCheck(L_0);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(18, L_0, L_1);
		HashSetList_1_RefreshList_mD1EE2ABA0256C6CD0B0F026650294B0E66C0FCAB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
// Method Definition Index: 131551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_RefreshList_mD1EE2ABA0256C6CD0B0F026650294B0E66C0FCAB_gshared (HashSetList_1_t40A7FDA4102DF737105866F603ED64ECDDE63EE9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___m_InternalList;
		NullCheck(L_0);
		List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_inline(L_0, NULL);
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_1 = __this->___m_InternalList;
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_2 = __this->___m_InternalHashSet;
		NullCheck(L_1);
		List_1_AddRange_m655A34E010FCB41069350D2D616558180A0C0AFF(L_1, (RuntimeObject*)L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3 = __this->___m_InternalList;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_3, NULL);
		__this->___m_Count = L_4;
		return;
	}
}
// Method Definition Index: 131552
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 131524
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSetList_1_get_Count_m7B4003BA1C82B14972FABCB61ABB88418D13297A_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Count;
		return L_0;
	}
}
// Method Definition Index: 131525
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m00286C3AA5A460F402616DC3D28B5B4564677795_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 131526
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_get_Item_mF0AEDE4336E16DF90CA95FD8F27D01168CC62A1A_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E);
	//<source_info:<no-source>:1>
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = __this->___m_InternalList;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E);
		return;
	}
}
// Method Definition Index: 131527
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1__ctor_mB92CE659567A313D9933EE4AFDB35B4393F00CD0_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 131528
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1__ctor_mEB8D988187DBC0809491FBE6E8CB5C67D58E4D44_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 131529
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1__ctor_m05CB4C6936915F8F7C236FA8157650086F6E19AA_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		__this->___m_InternalList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalList), (void*)L_1);
		int32_t L_2 = ___0_capacity;
		RuntimeObject* L_3 = ___1_comparer;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_4 = (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(L_4, L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		__this->___m_InternalHashSet = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalHashSet), (void*)L_4);
		return;
	}
}
// Method Definition Index: 131530
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_GetEnumerator_mED48C3A41746675D7B86326399E4B2E8FC502D45_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t03E80689F9403B15A8F8DDE5957D116028BA4172 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_1 = alloca(SizeOf_Enumerator_t03E80689F9403B15A8F8DDE5957D116028BA4172);
	//<source_info:<no-source>:1>
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = __this->___m_InternalList;
		NullCheck(L_0);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), L_0, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_Enumerator_t03E80689F9403B15A8F8DDE5957D116028BA4172);
		return;
	}
}
// Method Definition Index: 131531
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSetList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m0E14A0E9FFB03FEE873454E7A88819620A276C2B_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t03E80689F9403B15A8F8DDE5957D116028BA4172 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_1 = alloca(SizeOf_Enumerator_t03E80689F9403B15A8F8DDE5957D116028BA4172);
	//<source_info:<no-source>:1>
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = __this->___m_InternalList;
		NullCheck(L_0);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), L_0, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_1);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8), L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 131532
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSetList_1_System_Collections_IEnumerable_GetEnumerator_m6C09F0F1BB0D308A024633D9068EDFDF9827AABD_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t03E80689F9403B15A8F8DDE5957D116028BA4172 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t03E80689F9403B15A8F8DDE5957D116028BA4172);
	//<source_info:<no-source>:1>
	{
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), __this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 131533
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m4B43E70BCB0E21EBB4F6B95B49EACA97DA1343E5_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E);
	const Il2CppFullySharedGenericAny L_4 = L_1;
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_item : &___0_item), SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E);
		NullCheck(L_0);
		bool L_2;
		L_2 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_1: *(void**)L_1));
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = __this->___m_InternalList;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_item : &___0_item), SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E);
		NullCheck(L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_4: *(void**)L_4));
		int32_t L_5 = __this->___m_Count;
		__this->___m_Count = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		return;
	}
}
// Method Definition Index: 131534
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_Add_m21701EF1E0EF369AE87073E6100CD6C97BBB04A6_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E);
	const Il2CppFullySharedGenericAny L_5 = L_1;
	//<source_info:<no-source>:1>
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_item : &___0_item), SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E);
		NullCheck(L_0);
		bool L_2;
		L_2 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_1: *(void**)L_1));
		bool L_3 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0029;
		}
		G_B1_0 = L_3;
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = __this->___m_InternalList;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_item : &___0_item), SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E);
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_5: *(void**)L_5));
		int32_t L_6 = __this->___m_Count;
		__this->___m_Count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		return G_B2_0;
	}
}
// Method Definition Index: 131535
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_Remove_m2813ED7B8BA29B7638D86E77187F202EA7161F2F_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E);
	const Il2CppFullySharedGenericAny L_6 = L_2;
	//<source_info:<no-source>:1>
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	{
		int32_t L_0 = __this->___m_Count;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_1 = __this->___m_InternalHashSet;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_item : &___0_item), SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E);
		NullCheck(L_1);
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_2: *(void**)L_2));
		bool L_4 = L_3;
		if (!L_4)
		{
			G_B4_0 = L_4;
			goto IL_0034;
		}
		G_B3_0 = L_4;
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = __this->___m_InternalList;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_item : &___0_item), SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E);
		NullCheck(L_5);
		bool L_7;
		L_7 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_6: *(void**)L_6));
		int32_t L_8 = __this->___m_Count;
		__this->___m_Count = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		G_B4_0 = G_B3_0;
	}

IL_0034:
	{
		return G_B4_0;
	}
}
// Method Definition Index: 131536
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_ExceptWith_m95C9931EBA84A11C0FC09A19F6820EA729E38650_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)))(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		((  void (*) (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
// Method Definition Index: 131537
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_IntersectWith_m7021E80B055004496FE5F20D82E053E86889F289_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		((  void (*) (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
// Method Definition Index: 131538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_IsProperSubsetOf_m3ED235DBBB115F536C2C916E36DE1187B76DA3FD_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)))(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_2;
	}
}
// Method Definition Index: 131539
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_IsProperSupersetOf_m9EBB05C9BFF312498DB9B70E8E76812A0B996A0C_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return L_2;
	}
}
// Method Definition Index: 131540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_IsSubsetOf_m783FF9690A2D6FCE9CC0C2F10F46A3B087E52623_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_2;
	}
}
// Method Definition Index: 131541
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_IsSupersetOf_m5C26BAA2E483442E2D1EDD59F1E9D5B097447DE0_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)))(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		return L_2;
	}
}
// Method Definition Index: 131542
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_Overlaps_mC38ADB11C49F8D363C4D91F25740F026523ACB37_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)))(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		return L_2;
	}
}
// Method Definition Index: 131543
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_SetEquals_m6D6F26ACB2A9F6CDF64742D647C5B0863186F340_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)))(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return L_2;
	}
}
// Method Definition Index: 131544
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_SymmetricExceptWith_mA0540CE9E706B419EF82AF7DDBA0AB54A76E5B63_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)))(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		((  void (*) (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
// Method Definition Index: 131545
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_UnionWith_mB6F590993706965711358329813C56E972F52C8F_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_0);
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24)))(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
		((  void (*) (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
// Method Definition Index: 131546
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_Clear_m56A7F362F104FAE67DB2724739313737E5CCEBC9_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		NullCheck(L_0);
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25)))(L_0, NULL);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = __this->___m_InternalList;
		NullCheck(L_1);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)))(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		__this->___m_Count = 0;
		return;
	}
}
// Method Definition Index: 131547
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSetList_1_Contains_mE1A209CC25539A5ED8C5F1460C45B4E5413D56BB_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E);
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_item : &___0_item), SizeOf_T_t9E1924ADE529330683656A7627F81623E5DB8B5E);
		NullCheck(L_0);
		bool L_2;
		L_2 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// Method Definition Index: 131548
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_CopyTo_m5E099B5CB52F980DA4EE50B603A187DA4A59D5F1_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = __this->___m_InternalList;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		NullCheck(L_0);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)))(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 131549
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_GetObjectData_mE2EB5403E8D2087DF3DC59A398511D44E75DA922_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_2 = ___1_context;
		NullCheck(L_0);
		VirtualActionInvoker2< SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 >::Invoke(17, L_0, L_1, L_2);
		((  void (*) (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
// Method Definition Index: 131550
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_OnDeserialization_m1C43F3D81AB32952E59A6D8A7D5895DBBD39797B_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->___m_InternalHashSet;
		RuntimeObject* L_1 = ___0_sender;
		NullCheck(L_0);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(18, L_0, L_1);
		((  void (*) (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
// Method Definition Index: 131551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetList_1_RefreshList_mDD60D412C39746BDA06C5437EBF6BD9FACFDF45C_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = __this->___m_InternalList;
		NullCheck(L_0);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = __this->___m_InternalList;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_2 = __this->___m_InternalHashSet;
		NullCheck(L_1);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))(L_1, (RuntimeObject*)L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = __this->___m_InternalList;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)))(L_3, NULL);
		__this->___m_Count = L_4;
		return;
	}
}
// Method Definition Index: 131552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSetList_1_AsList_m331AAB97FB14632EB560DF8D414CC709FFA4A3B7_fshared (HashSetList_1_tA79BA5A1A2EFA49275053A69FD2E6CC78A69BB1F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = __this->___m_InternalList;
		return (RuntimeObject*)L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* HashSetPool_1_Get_mA86D8D11E69A509E3507C51AE8FE2C06F7E9CA88 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(HashSetPool_1_t6E1F0A3C618746CD2652CD1D2B5019950C080D86_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(HashSetPool_1_t6E1F0A3C618746CD2652CD1D2B5019950C080D86_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20* L_0 = ((HashSetPool_1_tCDE4475FE632D305A8B40C161E3E5D5E24FB73B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		NullCheck(L_0);
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_1;
		L_1 = ObjectPool_1_Get_mC7EA455A853C47435D58F14E4AEE2A478D1EDA54(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return L_1;
	}
}
// Method Definition Index: 53797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_tF0578D2ED5B0FC8E22A1DB912ED155A6A5F7F8E7 HashSetPool_1_Get_m6B7DE609547BD0FF02BE79F03155879003C9C990 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2** ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(HashSetPool_1_t6E1F0A3C618746CD2652CD1D2B5019950C080D86_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(HashSetPool_1_t6E1F0A3C618746CD2652CD1D2B5019950C080D86_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20* L_0 = ((HashSetPool_1_tCDE4475FE632D305A8B40C161E3E5D5E24FB73B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_tF0578D2ED5B0FC8E22A1DB912ED155A6A5F7F8E7 L_2;
		L_2 = ObjectPool_1_Get_mA791397D45446D728240C874EB1853108B33C6BD(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		return L_2;
	}
}
// Method Definition Index: 53798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetPool_1_Release_m67F5B9F0FEB289567F64E0F32F550B8518AAFBD4 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_toRelease, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(HashSetPool_1_t6E1F0A3C618746CD2652CD1D2B5019950C080D86_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(HashSetPool_1_t6E1F0A3C618746CD2652CD1D2B5019950C080D86_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20* L_0 = ((HashSetPool_1_tCDE4475FE632D305A8B40C161E3E5D5E24FB73B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m4C16FE356E556464270B5BF3BE9F49ED4A1979D0(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		return;
	}
}
// Method Definition Index: 53799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetPool_1__cctor_m7519A0B46A510B7D2CF8149A8D7693CC4B55F2C0 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tC25A6FA319E71E5C9DC585592EB36EC9F5EB02D8_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tC25A6FA319E71E5C9DC585592EB36EC9F5EB02D8_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tDC5AC4C57D5D24496026F6F41261DB057567262F* L_0 = ((U3CU3Ec_tDC5AC4C57D5D24496026F6F41261DB057567262F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))->___U3CU3E9;
		UnityAction_1_tE91D7881104262139C090ED0EADCBE71D6E519AF* L_1 = (UnityAction_1_tE91D7881104262139C090ED0EADCBE71D6E519AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		UnityAction_1__ctor_m2852CF8FCEBCAE485F8F43CD4A6DD64D53B76B71(L_1, L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), NULL);
		ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20* L_2 = (ObjectPool_1_tB6C1ADE468B79790CF1560D0005261278AD02E20*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		ObjectPool_1__ctor_m7987C522CD796BB6C78908999127474CE691CE4B(L_2, (UnityAction_1_tE91D7881104262139C090ED0EADCBE71D6E519AF*)NULL, L_1, (bool)1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		((HashSetPool_1_tCDE4475FE632D305A8B40C161E3E5D5E24FB73B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HashSetPool_1_tCDE4475FE632D305A8B40C161E3E5D5E24FB73B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* HashSetPool_1_Get_mF44FDE252EA5D4E55773EE003CC29AD9CF6394F7_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(HashSetPool_1_t6E1F0A3C618746CD2652CD1D2B5019950C080D86_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(HashSetPool_1_t6E1F0A3C618746CD2652CD1D2B5019950C080D86_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* L_0 = ((HashSetPool_1_t703447E09A777B65F717CFC90E4FB4CA574AADA6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		NullCheck(L_0);
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_1;
		L_1 = InvokerFuncInvoker0< HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		return L_1;
	}
}
// Method Definition Index: 53797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_t432123EBFF2674A3A6835051E8FF82B14E1A757A HashSetPool_1_Get_mE3F0BA3CFD1753DFAEBADD152F27DF9506395EA0_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87** ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(HashSetPool_1_t6E1F0A3C618746CD2652CD1D2B5019950C080D86_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(HashSetPool_1_t6E1F0A3C618746CD2652CD1D2B5019950C080D86_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* L_0 = ((HashSetPool_1_t703447E09A777B65F717CFC90E4FB4CA574AADA6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_t432123EBFF2674A3A6835051E8FF82B14E1A757A L_2;
		L_2 = InvokerFuncInvoker1< PooledObject_t432123EBFF2674A3A6835051E8FF82B14E1A757A, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 53798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetPool_1_Release_mAD67B6A9557295CD786CA50619536ED6F823E6F8_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_toRelease, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(HashSetPool_1_t6E1F0A3C618746CD2652CD1D2B5019950C080D86_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(HashSetPool_1_t6E1F0A3C618746CD2652CD1D2B5019950C080D86_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* L_0 = ((HashSetPool_1_t703447E09A777B65F717CFC90E4FB4CA574AADA6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_1 = ___0_toRelease;
		NullCheck(L_0);
		InvokerActionInvoker1< HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_0, L_1);
		return;
	}
}
// Method Definition Index: 53799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetPool_1__cctor_m870F053DDD336DB877E3F699952F5901872D3D85_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tC25A6FA319E71E5C9DC585592EB36EC9F5EB02D8_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tC25A6FA319E71E5C9DC585592EB36EC9F5EB02D8_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t0FF56B0CA81E481CEA50A59D56491E25FF6104C7* L_0 = ((U3CU3Ec_t0FF56B0CA81E481CEA50A59D56491E25FF6104C7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))->___U3CU3E9;
		UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409* L_1 = (UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		((  void (*) (UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), NULL);
		ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150* L_2 = (ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		((  void (*) (ObjectPool_1_t6F33411F617840F00758893EC96921D38A8F5150*, UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409*, UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(L_2, (UnityAction_1_tF5283D973651D2E4DD18F58A603DA7FE709C7409*)NULL, L_1, (bool)1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		((HashSetPool_1_t703447E09A777B65F717CFC90E4FB4CA574AADA6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HashSetPool_1_t703447E09A777B65F717CFC90E4FB4CA574AADA6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSetPropertyBag_1_get_InstantiationKind_m542C648FC9442316698457076FBC5B8C17656097_fshared (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (int32_t)(1);
	}
}
// Method Definition Index: 129785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* HashSetPropertyBag_1_Instantiate_m40B346AADC5FFAA079D2DD84ED0FD4843585E19E_fshared (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_0;
	}
}
// Method Definition Index: 129786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetPropertyBag_1__ctor_m97B9FF0A7C7B1247E10A3C8A5114080B3A6571D1_fshared (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		((  void (*) (SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))((SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 36510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetScope_1__ctor_m421B073D6BFD4054753074C8F91AF305CBCD2974 (HashSetScope_1_t3BE1488ECFDD798A9B48C547C6370C249365B845* __this, HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4** ___0_set, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* V_0 = NULL;
	{
		HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4** L_0 = ___0_set;
		HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* L_1;
		L_1 = OVRObjectPool_HashSet_TisGuid_t_mA2421D052A3ED55B53F5691182A281CEC7474C05(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* L_2 = L_1;
		V_0 = L_2;
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_0, (RuntimeObject*)L_2);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* L_3 = V_0;
		__this->____set = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____set), (void*)L_3);
		return;
	}
}
// Method Definition Index: 36511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetScope_1_Dispose_m107134107265DC6A3C72C1655EE7D7EF739C0365 (HashSetScope_1_t3BE1488ECFDD798A9B48C547C6370C249365B845* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* L_0 = __this->____set;
		OVRObjectPool_Return_TisGuid_t_mDCF0957D8C8D58802EAE50BE4F4BF8DC70314276(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return;
	}
}
IL2CPP_EXTERN_C  void HashSetScope_1_Dispose_m107134107265DC6A3C72C1655EE7D7EF739C0365_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HashSetScope_1_t3BE1488ECFDD798A9B48C547C6370C249365B845* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashSetScope_1_t3BE1488ECFDD798A9B48C547C6370C249365B845>(__this);
	HashSetScope_1_Dispose_m107134107265DC6A3C72C1655EE7D7EF739C0365(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 36510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetScope_1__ctor_mC4C8177C136F21B3ADF566505D81A668B5891CAD_fshared (HashSetScope_1_t97FCE4CBE8C665E6986EB69670255A01FD6D4951* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87** ___0_set, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87** L_0 = ___0_set;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_1;
		L_1 = ((  HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_2 = L_1;
		V_0 = L_2;
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_0, (RuntimeObject*)L_2);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_3 = V_0;
		__this->____set = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____set), (void*)L_3);
		return;
	}
}
// Method Definition Index: 36511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetScope_1_Dispose_m3764AF28B69E1F038ACD982F1F76713A3D6C16BC_fshared (HashSetScope_1_t97FCE4CBE8C665E6986EB69670255A01FD6D4951* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = __this->____set;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return;
	}
}
IL2CPP_EXTERN_C  void HashSetScope_1_Dispose_m3764AF28B69E1F038ACD982F1F76713A3D6C16BC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HashSetScope_1_t97FCE4CBE8C665E6986EB69670255A01FD6D4951* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashSetScope_1_t97FCE4CBE8C665E6986EB69670255A01FD6D4951>(__this);
	HashSetScope_1_Dispose_m3764AF28B69E1F038ACD982F1F76713A3D6C16BC(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 36510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetScope_1__ctor_m093A8B8FE1932668BCC7D3D4A7DC784D2D33CDF4_gshared (HashSetScope_1_t317EFD29C1784F174ADF1207112F5153998695D6* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24** ___0_set, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* V_0 = NULL;
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24** L_0 = ___0_set;
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_1;
		L_1 = OVRObjectPool_HashSet_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m9BAA32D34CBBB854724DE4CE2B62EEF39E60ACBA(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_2 = L_1;
		V_0 = L_2;
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_0, (RuntimeObject*)L_2);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_3 = V_0;
		__this->____set = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____set), (void*)L_3);
		return;
	}
}
// Method Definition Index: 36511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetScope_1_Dispose_m63F7F32041FA62A66658495A5CDFF7EFD041B2D5_gshared (HashSetScope_1_t317EFD29C1784F174ADF1207112F5153998695D6* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_0 = __this->____set;
		OVRObjectPool_Return_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m460BDEC9AA09F3744D4FB52800D4FAA92C36B8AB(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return;
	}
}
IL2CPP_EXTERN_C  void HashSetScope_1_Dispose_m63F7F32041FA62A66658495A5CDFF7EFD041B2D5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HashSetScope_1_t317EFD29C1784F174ADF1207112F5153998695D6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<HashSetScope_1_t317EFD29C1784F174ADF1207112F5153998695D6>(__this);
	HashSetScope_1_Dispose_m63F7F32041FA62A66658495A5CDFF7EFD041B2D5(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 36510
// Method Definition Index: 36511
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 36510
// Method Definition Index: 36511
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 98123
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m87DD2C9F4CD77E145B0EF637074339C97250BD82_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* L_0;
		L_0 = EqualityComparer_1_get_Default_mB5C35C04AE32653F7C5AA18004C7C11C533CB9CF_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m7802525BBD8C26A751EC85518917D44C49CD3EAA(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return;
	}
}
// Method Definition Index: 98124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m7802525BBD8C26A751EC85518917D44C49CD3EAA_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* L_1;
		L_1 = EqualityComparer_1_get_Default_mB5C35C04AE32653F7C5AA18004C7C11C533CB9CF_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
// Method Definition Index: 98125
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9EE64A1F8BC7C12608945030C015D7F78C6F2811_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* L_1;
		L_1 = EqualityComparer_1_get_Default_mB5C35C04AE32653F7C5AA18004C7C11C533CB9CF_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mA49811F99EE364E8682EF5C096FE60C96F3AD7B5(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 98126
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m36505BDF30AEBB4C5DB1F78D24D9FBE72D42F369_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* L_1;
		L_1 = EqualityComparer_1_get_Default_mB5C35C04AE32653F7C5AA18004C7C11C533CB9CF_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mB3840B8C004904C6D22CBF8D16C0A208715557ED(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 98127
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB3840B8C004904C6D22CBF8D16C0A208715557ED_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m7802525BBD8C26A751EC85518917D44C49CD3EAA(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m1BF5879FB39DC78AA59BEEBB3379AB6EE06F8E16(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_7 = V_0;
		HashSet_1_CopyFrom_m21ACCD9DD0FBE0E39C41716A3F8DD91A58376B11(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_mE578CED2AA7DB7457EA49C6AF43ADA4211FEBEEE(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mF59B4E04263C83469CDA33BBB491202183779A7C(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m643089CF3D68E8E15DA2F0AB120D532528DB0250(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}

IL_0074:
	{
		return;
	}
}
// Method Definition Index: 98128
// Method Definition Index: 98129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m21ACCD9DD0FBE0E39C41716A3F8DD91A58376B11_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))));
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_mE578CED2AA7DB7457EA49C6AF43ADA4211FEBEEE(__this, L_23, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_m5CFE21F548A2D7C90C24B6687AE52AA973F4A16D(__this, L_29, L_30, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
// Method Definition Index: 98130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA49811F99EE364E8682EF5C096FE60C96F3AD7B5_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m7802525BBD8C26A751EC85518917D44C49CD3EAA(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_mE578CED2AA7DB7457EA49C6AF43ADA4211FEBEEE(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0022:
	{
		return;
	}
}
// Method Definition Index: 98131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m7763A8EF213E3C54779C3B2DDA4BDDD511C8A8D7_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mD6E7FA0786C2899EB19B90B682122F80985BEB10(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return;
	}
}
// Method Definition Index: 98132
// Method Definition Index: 98133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m6252E7EFDEADFCFEB3F744EB257B09E797C4E7B6_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m5E75EE53C36BEFA22FA3B8AA54975EF7E4412954(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_1 = L_2;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
// Method Definition Index: 98134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m1D9B85A6C00F657C6BDEA8FCFA1BD643543CB2F4_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m6C6C6F9D44528D862FC4AEC97133A0F193A9FDE3(__this, L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
// Method Definition Index: 98135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mA918D90144B534D559EDB13F7FA22F3A3C0F12E9_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m5E75EE53C36BEFA22FA3B8AA54975EF7E4412954(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
	}
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C* L_36 = (KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C*)(&((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___value);
		il2cpp_codegen_initobj(L_36, sizeof(KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C));
	}

IL_00d1:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_37 = V_4;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = __this->____freeList;
		((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->___next = L_39;
		int32_t L_40 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = __this->____count;
		if (L_42)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_43 = V_5;
		__this->____freeList = L_43;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_44 = V_3;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_45 = V_4;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_47 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_0135:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_5;
		V_2 = L_49;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_50 = V_4;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___next;
		V_5 = L_52;
	}

IL_014c:
	{
		int32_t L_53 = V_5;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
// Method Definition Index: 98136
// Method Definition Index: 98137
// Method Definition Index: 98138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1 HashSet_1_GetEnumerator_mC0B98642A51F02F42597A9CB77AE069EAAC0D1C1_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4CE0E336BBE99D478D21DFD50B4F52BE8296E759((&L_0), __this, NULL);
		return L_0;
	}
}
// Method Definition Index: 98139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4554C74EFE00BBECBC68D85403AB6CF82FA5B83C_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4CE0E336BBE99D478D21DFD50B4F52BE8296E759((&L_0), __this, NULL);
		Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 98140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m901234805667826C70A4FA76FD314CD035857E32_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4CE0E336BBE99D478D21DFD50B4F52BE8296E759((&L_0), __this, NULL);
		Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 98141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m2AC47D323A354DF30A72949F9670BDA07A319735_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 27)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_14 = (KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530*)(KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_15 = V_0;
		HashSet_1_CopyTo_mF0A335200B469C339FF31F73AC4FDE7519808326(__this, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
// Method Definition Index: 98142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_mA20609A0F3ED548408FD92520C94EE7018E97F44_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 32)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_11 = (SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB*)(SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530*)CastclassSealed((RuntimeObject*)L_15, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29)));
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_mD6E7FA0786C2899EB19B90B682122F80985BEB10(__this, L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
// Method Definition Index: 98143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m5C2A22B4C375446A9072A67FA9B5D47CB4F3C452_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mD6E7FA0786C2899EB19B90B682122F80985BEB10(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return L_1;
	}
}
// Method Definition Index: 98144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mF59B4E04263C83469CDA33BBB491202183779A7C_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_7;
				L_7 = InterfaceFuncInvoker0< KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_6);
				V_1 = L_7;
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_mD6E7FA0786C2899EB19B90B682122F80985BEB10(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
// Method Definition Index: 98145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWith_m5A8A93A6D4EB34BA7C16CAD28DA67072B415A2D8_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)__this))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_6);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		HashSet_1_Clear_m3883E29488A3B967A88B7868772B44435FAAD553(__this, NULL);
		return;
	}

IL_0035:
	{
		RuntimeObject* L_8 = ___0_other;
		V_1 = ((HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_10 = V_1;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m1BF5879FB39DC78AA59BEEBB3379AB6EE06F8E16(__this, L_10, NULL);
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_12 = V_1;
		HashSet_1_IntersectWithHashSetWithSameEC_m7C9954A3B1264009511603357C0E72C90C934660(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		return;
	}

IL_0050:
	{
		RuntimeObject* L_13 = ___0_other;
		HashSet_1_IntersectWithEnumerable_m80D590E9DEB3D9AC2B4C452C9B17B8C9BB6EA710(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		return;
	}
}
// Method Definition Index: 98146
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_mCF372A0EA87F3CF4D3A1FC7F1E8A06F18A868E9B_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m3883E29488A3B967A88B7868772B44435FAAD553(__this, NULL);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_9;
				L_9 = InterfaceFuncInvoker0< KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_8);
				V_1 = L_9;
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_mA918D90144B534D559EDB13F7FA22F3A3C0F12E9(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		return;
	}
}
// Method Definition Index: 98147
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWith_m8DE939CBFFE7A80660EA75FA267CC1EE1C0E2266_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_other;
		HashSet_1_UnionWith_mF59B4E04263C83469CDA33BBB491202183779A7C(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)__this))))
		{
			goto IL_0029;
		}
	}
	{
		HashSet_1_Clear_m3883E29488A3B967A88B7868772B44435FAAD553(__this, NULL);
		return;
	}

IL_0029:
	{
		RuntimeObject* L_5 = ___0_other;
		V_0 = ((HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_7 = V_0;
		bool L_8;
		L_8 = HashSet_1_AreEqualityComparersEqual_m1BF5879FB39DC78AA59BEEBB3379AB6EE06F8E16(__this, L_7, NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_9 = V_0;
		HashSet_1_SymmetricExceptWithUniqueHashSet_m8E2682E138E42FE2F2A0E4F623C20C98EBB096B8(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		return;
	}

IL_0044:
	{
		RuntimeObject* L_10 = ___0_other;
		HashSet_1_SymmetricExceptWithEnumerable_m5D61B08D4E55D7DAEF19A9C96DD274E29C1EC3BC(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42));
		return;
	}
}
// Method Definition Index: 98148
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_mBDE40F4997109B99AB6984218C53332CFF1D7676_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* V_0 = NULL;
	ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_m1BF5879FB39DC78AA59BEEBB3379AB6EE06F8E16(__this, L_6, NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_mCAC83DA50655866CCA8BF2C12195D4816E14DD01_inline(L_9, NULL);
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_m606662D9C6A942FD399652076387A0996788063C(__this, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_m2461ACD261D99090E3C8D0C11CDF5A97331B6BDA(__this, L_13, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_1 = L_14;
		ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 98149
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_mCDD4D7047F6628E00C4F02E00DFBBE4BA0B47864_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_m1BF5879FB39DC78AA59BEEBB3379AB6EE06F8E16(__this, L_12, NULL);
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_mCAC83DA50655866CCA8BF2C12195D4816E14DD01_inline(L_15, NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_m606662D9C6A942FD399652076387A0996788063C(__this, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_m2461ACD261D99090E3C8D0C11CDF5A97331B6BDA(__this, L_19, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_1 = L_20;
		ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
// Method Definition Index: 98150
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m6E465422D6CE903A06A724C271C08333BE837215_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_m1BF5879FB39DC78AA59BEEBB3379AB6EE06F8E16(__this, L_9, NULL);
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_mCAC83DA50655866CCA8BF2C12195D4816E14DD01_inline(L_11, NULL);
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_mDC24442D626419E0FD9E58C05F199448B345A22F(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return L_15;
	}
}
// Method Definition Index: 98151
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_mDDACA4D56EB139C1EEBFA8361F45105CAD0C23ED_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m1BF5879FB39DC78AA59BEEBB3379AB6EE06F8E16(__this, L_10, NULL);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_mCAC83DA50655866CCA8BF2C12195D4816E14DD01_inline(L_12, NULL);
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_mDC24442D626419E0FD9E58C05F199448B345A22F(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m2461ACD261D99090E3C8D0C11CDF5A97331B6BDA(__this, L_17, (bool)1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_1 = L_18;
		ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
// Method Definition Index: 98152
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_mC9991AF5EE542A54DA9DB994FE35CF4B38D4D5C3_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_9;
				L_9 = InterfaceFuncInvoker0< KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_8);
				V_1 = L_9;
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_m6252E7EFDEADFCFEB3F744EB257B09E797C4E7B6(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// Method Definition Index: 98153
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_m7BD41D64B2D73C8B9372002470F6152E8D0D2D45_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m1BF5879FB39DC78AA59BEEBB3379AB6EE06F8E16(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_mCAC83DA50655866CCA8BF2C12195D4816E14DD01_inline(L_8, NULL);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_mDC24442D626419E0FD9E58C05F199448B345A22F(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m2461ACD261D99090E3C8D0C11CDF5A97331B6BDA(__this, L_17, (bool)1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_2 = L_18;
		ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 98154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mF0A335200B469C339FF31F73AC4FDE7519808326_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m6C6C6F9D44528D862FC4AEC97133A0F193A9FDE3(__this, L_0, 0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
// Method Definition Index: 98155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m6C6C6F9D44528D862FC4AEC97133A0F193A9FDE3_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
// Method Definition Index: 98156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_mC6DD84C10D4B75B1661B6FB9FD69764201A527AF_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, Predicate_1_tC37CC55BD5786907DB2D2694565582B139C103D4* ___0_match, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_tC37CC55BD5786907DB2D2694565582B139C103D4* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_tC37CC55BD5786907DB2D2694565582B139C103D4* L_8 = ___0_match;
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_mE11ECE6AE323498DACB411E0144082E560B4E9BF_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mA918D90144B534D559EDB13F7FA22F3A3C0F12E9(__this, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 98157
// Method Definition Index: 98158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_EnsureCapacity_m467777273C10DBFF68A2054792764A141EDD669E_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000f:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_3 = __this->____slots;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		G_B5_0 = L_4;
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_capacity;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		if (L_8)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_9 = ___0_capacity;
		int32_t L_10;
		L_10 = HashSet_1_Initialize_mE578CED2AA7DB7457EA49C6AF43ADA4211FEBEEE(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return L_10;
	}

IL_0039:
	{
		int32_t L_11 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_12;
		L_12 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_11, NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		HashSet_1_SetCapacity_m72DB8BC79BF77ED7B30D23854E8F0986A451E66C(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
		int32_t L_14 = V_1;
		return L_14;
	}
}
// Method Definition Index: 98159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m643089CF3D68E8E15DA2F0AB120D532528DB0250_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_5 = (SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB*)(SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t3885E775D38CEAE68B0526AC77F4AB191DD959D5 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t3885E775D38CEAE68B0526AC77F4AB191DD959D5)L_16);
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
// Method Definition Index: 98160
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mE578CED2AA7DB7457EA49C6AF43ADA4211FEBEEE_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_5 = (SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB*)(SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 98161
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m8AE85AECEC0DCB926E09123EC66BBC4608C22E2C_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m72DB8BC79BF77ED7B30D23854E8F0986A451E66C(__this, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
		return;
	}
}
// Method Definition Index: 98162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m72DB8BC79BF77ED7B30D23854E8F0986A451E66C_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_1 = (SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB*)(SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_3 = __this->____slots;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
// Method Definition Index: 98163
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mD6E7FA0786C2899EB19B90B682122F80985BEB10_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_mE578CED2AA7DB7457EA49C6AF43ADA4211FEBEEE(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0010:
	{
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m5E75EE53C36BEFA22FA3B8AA54975EF7E4412954(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m8AE85AECEC0DCB926E09123EC66BBC4608C22E2C(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50));
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___value), (void*)NULL);
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
// Method Definition Index: 98164
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m5CFE21F548A2D7C90C24B6687AE52AA973F4A16D_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, int32_t ___0_index, int32_t ___1_hashCode, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___value), (void*)NULL);
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
// Method Definition Index: 98165
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_mDC24442D626419E0FD9E58C05F199448B345A22F_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_4);
				V_1 = L_5;
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_m6252E7EFDEADFCFEB3F744EB257B09E797C4E7B6(__this, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 98166
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m606662D9C6A942FD399652076387A0996788063C_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1 L_0;
		L_0 = HashSet_1_GetEnumerator_mC0B98642A51F02F42597A9CB77AE069EAAC0D1C1(__this, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_m6D9205D258C774695CEAEAC5FE93B0CEA92FF7C7((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_1;
				L_1 = Enumerator_get_Current_m3D344377F66D8F581F50C0E4266312331A3B18E9_inline((&V_0), NULL);
				V_1 = L_1;
				HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_2 = ___0_other;
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_m6252E7EFDEADFCFEB3F744EB257B09E797C4E7B6(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m3916E3DB05C40504C01B0B53B683BFCC6E56A3F8((&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// Method Definition Index: 98167
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_m7C9954A3B1264009511603357C0E72C90C934660_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0004:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_0 = __this->____slots;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___hashCode;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		V_1 = L_5;
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_6 = ___0_other;
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Contains_m6252E7EFDEADFCFEB3F744EB257B09E797C4E7B6(L_6, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47));
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_Remove_mA918D90144B534D559EDB13F7FA22F3A3C0F12E9(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_003b:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____lastIndex;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 98168
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_m80D590E9DEB3D9AC2B4C452C9B17B8C9BB6EA710_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)100))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((uintptr_t)L_5 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, 4));
		int8_t* L_7;
		if (L_6 == 0)
		{
			L_7 = NULL;
		}
		else
		{
			L_7 = (int8_t*)alloca(L_6);
			memset(L_7, 0, L_6);
		}
		int32_t L_8 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_9 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_9, (int32_t*)L_7, L_8, NULL);
		V_2 = L_9;
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		int32_t L_12 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_13 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_13, L_11, L_12, NULL);
		V_2 = L_13;
	}

IL_002f:
	{
		RuntimeObject* L_14 = ___0_other;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_14);
		V_3 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				{
					RuntimeObject* L_16 = V_3;
					if (!L_16)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_17 = V_3;
					NullCheck((RuntimeObject*)L_17);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
				}

IL_006a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0057_1;
			}

IL_0038_1:
			{
				RuntimeObject* L_18 = V_3;
				NullCheck(L_18);
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_19;
				L_19 = InterfaceFuncInvoker0< KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_18);
				V_4 = L_19;
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_20 = V_4;
				int32_t L_21;
				L_21 = HashSet_1_InternalIndexOf_m1D90A5B78C45F3917D4917C6CC1E19CDAE39E978(__this, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
				V_5 = L_21;
				int32_t L_22 = V_5;
				if ((((int32_t)L_22) < ((int32_t)0)))
				{
					goto IL_0057_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = V_2;
				int32_t L_24 = V_5;
				NullCheck(L_23);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_23, L_24, NULL);
			}

IL_0057_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck((RuntimeObject*)L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				if (L_26)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_006b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		V_6 = 0;
		goto IL_00ae;
	}

IL_0070:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_27 = __this->____slots;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_30 = V_2;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		bool L_32;
		L_32 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_30, L_31, NULL);
		if (L_32)
		{
			goto IL_00a8;
		}
	}
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_33 = __this->____slots;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value;
		bool L_36;
		L_36 = HashSet_1_Remove_mA918D90144B534D559EDB13F7FA22F3A3C0F12E9(__this, L_35, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_00a8:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00ae:
	{
		int32_t L_38 = V_6;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 98169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m1D90A5B78C45F3917D4917C6CC1E19CDAE39E978_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m5E75EE53C36BEFA22FA3B8AA54975EF7E4412954(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_1 = L_1;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4%L_6));
		int32_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_19 = V_3;
		return L_19;
	}

IL_0052:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0063:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_0074:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 98170
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_m8E2682E138E42FE2F2A0E4F623C20C98EBB096B8_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_0 = ___0_other;
		NullCheck(L_0);
		Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1 L_1;
		L_1 = HashSet_1_GetEnumerator_mC0B98642A51F02F42597A9CB77AE069EAAC0D1C1(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				Enumerator_Dispose_m6D9205D258C774695CEAEAC5FE93B0CEA92FF7C7((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0022_1;
			}

IL_0009_1:
			{
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_2;
				L_2 = Enumerator_get_Current_m3D344377F66D8F581F50C0E4266312331A3B18E9_inline((&V_0), NULL);
				V_1 = L_2;
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_3 = V_1;
				bool L_4;
				L_4 = HashSet_1_Remove_mA918D90144B534D559EDB13F7FA22F3A3C0F12E9(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
				if (L_4)
				{
					goto IL_0022_1;
				}
			}
			{
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_5 = V_1;
				bool L_6;
				L_6 = HashSet_1_AddIfNotPresent_mD6E7FA0786C2899EB19B90B682122F80985BEB10(__this, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
			}

IL_0022_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m3916E3DB05C40504C01B0B53B683BFCC6E56A3F8((&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
				if (L_7)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
// Method Definition Index: 98171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m5D61B08D4E55D7DAEF19A9C96DD274E29C1EC3BC_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)50))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((uintptr_t)L_5 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, 4));
		int8_t* L_7;
		if (L_6 == 0)
		{
			L_7 = NULL;
		}
		else
		{
			L_7 = (int8_t*)alloca(L_6);
			memset(L_7, 0, L_6);
		}
		int32_t L_8 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_9 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_9, (int32_t*)L_7, L_8, NULL);
		V_2 = L_9;
		int32_t L_10 = V_1;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		if ((uintptr_t)L_11 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_12 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_11, 4));
		int8_t* L_13;
		if (L_12 == 0)
		{
			L_13 = NULL;
		}
		else
		{
			L_13 = (int8_t*)alloca(L_12);
			memset(L_13, 0, L_12);
		}
		int32_t L_14 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_15 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_15, (int32_t*)L_13, L_14, NULL);
		V_3 = L_15;
		goto IL_0049;
	}

IL_002f:
	{
		int32_t L_16 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_19, L_17, L_18, NULL);
		V_2 = L_19;
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_3 = L_23;
	}

IL_0049:
	{
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_24);
		V_4 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{
				{
					RuntimeObject* L_26 = V_4;
					if (!L_26)
					{
						goto IL_00a2;
					}
				}
				{
					RuntimeObject* L_27 = V_4;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00a2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_008c_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_28 = V_4;
				NullCheck(L_28);
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_28);
				V_5 = L_29;
				V_6 = 0;
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_30 = V_5;
				bool L_31;
				L_31 = HashSet_1_AddOrGetLocation_m8C5EA03CBF82A0F69B892FF3E0DA2E85A99DD954(__this, L_30, (&V_6), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
				if (!L_31)
				{
					goto IL_0075_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_32 = V_3;
				int32_t L_33 = V_6;
				NullCheck(L_32);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_32, L_33, NULL);
				goto IL_008c_1;
			}

IL_0075_1:
			{
				int32_t L_34 = V_6;
				int32_t L_35 = V_0;
				if ((((int32_t)L_34) >= ((int32_t)L_35)))
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_3;
				int32_t L_37 = V_6;
				NullCheck(L_36);
				bool L_38;
				L_38 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_36, L_37, NULL);
				if (L_38)
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_39 = V_2;
				int32_t L_40 = V_6;
				NullCheck(L_39);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_39, L_40, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_41 = V_4;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_00a3;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		V_7 = 0;
		goto IL_00d1;
	}

IL_00a8:
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_43 = V_2;
		int32_t L_44 = V_7;
		NullCheck(L_43);
		bool L_45;
		L_45 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_43, L_44, NULL);
		if (!L_45)
		{
			goto IL_00cb;
		}
	}
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_46 = __this->____slots;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___value;
		bool L_49;
		L_49 = HashSet_1_Remove_mA918D90144B534D559EDB13F7FA22F3A3C0F12E9(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_00cb:
	{
		int32_t L_50 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00d1:
	{
		int32_t L_51 = V_7;
		int32_t L_52 = V_0;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_00a8;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 98172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m8C5EA03CBF82A0F69B892FF3E0DA2E85A99DD954_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_value, int32_t* ___1_location, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_0 = ___0_value;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m5E75EE53C36BEFA22FA3B8AA54975EF7E4412954(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		V_1 = ((int32_t)(L_2%L_4));
		V_2 = 0;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_5 = __this->____slots;
		V_3 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007f;
	}

IL_002a:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_10 = V_3;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_15 = V_3;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_18 = ___0_value;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_20 = ___1_location;
		int32_t L_21 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_20, (int32_t)L_21);
		return (bool)0;
	}

IL_005b:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_006c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_006c:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_007f:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00e3;
	}

IL_00aa:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00cd;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m8AE85AECEC0DCB926E09123EC66BBC4608C22E2C(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50));
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00cd:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00e3:
	{
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___value), (void*)NULL);
		SlotU5BU5D_tFCE97B10BC996D5F8C7F74F6192F5CAC148BFEBB* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t* L_62 = ___1_location;
		int32_t L_63 = V_4;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_62, (int32_t)L_63);
		return (bool)1;
	}
}
// Method Definition Index: 98173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C HashSet_1_CheckUniqueAndUnfoundElements_m2461ACD261D99090E3C8D0C11CDF5A97331B6BDA_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_15,NULL));
		if ((uintptr_t)L_16 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_17 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_16, 4));
		int8_t* L_18;
		if (L_17 == 0)
		{
			L_18 = NULL;
		}
		else
		{
			L_18 = (int8_t*)alloca(L_17);
			memset(L_18, 0, L_17);
		}
		int32_t L_19 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_20 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_20, (int32_t*)L_18, L_19, NULL);
		V_2 = L_20;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_21 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_21);
		int32_t L_23 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_24 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_24, L_22, L_23, NULL);
		V_2 = L_24;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_25 = ___0_other;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_25);
		V_6 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_27 = V_6;
					if (!L_27)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_28 = V_6;
					NullCheck((RuntimeObject*)L_28);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_29 = V_6;
				NullCheck(L_29);
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_30;
				L_30 = InterfaceFuncInvoker0< KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_29);
				V_7 = L_30;
				KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_31 = V_7;
				int32_t L_32;
				L_32 = HashSet_1_InternalIndexOf_m1D90A5B78C45F3917D4917C6CC1E19CDAE39E978(__this, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_34 = V_2;
				int32_t L_35 = V_8;
				NullCheck(L_34);
				bool L_36;
				L_36 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_34, L_35, NULL);
				if (L_36)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_37 = V_2;
				int32_t L_38 = V_8;
				NullCheck(L_37);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_37, L_38, NULL);
				int32_t L_39 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_40 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_40, 1));
				bool L_41 = ___1_returnIfUnfound;
				if (!L_41)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_42 = V_6;
				NullCheck((RuntimeObject*)L_42);
				bool L_43;
				L_43 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
				if (L_43)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_44 = V_4;
		(&V_0)->___uniqueCount = L_44;
		int32_t L_45 = V_3;
		(&V_0)->___unfoundCount = L_45;
		ElementCount_tDEDB62C9E5D20CB5B7BCE214AF0BE89EB4A6390C L_46 = V_0;
		return L_46;
	}
}
// Method Definition Index: 98174
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m1BF5879FB39DC78AA59BEEBB3379AB6EE06F8E16_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___0_set1, HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* ___1_set2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_mBA202198A2D7607A4856A12A52477D5E19F1139C_inline(L_0, NULL);
		HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_mBA202198A2D7607A4856A12A52477D5E19F1139C_inline(L_2, NULL);
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
// Method Definition Index: 98175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m5E75EE53C36BEFA22FA3B8AA54975EF7E4412954_gshared (HashSet_1_tFCC436E59766EE4DC647FEF5A9C0B9CE3EAE5EC4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 98123
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m6775BA8818505D3261FA0F20B51AAB54E987BC41_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* L_0;
		L_0 = EqualityComparer_1_get_Default_mC5AA5E9B22FFF977E3B27ECA51A2C51421F309AE_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m459CC7B5030064B461AE133A6205111D6E1E2323(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return;
	}
}
// Method Definition Index: 98124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m459CC7B5030064B461AE133A6205111D6E1E2323_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* L_1;
		L_1 = EqualityComparer_1_get_Default_mC5AA5E9B22FFF977E3B27ECA51A2C51421F309AE_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
// Method Definition Index: 98125
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3439FB3651327D00CEF27BEB4E40B27FADB712AE_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* L_1;
		L_1 = EqualityComparer_1_get_Default_mC5AA5E9B22FFF977E3B27ECA51A2C51421F309AE_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m0F1F63E75AF1373CF714B16042D8F80BA13AE80C(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 98126
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m49A0F5012789B4694DC809B416A4FD869C5C2E4C_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* L_1;
		L_1 = EqualityComparer_1_get_Default_mC5AA5E9B22FFF977E3B27ECA51A2C51421F309AE_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mF112A45900BD83A4359CFE48CF9E30C561C73D4C(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 98127
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF112A45900BD83A4359CFE48CF9E30C561C73D4C_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m459CC7B5030064B461AE133A6205111D6E1E2323(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mC83A0071EE4568CDE90BE0BF91D13C8EA5408EF9(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_7 = V_0;
		HashSet_1_CopyFrom_m9A559486DD2624E95E51756ED8E8E34A7CB994E0(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_mE252B6520A101FCE1DEC1227C38EFB7E7FC20E4B(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_m1ED575D623E91D1506556E225A501BEC930E858B(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m7C525F2E1383AD1139218753824B0F4F061BD00A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}

IL_0074:
	{
		return;
	}
}
// Method Definition Index: 98128
// Method Definition Index: 98129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m9A559486DD2624E95E51756ED8E8E34A7CB994E0_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))));
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_mE252B6520A101FCE1DEC1227C38EFB7E7FC20E4B(__this, L_23, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_mE04D262D02D31838D8F558F006EE726C0D11C8BF(__this, L_29, L_30, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
// Method Definition Index: 98130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0F1F63E75AF1373CF714B16042D8F80BA13AE80C_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m459CC7B5030064B461AE133A6205111D6E1E2323(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_mE252B6520A101FCE1DEC1227C38EFB7E7FC20E4B(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0022:
	{
		return;
	}
}
// Method Definition Index: 98131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mA8A493E8A7C0BD0BA675DF168090A731E763B65C_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m7E6600254D23C774B1117F9C4AC61F9FBAEC0572(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return;
	}
}
// Method Definition Index: 98132
// Method Definition Index: 98133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mE2B8A7330144ED8A66E2FEEA8167C23A46362B71_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m2317654C2E438BD6FCE03432097BC3A7ADEA6825(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_1 = L_2;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
// Method Definition Index: 98134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m63B341152809D04BBC9F151C5444C1DFAA0E7072_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_mDF72DDBE28CCB7A7BAFF83A867A453E7B83DFE97(__this, L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
// Method Definition Index: 98135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mA3DE1CF94CFA11E7851ED5CF1113B8459A39EE62_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m2317654C2E438BD6FCE03432097BC3A7ADEA6825(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = __this->____freeList;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_36;
		int32_t L_37 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		int32_t L_38 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_39 = __this->____count;
		if (L_39)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_40 = V_5;
		__this->____freeList = L_40;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_41 = V_3;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_42 = V_4;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_44 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_0135:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_5;
		V_2 = L_46;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_47 = V_4;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next;
		V_5 = L_49;
	}

IL_014c:
	{
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
// Method Definition Index: 98136
// Method Definition Index: 98137
// Method Definition Index: 98138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E HashSet_1_GetEnumerator_m0C9BC1E7C691A7BCF983AF708022BB1A5984124C_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC69423F9A9601A1D62B510015C5F0104A9251702((&L_0), __this, NULL);
		return L_0;
	}
}
// Method Definition Index: 98139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m00CA6DCB3801FF35B059146CF41E69BBB5547A2B_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC69423F9A9601A1D62B510015C5F0104A9251702((&L_0), __this, NULL);
		Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 98140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_mABFF279BA04DC7AC797BFA75C20AF7452D672568_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC69423F9A9601A1D62B510015C5F0104A9251702((&L_0), __this, NULL);
		Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 98141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m9838E59E826237123E85290360D27BE2FDA77F46_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 27)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_14 = (OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960*)(OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29), (uint32_t)L_13);
		V_0 = L_14;
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_15 = V_0;
		HashSet_1_CopyTo_m922012922DB192A27E46DAED8906923F1A0057D4(__this, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
// Method Definition Index: 98142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_mFCD8B3F36EC446ADC03B29F0D79E250450170D93_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 32)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_11 = (SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232*)(SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960*)CastclassSealed((RuntimeObject*)L_15, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29)));
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m7E6600254D23C774B1117F9C4AC61F9FBAEC0572(__this, L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
// Method Definition Index: 98143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m388B8B72540B3D516F9D533B3CAF393F669835E4_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m7E6600254D23C774B1117F9C4AC61F9FBAEC0572(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return L_1;
	}
}
// Method Definition Index: 98144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m1ED575D623E91D1506556E225A501BEC930E858B_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_7;
				L_7 = InterfaceFuncInvoker0< OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_6);
				V_1 = L_7;
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m7E6600254D23C774B1117F9C4AC61F9FBAEC0572(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
// Method Definition Index: 98145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWith_mD0EC6C40B79077A89FDCA394F46ECE49C8A11026_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)__this))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_6);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		HashSet_1_Clear_mA99119AE2B4B524C2154035DBE00FD84716FDD1B(__this, NULL);
		return;
	}

IL_0035:
	{
		RuntimeObject* L_8 = ___0_other;
		V_1 = ((HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_10 = V_1;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_mC83A0071EE4568CDE90BE0BF91D13C8EA5408EF9(__this, L_10, NULL);
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_12 = V_1;
		HashSet_1_IntersectWithHashSetWithSameEC_mD64C94B08969B65209343FBF352D5135CED47AA8(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		return;
	}

IL_0050:
	{
		RuntimeObject* L_13 = ___0_other;
		HashSet_1_IntersectWithEnumerable_mFA08904864F0740363FBA450B3B3092FA92F311E(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		return;
	}
}
// Method Definition Index: 98146
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_mF1AC3551EFE1C2DB2B3DFD898463D8442B67FF8C_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_mA99119AE2B4B524C2154035DBE00FD84716FDD1B(__this, NULL);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_9;
				L_9 = InterfaceFuncInvoker0< OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_8);
				V_1 = L_9;
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_mA3DE1CF94CFA11E7851ED5CF1113B8459A39EE62(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		return;
	}
}
// Method Definition Index: 98147
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWith_m5E98C5CDDD7F47B536D772D9415A639216CECC80_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_other;
		HashSet_1_UnionWith_m1ED575D623E91D1506556E225A501BEC930E858B(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)__this))))
		{
			goto IL_0029;
		}
	}
	{
		HashSet_1_Clear_mA99119AE2B4B524C2154035DBE00FD84716FDD1B(__this, NULL);
		return;
	}

IL_0029:
	{
		RuntimeObject* L_5 = ___0_other;
		V_0 = ((HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_7 = V_0;
		bool L_8;
		L_8 = HashSet_1_AreEqualityComparersEqual_mC83A0071EE4568CDE90BE0BF91D13C8EA5408EF9(__this, L_7, NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_9 = V_0;
		HashSet_1_SymmetricExceptWithUniqueHashSet_mB4174F2B4AE41A2435C5AE9C7E255B11860875AE(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		return;
	}

IL_0044:
	{
		RuntimeObject* L_10 = ___0_other;
		HashSet_1_SymmetricExceptWithEnumerable_mBA3D136A774A6AFE3C8E0EB09A9AA50D3E57B17B(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42));
		return;
	}
}
// Method Definition Index: 98148
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_m6F67EC5EF551E40E1A20ABC042C415ABA6285CF3_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* V_0 = NULL;
	ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_mC83A0071EE4568CDE90BE0BF91D13C8EA5408EF9(__this, L_6, NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_mC0398A20BC1A2D7BBD1EE8116867E23163B483BE_inline(L_9, NULL);
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_m0A9D3C003795F8E0DA90FDBF170F3D0D8E3DB7C6(__this, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_m1B9125BE575F9C600F8BA0DD3D7D62EB289502D7(__this, L_13, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_1 = L_14;
		ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 98149
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_m5BB04232258DFC2564C799DE0EC484BB49720CBB_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_mC83A0071EE4568CDE90BE0BF91D13C8EA5408EF9(__this, L_12, NULL);
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_mC0398A20BC1A2D7BBD1EE8116867E23163B483BE_inline(L_15, NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_m0A9D3C003795F8E0DA90FDBF170F3D0D8E3DB7C6(__this, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_m1B9125BE575F9C600F8BA0DD3D7D62EB289502D7(__this, L_19, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_1 = L_20;
		ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
// Method Definition Index: 98150
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m02D3B360EED2C0E4D16CCF96036FDC3331A1DFD0_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_mC83A0071EE4568CDE90BE0BF91D13C8EA5408EF9(__this, L_9, NULL);
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_mC0398A20BC1A2D7BBD1EE8116867E23163B483BE_inline(L_11, NULL);
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_mB838E30BBB9A72AE55DB315E2CE8764EF176D409(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return L_15;
	}
}
// Method Definition Index: 98151
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_m925BA1D221986A3F85EC3CBE051C9781ED8DAFC7_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_mC83A0071EE4568CDE90BE0BF91D13C8EA5408EF9(__this, L_10, NULL);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_mC0398A20BC1A2D7BBD1EE8116867E23163B483BE_inline(L_12, NULL);
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_mB838E30BBB9A72AE55DB315E2CE8764EF176D409(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m1B9125BE575F9C600F8BA0DD3D7D62EB289502D7(__this, L_17, (bool)1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_1 = L_18;
		ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
// Method Definition Index: 98152
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_mA50D2D080CBF7315B1CF69EE25FE3FC6E1C2238C_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_9;
				L_9 = InterfaceFuncInvoker0< OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_8);
				V_1 = L_9;
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_mE2B8A7330144ED8A66E2FEEA8167C23A46362B71(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// Method Definition Index: 98153
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_m3770C8B06A4B7D01797C93B0A25161DB8D56C705_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mC83A0071EE4568CDE90BE0BF91D13C8EA5408EF9(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_mC0398A20BC1A2D7BBD1EE8116867E23163B483BE_inline(L_8, NULL);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_mB838E30BBB9A72AE55DB315E2CE8764EF176D409(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m1B9125BE575F9C600F8BA0DD3D7D62EB289502D7(__this, L_17, (bool)1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_2 = L_18;
		ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 98154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m922012922DB192A27E46DAED8906923F1A0057D4_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_mDF72DDBE28CCB7A7BAFF83A867A453E7B83DFE97(__this, L_0, 0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
// Method Definition Index: 98155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mDF72DDBE28CCB7A7BAFF83A867A453E7B83DFE97_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
// Method Definition Index: 98156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m4CA6AB3A238F3CEEF640FEEDB02B32F0B94904D8_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, Predicate_1_tA7DD37E14214700250384729C1F8EA9CC1647D9C* ___0_match, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_tA7DD37E14214700250384729C1F8EA9CC1647D9C* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_tA7DD37E14214700250384729C1F8EA9CC1647D9C* L_8 = ___0_match;
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_mBB3EB0BDC78B0E295B7DFE088D13E907D2F3D495_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mA3DE1CF94CFA11E7851ED5CF1113B8459A39EE62(__this, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 98157
// Method Definition Index: 98158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_EnsureCapacity_mE4B1AB773FF5A05E84FE5DE64A154F592B7C0524_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000f:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_3 = __this->____slots;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		G_B5_0 = L_4;
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_capacity;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		if (L_8)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_9 = ___0_capacity;
		int32_t L_10;
		L_10 = HashSet_1_Initialize_mE252B6520A101FCE1DEC1227C38EFB7E7FC20E4B(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return L_10;
	}

IL_0039:
	{
		int32_t L_11 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_12;
		L_12 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_11, NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		HashSet_1_SetCapacity_mEBE957DEE0B4165F0B9D0A496ED24EBC6AB7A07D(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
		int32_t L_14 = V_1;
		return L_14;
	}
}
// Method Definition Index: 98159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m7C525F2E1383AD1139218753824B0F4F061BD00A_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_5 = (SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232*)(SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_tA4E7BE6FA729CAE00F8988B0513FE507A34753DD L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_tA4E7BE6FA729CAE00F8988B0513FE507A34753DD)L_16);
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
// Method Definition Index: 98160
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mE252B6520A101FCE1DEC1227C38EFB7E7FC20E4B_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_5 = (SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232*)(SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 98161
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mC1D3FF4821CB4BC95204C370A5BE97C93486C37C_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_mEBE957DEE0B4165F0B9D0A496ED24EBC6AB7A07D(__this, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
		return;
	}
}
// Method Definition Index: 98162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mEBE957DEE0B4165F0B9D0A496ED24EBC6AB7A07D_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_1 = (SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232*)(SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_3 = __this->____slots;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
// Method Definition Index: 98163
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m7E6600254D23C774B1117F9C4AC61F9FBAEC0572_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_mE252B6520A101FCE1DEC1227C38EFB7E7FC20E4B(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0010:
	{
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m2317654C2E438BD6FCE03432097BC3A7ADEA6825(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_mC1D3FF4821CB4BC95204C370A5BE97C93486C37C(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50));
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
// Method Definition Index: 98164
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mE04D262D02D31838D8F558F006EE726C0D11C8BF_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, int32_t ___0_index, int32_t ___1_hashCode, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
// Method Definition Index: 98165
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_mB838E30BBB9A72AE55DB315E2CE8764EF176D409_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_5;
				L_5 = InterfaceFuncInvoker0< OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_4);
				V_1 = L_5;
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_mE2B8A7330144ED8A66E2FEEA8167C23A46362B71(__this, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 98166
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m0A9D3C003795F8E0DA90FDBF170F3D0D8E3DB7C6_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E V_0;
	memset((&V_0), 0, sizeof(V_0));
	OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E L_0;
		L_0 = HashSet_1_GetEnumerator_m0C9BC1E7C691A7BCF983AF708022BB1A5984124C(__this, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_m9AF0FA6AE49B33E52C24F1AE729567689BB23246((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_1;
				L_1 = Enumerator_get_Current_mF50FEE300ADF1C11F6AA21E6CA46C10A445CFCBC_inline((&V_0), NULL);
				V_1 = L_1;
				HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_2 = ___0_other;
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_mE2B8A7330144ED8A66E2FEEA8167C23A46362B71(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m099F0C871E7E6261D5DB28F215FF4F5C136A1584((&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// Method Definition Index: 98167
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_mD64C94B08969B65209343FBF352D5135CED47AA8_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0004:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_0 = __this->____slots;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___hashCode;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		V_1 = L_5;
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_6 = ___0_other;
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Contains_mE2B8A7330144ED8A66E2FEEA8167C23A46362B71(L_6, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47));
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_Remove_mA3DE1CF94CFA11E7851ED5CF1113B8459A39EE62(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_003b:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____lastIndex;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 98168
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_mFA08904864F0740363FBA450B3B3092FA92F311E_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)100))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((uintptr_t)L_5 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, 4));
		int8_t* L_7;
		if (L_6 == 0)
		{
			L_7 = NULL;
		}
		else
		{
			L_7 = (int8_t*)alloca(L_6);
			memset(L_7, 0, L_6);
		}
		int32_t L_8 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_9 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_9, (int32_t*)L_7, L_8, NULL);
		V_2 = L_9;
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		int32_t L_12 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_13 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_13, L_11, L_12, NULL);
		V_2 = L_13;
	}

IL_002f:
	{
		RuntimeObject* L_14 = ___0_other;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_14);
		V_3 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				{
					RuntimeObject* L_16 = V_3;
					if (!L_16)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_17 = V_3;
					NullCheck((RuntimeObject*)L_17);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
				}

IL_006a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0057_1;
			}

IL_0038_1:
			{
				RuntimeObject* L_18 = V_3;
				NullCheck(L_18);
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_19;
				L_19 = InterfaceFuncInvoker0< OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_18);
				V_4 = L_19;
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_20 = V_4;
				int32_t L_21;
				L_21 = HashSet_1_InternalIndexOf_m774043E345EF36D4CE51AFEE118697C8BC5E40E3(__this, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
				V_5 = L_21;
				int32_t L_22 = V_5;
				if ((((int32_t)L_22) < ((int32_t)0)))
				{
					goto IL_0057_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = V_2;
				int32_t L_24 = V_5;
				NullCheck(L_23);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_23, L_24, NULL);
			}

IL_0057_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck((RuntimeObject*)L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				if (L_26)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_006b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		V_6 = 0;
		goto IL_00ae;
	}

IL_0070:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_27 = __this->____slots;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_30 = V_2;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		bool L_32;
		L_32 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_30, L_31, NULL);
		if (L_32)
		{
			goto IL_00a8;
		}
	}
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_33 = __this->____slots;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value;
		bool L_36;
		L_36 = HashSet_1_Remove_mA3DE1CF94CFA11E7851ED5CF1113B8459A39EE62(__this, L_35, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_00a8:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00ae:
	{
		int32_t L_38 = V_6;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 98169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m774043E345EF36D4CE51AFEE118697C8BC5E40E3_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m2317654C2E438BD6FCE03432097BC3A7ADEA6825(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_1 = L_1;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4%L_6));
		int32_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_19 = V_3;
		return L_19;
	}

IL_0052:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0063:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_0074:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 98170
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_mB4174F2B4AE41A2435C5AE9C7E255B11860875AE_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E V_0;
	memset((&V_0), 0, sizeof(V_0));
	OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_0 = ___0_other;
		NullCheck(L_0);
		Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E L_1;
		L_1 = HashSet_1_GetEnumerator_m0C9BC1E7C691A7BCF983AF708022BB1A5984124C(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				Enumerator_Dispose_m9AF0FA6AE49B33E52C24F1AE729567689BB23246((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0022_1;
			}

IL_0009_1:
			{
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_2;
				L_2 = Enumerator_get_Current_mF50FEE300ADF1C11F6AA21E6CA46C10A445CFCBC_inline((&V_0), NULL);
				V_1 = L_2;
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_3 = V_1;
				bool L_4;
				L_4 = HashSet_1_Remove_mA3DE1CF94CFA11E7851ED5CF1113B8459A39EE62(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
				if (L_4)
				{
					goto IL_0022_1;
				}
			}
			{
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_5 = V_1;
				bool L_6;
				L_6 = HashSet_1_AddIfNotPresent_m7E6600254D23C774B1117F9C4AC61F9FBAEC0572(__this, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
			}

IL_0022_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m099F0C871E7E6261D5DB28F215FF4F5C136A1584((&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
				if (L_7)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
// Method Definition Index: 98171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_mBA3D136A774A6AFE3C8E0EB09A9AA50D3E57B17B_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)50))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((uintptr_t)L_5 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, 4));
		int8_t* L_7;
		if (L_6 == 0)
		{
			L_7 = NULL;
		}
		else
		{
			L_7 = (int8_t*)alloca(L_6);
			memset(L_7, 0, L_6);
		}
		int32_t L_8 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_9 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_9, (int32_t*)L_7, L_8, NULL);
		V_2 = L_9;
		int32_t L_10 = V_1;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		if ((uintptr_t)L_11 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_12 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_11, 4));
		int8_t* L_13;
		if (L_12 == 0)
		{
			L_13 = NULL;
		}
		else
		{
			L_13 = (int8_t*)alloca(L_12);
			memset(L_13, 0, L_12);
		}
		int32_t L_14 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_15 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_15, (int32_t*)L_13, L_14, NULL);
		V_3 = L_15;
		goto IL_0049;
	}

IL_002f:
	{
		int32_t L_16 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_19, L_17, L_18, NULL);
		V_2 = L_19;
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_3 = L_23;
	}

IL_0049:
	{
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_24);
		V_4 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{
				{
					RuntimeObject* L_26 = V_4;
					if (!L_26)
					{
						goto IL_00a2;
					}
				}
				{
					RuntimeObject* L_27 = V_4;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00a2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_008c_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_28 = V_4;
				NullCheck(L_28);
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_29;
				L_29 = InterfaceFuncInvoker0< OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_28);
				V_5 = L_29;
				V_6 = 0;
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_30 = V_5;
				bool L_31;
				L_31 = HashSet_1_AddOrGetLocation_m9F88E301CD384C6B5E85A70BEC0739D5E817B9AD(__this, L_30, (&V_6), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
				if (!L_31)
				{
					goto IL_0075_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_32 = V_3;
				int32_t L_33 = V_6;
				NullCheck(L_32);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_32, L_33, NULL);
				goto IL_008c_1;
			}

IL_0075_1:
			{
				int32_t L_34 = V_6;
				int32_t L_35 = V_0;
				if ((((int32_t)L_34) >= ((int32_t)L_35)))
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_3;
				int32_t L_37 = V_6;
				NullCheck(L_36);
				bool L_38;
				L_38 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_36, L_37, NULL);
				if (L_38)
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_39 = V_2;
				int32_t L_40 = V_6;
				NullCheck(L_39);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_39, L_40, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_41 = V_4;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_00a3;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		V_7 = 0;
		goto IL_00d1;
	}

IL_00a8:
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_43 = V_2;
		int32_t L_44 = V_7;
		NullCheck(L_43);
		bool L_45;
		L_45 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_43, L_44, NULL);
		if (!L_45)
		{
			goto IL_00cb;
		}
	}
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_46 = __this->____slots;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___value;
		bool L_49;
		L_49 = HashSet_1_Remove_mA3DE1CF94CFA11E7851ED5CF1113B8459A39EE62(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_00cb:
	{
		int32_t L_50 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00d1:
	{
		int32_t L_51 = V_7;
		int32_t L_52 = V_0;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_00a8;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 98172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m9F88E301CD384C6B5E85A70BEC0739D5E817B9AD_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_value, int32_t* ___1_location, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_0 = ___0_value;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m2317654C2E438BD6FCE03432097BC3A7ADEA6825(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		V_1 = ((int32_t)(L_2%L_4));
		V_2 = 0;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_5 = __this->____slots;
		V_3 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007f;
	}

IL_002a:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_10 = V_3;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_15 = V_3;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_18 = ___0_value;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_20 = ___1_location;
		int32_t L_21 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_20, (int32_t)L_21);
		return (bool)0;
	}

IL_005b:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_006c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_006c:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_007f:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00e3;
	}

IL_00aa:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00cd;
		}
	}
	{
		HashSet_1_IncreaseCapacity_mC1D3FF4821CB4BC95204C370A5BE97C93486C37C(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50));
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00cd:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00e3:
	{
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		SlotU5BU5D_t7780F1C97B9674A9DD0040B452AB28ED433AC232* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t* L_62 = ___1_location;
		int32_t L_63 = V_4;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_62, (int32_t)L_63);
		return (bool)1;
	}
}
// Method Definition Index: 98173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A HashSet_1_CheckUniqueAndUnfoundElements_m1B9125BE575F9C600F8BA0DD3D7D62EB289502D7_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_6;
				L_6 = InterfaceFuncInvoker0< OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_15,NULL));
		if ((uintptr_t)L_16 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_17 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_16, 4));
		int8_t* L_18;
		if (L_17 == 0)
		{
			L_18 = NULL;
		}
		else
		{
			L_18 = (int8_t*)alloca(L_17);
			memset(L_18, 0, L_17);
		}
		int32_t L_19 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_20 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_20, (int32_t*)L_18, L_19, NULL);
		V_2 = L_20;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_21 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_21);
		int32_t L_23 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_24 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_24, L_22, L_23, NULL);
		V_2 = L_24;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_25 = ___0_other;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_25);
		V_6 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_27 = V_6;
					if (!L_27)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_28 = V_6;
					NullCheck((RuntimeObject*)L_28);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_29 = V_6;
				NullCheck(L_29);
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_30;
				L_30 = InterfaceFuncInvoker0< OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_29);
				V_7 = L_30;
				OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_31 = V_7;
				int32_t L_32;
				L_32 = HashSet_1_InternalIndexOf_m774043E345EF36D4CE51AFEE118697C8BC5E40E3(__this, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_34 = V_2;
				int32_t L_35 = V_8;
				NullCheck(L_34);
				bool L_36;
				L_36 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_34, L_35, NULL);
				if (L_36)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_37 = V_2;
				int32_t L_38 = V_8;
				NullCheck(L_37);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_37, L_38, NULL);
				int32_t L_39 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_40 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_40, 1));
				bool L_41 = ___1_returnIfUnfound;
				if (!L_41)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_42 = V_6;
				NullCheck((RuntimeObject*)L_42);
				bool L_43;
				L_43 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
				if (L_43)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_44 = V_4;
		(&V_0)->___uniqueCount = L_44;
		int32_t L_45 = V_3;
		(&V_0)->___unfoundCount = L_45;
		ElementCount_t04BD589AD40CBDEBFC447FC6BE7091BBEA45EC2A L_46 = V_0;
		return L_46;
	}
}
// Method Definition Index: 98174
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mC83A0071EE4568CDE90BE0BF91D13C8EA5408EF9_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___0_set1, HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* ___1_set2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_mBBA94DC481A87DF04E57939CF162C1359440368E_inline(L_0, NULL);
		HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_mBBA94DC481A87DF04E57939CF162C1359440368E_inline(L_2, NULL);
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
// Method Definition Index: 98175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m2317654C2E438BD6FCE03432097BC3A7ADEA6825_gshared (HashSet_1_t6C024CB50B1139687F30DBA7EEE20D451392EB37* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 98123
// Method Definition Index: 98124
// Method Definition Index: 98125
// Method Definition Index: 98126
// Method Definition Index: 98127
// Method Definition Index: 98128
// Method Definition Index: 98129
// Method Definition Index: 98130
// Method Definition Index: 98131
// Method Definition Index: 98132
// Method Definition Index: 98133
// Method Definition Index: 98134
// Method Definition Index: 98135
// Method Definition Index: 98136
// Method Definition Index: 98137
// Method Definition Index: 98138
// Method Definition Index: 98139
// Method Definition Index: 98140
// Method Definition Index: 98141
// Method Definition Index: 98142
// Method Definition Index: 98143
// Method Definition Index: 98144
// Method Definition Index: 98145
// Method Definition Index: 98146
// Method Definition Index: 98147
// Method Definition Index: 98148
// Method Definition Index: 98149
// Method Definition Index: 98150
// Method Definition Index: 98151
// Method Definition Index: 98152
// Method Definition Index: 98153
// Method Definition Index: 98154
// Method Definition Index: 98155
// Method Definition Index: 98156
// Method Definition Index: 98157
// Method Definition Index: 98158
// Method Definition Index: 98159
// Method Definition Index: 98160
// Method Definition Index: 98161
// Method Definition Index: 98162
// Method Definition Index: 98163
// Method Definition Index: 98164
// Method Definition Index: 98165
// Method Definition Index: 98166
// Method Definition Index: 98167
// Method Definition Index: 98168
// Method Definition Index: 98169
// Method Definition Index: 98170
// Method Definition Index: 98171
// Method Definition Index: 98172
// Method Definition Index: 98173
// Method Definition Index: 98174
// Method Definition Index: 98175
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 98123
// Method Definition Index: 98124
// Method Definition Index: 98125
// Method Definition Index: 98126
// Method Definition Index: 98127
// Method Definition Index: 98128
// Method Definition Index: 98129
// Method Definition Index: 98130
// Method Definition Index: 98131
// Method Definition Index: 98132
// Method Definition Index: 98133
// Method Definition Index: 98134
// Method Definition Index: 98135
// Method Definition Index: 98136
// Method Definition Index: 98137
// Method Definition Index: 98138
// Method Definition Index: 98139
// Method Definition Index: 98140
// Method Definition Index: 98141
// Method Definition Index: 98142
// Method Definition Index: 98143
// Method Definition Index: 98144
// Method Definition Index: 98145
// Method Definition Index: 98146
// Method Definition Index: 98147
// Method Definition Index: 98148
// Method Definition Index: 98149
// Method Definition Index: 98150
// Method Definition Index: 98151
// Method Definition Index: 98152
// Method Definition Index: 98153
// Method Definition Index: 98154
// Method Definition Index: 98155
// Method Definition Index: 98156
// Method Definition Index: 98157
// Method Definition Index: 98158
// Method Definition Index: 98159
// Method Definition Index: 98160
// Method Definition Index: 98161
// Method Definition Index: 98162
// Method Definition Index: 98163
// Method Definition Index: 98164
// Method Definition Index: 98165
// Method Definition Index: 98166
// Method Definition Index: 98167
// Method Definition Index: 98168
// Method Definition Index: 98169
// Method Definition Index: 98170
// Method Definition Index: 98171
// Method Definition Index: 98172
// Method Definition Index: 98173
// Method Definition Index: 98174
// Method Definition Index: 98175
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 135944
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
// Method Definition Index: 136037
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_m4BDBABBBAA2F9B553AE1155DFBDB552E23BB2F73_inline (int32_t ___0_x, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_x;
		int32_t L_1;
		L_1 = math_lzcnt_mCD77943688E8533316BC0238E5B9344B6433E3C0_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 136044
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_inline (int32_t ___0_x, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_x;
		___0_x = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = ___0_x;
		int32_t L_2 = ___0_x;
		___0_x = ((int32_t)(L_1|((int32_t)(L_2>>1))));
		int32_t L_3 = ___0_x;
		int32_t L_4 = ___0_x;
		___0_x = ((int32_t)(L_3|((int32_t)(L_4>>2))));
		int32_t L_5 = ___0_x;
		int32_t L_6 = ___0_x;
		___0_x = ((int32_t)(L_5|((int32_t)(L_6>>4))));
		int32_t L_7 = ___0_x;
		int32_t L_8 = ___0_x;
		___0_x = ((int32_t)(L_7|((int32_t)(L_8>>8))));
		int32_t L_9 = ___0_x;
		int32_t L_10 = ___0_x;
		___0_x = ((int32_t)(L_9|((int32_t)(L_10>>((int32_t)16)))));
		int32_t L_11 = ___0_x;
		return ((int32_t)il2cpp_codegen_add(L_11, 1));
	}
}
// Method Definition Index: 135935
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
// Method Definition Index: 92366
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HashMapHelper_1_get_IsCreated_mFD6A2975F04E9C84A9886543625D8E8BCA71E398_fshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t* L_0 = __this->___Ptr;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 92364
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_CalcCapacityCeilPow2_m9E11DDA5C0E69FAD3BB1FB92BB81D4B3CFFBADC5_fshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___Count;
		int32_t L_1;
		L_1 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(1, L_0, NULL);
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(L_1, L_2, NULL);
		___0_capacity = L_3;
		int32_t L_4 = ___0_capacity;
		int32_t L_5 = __this->___Log2MinGrowth;
		int32_t L_6;
		L_6 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(L_4, ((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))), NULL);
		int32_t L_7;
		L_7 = math_ceilpow2_m6873BD56787A2362EE6780DD54A9847561B11629_inline(L_6, NULL);
		return L_7;
	}
}
// Method Definition Index: 57872
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m32D4BAEAEAB8B63CD58530C3821D9E05084CFD66_inline(NULL);
		return L_0;
	}
}
// Method Definition Index: 57868
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m9C0FADCA718C9341E229CEE17C8FE4855AC72880_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 92378
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucket_m8AFC31D9FC9DFFB709084906F98F39D88FAE72ED_inline (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_0 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&V_0), NULL);
		uint64_t L_3 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_2,NULL));
		int32_t L_4 = __this->___BucketCapacity;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_4, 1)),NULL));
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_3&L_5)),NULL));
		return L_6;
	}
}
// Method Definition Index: 57866
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mDC8A7125EE74C940B9F940440D412BA4B3A42575_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 57872
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m5DB7C8854924D1E1D01E14FB83112EBF8905533C_inline(NULL);
		return L_0;
	}
}
// Method Definition Index: 57868
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 92378
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashMapHelper_1_GetBucket_mB186F7D304E7E0D50F8F82E094C5C3C75AD55F71_inline (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* __this, int32_t* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_key;
		int32_t L_1 = (*(int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		uint64_t L_3 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_2,NULL));
		int32_t L_4 = __this->___BucketCapacity;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_4, 1)),NULL));
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_3&L_5)),NULL));
		return L_6;
	}
}
// Method Definition Index: 57866
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 98179
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_m06AE6B158E72B471CF5FC6BCF63AA55CE70CC9A4_gshared_inline (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 11774
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		int32_t L_8 = V_1;
		Il2CppSharedGenericObject* L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppSharedGenericObject*)L_9);
		return;
	}

IL_0034:
	{
		Il2CppSharedGenericObject* L_10 = ___0_item;
		List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
// Method Definition Index: 11782
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 11763
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11999
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* EqualityComparer_1_get_Default_mB5C35C04AE32653F7C5AA18004C7C11C533CB9CF_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* V_0 = NULL;
	{
		EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* L_0 = ((EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mA8D8B4B11F146BECFDB9E40DD2D2BD7C835D93A8(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t6A774D7338D680B7611385D392E4C802DE6F5A75* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 98136
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA764DCA3CB14CB2CBDF742A163492FF4DA515B63_fshared_inline (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
// Method Definition Index: 924
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mE11ECE6AE323498DACB411E0144082E560B4E9BF_gshared_inline (Predicate_1_tC37CC55BD5786907DB2D2694565582B139C103D4* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 98179
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C Enumerator_get_Current_m3D344377F66D8F581F50C0E4266312331A3B18E9_gshared_inline (Enumerator_t8CBA061220E9E8305B179E32AC6E254EDD645DF1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 98157
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m3025B6666A254AEDE933EDE04AD66D456C52AD00_fshared_inline (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
// Method Definition Index: 11999
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* EqualityComparer_1_get_Default_mC5AA5E9B22FFF977E3B27ECA51A2C51421F309AE_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* V_0 = NULL;
	{
		EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* L_0 = ((EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mA2149646CB8D5D9EC8FFF21C2F3446B36761E61B(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t2BEA5605FB7279A9650338DDDE18F0DC3786C5B3* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 924
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mBB3EB0BDC78B0E295B7DFE088D13E907D2F3D495_gshared_inline (Predicate_1_tA7DD37E14214700250384729C1F8EA9CC1647D9C* __this, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 98179
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 Enumerator_get_Current_mF50FEE300ADF1C11F6AA21E6CA46C10A445CFCBC_gshared_inline (Enumerator_tF69F5DE53DB11276C33141FCBD4EA6720966160E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 136038
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_mCD77943688E8533316BC0238E5B9344B6433E3C0_inline (uint32_t ___0_x, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	LongDoubleUnion_t17011746129284B81F310F56E20D549A6F6710D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint32_t L_0 = ___0_x;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return ((int32_t)32);
	}

IL_0006:
	{
		(&V_0)->___doubleValue = (0.0);
		uint32_t L_1 = ___0_x;
		uint64_t L_2 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_1,NULL));
		(&V_0)->___longValue = ((int64_t)il2cpp_codegen_add(((int64_t)4841369599423283200LL), (int64_t)L_2));
		double* L_3 = (double*)(&(&V_0)->___doubleValue);
		double* L_4 = L_3;
		double L_5 = il2cpp_codegen_ldind<double, double>(L_4);
		il2cpp_codegen_stind<double>((double*)L_4, (double)((double)il2cpp_codegen_subtract(L_5, (4503599627370496.0))));
		LongDoubleUnion_t17011746129284B81F310F56E20D549A6F6710D0 L_6 = V_0;
		int64_t L_7 = L_6.___longValue;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(L_7>>((int32_t)52))),NULL));
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)1054), L_8));
	}
}
// Method Definition Index: 138614
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m32D4BAEAEAB8B63CD58530C3821D9E05084CFD66_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t273EAC6E531567E9A44C7A35B5D7DABDD659FC23_m2FCB00D512044D1C5DB62954E2684D67CB44E6C3_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m4AEA1F2D0EBC5D0A1C2819C02415E77F093D96E2_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// Method Definition Index: 138610
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m9C0FADCA718C9341E229CEE17C8FE4855AC72880_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___2_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 138608
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtilityInternal_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mDC8A7125EE74C940B9F940440D412BA4B3A42575_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 138614
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m5DB7C8854924D1E1D01E14FB83112EBF8905533C_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t245EB4127E14738DE7A1928AA9BD796398AB3E50_m7E4E66C593913FCDFC8C03C06EFC4FFDC9A96BCF_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m0E37BE54FFDD9D93D5ADCA4464466720A0534F51_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// Method Definition Index: 138610
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 138608
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 138613
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t273EAC6E531567E9A44C7A35B5D7DABDD659FC23_m2FCB00D512044D1C5DB62954E2684D67CB44E6C3_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t273EAC6E531567E9A44C7A35B5D7DABDD659FC23);
		return (int32_t)L_0;
	}
}
// Method Definition Index: 138613
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m4AEA1F2D0EBC5D0A1C2819C02415E77F093D96E2_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint32_t L_0 = sizeof(HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4);
		return (int32_t)L_0;
	}
}
// Method Definition Index: 138613
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t245EB4127E14738DE7A1928AA9BD796398AB3E50_m7E4E66C593913FCDFC8C03C06EFC4FFDC9A96BCF_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t245EB4127E14738DE7A1928AA9BD796398AB3E50);
		return (int32_t)L_0;
	}
}
// Method Definition Index: 138613
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m0E37BE54FFDD9D93D5ADCA4464466720A0534F51_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint32_t L_0 = sizeof(HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B);
		return (int32_t)L_0;
	}
}
