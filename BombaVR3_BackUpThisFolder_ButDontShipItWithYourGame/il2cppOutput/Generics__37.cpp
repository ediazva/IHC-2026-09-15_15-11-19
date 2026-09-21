#include "pch-cpp.hpp"





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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2, T3*, T4, T5, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4, T5 p5, T6* p6)
	{
		R ret;
		void* params[6] = { p1, &p2, p3, &p4, &p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CGetEnumeratorU3Ed__35_t7819A3D3D4C56C8F8292C680A125AB532AE363E4;
struct U3CGetEnumeratorU3Ed__35_tE0AE463CC0DAC69CFE2C2EF588ED4B5D526E48F1;
struct U3CGetEnumeratorU3Ed__35_t8A9F5879A8C4CA197FA6E180F095D6864EEB7D79;
struct ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9;
struct ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6;
struct ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB;
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct DictionaryEnumerator_t5A953A6FFD4345BBC36BC3F2227965951306073A;
struct DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B;
struct DictionaryEnumerator_t91255A4AF0637E7BBED70962CD0EE7B0F045CBA1;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581;
struct Func_2_t6D8CF90F987D57D84F64DDBE39D18F9BDC2E39AF;
struct Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87;
struct Func_2_t405860E4F03319562A562B85A5F839EF7CC12AC1;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct Func_3_t9E3CBC04411CC1249EB8AD7578E5997AA9EDE6BC;
struct Func_3_t8430F1D05DF2620CBCEC84F9563E283593C0C7E8;
struct Func_3_tB6ED5593F7B9989207D4E0B22F1A34196642CCEB;
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4;
struct ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0;
struct ICollection_1_t58D5B5A564BF08CD3C8EE106100AC0D7B8C4508B;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct ICollection_1_t7E71F1CA7971B264996E675DD23421D9B7165B6A;
struct IEnumerable_1_tD828EA34112499EE1592ECF72C23A1AC5AECE1DE;
struct IEnumerable_1_tF1728A83D51A4E2E13A310C284DEEF7EC59293B3;
struct IEnumerable_1_t218D1269913B122636892AB7FA6D4E2BA52FF5A6;
struct IEnumerable_1_tC9B78BD09596EB85FA82FA63B091B4F61900F530;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_t9C73E2DA2A24734B7BEE3997930B156A82172C56;
struct IEnumerator_1_t3321D0481093F5F37A06F0DE0F52842ED7810BDD;
struct IEnumerator_1_tDFDA733A40523681099DF822E97AA4397205F8E5;
struct IEnumerator_1_tEF0EFA19A58935C3BA9CEEC8D9481CD4611EE41E;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct IEqualityComparer_1_tEE4769585DD74875D14338CDA5497B01DE0058A4;
struct IEqualityComparer_1_t95351C62AE7A3DC1F5A634C37AF7444A078B5B99;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t9CDB2E77DE70F06FC5ED90C78DB6B9C356ECCEA9;
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
struct IList_1_t7DC7A22F42EEFA1E8D796516A9F22282DF4EB5FA;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct IList_1_t4D7D7DAB02DB631C876CF3E68462F0FD9F9A8985;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255;
struct Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86;
struct Node_t56E8135FC81EA186451808FF44BDD62E236A1339;
struct Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A;
struct Node_tC5111E77A2002D0AD173457666915D4D0BD59865;
struct ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952;
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263;
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8;
struct ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8;
struct Tables_t18E9E31DEB2BAEA3EADFC2D8A7BE6ACFB49A9565;
struct Tables_t6CFBFAAC5B91B3B5875BD4EA302083B7FEEA20E3;
struct Tables_t225149423E4AFACDB3618618F6085B88A3927091;
struct Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC;
struct Tables_t0E315C824AE282366793BBC56D608560C6DCF865;
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95;
struct KeyValuePair_2U5BU5D_t26D5D90E101D6BEDE717BFB1DDAF311DBED6FF19;
struct KeyValuePair_2U5BU5D_tD080D12D04B9481D0B881FDD8421AD6E66A9E7E6;
struct KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218;
struct NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02;
struct NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630;
struct NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformHelper_t5E497382616B62F0B318E53D098F90E22AB35722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral020F27A067D9C2A1BC9628BCE378DE63A6F2B5BE;
IL2CPP_EXTERN_C String_t* _stringLiteral0524F47F7868CF019B9EC023CC6808DAB5BE2221;
IL2CPP_EXTERN_C String_t* _stringLiteral0FBDA15AB716B63A3A92B84F7B26A1A374DA894D;
IL2CPP_EXTERN_C String_t* _stringLiteral20D029102A70CD96274496928ED59E8B9C014BBA;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral4CC02BED909F9630E59013E4804C6C269FF8370A;
IL2CPP_EXTERN_C String_t* _stringLiteral561DA6E332E7EF45E52D96B07EC786D85C2955BE;
IL2CPP_EXTERN_C String_t* _stringLiteral672E993A9AD93822B712B165C6987759C6DED80B;
IL2CPP_EXTERN_C String_t* _stringLiteral68445D6E030501243B18C07E57CF1AE5C1C5AAF2;
IL2CPP_EXTERN_C String_t* _stringLiteralA05D9DA01CB9AD0AA6BE899FE1E39018B72923DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBF10EFAF6473141D13A05C1B850DEF40E641A918;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC38D57307791EED2AD28D35927B9E90B23E6281D;
IL2CPP_EXTERN_C String_t* _stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141;
IL2CPP_EXTERN_C String_t* _stringLiteralD0D86565E49BD212E7AC64BABD33BE3668A4C45B;
IL2CPP_EXTERN_C String_t* _stringLiteralE59C400B29D20EE4CB5A86E1F46ED782D7872D43;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralEC0CC039753090F0DDDF2727802FC6E1570B317B;
IL2CPP_EXTERN_C String_t* _stringLiteralEF68BB0CB45867DA95163C2C6A4B0677DCE80DCF;
IL2CPP_EXTERN_C String_t* _stringLiteralFD8CE285C77CDFBCDCBA338A795AFF019E6C3B66;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218;
struct NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02;
struct NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630;
struct NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConcurrentDictionary_2_t06D07758F1CE4ABB05C5F73DA262E967FAC597CA  : public RuntimeObject
{
	Tables_t18E9E31DEB2BAEA3EADFC2D8A7BE6ACFB49A9565* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t26D5D90E101D6BEDE717BFB1DDAF311DBED6FF19* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t50D5C114567B5FC9E98F7B0CAD823A0072ED8933  : public RuntimeObject
{
	Tables_t6CFBFAAC5B91B3B5875BD4EA302083B7FEEA20E3* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_tD080D12D04B9481D0B881FDD8421AD6E66A9E7E6* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9  : public RuntimeObject
{
	Tables_t225149423E4AFACDB3618618F6085B88A3927091* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6  : public RuntimeObject
{
	Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB  : public RuntimeObject
{
	Tables_t0E315C824AE282366793BBC56D608560C6DCF865* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812  : public RuntimeObject
{
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct DictionaryEnumerator_t5A953A6FFD4345BBC36BC3F2227965951306073A  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryEnumerator_t91255A4AF0637E7BBED70962CD0EE7B0F045CBA1  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct EmptyArray_1_t46547AC9A07D2F85B8BEE14E5641F44E9FB7B2CF  : public RuntimeObject
{
};
struct EmptyArray_1_t2F24CF6B13CDDAA8B0F0764FD24AFE6483C69336  : public RuntimeObject
{
};
struct EmptyArray_1_t0091A58E035B640DE4638A1A0DB2A83CE0A644BC  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581  : public RuntimeObject
{
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
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
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255  : public RuntimeObject
{
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86  : public RuntimeObject
{
	Il2CppSharedGenericObject* ____key;
	int32_t ____value;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* ____next;
	int32_t ____hashcode;
};
struct Node_t56E8135FC81EA186451808FF44BDD62E236A1339  : public RuntimeObject
{
	Il2CppSharedGenericObject* ____key;
	Il2CppSharedGenericObject* ____value;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* ____next;
	int32_t ____hashcode;
};
struct Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A  : public RuntimeObject
{
	Il2CppSharedGenericObject* ____key;
	int32_t ____value;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* ____next;
	int32_t ____hashcode;
};
struct Node_tC5111E77A2002D0AD173457666915D4D0BD59865 : public RuntimeObject {};
struct ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct Tables_t225149423E4AFACDB3618618F6085B88A3927091  : public RuntimeObject
{
	NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* ____buckets;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____locks;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____countPerLock;
};
struct Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC  : public RuntimeObject
{
	NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* ____buckets;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____locks;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____countPerLock;
};
struct Tables_t0E315C824AE282366793BBC56D608560C6DCF865  : public RuntimeObject
{
	NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* ____buckets;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____locks;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____countPerLock;
};
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95  : public RuntimeObject
{
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* ____buckets;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____locks;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____countPerLock;
};
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
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
struct KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 
{
	Il2CppSharedGenericObject* ___key;
	int32_t ___value;
};
struct KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 
{
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
struct KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 
{
	Il2CppSharedGenericObject* ___key;
	int32_t ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
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
struct U3CGetEnumeratorU3Ed__35_t7819A3D3D4C56C8F8292C680A125AB532AE363E4  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 ___U3CU3E2__current;
	ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* ___U3CU3E4__this;
	NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* ___U3CbucketsU3E5__2;
	int32_t ___U3CiU3E5__3;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* ___U3CcurrentU3E5__4;
};
struct U3CGetEnumeratorU3Ed__35_tE0AE463CC0DAC69CFE2C2EF588ED4B5D526E48F1  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___U3CU3E2__current;
	ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* ___U3CU3E4__this;
	NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* ___U3CbucketsU3E5__2;
	int32_t ___U3CiU3E5__3;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* ___U3CcurrentU3E5__4;
};
struct U3CGetEnumeratorU3Ed__35_t8A9F5879A8C4CA197FA6E180F095D6864EEB7D79  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 ___U3CU3E2__current;
	ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* ___U3CU3E4__this;
	NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* ___U3CbucketsU3E5__2;
	int32_t ___U3CiU3E5__3;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* ___U3CcurrentU3E5__4;
};
struct U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E : public RuntimeObject {};
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
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
struct Func_2_t6D8CF90F987D57D84F64DDBE39D18F9BDC2E39AF  : public MulticastDelegate_t
{
};
struct Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87  : public MulticastDelegate_t
{
};
struct Func_2_t405860E4F03319562A562B85A5F839EF7CC12AC1  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Func_3_t9E3CBC04411CC1249EB8AD7578E5997AA9EDE6BC  : public MulticastDelegate_t
{
};
struct Func_3_t8430F1D05DF2620CBCEC84F9563E283593C0C7E8  : public MulticastDelegate_t
{
};
struct Func_3_tB6ED5593F7B9989207D4E0B22F1A34196642CCEB  : public MulticastDelegate_t
{
};
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct ConcurrentDictionary_2_t06D07758F1CE4ABB05C5F73DA262E967FAC597CA_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t50D5C114567B5FC9E98F7B0CAD823A0072ED8933_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct EmptyArray_1_t46547AC9A07D2F85B8BEE14E5641F44E9FB7B2CF_StaticFields
{
	KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* ___Value;
};
struct EmptyArray_1_t2F24CF6B13CDDAA8B0F0764FD24AFE6483C69336_StaticFields
{
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___Value;
};
struct EmptyArray_1_t0091A58E035B640DE4638A1A0DB2A83CE0A644BC_StaticFields
{
	KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* ___Value;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields
{
	EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* ___defaultComparer;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255_StaticFields
{
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields
{
	CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* ___Log;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* m_Items[1];

	inline Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
struct KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 m_Items[1];

	inline KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
struct NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_t56E8135FC81EA186451808FF44BDD62E236A1339* m_Items[1];

	inline Node_t56E8135FC81EA186451808FF44BDD62E236A1339* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_t56E8135FC81EA186451808FF44BDD62E236A1339** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_t56E8135FC81EA186451808FF44BDD62E236A1339* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_t56E8135FC81EA186451808FF44BDD62E236A1339* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_t56E8135FC81EA186451808FF44BDD62E236A1339** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_t56E8135FC81EA186451808FF44BDD62E236A1339* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 m_Items[1];

	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* m_Items[1];

	inline Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 m_Items[1];

	inline KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_tC5111E77A2002D0AD173457666915D4D0BD59865* m_Items[1];

	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
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
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297  : public RuntimeArray
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_get_DefaultConcurrencyLevel_m81D29524F689635A16DBE57641F159E3CF7218A6_fshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_mACE01DD990849C008D73C904B0E8707EEDE476FC_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, int32_t ___0_concurrencyLevel, int32_t ___1_capacity, bool ___2_growLockArray, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mAB9D8A9DFA29977A417398BB6B906B46654CBA55_gshared_inline (KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_mC4FA6226F7C3B5DA7FF94EB9C869DA45A2802D71_gshared_inline (KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAddInternal_m47028041F36DC714A56315415DA923B068BDDB75_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t ___2_value, bool ___3_updateIfExists, bool ___4_acquireLock, int32_t* ___5_resultingValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables__ctor_mD4BF7BCB80FBDADBA6F7A6E557E9EDA6F065C2F3_fshared (Tables_tD895B223685217918C345ED5D52074F7E29E5F95* __this, NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* ___0_buckets, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_locks, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_countPerLock, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_m7E019A9EE0362D26E1B6D4A4D199734E7A847F6A_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemoveInternal_mB7B4E980DB8A1591D4D5E85EE99FFDCF4FB7D019_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, bool ___2_matchValue, int32_t ___3_oldValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_GetBucketAndLockNo_mE101532D7BE14E9975B37B3B265789858E3FDEBA_fshared (int32_t ___0_hashcode, int32_t* ___1_bucketNo, int32_t* ___2_lockNo, int32_t ___3_bucketCount, int32_t ___4_lockCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValueInternal_m2FE098DA3563E31963BE405403A70C4577A3F08E_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t* ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_GetBucket_m03138F665728DE0C8A4DA4A1720688414FC3C19B_fshared (int32_t ___0_hashcode, int32_t ___1_bucketCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m86BACE527640249F3448CB2E10950EEBB1360204_gshared (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, int32_t ___2_hashcode, Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* ___3_next, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ReleaseLocks_mDD3A19565988306ADEA547D93369C5FADCAF3F5B_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, int32_t ___0_fromInclusive, int32_t ___1_toExclusive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_AcquireAllLocks_m22A145D24A0EB3AEE44E7074E7BC169B4B33F507_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, int32_t* ___0_locksAcquired, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToPairs_m79E8AA31B59CDEDFD9B95FECBC6DA2471DBC20CB_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* Array_Empty_TisKeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8_m6D57C806A2072E9083C494D7C2C58F0A723FEBB1_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m4F2127097695B4E8FF41AB225ED0572AA9EB37FE_gshared (KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35__ctor_m68958F8F2ADF6B72DA5E125CC8D0798921F76264_gshared (U3CGetEnumeratorU3Ed__35_t7819A3D3D4C56C8F8292C680A125AB532AE363E4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_GrowTable_mB0B16F1082A763B4FB5E5576DACF98801B8E3C1C_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Tables_t225149423E4AFACDB3618618F6085B88A3927091* ___0_tables, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNotFoundException_mD768AD239AF359963E961066B55332C248E9302C_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_GetCountInternal_mABB50180C1CBF2FBBBAB8667ED74FCC74FFB3F1C_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mC5D09FDDF69CB207846BD8D87EEF798562622F8A_gshared_inline (Func_2_t6D8CF90F987D57D84F64DDBE39D18F9BDC2E39AF* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m8767CBB7E9036B260BE8696BF49C389180299A0C_gshared_inline (Func_3_t9E3CBC04411CC1249EB8AD7578E5997AA9EDE6BC* __this, Il2CppSharedGenericObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryUpdateInternal_m997C4BC8B4CD0BD04F4072BDAF7D59E865A5042E_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t ___2_newValue, int32_t ___3_comparisonValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_m89DC7B3FDFFCAB4A93BC81928B86813DF75902CB_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m026A3AAE9C0EBF6AE4E32608BF7A384B8BFC2F80_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* ConcurrentDictionary_2_GetKeys_m209CDE9C3E51619CCA18E4396836D4593F201BBE_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* ConcurrentDictionary_2_GetValues_m9F4AD1555C1FFF1E9D1429E71027D431D19C1877_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m598084F53F14AFAEF7973F59CF8DE8F193034A4B_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_ContainsKey_m3AA301DB0582E411B1CB4B3F0F7B600745FDDCC4_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_m48F413E9933FD4C05833ED05C7E6BD35D8C0A5A2_gshared (DictionaryEnumerator_t5A953A6FFD4345BBC36BC3F2227965951306073A* __this, ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_m9AD546977A9A4B86ADDF2D24991A64BF95D36B10_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToEntries_mEAF16B850007C91D63F21E452AB99CFA7FC9FA9C_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToObjects_m4A46CF7F18979F96103107717172D08C27B9C706_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_AcquireLocks_mCDAED510DBF85E983BCB08E9A214020EDE61D999_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, int32_t ___0_fromInclusive, int32_t ___1_toExclusive, int32_t* ___2_locksAcquired, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m903CF4492D6E4F6EE0D865BB7AA36A0DDB888355_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* ConcurrentDictionary_2_ToArray_m99D847F36029B9C33184D41474BDBB2F180D7FB5_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_InitializeFromCollection_m75237D10A402939DAE7CE946742351FAFC1B6D1B_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_IsValueWriteAtomic_m51FA13B470F75167DC4F2BFDEB03DCA4ED2E3690_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m30CD397A2CCA91BD4FB6FA95D23859849A4780A1_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, int32_t ___0_concurrencyLevel, int32_t ___1_capacity, bool ___2_growLockArray, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAddInternal_m90C1E37EDE7223697AE4DF6F298CF69E939B6414_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, Il2CppSharedGenericObject* ___2_value, bool ___3_updateIfExists, bool ___4_acquireLock, Il2CppSharedGenericObject** ___5_resultingValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_mCA8FA697A225F5EFA39B9E2D9455E1900A8553FC_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemoveInternal_m0472AE52B84E75ACDFA76B5FE985A0783A710375_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, bool ___2_matchValue, Il2CppSharedGenericObject* ___3_oldValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValueInternal_m010BFC355AF22021EACF8DD662BE40DA00535109_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, Il2CppSharedGenericObject** ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mE53CBD5779AF8B8571EE6CB5297EED0A2A4DA062_gshared (Node_t56E8135FC81EA186451808FF44BDD62E236A1339* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, int32_t ___2_hashcode, Node_t56E8135FC81EA186451808FF44BDD62E236A1339* ___3_next, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_AcquireAllLocks_m6D4FB77BA4870F2509D869DCD8EDA711F775BD84_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, int32_t* ___0_locksAcquired, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToPairs_m8F7657E03133E309126273D0584F8D5326697897_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB2C82D7A225B9949D85AD00F49A2506C80C3EFED_gshared (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35__ctor_m0051D498A386D8AF7299C71ED4D14283E10FE050_gshared (U3CGetEnumeratorU3Ed__35_tE0AE463CC0DAC69CFE2C2EF588ED4B5D526E48F1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_GrowTable_m73470FB0D0D0AF3204B5B03FECC9C1B51F4E6D39_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* ___0_tables, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNotFoundException_mFF2C0E4DC32A39250479D9B77B8D5516DD0E4245_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_gshared_inline (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_3_Invoke_mB52DD65540C4107AF891E48398CF46B8590860F1_gshared_inline (Func_3_t8430F1D05DF2620CBCEC84F9563E283593C0C7E8* __this, Il2CppSharedGenericObject* ___0_arg1, Il2CppSharedGenericObject* ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryUpdateInternal_mA5103068ABCAFF05AE22019CBBFDD3D479D0DDEF_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, Il2CppSharedGenericObject* ___2_newValue, Il2CppSharedGenericObject* ___3_comparisonValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_m64FDDCF0D5401FEB351A5E92F9C44E4D655686A9_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m11062CCF8497AE57FA505093F6E9069198C835DF_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* ConcurrentDictionary_2_GetKeys_mB7179FAA255498E6BE2BB68DB8A52E75F3FBC06D_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* ConcurrentDictionary_2_GetValues_m7C13D32EA69766A289F6BB7B4D8046024347A7B1_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m5E2C0EBDF59D498AB4D40133331641C23FB4B366_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_ContainsKey_m5CA3E686F59D793C294677EEDB10619CC16115E9_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mAD88826314DD95640977D3B87E43E0FA23090A6D_gshared (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_m88409C18FD4A6A3BD9E9A90711D94E51019E5688_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToEntries_m4C51E924D6F0741B4C40132D020E813E54698BA5_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToObjects_m408C2C1E86CE15A810BEE1DA4F5AB40D99FCF3C1_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ConcurrentDictionary_2_ToArray_mB7BEF7AB0F93F41DA7626273762D41F08FDBEE07_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_InitializeFromCollection_m300BC020F3C4DC3DE6AA37038EC6BDDA424BECE7_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_IsValueWriteAtomic_m74689C9F03BF8A0F241A531E8FEADC3F638A093E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_mD753670974F8B5B5C5868778B3C24E37A44B265B_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, int32_t ___0_concurrencyLevel, int32_t ___1_capacity, bool ___2_growLockArray, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m59E82E5A467D2D93DBAA6AA381F5CC5286E533DD_gshared_inline (KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m9EBB8AC826C6439F35AE628B8FBD3FC1A322E493_gshared_inline (KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAddInternal_m557FDD32269B23DC3F74ECF39AE4E46FD1089712_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t ___2_value, bool ___3_updateIfExists, bool ___4_acquireLock, int32_t* ___5_resultingValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_m398EFFB0EBF6050AB20148A6F2CD9425BC9EC28B_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemoveInternal_m46B776D0225E7BCF4A36CF6477F87BA1FB2740D0_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, bool ___2_matchValue, int32_t ___3_oldValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValueInternal_m9DDA685C0FF1419016622559F267A755DB7776E0_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t* ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m6F8EFC954ED470D3283D08AEA5C1B7A520B0EF24_gshared (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, int32_t ___2_hashcode, Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* ___3_next, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_AcquireAllLocks_m43AEB8C0E662224BEDDE807935CE4C2FDD4317E5_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, int32_t* ___0_locksAcquired, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToPairs_mF5CD68DD700C0FD7EC6BB3EB323EE04E8A218F31_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* Array_Empty_TisKeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120_m3DAC5947C7DA5A5E357F497BE6BA770642F8A232_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m723623F2CA55A4B8CA68E3D59E291D9ECEC3E315_gshared (KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35__ctor_m3E2212234B0ECF46D835DB37EF2FB598E3CAA3B6_gshared (U3CGetEnumeratorU3Ed__35_t8A9F5879A8C4CA197FA6E180F095D6864EEB7D79* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_GrowTable_m9A6CDC9CB93A84012E138E31E28D87A821702D8F_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Tables_t0E315C824AE282366793BBC56D608560C6DCF865* ___0_tables, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNotFoundException_mC74DD7418A20A6071750C4DF7BE33E40F8B3D2AB_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mCA1B40382E8B6D0BCC94FA8B0E4EA4C64BC8993C_gshared_inline (Func_2_t405860E4F03319562A562B85A5F839EF7CC12AC1* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m79254A650EC859A136A5FCBF2A28DFCD204FDBF2_gshared_inline (Func_3_tB6ED5593F7B9989207D4E0B22F1A34196642CCEB* __this, Il2CppSharedGenericObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryUpdateInternal_m3578B43E95E53FB205D48F82042D19E16D9075C8_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t ___2_newValue, int32_t ___3_comparisonValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_m7C2A0E663CCEBCADE29087D2BCE8C724C07D8EAA_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_mE436A198E4A1C975E7F66AFC03C72D488CBDB662_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* ConcurrentDictionary_2_GetKeys_mF47BA32B5ED3E8AF86BD7A4308AE746BDC9EA2B8_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* ConcurrentDictionary_2_GetValues_mA1C0602D83C3DA4CB226682C8D47632063AFEB15_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m902D4621DB439D17D464419FE299710F9F01E9C2_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_ContainsKey_m730195EAA4F2F9BF95445A4FB9762B904149F22B_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_m863B5871EF80571B1CC999AC0DDDF801F90F864B_gshared (DictionaryEnumerator_t91255A4AF0637E7BBED70962CD0EE7B0F045CBA1* __this, ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_mA8C485A2FF36CAC712EB3126BDDFC267B77C929D_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToEntries_m87ADCB4F712024D91535AE14392A26BA8E25A4F2_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToObjects_m088B2EFE2850EF373D64801B014353519F8CB39A_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mBEC4BB23DEF62EFA5D66833D82CEB6FABDD96E04_gshared (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m24BA4DEDED426A5B0C6A4AB3E523C876B0B918A6_gshared_inline (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* ConcurrentDictionary_2_ToArray_m5EAE034E0E7F06C122D5F31285549651E9345B81_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_InitializeFromCollection_m27DE2C2479865D942A87800621ABA47583AB50B1_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_IsValueWriteAtomic_m16A364B69C9A8EF222E525CBA92585A8D69D0B09_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisIl2CppSharedGenericObject_m5283DEB09B854082CE5EFC9E4C1B19F4D8E1A5CA_gshared (Il2CppSharedGenericObject** ___0_location, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Volatile_Read_TisIl2CppSharedGenericObject_m80AA45DB17514248EE3F1C51892F22E546B63BC9_gshared (Il2CppSharedGenericObject** ___0_location, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m3B53F17525936469654379AC0F1F0B19EC3DCCE5_gshared (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, int32_t ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
inline int32_t ConcurrentDictionary_2_get_DefaultConcurrencyLevel_m601340640E928F67B1C84E348B081C4B149A1623 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))ConcurrentDictionary_2_get_DefaultConcurrencyLevel_m81D29524F689635A16DBE57641F159E3CF7218A6_fshared)(method);
}
inline void ConcurrentDictionary_2__ctor_mACE01DD990849C008D73C904B0E8707EEDE476FC (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, int32_t ___0_concurrencyLevel, int32_t ___1_capacity, bool ___2_growLockArray, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, int32_t, int32_t, bool, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_mACE01DD990849C008D73C904B0E8707EEDE476FC_gshared)(__this, ___0_concurrencyLevel, ___1_capacity, ___2_growLockArray, ___3_comparer, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mAB9D8A9DFA29977A417398BB6B906B46654CBA55_inline (KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8*, const RuntimeMethod*))KeyValuePair_2_get_Key_mAB9D8A9DFA29977A417398BB6B906B46654CBA55_gshared_inline)(__this, method);
}
inline void ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B_gshared)(method);
}
inline int32_t KeyValuePair_2_get_Value_mC4FA6226F7C3B5DA7FF94EB9C869DA45A2802D71_inline (KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC4FA6226F7C3B5DA7FF94EB9C869DA45A2802D71_gshared_inline)(__this, method);
}
inline bool ConcurrentDictionary_2_TryAddInternal_m47028041F36DC714A56315415DA923B068BDDB75 (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t ___2_value, bool ___3_updateIfExists, bool ___4_acquireLock, int32_t* ___5_resultingValue, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, Il2CppSharedGenericObject*, int32_t, int32_t, bool, bool, int32_t*, const RuntimeMethod*))ConcurrentDictionary_2_TryAddInternal_m47028041F36DC714A56315415DA923B068BDDB75_gshared)(__this, ___0_key, ___1_hashcode, ___2_value, ___3_updateIfExists, ___4_acquireLock, ___5_resultingValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
inline void Tables__ctor_mAE650FF1AB0EAA46497A1113A52723F35471BD5D (Tables_t225149423E4AFACDB3618618F6085B88A3927091* __this, NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* ___0_buckets, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_locks, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_countPerLock, const RuntimeMethod* method)
{
	((  void (*) (Tables_t225149423E4AFACDB3618618F6085B88A3927091*, NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))Tables__ctor_mD4BF7BCB80FBDADBA6F7A6E557E9EDA6F065C2F3_fshared)(__this, ___0_buckets, ___1_locks, ___2_countPerLock, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline bool ConcurrentDictionary_2_TryGetValue_m7E019A9EE0362D26E1B6D4A4D199734E7A847F6A (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, Il2CppSharedGenericObject*, int32_t*, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_m7E019A9EE0362D26E1B6D4A4D199734E7A847F6A_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool ConcurrentDictionary_2_TryRemoveInternal_mB7B4E980DB8A1591D4D5E85EE99FFDCF4FB7D019 (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, bool ___2_matchValue, int32_t ___3_oldValue, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, Il2CppSharedGenericObject*, int32_t*, bool, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_TryRemoveInternal_mB7B4E980DB8A1591D4D5E85EE99FFDCF4FB7D019_gshared)(__this, ___0_key, ___1_value, ___2_matchValue, ___3_oldValue, method);
}
inline void ConcurrentDictionary_2_GetBucketAndLockNo_mFAD2F5466CE28CB22DFAF20B10CBE759593CCF95 (int32_t ___0_hashcode, int32_t* ___1_bucketNo, int32_t* ___2_lockNo, int32_t ___3_bucketCount, int32_t ___4_lockCount, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t*, int32_t*, int32_t, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_GetBucketAndLockNo_mE101532D7BE14E9975B37B3B265789858E3FDEBA_fshared)(___0_hashcode, ___1_bucketNo, ___2_lockNo, ___3_bucketCount, ___4_lockCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) ;
inline bool ConcurrentDictionary_2_TryGetValueInternal_m2FE098DA3563E31963BE405403A70C4577A3F08E (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t* ___2_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, Il2CppSharedGenericObject*, int32_t, int32_t*, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValueInternal_m2FE098DA3563E31963BE405403A70C4577A3F08E_gshared)(__this, ___0_key, ___1_hashcode, ___2_value, method);
}
inline int32_t ConcurrentDictionary_2_GetBucket_m83AA2E5D6E0C9D982B9EE5200E01E99B7581EA99 (int32_t ___0_hashcode, int32_t ___1_bucketCount, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_GetBucket_m03138F665728DE0C8A4DA4A1720688414FC3C19B_fshared)(___0_hashcode, ___1_bucketCount, method);
}
inline void Node__ctor_m86BACE527640249F3448CB2E10950EEBB1360204 (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, int32_t ___2_hashcode, Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* ___3_next, const RuntimeMethod* method)
{
	((  void (*) (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86*, Il2CppSharedGenericObject*, int32_t, int32_t, Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86*, const RuntimeMethod*))Node__ctor_m86BACE527640249F3448CB2E10950EEBB1360204_gshared)(__this, ___0_key, ___1_value, ___2_hashcode, ___3_next, method);
}
inline void ConcurrentDictionary_2_ReleaseLocks_mC7C705ADFA09682AC57D5C5DBCD89664A0D1D790 (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, int32_t ___0_fromInclusive, int32_t ___1_toExclusive, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, int32_t, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_ReleaseLocks_mDD3A19565988306ADEA547D93369C5FADCAF3F5B_fshared)(__this, ___0_fromInclusive, ___1_toExclusive, method);
}
inline void ConcurrentDictionary_2_AcquireAllLocks_m22A145D24A0EB3AEE44E7074E7BC169B4B33F507 (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, int32_t* ___0_locksAcquired, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, int32_t*, const RuntimeMethod*))ConcurrentDictionary_2_AcquireAllLocks_m22A145D24A0EB3AEE44E7074E7BC169B4B33F507_gshared)(__this, ___0_locksAcquired, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void ConcurrentDictionary_2_CopyToPairs_m79E8AA31B59CDEDFD9B95FECBC6DA2471DBC20CB (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019*, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_CopyToPairs_m79E8AA31B59CDEDFD9B95FECBC6DA2471DBC20CB_gshared)(__this, ___0_array, ___1_index, method);
}
inline KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* Array_Empty_TisKeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8_m6D57C806A2072E9083C494D7C2C58F0A723FEBB1_inline (const RuntimeMethod* method)
{
	return ((  KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* (*) (const RuntimeMethod*))Array_Empty_TisKeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8_m6D57C806A2072E9083C494D7C2C58F0A723FEBB1_gshared_inline)(method);
}
inline void KeyValuePair_2__ctor_m4F2127097695B4E8FF41AB225ED0572AA9EB37FE (KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m4F2127097695B4E8FF41AB225ED0572AA9EB37FE_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline void U3CGetEnumeratorU3Ed__35__ctor_m68958F8F2ADF6B72DA5E125CC8D0798921F76264 (U3CGetEnumeratorU3Ed__35_t7819A3D3D4C56C8F8292C680A125AB532AE363E4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__35_t7819A3D3D4C56C8F8292C680A125AB532AE363E4*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__35__ctor_m68958F8F2ADF6B72DA5E125CC8D0798921F76264_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void ConcurrentDictionary_2_GrowTable_mB0B16F1082A763B4FB5E5576DACF98801B8E3C1C (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Tables_t225149423E4AFACDB3618618F6085B88A3927091* ___0_tables, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, Tables_t225149423E4AFACDB3618618F6085B88A3927091*, const RuntimeMethod*))ConcurrentDictionary_2_GrowTable_mB0B16F1082A763B4FB5E5576DACF98801B8E3C1C_gshared)(__this, ___0_tables, method);
}
inline void ConcurrentDictionary_2_ThrowKeyNotFoundException_mD768AD239AF359963E961066B55332C248E9302C (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_ThrowKeyNotFoundException_mD768AD239AF359963E961066B55332C248E9302C_gshared)(___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline int32_t ConcurrentDictionary_2_GetCountInternal_mC51E3131A6C8C7FDD5AC939AD79D8D12FBF4D058 (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, const RuntimeMethod*))ConcurrentDictionary_2_GetCountInternal_mABB50180C1CBF2FBBBAB8667ED74FCC74FFB3F1C_fshared)(__this, method);
}
inline int32_t Func_2_Invoke_mC5D09FDDF69CB207846BD8D87EEF798562622F8A_inline (Func_2_t6D8CF90F987D57D84F64DDBE39D18F9BDC2E39AF* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t6D8CF90F987D57D84F64DDBE39D18F9BDC2E39AF*, Il2CppSharedGenericObject*, const RuntimeMethod*))Func_2_Invoke_mC5D09FDDF69CB207846BD8D87EEF798562622F8A_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_3_Invoke_m8767CBB7E9036B260BE8696BF49C389180299A0C_inline (Func_3_t9E3CBC04411CC1249EB8AD7578E5997AA9EDE6BC* __this, Il2CppSharedGenericObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t9E3CBC04411CC1249EB8AD7578E5997AA9EDE6BC*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*))Func_3_Invoke_m8767CBB7E9036B260BE8696BF49C389180299A0C_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline bool ConcurrentDictionary_2_TryUpdateInternal_m997C4BC8B4CD0BD04F4072BDAF7D59E865A5042E (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t ___2_newValue, int32_t ___3_comparisonValue, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, Il2CppSharedGenericObject*, int32_t, int32_t, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_TryUpdateInternal_m997C4BC8B4CD0BD04F4072BDAF7D59E865A5042E_gshared)(__this, ___0_key, ___1_hashcode, ___2_newValue, ___3_comparisonValue, method);
}
inline bool ConcurrentDictionary_2_TryAdd_m89DC7B3FDFFCAB4A93BC81928B86813DF75902CB (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_TryAdd_m89DC7B3FDFFCAB4A93BC81928B86813DF75902CB_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool ConcurrentDictionary_2_TryRemove_m026A3AAE9C0EBF6AE4E32608BF7A384B8BFC2F80 (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, Il2CppSharedGenericObject*, int32_t*, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m026A3AAE9C0EBF6AE4E32608BF7A384B8BFC2F80_gshared)(__this, ___0_key, ___1_value, method);
}
inline ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* ConcurrentDictionary_2_GetKeys_m209CDE9C3E51619CCA18E4396836D4593F201BBE (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, const RuntimeMethod*))ConcurrentDictionary_2_GetKeys_m209CDE9C3E51619CCA18E4396836D4593F201BBE_gshared)(__this, method);
}
inline ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* ConcurrentDictionary_2_GetValues_m9F4AD1555C1FFF1E9D1429E71027D431D19C1877 (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, const RuntimeMethod*))ConcurrentDictionary_2_GetValues_m9F4AD1555C1FFF1E9D1429E71027D431D19C1877_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m598084F53F14AFAEF7973F59CF8DE8F193034A4B (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_m598084F53F14AFAEF7973F59CF8DE8F193034A4B_gshared)(__this, method);
}
inline bool ConcurrentDictionary_2_ContainsKey_m3AA301DB0582E411B1CB4B3F0F7B600745FDDCC4 (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, Il2CppSharedGenericObject*, const RuntimeMethod*))ConcurrentDictionary_2_ContainsKey_m3AA301DB0582E411B1CB4B3F0F7B600745FDDCC4_gshared)(__this, ___0_key, method);
}
inline void DictionaryEnumerator__ctor_m48F413E9933FD4C05833ED05C7E6BD35D8C0A5A2 (DictionaryEnumerator_t5A953A6FFD4345BBC36BC3F2227965951306073A* __this, ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (DictionaryEnumerator_t5A953A6FFD4345BBC36BC3F2227965951306073A*, ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, const RuntimeMethod*))DictionaryEnumerator__ctor_m48F413E9933FD4C05833ED05C7E6BD35D8C0A5A2_gshared)(__this, ___0_dictionary, method);
}
inline void ConcurrentDictionary_2_set_Item_m9AD546977A9A4B86ADDF2D24991A64BF95D36B10 (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_m9AD546977A9A4B86ADDF2D24991A64BF95D36B10_gshared)(__this, ___0_key, ___1_value, method);
}
inline void ConcurrentDictionary_2_CopyToEntries_mEAF16B850007C91D63F21E452AB99CFA7FC9FA9C (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_CopyToEntries_mEAF16B850007C91D63F21E452AB99CFA7FC9FA9C_gshared)(__this, ___0_array, ___1_index, method);
}
inline void ConcurrentDictionary_2_CopyToObjects_m4A46CF7F18979F96103107717172D08C27B9C706 (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_CopyToObjects_m4A46CF7F18979F96103107717172D08C27B9C706_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void ConcurrentDictionary_2_AcquireLocks_mEB2E2CA8310606BF38B28F2614A1CE40D94647D6 (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, int32_t ___0_fromInclusive, int32_t ___1_toExclusive, int32_t* ___2_locksAcquired, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, int32_t, int32_t, int32_t*, const RuntimeMethod*))ConcurrentDictionary_2_AcquireLocks_mCDAED510DBF85E983BCB08E9A214020EDE61D999_fshared)(__this, ___0_fromInclusive, ___1_toExclusive, ___2_locksAcquired, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CDSCollectionETWBCLProvider_ConcurrentDictionary_AcquiringAllLocks_mF33BBE9D19970C7F3C3DB3C0F6BCF16BEEC26EFA (CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* __this, int32_t ___0_numOfBuckets, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m2CDADA05A6304090686E8D5E3E99A1596FAF5951 (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516_gshared)(__this, ___0_capacity, method);
}
inline void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
inline void ReadOnlyCollection_1__ctor_mC1890FAC00703F47A655C35CBCB613C74A811580 (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m903CF4492D6E4F6EE0D865BB7AA36A0DDB888355_fshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
inline void ReadOnlyCollection_1__ctor_mD41819F73F264B50313DE018DC19E0428FC120E5 (ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m903CF4492D6E4F6EE0D865BB7AA36A0DDB888355_fshared)(__this, ___0_list, method);
}
inline KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* ConcurrentDictionary_2_ToArray_m99D847F36029B9C33184D41474BDBB2F180D7FB5 (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, const RuntimeMethod*))ConcurrentDictionary_2_ToArray_m99D847F36029B9C33184D41474BDBB2F180D7FB5_gshared)(__this, method);
}
inline void ConcurrentDictionary_2_InitializeFromCollection_m75237D10A402939DAE7CE946742351FAFC1B6D1B (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9*, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_InitializeFromCollection_m75237D10A402939DAE7CE946742351FAFC1B6D1B_gshared)(__this, ___0_collection, method);
}
inline bool ConcurrentDictionary_2_IsValueWriteAtomic_m51FA13B470F75167DC4F2BFDEB03DCA4ED2E3690 (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))ConcurrentDictionary_2_IsValueWriteAtomic_m51FA13B470F75167DC4F2BFDEB03DCA4ED2E3690_gshared)(method);
}
inline int32_t ConcurrentDictionary_2_get_DefaultConcurrencyLevel_m9903CA8C87B5C3ADEF97598A89045BB4040811DF (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))ConcurrentDictionary_2_get_DefaultConcurrencyLevel_m81D29524F689635A16DBE57641F159E3CF7218A6_fshared)(method);
}
inline void ConcurrentDictionary_2__ctor_m30CD397A2CCA91BD4FB6FA95D23859849A4780A1 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, int32_t ___0_concurrencyLevel, int32_t ___1_capacity, bool ___2_growLockArray, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, int32_t, int32_t, bool, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m30CD397A2CCA91BD4FB6FA95D23859849A4780A1_gshared)(__this, ___0_concurrencyLevel, ___1_capacity, ___2_growLockArray, ___3_comparer, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, const RuntimeMethod*))KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline)(__this, method);
}
inline void ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6_gshared)(method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline)(__this, method);
}
inline bool ConcurrentDictionary_2_TryAddInternal_m90C1E37EDE7223697AE4DF6F298CF69E939B6414 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, Il2CppSharedGenericObject* ___2_value, bool ___3_updateIfExists, bool ___4_acquireLock, Il2CppSharedGenericObject** ___5_resultingValue, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, Il2CppSharedGenericObject*, int32_t, Il2CppSharedGenericObject*, bool, bool, Il2CppSharedGenericObject**, const RuntimeMethod*))ConcurrentDictionary_2_TryAddInternal_m90C1E37EDE7223697AE4DF6F298CF69E939B6414_gshared)(__this, ___0_key, ___1_hashcode, ___2_value, ___3_updateIfExists, ___4_acquireLock, ___5_resultingValue, method);
}
inline void Tables__ctor_mB705132BE24B8F6C537D3034D02189E4B78A80AF (Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* __this, NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* ___0_buckets, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_locks, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_countPerLock, const RuntimeMethod* method)
{
	((  void (*) (Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC*, NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))Tables__ctor_mD4BF7BCB80FBDADBA6F7A6E557E9EDA6F065C2F3_fshared)(__this, ___0_buckets, ___1_locks, ___2_countPerLock, method);
}
inline bool ConcurrentDictionary_2_TryGetValue_mCA8FA697A225F5EFA39B9E2D9455E1900A8553FC (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject**, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_mCA8FA697A225F5EFA39B9E2D9455E1900A8553FC_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool ConcurrentDictionary_2_TryRemoveInternal_m0472AE52B84E75ACDFA76B5FE985A0783A710375 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, bool ___2_matchValue, Il2CppSharedGenericObject* ___3_oldValue, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject**, bool, Il2CppSharedGenericObject*, const RuntimeMethod*))ConcurrentDictionary_2_TryRemoveInternal_m0472AE52B84E75ACDFA76B5FE985A0783A710375_gshared)(__this, ___0_key, ___1_value, ___2_matchValue, ___3_oldValue, method);
}
inline void ConcurrentDictionary_2_GetBucketAndLockNo_m84354833BDE3B49D6273C2CB91B56FDF6BB2D52D (int32_t ___0_hashcode, int32_t* ___1_bucketNo, int32_t* ___2_lockNo, int32_t ___3_bucketCount, int32_t ___4_lockCount, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t*, int32_t*, int32_t, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_GetBucketAndLockNo_mE101532D7BE14E9975B37B3B265789858E3FDEBA_fshared)(___0_hashcode, ___1_bucketNo, ___2_lockNo, ___3_bucketCount, ___4_lockCount, method);
}
inline bool ConcurrentDictionary_2_TryGetValueInternal_m010BFC355AF22021EACF8DD662BE40DA00535109 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, Il2CppSharedGenericObject** ___2_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, Il2CppSharedGenericObject*, int32_t, Il2CppSharedGenericObject**, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValueInternal_m010BFC355AF22021EACF8DD662BE40DA00535109_gshared)(__this, ___0_key, ___1_hashcode, ___2_value, method);
}
inline int32_t ConcurrentDictionary_2_GetBucket_mA43D089ACD256C1D34D35CAA3C17D1636A15235A (int32_t ___0_hashcode, int32_t ___1_bucketCount, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_GetBucket_m03138F665728DE0C8A4DA4A1720688414FC3C19B_fshared)(___0_hashcode, ___1_bucketCount, method);
}
inline void Node__ctor_mE53CBD5779AF8B8571EE6CB5297EED0A2A4DA062 (Node_t56E8135FC81EA186451808FF44BDD62E236A1339* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, int32_t ___2_hashcode, Node_t56E8135FC81EA186451808FF44BDD62E236A1339* ___3_next, const RuntimeMethod* method)
{
	((  void (*) (Node_t56E8135FC81EA186451808FF44BDD62E236A1339*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, int32_t, Node_t56E8135FC81EA186451808FF44BDD62E236A1339*, const RuntimeMethod*))Node__ctor_mE53CBD5779AF8B8571EE6CB5297EED0A2A4DA062_gshared)(__this, ___0_key, ___1_value, ___2_hashcode, ___3_next, method);
}
inline void ConcurrentDictionary_2_ReleaseLocks_m737F26AF08909572A0CFB96035988064959A5A84 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, int32_t ___0_fromInclusive, int32_t ___1_toExclusive, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, int32_t, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_ReleaseLocks_mDD3A19565988306ADEA547D93369C5FADCAF3F5B_fshared)(__this, ___0_fromInclusive, ___1_toExclusive, method);
}
inline void ConcurrentDictionary_2_AcquireAllLocks_m6D4FB77BA4870F2509D869DCD8EDA711F775BD84 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, int32_t* ___0_locksAcquired, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, int32_t*, const RuntimeMethod*))ConcurrentDictionary_2_AcquireAllLocks_m6D4FB77BA4870F2509D869DCD8EDA711F775BD84_gshared)(__this, ___0_locksAcquired, method);
}
inline void ConcurrentDictionary_2_CopyToPairs_m8F7657E03133E309126273D0584F8D5326697897 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_CopyToPairs_m8F7657E03133E309126273D0584F8D5326697897_gshared)(__this, ___0_array, ___1_index, method);
}
inline KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_inline (const RuntimeMethod* method)
{
	return ((  KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* (*) (const RuntimeMethod*))Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_gshared_inline)(method);
}
inline void KeyValuePair_2__ctor_mB2C82D7A225B9949D85AD00F49A2506C80C3EFED (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mB2C82D7A225B9949D85AD00F49A2506C80C3EFED_gshared)(__this, ___0_key, ___1_value, method);
}
inline void U3CGetEnumeratorU3Ed__35__ctor_m0051D498A386D8AF7299C71ED4D14283E10FE050 (U3CGetEnumeratorU3Ed__35_tE0AE463CC0DAC69CFE2C2EF588ED4B5D526E48F1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__35_tE0AE463CC0DAC69CFE2C2EF588ED4B5D526E48F1*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__35__ctor_m0051D498A386D8AF7299C71ED4D14283E10FE050_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void ConcurrentDictionary_2_GrowTable_m73470FB0D0D0AF3204B5B03FECC9C1B51F4E6D39 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* ___0_tables, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC*, const RuntimeMethod*))ConcurrentDictionary_2_GrowTable_m73470FB0D0D0AF3204B5B03FECC9C1B51F4E6D39_gshared)(__this, ___0_tables, method);
}
inline void ConcurrentDictionary_2_ThrowKeyNotFoundException_mFF2C0E4DC32A39250479D9B77B8D5516DD0E4245 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_ThrowKeyNotFoundException_mFF2C0E4DC32A39250479D9B77B8D5516DD0E4245_gshared)(___0_key, method);
}
inline int32_t ConcurrentDictionary_2_GetCountInternal_m98C4DBDA1CB153A75CA32F201B16C24FF3D4640C (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, const RuntimeMethod*))ConcurrentDictionary_2_GetCountInternal_mABB50180C1CBF2FBBBAB8667ED74FCC74FFB3F1C_fshared)(__this, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_inline (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87*, Il2CppSharedGenericObject*, const RuntimeMethod*))Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_gshared_inline)(__this, ___0_arg, method);
}
inline Il2CppSharedGenericObject* Func_3_Invoke_mB52DD65540C4107AF891E48398CF46B8590860F1_inline (Func_3_t8430F1D05DF2620CBCEC84F9563E283593C0C7E8* __this, Il2CppSharedGenericObject* ___0_arg1, Il2CppSharedGenericObject* ___1_arg2, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_3_t8430F1D05DF2620CBCEC84F9563E283593C0C7E8*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))Func_3_Invoke_mB52DD65540C4107AF891E48398CF46B8590860F1_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline bool ConcurrentDictionary_2_TryUpdateInternal_mA5103068ABCAFF05AE22019CBBFDD3D479D0DDEF (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, Il2CppSharedGenericObject* ___2_newValue, Il2CppSharedGenericObject* ___3_comparisonValue, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, Il2CppSharedGenericObject*, int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))ConcurrentDictionary_2_TryUpdateInternal_mA5103068ABCAFF05AE22019CBBFDD3D479D0DDEF_gshared)(__this, ___0_key, ___1_hashcode, ___2_newValue, ___3_comparisonValue, method);
}
inline bool ConcurrentDictionary_2_TryAdd_m64FDDCF0D5401FEB351A5E92F9C44E4D655686A9 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))ConcurrentDictionary_2_TryAdd_m64FDDCF0D5401FEB351A5E92F9C44E4D655686A9_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool ConcurrentDictionary_2_TryRemove_m11062CCF8497AE57FA505093F6E9069198C835DF (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject**, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m11062CCF8497AE57FA505093F6E9069198C835DF_gshared)(__this, ___0_key, ___1_value, method);
}
inline ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* ConcurrentDictionary_2_GetKeys_mB7179FAA255498E6BE2BB68DB8A52E75F3FBC06D (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, const RuntimeMethod*))ConcurrentDictionary_2_GetKeys_mB7179FAA255498E6BE2BB68DB8A52E75F3FBC06D_gshared)(__this, method);
}
inline ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* ConcurrentDictionary_2_GetValues_m7C13D32EA69766A289F6BB7B4D8046024347A7B1 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, const RuntimeMethod*))ConcurrentDictionary_2_GetValues_m7C13D32EA69766A289F6BB7B4D8046024347A7B1_gshared)(__this, method);
}
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m5E2C0EBDF59D498AB4D40133331641C23FB4B366 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_m5E2C0EBDF59D498AB4D40133331641C23FB4B366_gshared)(__this, method);
}
inline bool ConcurrentDictionary_2_ContainsKey_m5CA3E686F59D793C294677EEDB10619CC16115E9 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, Il2CppSharedGenericObject*, const RuntimeMethod*))ConcurrentDictionary_2_ContainsKey_m5CA3E686F59D793C294677EEDB10619CC16115E9_gshared)(__this, ___0_key, method);
}
inline void DictionaryEnumerator__ctor_mAD88826314DD95640977D3B87E43E0FA23090A6D (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B*, ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, const RuntimeMethod*))DictionaryEnumerator__ctor_mAD88826314DD95640977D3B87E43E0FA23090A6D_gshared)(__this, ___0_dictionary, method);
}
inline void ConcurrentDictionary_2_set_Item_m88409C18FD4A6A3BD9E9A90711D94E51019E5688 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_m88409C18FD4A6A3BD9E9A90711D94E51019E5688_gshared)(__this, ___0_key, ___1_value, method);
}
inline void ConcurrentDictionary_2_CopyToEntries_m4C51E924D6F0741B4C40132D020E813E54698BA5 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_CopyToEntries_m4C51E924D6F0741B4C40132D020E813E54698BA5_gshared)(__this, ___0_array, ___1_index, method);
}
inline void ConcurrentDictionary_2_CopyToObjects_m408C2C1E86CE15A810BEE1DA4F5AB40D99FCF3C1 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_CopyToObjects_m408C2C1E86CE15A810BEE1DA4F5AB40D99FCF3C1_gshared)(__this, ___0_array, ___1_index, method);
}
inline void ConcurrentDictionary_2_AcquireLocks_m36566CCAD7291F4C94D63066C9F41535296A7865 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, int32_t ___0_fromInclusive, int32_t ___1_toExclusive, int32_t* ___2_locksAcquired, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, int32_t, int32_t, int32_t*, const RuntimeMethod*))ConcurrentDictionary_2_AcquireLocks_mCDAED510DBF85E983BCB08E9A214020EDE61D999_fshared)(__this, ___0_fromInclusive, ___1_toExclusive, ___2_locksAcquired, method);
}
inline KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ConcurrentDictionary_2_ToArray_mB7BEF7AB0F93F41DA7626273762D41F08FDBEE07 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, const RuntimeMethod*))ConcurrentDictionary_2_ToArray_mB7BEF7AB0F93F41DA7626273762D41F08FDBEE07_gshared)(__this, method);
}
inline void ConcurrentDictionary_2_InitializeFromCollection_m300BC020F3C4DC3DE6AA37038EC6BDDA424BECE7 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_InitializeFromCollection_m300BC020F3C4DC3DE6AA37038EC6BDDA424BECE7_gshared)(__this, ___0_collection, method);
}
inline bool ConcurrentDictionary_2_IsValueWriteAtomic_m74689C9F03BF8A0F241A531E8FEADC3F638A093E (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))ConcurrentDictionary_2_IsValueWriteAtomic_m74689C9F03BF8A0F241A531E8FEADC3F638A093E_gshared)(method);
}
inline int32_t ConcurrentDictionary_2_get_DefaultConcurrencyLevel_mF8DC687602A59F7400FE844431A8836322D94FE9 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))ConcurrentDictionary_2_get_DefaultConcurrencyLevel_m81D29524F689635A16DBE57641F159E3CF7218A6_fshared)(method);
}
inline void ConcurrentDictionary_2__ctor_mD753670974F8B5B5C5868778B3C24E37A44B265B (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, int32_t ___0_concurrencyLevel, int32_t ___1_capacity, bool ___2_growLockArray, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, int32_t, int32_t, bool, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_mD753670974F8B5B5C5868778B3C24E37A44B265B_gshared)(__this, ___0_concurrencyLevel, ___1_capacity, ___2_growLockArray, ___3_comparer, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m59E82E5A467D2D93DBAA6AA381F5CC5286E533DD_inline (KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120*, const RuntimeMethod*))KeyValuePair_2_get_Key_m59E82E5A467D2D93DBAA6AA381F5CC5286E533DD_gshared_inline)(__this, method);
}
inline void ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D_gshared)(method);
}
inline int32_t KeyValuePair_2_get_Value_m9EBB8AC826C6439F35AE628B8FBD3FC1A322E493_inline (KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120*, const RuntimeMethod*))KeyValuePair_2_get_Value_m9EBB8AC826C6439F35AE628B8FBD3FC1A322E493_gshared_inline)(__this, method);
}
inline bool ConcurrentDictionary_2_TryAddInternal_m557FDD32269B23DC3F74ECF39AE4E46FD1089712 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t ___2_value, bool ___3_updateIfExists, bool ___4_acquireLock, int32_t* ___5_resultingValue, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, Il2CppSharedGenericObject*, int32_t, int32_t, bool, bool, int32_t*, const RuntimeMethod*))ConcurrentDictionary_2_TryAddInternal_m557FDD32269B23DC3F74ECF39AE4E46FD1089712_gshared)(__this, ___0_key, ___1_hashcode, ___2_value, ___3_updateIfExists, ___4_acquireLock, ___5_resultingValue, method);
}
inline void Tables__ctor_m07CC2782D8399B3982CA68633ED34991FC356F60 (Tables_t0E315C824AE282366793BBC56D608560C6DCF865* __this, NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* ___0_buckets, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_locks, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_countPerLock, const RuntimeMethod* method)
{
	((  void (*) (Tables_t0E315C824AE282366793BBC56D608560C6DCF865*, NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))Tables__ctor_mD4BF7BCB80FBDADBA6F7A6E557E9EDA6F065C2F3_fshared)(__this, ___0_buckets, ___1_locks, ___2_countPerLock, method);
}
inline bool ConcurrentDictionary_2_TryGetValue_m398EFFB0EBF6050AB20148A6F2CD9425BC9EC28B (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, Il2CppSharedGenericObject*, int32_t*, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_m398EFFB0EBF6050AB20148A6F2CD9425BC9EC28B_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool ConcurrentDictionary_2_TryRemoveInternal_m46B776D0225E7BCF4A36CF6477F87BA1FB2740D0 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, bool ___2_matchValue, int32_t ___3_oldValue, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, Il2CppSharedGenericObject*, int32_t*, bool, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_TryRemoveInternal_m46B776D0225E7BCF4A36CF6477F87BA1FB2740D0_gshared)(__this, ___0_key, ___1_value, ___2_matchValue, ___3_oldValue, method);
}
inline void ConcurrentDictionary_2_GetBucketAndLockNo_m5E8B11F20877C6E1B164FBD2ED2655972027E86D (int32_t ___0_hashcode, int32_t* ___1_bucketNo, int32_t* ___2_lockNo, int32_t ___3_bucketCount, int32_t ___4_lockCount, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t*, int32_t*, int32_t, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_GetBucketAndLockNo_mE101532D7BE14E9975B37B3B265789858E3FDEBA_fshared)(___0_hashcode, ___1_bucketNo, ___2_lockNo, ___3_bucketCount, ___4_lockCount, method);
}
inline EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline)(method);
}
inline bool ConcurrentDictionary_2_TryGetValueInternal_m9DDA685C0FF1419016622559F267A755DB7776E0 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t* ___2_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, Il2CppSharedGenericObject*, int32_t, int32_t*, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValueInternal_m9DDA685C0FF1419016622559F267A755DB7776E0_gshared)(__this, ___0_key, ___1_hashcode, ___2_value, method);
}
inline int32_t ConcurrentDictionary_2_GetBucket_m0F312F4F63B6C76EAD8172852BE14AF061E2BBFD (int32_t ___0_hashcode, int32_t ___1_bucketCount, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_GetBucket_m03138F665728DE0C8A4DA4A1720688414FC3C19B_fshared)(___0_hashcode, ___1_bucketCount, method);
}
inline void Node__ctor_m6F8EFC954ED470D3283D08AEA5C1B7A520B0EF24 (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, int32_t ___2_hashcode, Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* ___3_next, const RuntimeMethod* method)
{
	((  void (*) (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A*, Il2CppSharedGenericObject*, int32_t, int32_t, Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A*, const RuntimeMethod*))Node__ctor_m6F8EFC954ED470D3283D08AEA5C1B7A520B0EF24_gshared)(__this, ___0_key, ___1_value, ___2_hashcode, ___3_next, method);
}
inline void ConcurrentDictionary_2_ReleaseLocks_m51A3F9CEDCD19B2423B97CB9B9992B337D6E02F3 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, int32_t ___0_fromInclusive, int32_t ___1_toExclusive, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, int32_t, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_ReleaseLocks_mDD3A19565988306ADEA547D93369C5FADCAF3F5B_fshared)(__this, ___0_fromInclusive, ___1_toExclusive, method);
}
inline void ConcurrentDictionary_2_AcquireAllLocks_m43AEB8C0E662224BEDDE807935CE4C2FDD4317E5 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, int32_t* ___0_locksAcquired, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, int32_t*, const RuntimeMethod*))ConcurrentDictionary_2_AcquireAllLocks_m43AEB8C0E662224BEDDE807935CE4C2FDD4317E5_gshared)(__this, ___0_locksAcquired, method);
}
inline void ConcurrentDictionary_2_CopyToPairs_mF5CD68DD700C0FD7EC6BB3EB323EE04E8A218F31 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D*, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_CopyToPairs_mF5CD68DD700C0FD7EC6BB3EB323EE04E8A218F31_gshared)(__this, ___0_array, ___1_index, method);
}
inline KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* Array_Empty_TisKeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120_m3DAC5947C7DA5A5E357F497BE6BA770642F8A232_inline (const RuntimeMethod* method)
{
	return ((  KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* (*) (const RuntimeMethod*))Array_Empty_TisKeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120_m3DAC5947C7DA5A5E357F497BE6BA770642F8A232_gshared_inline)(method);
}
inline void KeyValuePair_2__ctor_m723623F2CA55A4B8CA68E3D59E291D9ECEC3E315 (KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m723623F2CA55A4B8CA68E3D59E291D9ECEC3E315_gshared)(__this, ___0_key, ___1_value, method);
}
inline void U3CGetEnumeratorU3Ed__35__ctor_m3E2212234B0ECF46D835DB37EF2FB598E3CAA3B6 (U3CGetEnumeratorU3Ed__35_t8A9F5879A8C4CA197FA6E180F095D6864EEB7D79* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__35_t8A9F5879A8C4CA197FA6E180F095D6864EEB7D79*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__35__ctor_m3E2212234B0ECF46D835DB37EF2FB598E3CAA3B6_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void ConcurrentDictionary_2_GrowTable_m9A6CDC9CB93A84012E138E31E28D87A821702D8F (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Tables_t0E315C824AE282366793BBC56D608560C6DCF865* ___0_tables, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, Tables_t0E315C824AE282366793BBC56D608560C6DCF865*, const RuntimeMethod*))ConcurrentDictionary_2_GrowTable_m9A6CDC9CB93A84012E138E31E28D87A821702D8F_gshared)(__this, ___0_tables, method);
}
inline void ConcurrentDictionary_2_ThrowKeyNotFoundException_mC74DD7418A20A6071750C4DF7BE33E40F8B3D2AB (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_ThrowKeyNotFoundException_mC74DD7418A20A6071750C4DF7BE33E40F8B3D2AB_gshared)(___0_key, method);
}
inline int32_t ConcurrentDictionary_2_GetCountInternal_m90AF6067552A5F8463CD33FE319B8C9DCFBF6B0D (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, const RuntimeMethod*))ConcurrentDictionary_2_GetCountInternal_mABB50180C1CBF2FBBBAB8667ED74FCC74FFB3F1C_fshared)(__this, method);
}
inline int32_t Func_2_Invoke_mCA1B40382E8B6D0BCC94FA8B0E4EA4C64BC8993C_inline (Func_2_t405860E4F03319562A562B85A5F839EF7CC12AC1* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t405860E4F03319562A562B85A5F839EF7CC12AC1*, Il2CppSharedGenericObject*, const RuntimeMethod*))Func_2_Invoke_mCA1B40382E8B6D0BCC94FA8B0E4EA4C64BC8993C_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_3_Invoke_m79254A650EC859A136A5FCBF2A28DFCD204FDBF2_inline (Func_3_tB6ED5593F7B9989207D4E0B22F1A34196642CCEB* __this, Il2CppSharedGenericObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_tB6ED5593F7B9989207D4E0B22F1A34196642CCEB*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*))Func_3_Invoke_m79254A650EC859A136A5FCBF2A28DFCD204FDBF2_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline bool ConcurrentDictionary_2_TryUpdateInternal_m3578B43E95E53FB205D48F82042D19E16D9075C8 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t ___2_newValue, int32_t ___3_comparisonValue, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, Il2CppSharedGenericObject*, int32_t, int32_t, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_TryUpdateInternal_m3578B43E95E53FB205D48F82042D19E16D9075C8_gshared)(__this, ___0_key, ___1_hashcode, ___2_newValue, ___3_comparisonValue, method);
}
inline bool ConcurrentDictionary_2_TryAdd_m7C2A0E663CCEBCADE29087D2BCE8C724C07D8EAA (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_TryAdd_m7C2A0E663CCEBCADE29087D2BCE8C724C07D8EAA_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool ConcurrentDictionary_2_TryRemove_mE436A198E4A1C975E7F66AFC03C72D488CBDB662 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, Il2CppSharedGenericObject*, int32_t*, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_mE436A198E4A1C975E7F66AFC03C72D488CBDB662_gshared)(__this, ___0_key, ___1_value, method);
}
inline ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* ConcurrentDictionary_2_GetKeys_mF47BA32B5ED3E8AF86BD7A4308AE746BDC9EA2B8 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, const RuntimeMethod*))ConcurrentDictionary_2_GetKeys_mF47BA32B5ED3E8AF86BD7A4308AE746BDC9EA2B8_gshared)(__this, method);
}
inline ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* ConcurrentDictionary_2_GetValues_mA1C0602D83C3DA4CB226682C8D47632063AFEB15 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, const RuntimeMethod*))ConcurrentDictionary_2_GetValues_mA1C0602D83C3DA4CB226682C8D47632063AFEB15_gshared)(__this, method);
}
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m902D4621DB439D17D464419FE299710F9F01E9C2 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_m902D4621DB439D17D464419FE299710F9F01E9C2_gshared)(__this, method);
}
inline bool ConcurrentDictionary_2_ContainsKey_m730195EAA4F2F9BF95445A4FB9762B904149F22B (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, Il2CppSharedGenericObject*, const RuntimeMethod*))ConcurrentDictionary_2_ContainsKey_m730195EAA4F2F9BF95445A4FB9762B904149F22B_gshared)(__this, ___0_key, method);
}
inline void DictionaryEnumerator__ctor_m863B5871EF80571B1CC999AC0DDDF801F90F864B (DictionaryEnumerator_t91255A4AF0637E7BBED70962CD0EE7B0F045CBA1* __this, ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (DictionaryEnumerator_t91255A4AF0637E7BBED70962CD0EE7B0F045CBA1*, ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, const RuntimeMethod*))DictionaryEnumerator__ctor_m863B5871EF80571B1CC999AC0DDDF801F90F864B_gshared)(__this, ___0_dictionary, method);
}
inline void ConcurrentDictionary_2_set_Item_mA8C485A2FF36CAC712EB3126BDDFC267B77C929D (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_mA8C485A2FF36CAC712EB3126BDDFC267B77C929D_gshared)(__this, ___0_key, ___1_value, method);
}
inline void ConcurrentDictionary_2_CopyToEntries_m87ADCB4F712024D91535AE14392A26BA8E25A4F2 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_CopyToEntries_m87ADCB4F712024D91535AE14392A26BA8E25A4F2_gshared)(__this, ___0_array, ___1_index, method);
}
inline void ConcurrentDictionary_2_CopyToObjects_m088B2EFE2850EF373D64801B014353519F8CB39A (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, const RuntimeMethod*))ConcurrentDictionary_2_CopyToObjects_m088B2EFE2850EF373D64801B014353519F8CB39A_gshared)(__this, ___0_array, ___1_index, method);
}
inline void ConcurrentDictionary_2_AcquireLocks_mEFB617D1BFA055FC44B37F93167A8195F7F4F053 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, int32_t ___0_fromInclusive, int32_t ___1_toExclusive, int32_t* ___2_locksAcquired, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, int32_t, int32_t, int32_t*, const RuntimeMethod*))ConcurrentDictionary_2_AcquireLocks_mCDAED510DBF85E983BCB08E9A214020EDE61D999_fshared)(__this, ___0_fromInclusive, ___1_toExclusive, ___2_locksAcquired, method);
}
inline void List_1__ctor_mBEC4BB23DEF62EFA5D66833D82CEB6FABDD96E04 (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, int32_t, const RuntimeMethod*))List_1__ctor_mBEC4BB23DEF62EFA5D66833D82CEB6FABDD96E04_gshared)(__this, ___0_capacity, method);
}
inline void List_1_Add_m24BA4DEDED426A5B0C6A4AB3E523C876B0B918A6_inline (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, int32_t, const RuntimeMethod*))List_1_Add_m24BA4DEDED426A5B0C6A4AB3E523C876B0B918A6_gshared_inline)(__this, ___0_item, method);
}
inline void ReadOnlyCollection_1__ctor_m401D0350AA4E4ACE83F75DE82712FF72120418D4 (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m903CF4492D6E4F6EE0D865BB7AA36A0DDB888355_fshared)(__this, ___0_list, method);
}
inline KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* ConcurrentDictionary_2_ToArray_m5EAE034E0E7F06C122D5F31285549651E9345B81 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, const RuntimeMethod*))ConcurrentDictionary_2_ToArray_m5EAE034E0E7F06C122D5F31285549651E9345B81_gshared)(__this, method);
}
inline void ConcurrentDictionary_2_InitializeFromCollection_m27DE2C2479865D942A87800621ABA47583AB50B1 (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB*, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_InitializeFromCollection_m27DE2C2479865D942A87800621ABA47583AB50B1_gshared)(__this, ___0_collection, method);
}
inline bool ConcurrentDictionary_2_IsValueWriteAtomic_m16A364B69C9A8EF222E525CBA92585A8D69D0B09 (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))ConcurrentDictionary_2_IsValueWriteAtomic_m16A364B69C9A8EF222E525CBA92585A8D69D0B09_gshared)(method);
}
inline void Volatile_Write_TisNode_tC5111E77A2002D0AD173457666915D4D0BD59865_m9E4373050D190768311449568F896A3E1F52E227 (Node_tC5111E77A2002D0AD173457666915D4D0BD59865** ___0_location, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Node_tC5111E77A2002D0AD173457666915D4D0BD59865**, Node_tC5111E77A2002D0AD173457666915D4D0BD59865*, const RuntimeMethod*))Volatile_Write_TisIl2CppSharedGenericObject_m5283DEB09B854082CE5EFC9E4C1B19F4D8E1A5CA_gshared)(___0_location, ___1_value, method);
}
inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865* Volatile_Read_TisNode_tC5111E77A2002D0AD173457666915D4D0BD59865_mD76E44CC90A4D6EA388439C0CC2E91C5AD5DFD7E (Node_tC5111E77A2002D0AD173457666915D4D0BD59865** ___0_location, const RuntimeMethod* method)
{
	return ((  Node_tC5111E77A2002D0AD173457666915D4D0BD59865* (*) (Node_tC5111E77A2002D0AD173457666915D4D0BD59865**, const RuntimeMethod*))Volatile_Read_TisIl2CppSharedGenericObject_m80AA45DB17514248EE3F1C51892F22E546B63BC9_gshared)(___0_location, method);
}
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlatformHelper_get_ProcessorCount_m123AB465E201104882D03864A7C6E08F1A55F3F9 (const RuntimeMethod* method) ;
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
inline EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449_gshared)(method);
}
inline void List_1_AddWithResize_m3B53F17525936469654379AC0F1F0B19EC3DCCE5 (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, int32_t, const RuntimeMethod*))List_1_AddWithResize_m3B53F17525936469654379AC0F1F0B19EC3DCCE5_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11327
// Method Definition Index: 11328
// Method Definition Index: 11329
// Method Definition Index: 11330
// Method Definition Index: 11331
// Method Definition Index: 11332
// Method Definition Index: 11333
// Method Definition Index: 11334
// Method Definition Index: 11335
// Method Definition Index: 11336
// Method Definition Index: 11337
// Method Definition Index: 11338
// Method Definition Index: 11339
// Method Definition Index: 11340
// Method Definition Index: 11341
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11344
// Method Definition Index: 11345
// Method Definition Index: 11346
// Method Definition Index: 11347
// Method Definition Index: 11348
// Method Definition Index: 11349
// Method Definition Index: 11350
// Method Definition Index: 11351
// Method Definition Index: 11352
// Method Definition Index: 11353
// Method Definition Index: 11354
// Method Definition Index: 11355
// Method Definition Index: 11356
// Method Definition Index: 11357
// Method Definition Index: 11358
// Method Definition Index: 11359
// Method Definition Index: 11360
// Method Definition Index: 11361
// Method Definition Index: 11362
// Method Definition Index: 11363
// Method Definition Index: 11364
// Method Definition Index: 11365
// Method Definition Index: 11366
// Method Definition Index: 11367
// Method Definition Index: 11368
// Method Definition Index: 11369
// Method Definition Index: 11370
// Method Definition Index: 11371
// Method Definition Index: 11372
// Method Definition Index: 11373
// Method Definition Index: 11374
// Method Definition Index: 11375
// Method Definition Index: 11376
// Method Definition Index: 11377
// Method Definition Index: 11378
// Method Definition Index: 11379
// Method Definition Index: 11380
// Method Definition Index: 11381
// Method Definition Index: 11382
// Method Definition Index: 11383
// Method Definition Index: 11384
// Method Definition Index: 11385
// Method Definition Index: 11386
// Method Definition Index: 11387
// Method Definition Index: 11388
// Method Definition Index: 11389
// Method Definition Index: 11390
// Method Definition Index: 11391
// Method Definition Index: 11392
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11327
// Method Definition Index: 11328
// Method Definition Index: 11329
// Method Definition Index: 11330
// Method Definition Index: 11331
// Method Definition Index: 11332
// Method Definition Index: 11333
// Method Definition Index: 11334
// Method Definition Index: 11335
// Method Definition Index: 11336
// Method Definition Index: 11337
// Method Definition Index: 11338
// Method Definition Index: 11339
// Method Definition Index: 11340
// Method Definition Index: 11341
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11344
// Method Definition Index: 11345
// Method Definition Index: 11346
// Method Definition Index: 11347
// Method Definition Index: 11348
// Method Definition Index: 11349
// Method Definition Index: 11350
// Method Definition Index: 11351
// Method Definition Index: 11352
// Method Definition Index: 11353
// Method Definition Index: 11354
// Method Definition Index: 11355
// Method Definition Index: 11356
// Method Definition Index: 11357
// Method Definition Index: 11358
// Method Definition Index: 11359
// Method Definition Index: 11360
// Method Definition Index: 11361
// Method Definition Index: 11362
// Method Definition Index: 11363
// Method Definition Index: 11364
// Method Definition Index: 11365
// Method Definition Index: 11366
// Method Definition Index: 11367
// Method Definition Index: 11368
// Method Definition Index: 11369
// Method Definition Index: 11370
// Method Definition Index: 11371
// Method Definition Index: 11372
// Method Definition Index: 11373
// Method Definition Index: 11374
// Method Definition Index: 11375
// Method Definition Index: 11376
// Method Definition Index: 11377
// Method Definition Index: 11378
// Method Definition Index: 11379
// Method Definition Index: 11380
// Method Definition Index: 11381
// Method Definition Index: 11382
// Method Definition Index: 11383
// Method Definition Index: 11384
// Method Definition Index: 11385
// Method Definition Index: 11386
// Method Definition Index: 11387
// Method Definition Index: 11388
// Method Definition Index: 11389
// Method Definition Index: 11390
// Method Definition Index: 11391
// Method Definition Index: 11392
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_IsValueWriteAtomic_m51FA13B470F75167DC4F2BFDEB03DCA4ED2E3690_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)1;
	}

IL_0015:
	{
		Type_t* L_4 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466(L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 3)))
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0056;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_0056;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0056;
			}
			case 7:
			{
				goto IL_0056;
			}
			case 8:
			{
				goto IL_0058;
			}
			case 9:
			{
				goto IL_0058;
			}
			case 10:
			{
				goto IL_0056;
			}
			case 11:
			{
				goto IL_0058;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0056:
	{
		return (bool)1;
	}

IL_0058:
	{
		int32_t L_7;
		L_7 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		return (bool)((((int32_t)L_7) == ((int32_t)8))? 1 : 0);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m94E505EA2C1AB26237D5FAA27B5ABE3A12C09920_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0;
		L_0 = ConcurrentDictionary_2_get_DefaultConcurrencyLevel_m601340640E928F67B1C84E348B081C4B149A1623(NULL);
		ConcurrentDictionary_2__ctor_mACE01DD990849C008D73C904B0E8707EEDE476FC(__this, L_0, ((int32_t)31), (bool)1, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		return;
	}
}
// Method Definition Index: 11329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m336E251A48ECC7CB7D0D1CA0A3954784E44AAFBE_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0;
		L_0 = ConcurrentDictionary_2_get_DefaultConcurrencyLevel_m601340640E928F67B1C84E348B081C4B149A1623(NULL);
		RuntimeObject* L_1 = ___0_comparer;
		ConcurrentDictionary_2__ctor_mACE01DD990849C008D73C904B0E8707EEDE476FC(__this, L_0, ((int32_t)31), (bool)1, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		return;
	}
}
// Method Definition Index: 11330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_InitializeFromCollection_m75237D10A402939DAE7CE946742351FAFC1B6D1B_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_collection;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 5), L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_1;
				NullCheck(L_4);
				KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_4);
				V_2 = L_5;
				Il2CppSharedGenericObject* L_6;
				L_6 = KeyValuePair_2_get_Key_mAB9D8A9DFA29977A417398BB6B906B46654CBA55_inline((&V_2), NULL);
				if (L_6)
				{
					goto IL_0023_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_0023_1:
			{
				Il2CppSharedGenericObject* L_7;
				L_7 = KeyValuePair_2_get_Key_mAB9D8A9DFA29977A417398BB6B906B46654CBA55_inline((&V_2), NULL);
				RuntimeObject* L_8 = __this->____comparer;
				Il2CppSharedGenericObject* L_9;
				L_9 = KeyValuePair_2_get_Key_mAB9D8A9DFA29977A417398BB6B906B46654CBA55_inline((&V_2), NULL);
				NullCheck(L_8);
				int32_t L_10;
				L_10 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_8, L_9);
				int32_t L_11;
				L_11 = KeyValuePair_2_get_Value_mC4FA6226F7C3B5DA7FF94EB9C869DA45A2802D71_inline((&V_2), NULL);
				bool L_12;
				L_12 = ConcurrentDictionary_2_TryAddInternal_m47028041F36DC714A56315415DA923B068BDDB75(__this, L_7, L_10, L_11, (bool)0, (bool)0, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
				if (L_12)
				{
					goto IL_005a_1;
				}
			}
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEC0CC039753090F0DDDF2727802FC6E1570B317B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
			}

IL_005a_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck((RuntimeObject*)L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
				if (L_15)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_006e;
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

IL_006e:
	{
		int32_t L_16 = __this->____budget;
		if (L_16)
		{
			goto IL_009b;
		}
	}
	{
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_17 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_17);
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_18 = L_17->____buckets;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_20 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20->____locks;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		__this->____budget = ((int32_t)(L_19/L_22));
	}

IL_009b:
	{
		return;
	}
}
// Method Definition Index: 11331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_mACE01DD990849C008D73C904B0E8707EEDE476FC_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, int32_t ___0_concurrencyLevel, int32_t ___1_capacity, bool ___2_growLockArray, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* G_B11_0 = NULL;
	ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* G_B11_1 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* G_B10_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_concurrencyLevel;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF10EFAF6473141D13A05C1B850DEF40E641A918)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68445D6E030501243B18C07E57CF1AE5C1C5AAF2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_001a:
	{
		int32_t L_2 = ___1_capacity;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE59C400B29D20EE4CB5A86E1F46ED782D7872D43)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_002e:
	{
		int32_t L_4 = ___1_capacity;
		int32_t L_5 = ___0_concurrencyLevel;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_6 = ___0_concurrencyLevel;
		___1_capacity = L_6;
	}

IL_0035:
	{
		int32_t L_7 = ___0_concurrencyLevel;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_0 = L_8;
		V_3 = 0;
		goto IL_004c;
	}

IL_0040:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		int32_t L_10 = V_3;
		RuntimeObject* L_11 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_11, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (RuntimeObject*)L_11);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004c:
	{
		int32_t L_13 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0040;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_1 = L_18;
		int32_t L_19 = ___1_capacity;
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_20 = (NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218*)(NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_19);
		V_2 = L_20;
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_21 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_24 = (Tables_t225149423E4AFACDB3618618F6085B88A3927091*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		Tables__ctor_mAE650FF1AB0EAA46497A1113A52723F35471BD5D(L_24, L_21, L_22, L_23, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____tables = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_24);
		RuntimeObject* L_25 = ___3_comparer;
		RuntimeObject* L_26 = L_25;
		if (L_26)
		{
			G_B11_0 = L_26;
			G_B11_1 = __this;
			goto IL_007e;
		}
		G_B10_0 = L_26;
		G_B10_1 = __this;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_27;
		L_27 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		G_B11_0 = ((RuntimeObject*)(L_27));
		G_B11_1 = G_B10_1;
	}

IL_007e:
	{
		NullCheck(G_B11_1);
		G_B11_1->____comparer = G_B11_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B11_1->____comparer), (void*)G_B11_0);
		bool L_28 = ___2_growLockArray;
		__this->____growLockArray = L_28;
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_29)->max_length),NULL));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		__this->____budget = ((int32_t)(L_30/L_32));
		return;
	}
}
// Method Definition Index: 11332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_m89DC7B3FDFFCAB4A93BC81928B86813DF75902CB_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		RuntimeObject* L_2 = __this->____comparer;
		Il2CppSharedGenericObject* L_3 = ___0_key;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_2, L_3);
		int32_t L_5 = ___1_value;
		bool L_6;
		L_6 = ConcurrentDictionary_2_TryAddInternal_m47028041F36DC714A56315415DA923B068BDDB75(__this, L_1, L_4, L_5, (bool)0, (bool)1, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return L_6;
	}
}
// Method Definition Index: 11333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_ContainsKey_m3AA301DB0582E411B1CB4B3F0F7B600745FDDCC4_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryGetValue_m7E019A9EE0362D26E1B6D4A4D199734E7A847F6A(__this, L_1, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		return L_2;
	}
}
// Method Definition Index: 11334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m026A3AAE9C0EBF6AE4E32608BF7A384B8BFC2F80_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		int32_t* L_2 = ___1_value;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_3 = V_0;
		bool L_4;
		L_4 = ConcurrentDictionary_2_TryRemoveInternal_mB7B4E980DB8A1591D4D5E85EE99FFDCF4FB7D019(__this, L_1, L_2, (bool)0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return L_4;
	}
}
// Method Definition Index: 11335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemoveInternal_mB7B4E980DB8A1591D4D5E85EE99FFDCF4FB7D019_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, bool ___2_matchValue, int32_t ___3_oldValue, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Tables_t225149423E4AFACDB3618618F6085B88A3927091* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_6 = NULL;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_7 = NULL;
	bool V_8 = false;
	{
		RuntimeObject* L_0 = __this->____comparer;
		Il2CppSharedGenericObject* L_1 = ___0_key;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_0, L_1);
		V_0 = L_2;
	}

IL_000d:
	{
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_3 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_1 = L_3;
		int32_t L_4 = V_0;
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_5 = V_1;
		NullCheck(L_5);
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_6 = L_5->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_8 = V_1;
		NullCheck(L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8->____locks;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_GetBucketAndLockNo_mFAD2F5466CE28CB22DFAF20B10CBE759593CCF95(L_4, (&V_2), (&V_3), L_7, L_10, NULL);
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_11 = V_1;
		NullCheck(L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11->____locks;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		V_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011d:
			{
				{
					bool L_16 = V_5;
					if (!L_16)
					{
						goto IL_0128;
					}
				}
				{
					RuntimeObject* L_17 = V_4;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_17, NULL);
				}

IL_0128:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_18 = V_4;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_18, (&V_5), NULL);
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_19 = V_1;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_20 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_t225149423E4AFACDB3618618F6085B88A3927091*)L_19) == ((RuntimeObject*)(Tables_t225149423E4AFACDB3618618F6085B88A3927091*)L_20)))
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_000d;
			}

IL_0053_1:
			{
				V_6 = (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86*)NULL;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_21 = V_1;
				NullCheck(L_21);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_22 = L_21->____buckets;
				int32_t L_23 = V_2;
				NullCheck(L_22);
				int32_t L_24 = L_23;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_7 = L_25;
				goto IL_0114_1;
			}

IL_0065_1:
			{
				int32_t L_26 = V_0;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_27 = V_7;
				NullCheck(L_27);
				int32_t L_28 = L_27->____hashcode;
				if ((!(((uint32_t)L_26) == ((uint32_t)L_28))))
				{
					goto IL_0105_1;
				}
			}
			{
				RuntimeObject* L_29 = __this->____comparer;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_30 = V_7;
				NullCheck(L_30);
				Il2CppSharedGenericObject* L_31 = L_30->____key;
				Il2CppSharedGenericObject* L_32 = ___0_key;
				NullCheck(L_29);
				bool L_33;
				L_33 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_29, L_31, L_32);
				if (!L_33)
				{
					goto IL_0105_1;
				}
			}
			{
				bool L_34 = ___2_matchValue;
				if (!L_34)
				{
					goto IL_00ae_1;
				}
			}
			{
				EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_35;
				L_35 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
				int32_t L_36 = ___3_oldValue;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_37 = V_7;
				NullCheck(L_37);
				int32_t L_38 = L_37->____value;
				NullCheck(L_35);
				bool L_39;
				L_39 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_35, L_36, L_38);
				if (L_39)
				{
					goto IL_00ae_1;
				}
			}
			{
				int32_t* L_40 = ___1_value;
				il2cpp_codegen_initobj(L_40, sizeof(int32_t));
				V_8 = (bool)0;
				goto IL_0132;
			}

IL_00ae_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_41 = V_6;
				if (L_41)
				{
					goto IL_00ce_1;
				}
			}
			{
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_42 = V_1;
				NullCheck(L_42);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_43 = L_42->____buckets;
				int32_t L_44 = V_2;
				NullCheck(L_43);
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_45 = V_7;
				NullCheck(L_45);
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_46 = L_45->____next;
				il2cpp_codegen_memory_barrier();
				VolatileWrite((Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86**)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86*)L_46);
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_47 = V_6;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_48 = V_7;
				NullCheck(L_48);
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_49 = L_48->____next;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_47);
				il2cpp_codegen_memory_barrier();
				L_47->____next = L_49;
				Il2CppCodeGenWriteBarrier((void**)(&L_47->____next), (void*)L_49);
			}

IL_00e0_1:
			{
				int32_t* L_50 = ___1_value;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_51 = V_7;
				NullCheck(L_51);
				int32_t L_52 = L_51->____value;
				*(int32_t*)L_50 = L_52;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_53 = V_1;
				NullCheck(L_53);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = L_53->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_55 = V_3;
				NullCheck(L_54);
				int32_t* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)));
				int32_t L_57 = il2cpp_codegen_ldind<int32_t, int32_t>(L_56);
				il2cpp_codegen_stind<int32_t>((int32_t*)L_56, (int32_t)((int32_t)il2cpp_codegen_subtract(L_57, 1)));
				V_8 = (bool)1;
				goto IL_0132;
			}

IL_0105_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_58 = V_7;
				V_6 = L_58;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_59 = V_7;
				NullCheck(L_59);
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_60 = L_59->____next;
				il2cpp_codegen_memory_barrier();
				V_7 = L_60;
			}

IL_0114_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_61 = V_7;
				if (L_61)
				{
					goto IL_0065_1;
				}
			}
			{
				goto IL_0129;
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

IL_0129:
	{
		int32_t* L_62 = ___1_value;
		il2cpp_codegen_initobj(L_62, sizeof(int32_t));
		return (bool)0;
	}

IL_0132:
	{
		bool L_63 = V_8;
		return L_63;
	}
}
// Method Definition Index: 11336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_m7E019A9EE0362D26E1B6D4A4D199734E7A847F6A_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		RuntimeObject* L_2 = __this->____comparer;
		Il2CppSharedGenericObject* L_3 = ___0_key;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_2, L_3);
		int32_t* L_5 = ___1_value;
		bool L_6;
		L_6 = ConcurrentDictionary_2_TryGetValueInternal_m2FE098DA3563E31963BE405403A70C4577A3F08E(__this, L_1, L_4, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		return L_6;
	}
}
// Method Definition Index: 11337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValueInternal_m2FE098DA3563E31963BE405403A70C4577A3F08E_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t* ___2_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	Tables_t225149423E4AFACDB3618618F6085B88A3927091* V_0 = NULL;
	int32_t V_1 = 0;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_2 = NULL;
	{
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1 = ___1_hashcode;
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_2 = V_0;
		NullCheck(L_2);
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_3 = L_2->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = ConcurrentDictionary_2_GetBucket_m83AA2E5D6E0C9D982B9EE5200E01E99B7581EA99(L_1, L_4, NULL);
		V_1 = L_5;
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_6 = V_0;
		NullCheck(L_6);
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_7 = L_6->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_9;
		L_9 = VolatileRead(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))));
		V_2 = L_9;
		goto IL_0060;
	}

IL_002c:
	{
		int32_t L_10 = ___1_hashcode;
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12 = L_11->____hashcode;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_12))))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_14 = V_2;
		NullCheck(L_14);
		Il2CppSharedGenericObject* L_15 = L_14->____key;
		Il2CppSharedGenericObject* L_16 = ___0_key;
		NullCheck(L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_13, L_15, L_16);
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		int32_t* L_18 = ___2_value;
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_19 = V_2;
		NullCheck(L_19);
		int32_t L_20 = L_19->____value;
		*(int32_t*)L_18 = L_20;
		return (bool)1;
	}

IL_0057:
	{
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_21 = V_2;
		NullCheck(L_21);
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_22 = L_21->____next;
		il2cpp_codegen_memory_barrier();
		V_2 = L_22;
	}

IL_0060:
	{
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_23 = V_2;
		if (L_23)
		{
			goto IL_002c;
		}
	}
	{
		int32_t* L_24 = ___2_value;
		il2cpp_codegen_initobj(L_24, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 11338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryUpdateInternal_m997C4BC8B4CD0BD04F4072BDAF7D59E865A5042E_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t ___2_newValue, int32_t ___3_comparisonValue, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Tables_t225149423E4AFACDB3618618F6085B88A3927091* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_6 = NULL;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_7 = NULL;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_8 = NULL;
	bool V_9 = false;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0;
		L_0 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_0 = L_0;
	}

IL_0006:
	{
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_1 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_3 = L_1;
		int32_t L_2 = ___1_hashcode;
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_3 = V_3;
		NullCheck(L_3);
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_6 = V_3;
		NullCheck(L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6->____locks;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_GetBucketAndLockNo_mFAD2F5466CE28CB22DFAF20B10CBE759593CCF95(L_2, (&V_1), (&V_2), L_5, L_8, NULL);
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_9 = V_3;
		NullCheck(L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____locks;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		V_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0101:
			{
				{
					bool L_14 = V_5;
					if (!L_14)
					{
						goto IL_010c;
					}
				}
				{
					RuntimeObject* L_15 = V_4;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_15, NULL);
				}

IL_010c:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_16 = V_4;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_16, (&V_5), NULL);
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_17 = V_3;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_18 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_t225149423E4AFACDB3618618F6085B88A3927091*)L_17) == ((RuntimeObject*)(Tables_t225149423E4AFACDB3618618F6085B88A3927091*)L_18)))
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_0006;
			}

IL_004c_1:
			{
				V_6 = (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86*)NULL;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_19 = V_3;
				NullCheck(L_19);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_20 = L_19->____buckets;
				int32_t L_21 = V_1;
				NullCheck(L_20);
				int32_t L_22 = L_21;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
				V_7 = L_23;
				goto IL_00f5_1;
			}

IL_005e_1:
			{
				int32_t L_24 = ___1_hashcode;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_25 = V_7;
				NullCheck(L_25);
				int32_t L_26 = L_25->____hashcode;
				if ((!(((uint32_t)L_24) == ((uint32_t)L_26))))
				{
					goto IL_00e6_1;
				}
			}
			{
				RuntimeObject* L_27 = __this->____comparer;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_28 = V_7;
				NullCheck(L_28);
				Il2CppSharedGenericObject* L_29 = L_28->____key;
				Il2CppSharedGenericObject* L_30 = ___0_key;
				NullCheck(L_27);
				bool L_31;
				L_31 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_27, L_29, L_30);
				if (!L_31)
				{
					goto IL_00e6_1;
				}
			}
			{
				RuntimeObject* L_32 = V_0;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_33 = V_7;
				NullCheck(L_33);
				int32_t L_34 = L_33->____value;
				int32_t L_35 = ___3_comparisonValue;
				NullCheck(L_32);
				bool L_36;
				L_36 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_32, L_34, L_35);
				if (!L_36)
				{
					goto IL_00e1_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				bool L_37 = ((ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)))->___s_isValueWriteAtomic;
				if (!L_37)
				{
					goto IL_009f_1;
				}
			}
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_38 = V_7;
				int32_t L_39 = ___2_newValue;
				NullCheck(L_38);
				L_38->____value = L_39;
				goto IL_00dc_1;
			}

IL_009f_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_40 = V_7;
				NullCheck(L_40);
				Il2CppSharedGenericObject* L_41 = L_40->____key;
				int32_t L_42 = ___2_newValue;
				int32_t L_43 = ___1_hashcode;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_44 = V_7;
				NullCheck(L_44);
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_45 = L_44->____next;
				il2cpp_codegen_memory_barrier();
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_46 = (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				Node__ctor_m86BACE527640249F3448CB2E10950EEBB1360204(L_46, L_41, L_42, L_43, L_45, NULL);
				V_8 = L_46;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_47 = V_6;
				if (L_47)
				{
					goto IL_00d1_1;
				}
			}
			{
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_48 = V_3;
				NullCheck(L_48);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_49 = L_48->____buckets;
				int32_t L_50 = V_1;
				NullCheck(L_49);
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_51 = V_8;
				VolatileWrite((Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86**)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50))), (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86*)L_51);
				goto IL_00dc_1;
			}

IL_00d1_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_52 = V_6;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_53 = V_8;
				NullCheck(L_52);
				il2cpp_codegen_memory_barrier();
				L_52->____next = L_53;
				Il2CppCodeGenWriteBarrier((void**)(&L_52->____next), (void*)L_53);
			}

IL_00dc_1:
			{
				V_9 = (bool)1;
				goto IL_010d;
			}

IL_00e1_1:
			{
				V_9 = (bool)0;
				goto IL_010d;
			}

IL_00e6_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_54 = V_7;
				V_6 = L_54;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_55 = V_7;
				NullCheck(L_55);
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_56 = L_55->____next;
				il2cpp_codegen_memory_barrier();
				V_7 = L_56;
			}

IL_00f5_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_57 = V_7;
				if (L_57)
				{
					goto IL_005e_1;
				}
			}
			{
				V_9 = (bool)0;
				goto IL_010d;
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

IL_010d:
	{
		bool L_58 = V_9;
		return L_58;
	}
}
// Method Definition Index: 11339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_Clear_mE4304CFCF4E83B6C92A566014CA1BC6C383B5BE3_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Tables_t225149423E4AFACDB3618618F6085B88A3927091* V_1 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_mC7C705ADFA09682AC57D5C5DBCD89664A0D1D790(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			ConcurrentDictionary_2_AcquireAllLocks_m22A145D24A0EB3AEE44E7074E7BC169B4B33F507(__this, (&V_0), NULL);
			NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_1 = (NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218*)(NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)((int32_t)31));
			Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_2 = __this->____tables;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_2);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2->____locks;
			Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_4 = __this->____tables;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_4);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->____countPerLock;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_5);
			int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
			Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_8 = (Tables_t225149423E4AFACDB3618618F6085B88A3927091*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
			Tables__ctor_mAE650FF1AB0EAA46497A1113A52723F35471BD5D(L_8, L_1, L_3, L_7, NULL);
			V_1 = L_8;
			Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_9 = V_1;
			il2cpp_codegen_memory_barrier();
			__this->____tables = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_9);
			Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_10 = V_1;
			NullCheck(L_10);
			NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_11 = L_10->____buckets;
			NullCheck(L_11);
			int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
			Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_13 = V_1;
			NullCheck(L_13);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13->____locks;
			NullCheck(L_14);
			int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
			CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			int32_t L_16;
			L_16 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, ((int32_t)(L_12/L_15)), NULL);
			__this->____budget = L_16;
			goto IL_006b;
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
		return;
	}
}
// Method Definition Index: 11340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m5F89FCACC0BB298B7B26301A1E08EA6B7506B598_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_0 = ___0_array;
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
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0D86565E49BD212E7AC64BABD33BE3668A4C45B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0081:
			{
				int32_t L_4 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_mC7C705ADFA09682AC57D5C5DBCD89664A0D1D790(__this, 0, L_4, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m22A145D24A0EB3AEE44E7074E7BC169B4B33F507(__this, (&V_0), NULL);
				V_1 = 0;
				V_2 = 0;
				goto IL_004a_1;
			}

IL_0032_1:
			{
				int32_t L_5 = V_1;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_6 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_6);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_8 = V_2;
				NullCheck(L_7);
				int32_t L_9 = L_8;
				int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
				V_1 = ((int32_t)il2cpp_codegen_add(L_5, L_10));
				int32_t L_11 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			}

IL_004a_1:
			{
				int32_t L_12 = V_2;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_13 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_13);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13->____locks;
				NullCheck(L_14);
				int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
				if ((((int32_t)L_12) >= ((int32_t)L_15)))
				{
					goto IL_0060_1;
				}
			}
			{
				int32_t L_16 = V_1;
				if ((((int32_t)L_16) >= ((int32_t)0)))
				{
					goto IL_0032_1;
				}
			}

IL_0060_1:
			{
				KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_17 = ___0_array;
				NullCheck(L_17);
				int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
				int32_t L_19 = V_1;
				int32_t L_20 = ___1_index;
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, L_19))) < ((int32_t)L_20)))
				{
					goto IL_006c_1;
				}
			}
			{
				int32_t L_21 = V_1;
				if ((((int32_t)L_21) >= ((int32_t)0)))
				{
					goto IL_0077_1;
				}
			}

IL_006c_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral672E993A9AD93822B712B165C6987759C6DED80B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
			}

IL_0077_1:
			{
				KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_23 = ___0_array;
				int32_t L_24 = ___1_index;
				ConcurrentDictionary_2_CopyToPairs_m79E8AA31B59CDEDFD9B95FECBC6DA2471DBC20CB(__this, L_23, L_24, NULL);
				goto IL_008a;
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

IL_008a:
	{
		return;
	}
}
// Method Definition Index: 11341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* ConcurrentDictionary_2_ToArray_m99D847F36029B9C33184D41474BDBB2F180D7FB5_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* V_2 = NULL;
	int32_t V_3 = 0;
	KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* V_4 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_mC7C705ADFA09682AC57D5C5DBCD89664A0D1D790(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m22A145D24A0EB3AEE44E7074E7BC169B4B33F507(__this, (&V_0), NULL);
				V_1 = 0;
				V_3 = 0;
				goto IL_0028_1;
			}

IL_0010_1:
			{
				int32_t L_1 = V_1;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_2 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_2);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_4 = V_3;
				NullCheck(L_3);
				int32_t L_5 = L_4;
				int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
				if (((int64_t)L_1 + (int64_t)L_6 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_1 + (int64_t)L_6 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				V_1 = ((int32_t)il2cpp_codegen_add(L_1, L_6));
				int32_t L_7 = V_3;
				if (((int64_t)L_7 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_7 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
			}

IL_0028_1:
			{
				int32_t L_8 = V_3;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_9 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_9);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____locks;
				NullCheck(L_10);
				int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
				if ((((int32_t)L_8) < ((int32_t)L_11)))
				{
					goto IL_0010_1;
				}
			}
			{
				int32_t L_12 = V_1;
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_13;
				L_13 = Array_Empty_TisKeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8_m6D57C806A2072E9083C494D7C2C58F0A723FEBB1_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
				V_4 = L_13;
				goto IL_0063;
			}

IL_0046_1:
			{
				int32_t L_14 = V_1;
				KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_15 = (KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019*)(KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42), (uint32_t)L_14);
				V_2 = L_15;
				KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_16 = V_2;
				ConcurrentDictionary_2_CopyToPairs_m79E8AA31B59CDEDFD9B95FECBC6DA2471DBC20CB(__this, L_16, 0, NULL);
				KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_17 = V_2;
				V_4 = L_17;
				goto IL_0063;
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

IL_0063:
	{
		KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_18 = V_4;
		return L_18;
	}
}
// Method Definition Index: 11342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToPairs_m79E8AA31B59CDEDFD9B95FECBC6DA2471DBC20CB_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* V_0 = NULL;
	int32_t V_1 = 0;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_2 = NULL;
	{
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0045;
	}

IL_0012:
	{
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_003e;
	}

IL_0018:
	{
		KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_8 = V_2;
		NullCheck(L_8);
		Il2CppSharedGenericObject* L_9 = L_8->____key;
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->____value;
		KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 L_12;
		memset((&L_12), 0, sizeof(L_12));
		KeyValuePair_2__ctor_m4F2127097695B4E8FF41AB225ED0572AA9EB37FE((&L_12), L_9, L_11, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8)L_12);
		int32_t L_13 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_14 = V_2;
		NullCheck(L_14);
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_15 = L_14->____next;
		il2cpp_codegen_memory_barrier();
		V_2 = L_15;
	}

IL_003e:
	{
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_16 = V_2;
		if (L_16)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0045:
	{
		int32_t L_18 = V_1;
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToEntries_mEAF16B850007C91D63F21E452AB99CFA7FC9FA9C_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* V_0 = NULL;
	int32_t V_1 = 0;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_2 = NULL;
	{
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_004f;
	}

IL_0012:
	{
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_0048;
	}

IL_0018:
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_8 = V_2;
		NullCheck(L_8);
		Il2CppSharedGenericObject* L_9 = L_8->____key;
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->____value;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), &L_12);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_14;
		memset((&L_14), 0, sizeof(L_14));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_14), (RuntimeObject*)L_9, L_13, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_14);
		int32_t L_15 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_16 = V_2;
		NullCheck(L_16);
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_17 = L_16->____next;
		il2cpp_codegen_memory_barrier();
		V_2 = L_17;
	}

IL_0048:
	{
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_18 = V_2;
		if (L_18)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004f:
	{
		int32_t L_20 = V_1;
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToObjects_m4A46CF7F18979F96103107717172D08C27B9C706_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* V_0 = NULL;
	int32_t V_1 = 0;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_2 = NULL;
	{
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0046;
	}

IL_0012:
	{
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_003f;
	}

IL_0018:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_8 = V_2;
		NullCheck(L_8);
		Il2CppSharedGenericObject* L_9 = L_8->____key;
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->____value;
		KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 L_12;
		memset((&L_12), 0, sizeof(L_12));
		KeyValuePair_2__ctor_m4F2127097695B4E8FF41AB225ED0572AA9EB37FE((&L_12), L_9, L_11, NULL);
		KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9), &L_13);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_14);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_14);
		int32_t L_15 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_16 = V_2;
		NullCheck(L_16);
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_17 = L_16->____next;
		il2cpp_codegen_memory_barrier();
		V_2 = L_17;
	}

IL_003f:
	{
		Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_18 = V_2;
		if (L_18)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0046:
	{
		int32_t L_20 = V_1;
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m598084F53F14AFAEF7973F59CF8DE8F193034A4B_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CGetEnumeratorU3Ed__35_t7819A3D3D4C56C8F8292C680A125AB532AE363E4* L_0 = (U3CGetEnumeratorU3Ed__35_t7819A3D3D4C56C8F8292C680A125AB532AE363E4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44));
		U3CGetEnumeratorU3Ed__35__ctor_m68958F8F2ADF6B72DA5E125CC8D0798921F76264(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__35_t7819A3D3D4C56C8F8292C680A125AB532AE363E4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAddInternal_m47028041F36DC714A56315415DA923B068BDDB75_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t ___2_value, bool ___3_updateIfExists, bool ___4_acquireLock, int32_t* ___5_resultingValue, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Tables_t225149423E4AFACDB3618618F6085B88A3927091* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_5 = NULL;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_6 = NULL;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_7 = NULL;
	bool V_8 = false;

IL_0000:
	{
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_2 = L_0;
		int32_t L_1 = ___1_hashcode;
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_2 = V_2;
		NullCheck(L_2);
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_3 = L_2->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_5 = V_2;
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5->____locks;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_GetBucketAndLockNo_mFAD2F5466CE28CB22DFAF20B10CBE759593CCF95(L_1, (&V_0), (&V_1), L_4, L_7, NULL);
		V_3 = (bool)0;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_014e:
			{
				{
					bool L_8 = V_4;
					if (!L_8)
					{
						goto IL_015f;
					}
				}
				{
					Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_9 = V_2;
					NullCheck(L_9);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____locks;
					int32_t L_11 = V_1;
					NullCheck(L_10);
					int32_t L_12 = L_11;
					RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_13, NULL);
				}

IL_015f:
				{
					return;
				}
			}
		});
		try
		{
			{
				bool L_14 = ___4_acquireLock;
				if (!L_14)
				{
					goto IL_003b_1;
				}
			}
			{
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_15 = V_2;
				NullCheck(L_15);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15->____locks;
				int32_t L_17 = V_1;
				NullCheck(L_16);
				int32_t L_18 = L_17;
				RuntimeObject* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_19, (&V_4), NULL);
			}

IL_003b_1:
			{
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_20 = V_2;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_21 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_t225149423E4AFACDB3618618F6085B88A3927091*)L_20) == ((RuntimeObject*)(Tables_t225149423E4AFACDB3618618F6085B88A3927091*)L_21)))
				{
					goto IL_0048_1;
				}
			}
			{
				goto IL_0000;
			}

IL_0048_1:
			{
				V_5 = (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86*)NULL;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_22 = V_2;
				NullCheck(L_22);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_23 = L_22->____buckets;
				int32_t L_24 = V_0;
				NullCheck(L_23);
				int32_t L_25 = L_24;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
				V_6 = L_26;
				goto IL_00fd_1;
			}

IL_005a_1:
			{
				int32_t L_27 = ___1_hashcode;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_28 = V_6;
				NullCheck(L_28);
				int32_t L_29 = L_28->____hashcode;
				if ((!(((uint32_t)L_27) == ((uint32_t)L_29))))
				{
					goto IL_00ee_1;
				}
			}
			{
				RuntimeObject* L_30 = __this->____comparer;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_31 = V_6;
				NullCheck(L_31);
				Il2CppSharedGenericObject* L_32 = L_31->____key;
				Il2CppSharedGenericObject* L_33 = ___0_key;
				NullCheck(L_30);
				bool L_34;
				L_34 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_30, L_32, L_33);
				if (!L_34)
				{
					goto IL_00ee_1;
				}
			}
			{
				bool L_35 = ___3_updateIfExists;
				if (!L_35)
				{
					goto IL_00d8_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				bool L_36 = ((ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)))->___s_isValueWriteAtomic;
				if (!L_36)
				{
					goto IL_0091_1;
				}
			}
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_37 = V_6;
				int32_t L_38 = ___2_value;
				NullCheck(L_37);
				L_37->____value = L_38;
				goto IL_00ce_1;
			}

IL_0091_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_39 = V_6;
				NullCheck(L_39);
				Il2CppSharedGenericObject* L_40 = L_39->____key;
				int32_t L_41 = ___2_value;
				int32_t L_42 = ___1_hashcode;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_43 = V_6;
				NullCheck(L_43);
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_44 = L_43->____next;
				il2cpp_codegen_memory_barrier();
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_45 = (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				Node__ctor_m86BACE527640249F3448CB2E10950EEBB1360204(L_45, L_40, L_41, L_42, L_44, NULL);
				V_7 = L_45;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_46 = V_5;
				if (L_46)
				{
					goto IL_00c3_1;
				}
			}
			{
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_47 = V_2;
				NullCheck(L_47);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_48 = L_47->____buckets;
				int32_t L_49 = V_0;
				NullCheck(L_48);
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_50 = V_7;
				VolatileWrite((Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86**)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86*)L_50);
				goto IL_00ce_1;
			}

IL_00c3_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_51 = V_5;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_52 = V_7;
				NullCheck(L_51);
				il2cpp_codegen_memory_barrier();
				L_51->____next = L_52;
				Il2CppCodeGenWriteBarrier((void**)(&L_51->____next), (void*)L_52);
			}

IL_00ce_1:
			{
				int32_t* L_53 = ___5_resultingValue;
				int32_t L_54 = ___2_value;
				*(int32_t*)L_53 = L_54;
				goto IL_00e6_1;
			}

IL_00d8_1:
			{
				int32_t* L_55 = ___5_resultingValue;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_56 = V_6;
				NullCheck(L_56);
				int32_t L_57 = L_56->____value;
				*(int32_t*)L_55 = L_57;
			}

IL_00e6_1:
			{
				V_8 = (bool)0;
				goto IL_0174;
			}

IL_00ee_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_58 = V_6;
				V_5 = L_58;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_59 = V_6;
				NullCheck(L_59);
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_60 = L_59->____next;
				il2cpp_codegen_memory_barrier();
				V_6 = L_60;
			}

IL_00fd_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_61 = V_6;
				if (L_61)
				{
					goto IL_005a_1;
				}
			}
			{
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_62 = V_2;
				NullCheck(L_62);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_63 = L_62->____buckets;
				int32_t L_64 = V_0;
				NullCheck(L_63);
				Il2CppSharedGenericObject* L_65 = ___0_key;
				int32_t L_66 = ___2_value;
				int32_t L_67 = ___1_hashcode;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_68 = V_2;
				NullCheck(L_68);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_69 = L_68->____buckets;
				int32_t L_70 = V_0;
				NullCheck(L_69);
				int32_t L_71 = L_70;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_73 = (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				Node__ctor_m86BACE527640249F3448CB2E10950EEBB1360204(L_73, L_65, L_66, L_67, L_72, NULL);
				VolatileWrite((Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86**)((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64))), (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86*)L_73);
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_74 = V_2;
				NullCheck(L_74);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = L_74->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_76 = V_1;
				NullCheck(L_75);
				int32_t* L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)));
				int32_t L_78 = il2cpp_codegen_ldind<int32_t, int32_t>(L_77);
				if (((int64_t)L_78 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_78 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				il2cpp_codegen_stind<int32_t>((int32_t*)L_77, (int32_t)((int32_t)il2cpp_codegen_add(L_78, 1)));
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_79 = V_2;
				NullCheck(L_79);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = L_79->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_81 = V_1;
				NullCheck(L_80);
				int32_t L_82 = L_81;
				int32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
				int32_t L_84 = __this->____budget;
				if ((((int32_t)L_83) <= ((int32_t)L_84)))
				{
					goto IL_014c_1;
				}
			}
			{
				V_3 = (bool)1;
			}

IL_014c_1:
			{
				goto IL_0160;
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

IL_0160:
	{
		bool L_85 = V_3;
		if (!L_85)
		{
			goto IL_016a;
		}
	}
	{
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_86 = V_2;
		ConcurrentDictionary_2_GrowTable_mB0B16F1082A763B4FB5E5576DACF98801B8E3C1C(__this, L_86, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47));
	}

IL_016a:
	{
		int32_t* L_87 = ___5_resultingValue;
		int32_t L_88 = ___2_value;
		*(int32_t*)L_87 = L_88;
		return (bool)1;
	}

IL_0174:
	{
		bool L_89 = V_8;
		return L_89;
	}
}
// Method Definition Index: 11347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_get_Item_mAF39C39330FA2BF9DB3F5171B0AF2BB7D71F409D_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ConcurrentDictionary_2_TryGetValue_m7E019A9EE0362D26E1B6D4A4D199734E7A847F6A(__this, L_0, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Il2CppSharedGenericObject* L_2 = ___0_key;
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNotFoundException_mD768AD239AF359963E961066B55332C248E9302C((RuntimeObject*)L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 48));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 11348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_m9AD546977A9A4B86ADDF2D24991A64BF95D36B10_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		RuntimeObject* L_2 = __this->____comparer;
		Il2CppSharedGenericObject* L_3 = ___0_key;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_2, L_3);
		int32_t L_5 = ___1_value;
		bool L_6;
		L_6 = ConcurrentDictionary_2_TryAddInternal_m47028041F36DC714A56315415DA923B068BDDB75(__this, L_1, L_4, L_5, (bool)1, (bool)1, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return;
	}
}
// Method Definition Index: 11349
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNotFoundException_mD768AD239AF359963E961066B55332C248E9302C_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_0);
		String_t* L_2;
		L_2 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141)), L_1, NULL);
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_3 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}
}
// Method Definition Index: 11350
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_0 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_get_Count_mF15322F62F9A35376B40EADEA7424A7ACD76A5A9_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_mC7C705ADFA09682AC57D5C5DBCD89664A0D1D790(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			ConcurrentDictionary_2_AcquireAllLocks_m22A145D24A0EB3AEE44E7074E7BC169B4B33F507(__this, (&V_0), NULL);
			int32_t L_1;
			L_1 = ConcurrentDictionary_2_GetCountInternal_mC51E3131A6C8C7FDD5AC939AD79D8D12FBF4D058(__this, NULL);
			V_1 = L_1;
			goto IL_001c;
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

IL_001c:
	{
		int32_t L_2 = V_1;
		return L_2;
	}
}
// Method Definition Index: 11352
// Method Definition Index: 11353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_GetOrAdd_m6C97E36EF77BEF9E0ECE34C4310264378BF599FA_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, Func_2_t6D8CF90F987D57D84F64DDBE39D18F9BDC2E39AF* ___1_valueFactory, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Func_2_t6D8CF90F987D57D84F64DDBE39D18F9BDC2E39AF* L_1 = ___1_valueFactory;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF68BB0CB45867DA95163C2C6A4B0677DCE80DCF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		RuntimeObject* L_3 = __this->____comparer;
		Il2CppSharedGenericObject* L_4 = ___0_key;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_3, L_4);
		V_0 = L_5;
		Il2CppSharedGenericObject* L_6 = ___0_key;
		int32_t L_7 = V_0;
		bool L_8;
		L_8 = ConcurrentDictionary_2_TryGetValueInternal_m2FE098DA3563E31963BE405403A70C4577A3F08E(__this, L_6, L_7, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		Il2CppSharedGenericObject* L_9 = ___0_key;
		int32_t L_10 = V_0;
		Func_2_t6D8CF90F987D57D84F64DDBE39D18F9BDC2E39AF* L_11 = ___1_valueFactory;
		Il2CppSharedGenericObject* L_12 = ___0_key;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_mC5D09FDDF69CB207846BD8D87EEF798562622F8A_inline(L_11, L_12, NULL);
		bool L_14;
		L_14 = ConcurrentDictionary_2_TryAddInternal_m47028041F36DC714A56315415DA923B068BDDB75(__this, L_9, L_10, L_13, (bool)0, (bool)1, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// Method Definition Index: 11354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_GetOrAdd_m1F9F95D3BF6738732245F7059DD85B8CAB56587E_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		RuntimeObject* L_1 = __this->____comparer;
		Il2CppSharedGenericObject* L_2 = ___0_key;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_1, L_2);
		V_0 = L_3;
		Il2CppSharedGenericObject* L_4 = ___0_key;
		int32_t L_5 = V_0;
		bool L_6;
		L_6 = ConcurrentDictionary_2_TryGetValueInternal_m2FE098DA3563E31963BE405403A70C4577A3F08E(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		Il2CppSharedGenericObject* L_7 = ___0_key;
		int32_t L_8 = V_0;
		int32_t L_9 = ___1_value;
		bool L_10;
		L_10 = ConcurrentDictionary_2_TryAddInternal_m47028041F36DC714A56315415DA923B068BDDB75(__this, L_7, L_8, L_9, (bool)0, (bool)1, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
	}

IL_0034:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// Method Definition Index: 11355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_AddOrUpdate_mC8E78956009E3CB0EABE97C7C4334C46AEA1129B_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, Func_2_t6D8CF90F987D57D84F64DDBE39D18F9BDC2E39AF* ___1_addValueFactory, Func_3_t9E3CBC04411CC1249EB8AD7578E5997AA9EDE6BC* ___2_updateValueFactory, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Func_2_t6D8CF90F987D57D84F64DDBE39D18F9BDC2E39AF* L_1 = ___1_addValueFactory;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FBDA15AB716B63A3A92B84F7B26A1A374DA894D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		Func_3_t9E3CBC04411CC1249EB8AD7578E5997AA9EDE6BC* L_3 = ___2_updateValueFactory;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0524F47F7868CF019B9EC023CC6808DAB5BE2221)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0029:
	{
		RuntimeObject* L_5 = __this->____comparer;
		Il2CppSharedGenericObject* L_6 = ___0_key;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_5, L_6);
		V_0 = L_7;
	}

IL_0036:
	{
		Il2CppSharedGenericObject* L_8 = ___0_key;
		int32_t L_9 = V_0;
		bool L_10;
		L_10 = ConcurrentDictionary_2_TryGetValueInternal_m2FE098DA3563E31963BE405403A70C4577A3F08E(__this, L_8, L_9, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		Func_3_t9E3CBC04411CC1249EB8AD7578E5997AA9EDE6BC* L_11 = ___2_updateValueFactory;
		Il2CppSharedGenericObject* L_12 = ___0_key;
		int32_t L_13 = V_1;
		NullCheck(L_11);
		int32_t L_14;
		L_14 = Func_3_Invoke_m8767CBB7E9036B260BE8696BF49C389180299A0C_inline(L_11, L_12, L_13, NULL);
		V_2 = L_14;
		Il2CppSharedGenericObject* L_15 = ___0_key;
		int32_t L_16 = V_0;
		int32_t L_17 = V_2;
		int32_t L_18 = V_1;
		bool L_19;
		L_19 = ConcurrentDictionary_2_TryUpdateInternal_m997C4BC8B4CD0BD04F4072BDAF7D59E865A5042E(__this, L_15, L_16, L_17, L_18, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 52));
		if (!L_19)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_20 = V_2;
		return L_20;
	}

IL_0059:
	{
		Il2CppSharedGenericObject* L_21 = ___0_key;
		int32_t L_22 = V_0;
		Func_2_t6D8CF90F987D57D84F64DDBE39D18F9BDC2E39AF* L_23 = ___1_addValueFactory;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_23);
		int32_t L_25;
		L_25 = Func_2_Invoke_mC5D09FDDF69CB207846BD8D87EEF798562622F8A_inline(L_23, L_24, NULL);
		bool L_26;
		L_26 = ConcurrentDictionary_2_TryAddInternal_m47028041F36DC714A56315415DA923B068BDDB75(__this, L_21, L_22, L_25, (bool)0, (bool)1, (&V_3), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		if (!L_26)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_27 = V_3;
		return L_27;
	}
}
// Method Definition Index: 11356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_mD60356D0053BB76A604C66A8C68BA7A1FDF0689D_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryAdd_m89DC7B3FDFFCAB4A93BC81928B86813DF75902CB(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC38D57307791EED2AD28D35927B9E90B23E6281D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0015:
	{
		return;
	}
}
// Method Definition Index: 11357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_mA7AD68500210A18166424FA74F76E7C862076D0A_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ConcurrentDictionary_2_TryRemove_m026A3AAE9C0EBF6AE4E32608BF7A384B8BFC2F80(__this, L_0, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 54));
		return L_1;
	}
}
// Method Definition Index: 11358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_get_Keys_m44A8ED04D0C6376A1722D7A546396DC62AB25998_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_0;
		L_0 = ConcurrentDictionary_2_GetKeys_m209CDE9C3E51619CCA18E4396836D4593F201BBE(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m2026784F692BC600B78587D8CE088FFBCB448551_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_0;
		L_0 = ConcurrentDictionary_2_GetKeys_m209CDE9C3E51619CCA18E4396836D4593F201BBE(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_get_Values_m6F8594830E2A41055225B6D1F9F041700D735F71_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* L_0;
		L_0 = ConcurrentDictionary_2_GetValues_m9F4AD1555C1FFF1E9D1429E71027D431D19C1877(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return L_0;
	}
}
// Method Definition Index: 11361
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m6AEF255F504E5BA7A8934DBA964F26F46D2C4F1C_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* L_0;
		L_0 = ConcurrentDictionary_2_GetValues_m9F4AD1555C1FFF1E9D1429E71027D431D19C1877(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return L_0;
	}
}
// Method Definition Index: 11362
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m53EA29FFAEA786157145EEF2CF03B45C1B176504_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mAB9D8A9DFA29977A417398BB6B906B46654CBA55_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_mC4FA6226F7C3B5DA7FF94EB9C869DA45A2802D71_inline((&___0_keyValuePair), NULL);
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker2< Il2CppSharedGenericObject*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 57), (RuntimeObject*)__this, L_0, L_1);
		return;
	}
}
// Method Definition Index: 11363
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mD515359C65BFB2B65E6794D3A8AD3B9F5698E96C_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mAB9D8A9DFA29977A417398BB6B906B46654CBA55_inline((&___0_keyValuePair), NULL);
		bool L_1;
		L_1 = ConcurrentDictionary_2_TryGetValue_m7E019A9EE0362D26E1B6D4A4D199734E7A847F6A(__this, L_0, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = KeyValuePair_2_get_Value_mC4FA6226F7C3B5DA7FF94EB9C869DA45A2802D71_inline((&___0_keyValuePair), NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_2, L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 11364
// Method Definition Index: 11365
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m53A5CBF92969DBFCA558A488737E7999E71733D6_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mAB9D8A9DFA29977A417398BB6B906B46654CBA55_inline((&___0_keyValuePair), NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral561DA6E332E7EF45E52D96B07EC786D85C2955BE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral020F27A067D9C2A1BC9628BCE378DE63A6F2B5BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_001e:
	{
		Il2CppSharedGenericObject* L_2;
		L_2 = KeyValuePair_2_get_Key_mAB9D8A9DFA29977A417398BB6B906B46654CBA55_inline((&___0_keyValuePair), NULL);
		int32_t L_3;
		L_3 = KeyValuePair_2_get_Value_mC4FA6226F7C3B5DA7FF94EB9C869DA45A2802D71_inline((&___0_keyValuePair), NULL);
		bool L_4;
		L_4 = ConcurrentDictionary_2_TryRemoveInternal_mB7B4E980DB8A1591D4D5E85EE99FFDCF4FB7D019(__this, L_2, (&V_0), (bool)1, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return L_4;
	}
}
// Method Definition Index: 11366
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IEnumerable_GetEnumerator_m408B9EF1D11843BA12879097FFB180AD27E5ED1F_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0;
		L_0 = ConcurrentDictionary_2_GetEnumerator_m598084F53F14AFAEF7973F59CF8DE8F193034A4B(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 59));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_IDictionary_Add_m0663BB5ACB98495ED6E1A5A88D9F265D804557BA_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD8CE285C77CDFBCDCBA338A795AFF019E6C3B66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
	}
	try
	{
		RuntimeObject* L_3 = ___1_value;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20D029102A70CD96274496928ED59E8B9C014BBA)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		RuntimeObject* L_6 = ___0_key;
		int32_t L_7 = V_0;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker2< Il2CppSharedGenericObject*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 57), (RuntimeObject*)__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), L_7);
		return;
	}
}
// Method Definition Index: 11368
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_IDictionary_Contains_m4008CE6F5B2A47CABCD35C3BE224E3CADCF0723A_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (!((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ConcurrentDictionary_2_ContainsKey_m3AA301DB0582E411B1CB4B3F0F7B600745FDDCC4(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 60));
		return L_3;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_GetEnumerator_m2C8C30EA4A379DD8F272205A7F4A7BDA9F9CCB25_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		DictionaryEnumerator_t5A953A6FFD4345BBC36BC3F2227965951306073A* L_0 = (DictionaryEnumerator_t5A953A6FFD4345BBC36BC3F2227965951306073A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 61));
		DictionaryEnumerator__ctor_m48F413E9933FD4C05833ED05C7E6BD35D8C0A5A2(L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 62));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11370
// Method Definition Index: 11371
// Method Definition Index: 11372
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_get_Keys_mAED8962EB5D6F35ED3DFA140A576D8A154AE9FCD_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_0;
		L_0 = ConcurrentDictionary_2_GetKeys_m209CDE9C3E51619CCA18E4396836D4593F201BBE(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_IDictionary_Remove_m442CCDCD83F8FA98B98461EFF1D28B41DC3EC60D_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (!((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryRemove_m026A3AAE9C0EBF6AE4E32608BF7A384B8BFC2F80(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 54));
	}

IL_001f:
	{
		return;
	}
}
// Method Definition Index: 11374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_get_Values_m8030E3DB39EDCB4E6357D6D1CFFF1515F35100BF_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* L_0;
		L_0 = ConcurrentDictionary_2_GetValues_m9F4AD1555C1FFF1E9D1429E71027D431D19C1877(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return L_0;
	}
}
// Method Definition Index: 11375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_get_Item_m332A156263784BE77B240D2EE3E3E3D2470FBD70_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (!((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryGetValue_m7E019A9EE0362D26E1B6D4A4D199734E7A847F6A(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), &L_5);
		return L_6;
	}

IL_0027:
	{
		return NULL;
	}
}
// Method Definition Index: 11376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_IDictionary_set_Item_mF22A7A8A33B5509291A3D88AB09B9D1BEBECE99D_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m36A21CD72BCB267FBF6C3B885A6984EB8D0BE40B(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD8CE285C77CDFBCDCBA338A795AFF019E6C3B66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		RuntimeObject* L_3 = ___1_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20D029102A70CD96274496928ED59E8B9C014BBA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_002e:
	{
		RuntimeObject* L_5 = ___0_key;
		RuntimeObject* L_6 = ___1_value;
		ConcurrentDictionary_2_set_Item_m9AD546977A9A4B86ADDF2D24991A64BF95D36B10(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), ((*(int32_t*)UnBox(L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 63));
		return;
	}
}
// Method Definition Index: 11377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_ICollection_CopyTo_mF79307C8EF5D2AA0F0DCC090D81BBD1969C9C8B0_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Tables_t225149423E4AFACDB3618618F6085B88A3927091* V_1 = NULL;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* V_3 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;
	int32_t V_6 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
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
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0D86565E49BD212E7AC64BABD33BE3668A4C45B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cc:
			{
				int32_t L_4 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_mC7C705ADFA09682AC57D5C5DBCD89664A0D1D790(__this, 0, L_4, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m22A145D24A0EB3AEE44E7074E7BC169B4B33F507(__this, (&V_0), NULL);
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_5 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				V_1 = L_5;
				V_2 = 0;
				V_6 = 0;
				goto IL_0050_1;
			}

IL_003c_1:
			{
				int32_t L_6 = V_2;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_7 = V_1;
				NullCheck(L_7);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_9 = V_6;
				NullCheck(L_8);
				int32_t L_10 = L_9;
				int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				V_2 = ((int32_t)il2cpp_codegen_add(L_6, L_11));
				int32_t L_12 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			}

IL_0050_1:
			{
				int32_t L_13 = V_6;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_14 = V_1;
				NullCheck(L_14);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14->____locks;
				NullCheck(L_15);
				int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
				if ((((int32_t)L_13) >= ((int32_t)L_16)))
				{
					goto IL_0060_1;
				}
			}
			{
				int32_t L_17 = V_2;
				if ((((int32_t)L_17) >= ((int32_t)0)))
				{
					goto IL_003c_1;
				}
			}

IL_0060_1:
			{
				RuntimeArray* L_18 = ___0_array;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = il2cpp_codegen_array_get_length(L_18);
				int32_t L_20 = V_2;
				int32_t L_21 = ___1_index;
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_19, L_20))) < ((int32_t)L_21)))
				{
					goto IL_006f_1;
				}
			}
			{
				int32_t L_22 = V_2;
				if ((((int32_t)L_22) >= ((int32_t)0)))
				{
					goto IL_007a_1;
				}
			}

IL_006f_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral672E993A9AD93822B712B165C6987759C6DED80B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
			}

IL_007a_1:
			{
				RuntimeArray* L_24 = ___0_array;
				V_3 = ((KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019*)IsInstSealed((RuntimeObject*)L_24, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42)));
				KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_25 = V_3;
				if (!L_25)
				{
					goto IL_008e_1;
				}
			}
			{
				KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_26 = V_3;
				int32_t L_27 = ___1_index;
				ConcurrentDictionary_2_CopyToPairs_m79E8AA31B59CDEDFD9B95FECBC6DA2471DBC20CB(__this, L_26, L_27, NULL);
				goto IL_00d5;
			}

IL_008e_1:
			{
				RuntimeArray* L_28 = ___0_array;
				V_4 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_28, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
				DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_29 = V_4;
				if (!L_29)
				{
					goto IL_00a5_1;
				}
			}
			{
				DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_30 = V_4;
				int32_t L_31 = ___1_index;
				ConcurrentDictionary_2_CopyToEntries_mEAF16B850007C91D63F21E452AB99CFA7FC9FA9C(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 64));
				goto IL_00d5;
			}

IL_00a5_1:
			{
				RuntimeArray* L_32 = ___0_array;
				V_5 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_32, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = V_5;
				if (!L_33)
				{
					goto IL_00bc_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = V_5;
				int32_t L_35 = ___1_index;
				ConcurrentDictionary_2_CopyToObjects_m4A46CF7F18979F96103107717172D08C27B9C706(__this, L_34, L_35, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 65));
				goto IL_00d5;
			}

IL_00bc_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_36 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA05D9DA01CB9AD0AA6BE899FE1E39018B72923DB)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, method);
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

IL_00d5:
	{
		return;
	}
}
// Method Definition Index: 11378
// Method Definition Index: 11379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_ICollection_get_SyncRoot_mA148AE3683B73063DA9A4E35B2E0A96CE575FB00_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4CC02BED909F9630E59013E4804C6C269FF8370A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_GrowTable_mB0B16F1082A763B4FB5E5576DACF98801B8E3C1C_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, Tables_t225149423E4AFACDB3618618F6085B88A3927091* ___0_tables, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01fd:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_mC7C705ADFA09682AC57D5C5DBCD89664A0D1D790(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireLocks_mEB2E2CA8310606BF38B28F2614A1CE40D94647D6(__this, 0, 1, (&V_0), NULL);
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_1 = ___0_tables;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_2 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_t225149423E4AFACDB3618618F6085B88A3927091*)L_1) == ((RuntimeObject*)(Tables_t225149423E4AFACDB3618618F6085B88A3927091*)L_2)))
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0206;
			}

IL_001c_1:
			{
				int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
				V_1 = L_3;
				V_7 = 0;
				goto IL_0039_1;
			}

IL_0024_1:
			{
				int64_t L_4 = V_1;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_5 = ___0_tables;
				NullCheck(L_5);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_7 = V_7;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
				V_1 = ((int64_t)il2cpp_codegen_add(L_4, L_10));
				int32_t L_11 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			}

IL_0039_1:
			{
				int32_t L_12 = V_7;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_13 = ___0_tables;
				NullCheck(L_13);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->____countPerLock;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_14);
				int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
				if ((((int32_t)L_12) < ((int32_t)L_15)))
				{
					goto IL_0024_1;
				}
			}
			{
				int64_t L_16 = V_1;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_17 = ___0_tables;
				NullCheck(L_17);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_18 = L_17->____buckets;
				NullCheck(L_18);
				int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
				int64_t L_20 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)(L_19/4)),NULL));
				if ((((int64_t)L_16) >= ((int64_t)L_20)))
				{
					goto IL_007c_1;
				}
			}
			{
				int32_t L_21 = __this->____budget;
				__this->____budget = ((int32_t)il2cpp_codegen_multiply(2, L_21));
				int32_t L_22 = __this->____budget;
				if ((((int32_t)L_22) >= ((int32_t)0)))
				{
					goto IL_0077_1;
				}
			}
			{
				__this->____budget = ((int32_t)2147483647LL);
			}

IL_0077_1:
			{
				goto IL_0206;
			}

IL_007c_1:
			{
				V_2 = 0;
				V_3 = (bool)0;
			}
			try
			{
				{
					Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_23 = ___0_tables;
					NullCheck(L_23);
					NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_24 = L_23->____buckets;
					NullCheck(L_24);
					int32_t L_25 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_24)->max_length),NULL));
					if (((int64_t)L_25 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_25 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_25, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_25, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_25, 2)), 1));
					goto IL_0093_2;
				}

IL_008f_2:
				{
					int32_t L_26 = V_2;
					if (((int64_t)L_26 + (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_26 + (int64_t)2 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					V_2 = ((int32_t)il2cpp_codegen_add(L_26, 2));
				}

IL_0093_2:
				{
					int32_t L_27 = V_2;
					if (!((int32_t)(L_27%3)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_28 = V_2;
					if (!((int32_t)(L_28%5)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_29 = V_2;
					if (!((int32_t)(L_29%7)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_30 = V_2;
					if ((((int32_t)L_30) <= ((int32_t)((int32_t)2146435071))))
					{
						goto IL_00ac_2;
					}
				}
				{
					V_3 = (bool)1;
				}

IL_00ac_2:
				{
					goto IL_00b3_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00ae_1;
				}
				throw e;
			}

CATCH_00ae_1:
			{
				OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_31 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));;
				V_3 = (bool)1;
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_00b3_1;
			}

IL_00b3_1:
			{
				bool L_32 = V_3;
				if (!L_32)
				{
					goto IL_00c7_1;
				}
			}
			{
				V_2 = ((int32_t)2146435071);
				__this->____budget = ((int32_t)2147483647LL);
			}

IL_00c7_1:
			{
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_33 = ___0_tables;
				NullCheck(L_33);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_33->____locks;
				NullCheck(L_34);
				int32_t L_35 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_34)->max_length),NULL));
				ConcurrentDictionary_2_AcquireLocks_mEB2E2CA8310606BF38B28F2614A1CE40D94647D6(__this, 1, L_35, (&V_0), NULL);
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_36 = ___0_tables;
				NullCheck(L_36);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_36->____locks;
				V_4 = L_37;
				bool L_38 = __this->____growLockArray;
				if (!L_38)
				{
					goto IL_0143_1;
				}
			}
			{
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_39 = ___0_tables;
				NullCheck(L_39);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_39->____locks;
				NullCheck(L_40);
				int32_t L_41 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_40)->max_length),NULL));
				if ((((int32_t)L_41) >= ((int32_t)((int32_t)1024))))
				{
					goto IL_0143_1;
				}
			}
			{
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_42 = ___0_tables;
				NullCheck(L_42);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_42->____locks;
				NullCheck(L_43);
				int32_t L_44 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_43)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_44, 2)));
				V_4 = L_45;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_46 = ___0_tables;
				NullCheck(L_46);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = L_46->____locks;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = V_4;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_49 = ___0_tables;
				NullCheck(L_49);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_49->____locks;
				NullCheck(L_50);
				int32_t L_51 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_50)->max_length),NULL));
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_47, 0, (RuntimeArray*)L_48, 0, L_51, NULL);
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_52 = ___0_tables;
				NullCheck(L_52);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = L_52->____locks;
				NullCheck(L_53);
				int32_t L_54 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_53)->max_length),NULL));
				V_8 = L_54;
				goto IL_013b_1;
			}

IL_012b_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = V_4;
				int32_t L_56 = V_8;
				RuntimeObject* L_57 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
				Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_57, NULL);
				NullCheck(L_55);
				ArrayElementTypeCheck (L_55, L_57);
				(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (RuntimeObject*)L_57);
				int32_t L_58 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_58, 1));
			}

IL_013b_1:
			{
				int32_t L_59 = V_8;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = V_4;
				NullCheck(L_60);
				int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
				if ((((int32_t)L_59) < ((int32_t)L_61)))
				{
					goto IL_012b_1;
				}
			}

IL_0143_1:
			{
				int32_t L_62 = V_2;
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_63 = (NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218*)(NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_62);
				V_5 = L_63;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = V_4;
				NullCheck(L_64);
				int32_t L_65 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_64)->max_length),NULL));
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_65);
				V_6 = L_66;
				V_9 = 0;
				goto IL_01c7_1;
			}

IL_015b_1:
			{
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_67 = ___0_tables;
				NullCheck(L_67);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_68 = L_67->____buckets;
				int32_t L_69 = V_9;
				NullCheck(L_68);
				int32_t L_70 = L_69;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
				V_10 = L_71;
				goto IL_01bd_1;
			}

IL_0168_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_72 = V_10;
				NullCheck(L_72);
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_73 = L_72->____next;
				il2cpp_codegen_memory_barrier();
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_74 = V_10;
				NullCheck(L_74);
				int32_t L_75 = L_74->____hashcode;
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_76 = V_5;
				NullCheck(L_76);
				int32_t L_77 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_76)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = V_4;
				NullCheck(L_78);
				int32_t L_79 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_78)->max_length),NULL));
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				ConcurrentDictionary_2_GetBucketAndLockNo_mFAD2F5466CE28CB22DFAF20B10CBE759593CCF95(L_75, (&V_11), (&V_12), L_77, L_79, NULL);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_80 = V_5;
				int32_t L_81 = V_11;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_82 = V_10;
				NullCheck(L_82);
				Il2CppSharedGenericObject* L_83 = L_82->____key;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_84 = V_10;
				NullCheck(L_84);
				int32_t L_85 = L_84->____value;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_86 = V_10;
				NullCheck(L_86);
				int32_t L_87 = L_86->____hashcode;
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_88 = V_5;
				int32_t L_89 = V_11;
				NullCheck(L_88);
				int32_t L_90 = L_89;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_92 = (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				Node__ctor_m86BACE527640249F3448CB2E10950EEBB1360204(L_92, L_83, L_85, L_87, L_91, NULL);
				NullCheck(L_80);
				(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86*)L_92);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_6;
				int32_t L_94 = V_12;
				NullCheck(L_93);
				int32_t* L_95 = ((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94)));
				int32_t L_96 = il2cpp_codegen_ldind<int32_t, int32_t>(L_95);
				if (((int64_t)L_96 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_96 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				il2cpp_codegen_stind<int32_t>((int32_t*)L_95, (int32_t)((int32_t)il2cpp_codegen_add(L_96, 1)));
				V_10 = L_73;
			}

IL_01bd_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_97 = V_10;
				if (L_97)
				{
					goto IL_0168_1;
				}
			}
			{
				int32_t L_98 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_98, 1));
			}

IL_01c7_1:
			{
				int32_t L_99 = V_9;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_100 = ___0_tables;
				NullCheck(L_100);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_101 = L_100->____buckets;
				NullCheck(L_101);
				int32_t L_102 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_101)->max_length),NULL));
				if ((((int32_t)L_99) < ((int32_t)L_102)))
				{
					goto IL_015b_1;
				}
			}
			{
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_103 = V_5;
				NullCheck(L_103);
				int32_t L_104 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_103)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_105 = V_4;
				NullCheck(L_105);
				int32_t L_106 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_105)->max_length),NULL));
				CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_107;
				L_107 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, ((int32_t)(L_104/L_106)), NULL);
				__this->____budget = L_107;
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_108 = V_5;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_109 = V_4;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_6;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_111 = (Tables_t225149423E4AFACDB3618618F6085B88A3927091*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
				Tables__ctor_mAE650FF1AB0EAA46497A1113A52723F35471BD5D(L_111, L_108, L_109, L_110, NULL);
				il2cpp_codegen_memory_barrier();
				__this->____tables = L_111;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_111);
				goto IL_0206;
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

IL_0206:
	{
		return;
	}
}
// Method Definition Index: 11381
// Method Definition Index: 11382
// Method Definition Index: 11383
// Method Definition Index: 11384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_AcquireAllLocks_m22A145D24A0EB3AEE44E7074E7BC169B4B33F507_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, int32_t* ___0_locksAcquired, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit,(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* L_0 = ((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log;
		NullCheck(L_0);
		bool L_1;
		L_1 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		CHECKED_LOCAL_INIT(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit,(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* L_2 = ((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log;
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_3 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_3);
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		NullCheck(L_2);
		CDSCollectionETWBCLProvider_ConcurrentDictionary_AcquiringAllLocks_mF33BBE9D19970C7F3C3DB3C0F6BCF16BEEC26EFA(L_2, L_5, NULL);
	}

IL_0025:
	{
		int32_t* L_6 = ___0_locksAcquired;
		ConcurrentDictionary_2_AcquireLocks_mEB2E2CA8310606BF38B28F2614A1CE40D94647D6(__this, 0, 1, L_6, NULL);
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_7 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7->____locks;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t* L_10 = ___0_locksAcquired;
		ConcurrentDictionary_2_AcquireLocks_mEB2E2CA8310606BF38B28F2614A1CE40D94647D6(__this, 1, L_9, L_10, NULL);
		return;
	}
}
// Method Definition Index: 11385
// Method Definition Index: 11386
// Method Definition Index: 11387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* ConcurrentDictionary_2_GetKeys_m209CDE9C3E51619CCA18E4396836D4593F201BBE_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* V_1 = NULL;
	int32_t V_2 = 0;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_3 = NULL;
	ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* V_4 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_mC7C705ADFA09682AC57D5C5DBCD89664A0D1D790(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m22A145D24A0EB3AEE44E7074E7BC169B4B33F507(__this, (&V_0), NULL);
				int32_t L_1;
				L_1 = ConcurrentDictionary_2_GetCountInternal_mC51E3131A6C8C7FDD5AC939AD79D8D12FBF4D058(__this, NULL);
				int32_t L_2 = L_1;
				if ((((int32_t)L_2) >= ((int32_t)0)))
				{
					G_B3_0 = L_2;
					goto IL_001a_1;
				}
				G_B2_0 = L_2;
			}
			{
				OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_3 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)));
				OutOfMemoryException__ctor_m2CDADA05A6304090686E8D5E3E99A1596FAF5951(L_3, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
			}

IL_001a_1:
			{
				List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_4 = (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 67));
				List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516(L_4, G_B3_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 68));
				V_1 = L_4;
				V_2 = 0;
				goto IL_0052_1;
			}

IL_0024_1:
			{
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_5 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_5);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_6 = L_5->____buckets;
				int32_t L_7 = V_2;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				V_3 = L_9;
				goto IL_004b_1;
			}

IL_0036_1:
			{
				List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_10 = V_1;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_11 = V_3;
				NullCheck(L_11);
				Il2CppSharedGenericObject* L_12 = L_11->____key;
				NullCheck(L_10);
				List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_10, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 69));
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_13 = V_3;
				NullCheck(L_13);
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_14 = L_13->____next;
				il2cpp_codegen_memory_barrier();
				V_3 = L_14;
			}

IL_004b_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_15 = V_3;
				if (L_15)
				{
					goto IL_0036_1;
				}
			}
			{
				int32_t L_16 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0052_1:
			{
				int32_t L_17 = V_2;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_18 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_18);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_19 = L_18->____buckets;
				NullCheck(L_19);
				int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
				if ((((int32_t)L_17) < ((int32_t)L_20)))
				{
					goto IL_0024_1;
				}
			}
			{
				List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_21 = V_1;
				ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_22 = (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 70));
				ReadOnlyCollection_1__ctor_mC1890FAC00703F47A655C35CBCB613C74A811580(L_22, (RuntimeObject*)L_21, NULL);
				V_4 = L_22;
				goto IL_0077;
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

IL_0077:
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_23 = V_4;
		return L_23;
	}
}
// Method Definition Index: 11388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* ConcurrentDictionary_2_GetValues_m9F4AD1555C1FFF1E9D1429E71027D431D19C1877_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_1 = NULL;
	int32_t V_2 = 0;
	Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* V_3 = NULL;
	ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* V_4 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_mC7C705ADFA09682AC57D5C5DBCD89664A0D1D790(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m22A145D24A0EB3AEE44E7074E7BC169B4B33F507(__this, (&V_0), NULL);
				int32_t L_1;
				L_1 = ConcurrentDictionary_2_GetCountInternal_mC51E3131A6C8C7FDD5AC939AD79D8D12FBF4D058(__this, NULL);
				int32_t L_2 = L_1;
				if ((((int32_t)L_2) >= ((int32_t)0)))
				{
					G_B3_0 = L_2;
					goto IL_001a_1;
				}
				G_B2_0 = L_2;
			}
			{
				OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_3 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)));
				OutOfMemoryException__ctor_m2CDADA05A6304090686E8D5E3E99A1596FAF5951(L_3, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
			}

IL_001a_1:
			{
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 72));
				List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_4, G_B3_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 73));
				V_1 = L_4;
				V_2 = 0;
				goto IL_0052_1;
			}

IL_0024_1:
			{
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_5 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_5);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_6 = L_5->____buckets;
				int32_t L_7 = V_2;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				V_3 = L_9;
				goto IL_004b_1;
			}

IL_0036_1:
			{
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = V_1;
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_11 = V_3;
				NullCheck(L_11);
				int32_t L_12 = L_11->____value;
				NullCheck(L_10);
				List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_10, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 74));
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_13 = V_3;
				NullCheck(L_13);
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_14 = L_13->____next;
				il2cpp_codegen_memory_barrier();
				V_3 = L_14;
			}

IL_004b_1:
			{
				Node_t84E9ADF12BB638BE3004EAB90FDB0BCFEFF9DE86* L_15 = V_3;
				if (L_15)
				{
					goto IL_0036_1;
				}
			}
			{
				int32_t L_16 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0052_1:
			{
				int32_t L_17 = V_2;
				Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_18 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_18);
				NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_19 = L_18->____buckets;
				NullCheck(L_19);
				int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
				if ((((int32_t)L_17) < ((int32_t)L_20)))
				{
					goto IL_0024_1;
				}
			}
			{
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_21 = V_1;
				ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* L_22 = (ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 75));
				ReadOnlyCollection_1__ctor_mD41819F73F264B50313DE018DC19E0428FC120E5(L_22, L_21, NULL);
				V_4 = L_22;
				goto IL_0077;
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

IL_0077:
	{
		ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* L_23 = V_4;
		return L_23;
	}
}
// Method Definition Index: 11389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_OnSerializing_m04460B684D7C001C6E3033631F4168971706AA45_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___0_context, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Tables_t225149423E4AFACDB3618618F6085B88A3927091* V_0 = NULL;
	{
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_1;
		L_1 = ConcurrentDictionary_2_ToArray_m99D847F36029B9C33184D41474BDBB2F180D7FB5(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 77));
		__this->____serializationArray = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationArray), (void*)L_1);
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_2 = V_0;
		NullCheck(L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2->____locks;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		__this->____serializationConcurrencyLevel = L_4;
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_5 = V_0;
		NullCheck(L_5);
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_6 = L_5->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____serializationCapacity = L_7;
		return;
	}
}
// Method Definition Index: 11390
// Method Definition Index: 11391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_OnDeserialized_m4D7AA07337B9878BF99872C2C712595CD5603938_gshared (ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* V_0 = NULL;
	NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	{
		KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_0 = __this->____serializationArray;
		V_0 = L_0;
		int32_t L_1 = __this->____serializationCapacity;
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_2 = (NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218*)(NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_1);
		V_1 = L_2;
		int32_t L_3 = __this->____serializationConcurrencyLevel;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		int32_t L_5 = __this->____serializationConcurrencyLevel;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_3 = L_6;
		V_4 = 0;
		goto IL_003f;
	}

IL_0030:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_3;
		int32_t L_8 = V_4;
		RuntimeObject* L_9 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_9, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003f:
	{
		int32_t L_11 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_3;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0030;
		}
	}
	{
		NodeU5BU5D_tAA5578FC781A48B32CF873CCBD3EF2862A11E218* L_14 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_2;
		Tables_t225149423E4AFACDB3618618F6085B88A3927091* L_17 = (Tables_t225149423E4AFACDB3618618F6085B88A3927091*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		Tables__ctor_mAE650FF1AB0EAA46497A1113A52723F35471BD5D(L_17, L_14, L_15, L_16, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____tables = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_17);
		KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_18 = V_0;
		ConcurrentDictionary_2_InitializeFromCollection_m75237D10A402939DAE7CE946742351FAFC1B6D1B(__this, (RuntimeObject*)L_18, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 78));
		__this->____serializationArray = (KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationArray), (void*)(KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019*)NULL);
		return;
	}
}
// Method Definition Index: 11392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__cctor_mD48AD2B9EB69B89DF7653A61FB7A08C3A8CB9991_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ConcurrentDictionary_2_IsValueWriteAtomic_m51FA13B470F75167DC4F2BFDEB03DCA4ED2E3690(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 79));
		((ConcurrentDictionary_2_t0F34C60B6FFA07E485B27B498797ABF48756A4D9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)))->___s_isValueWriteAtomic = L_0;
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
// Method Definition Index: 11327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_IsValueWriteAtomic_m74689C9F03BF8A0F241A531E8FEADC3F638A093E_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)1;
	}

IL_0015:
	{
		Type_t* L_4 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466(L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 3)))
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0056;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_0056;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0056;
			}
			case 7:
			{
				goto IL_0056;
			}
			case 8:
			{
				goto IL_0058;
			}
			case 9:
			{
				goto IL_0058;
			}
			case 10:
			{
				goto IL_0056;
			}
			case 11:
			{
				goto IL_0058;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0056:
	{
		return (bool)1;
	}

IL_0058:
	{
		int32_t L_7;
		L_7 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		return (bool)((((int32_t)L_7) == ((int32_t)8))? 1 : 0);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_mD200862D8A2F30B6A873A02563E3EA5FBC4C1AE4_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0;
		L_0 = ConcurrentDictionary_2_get_DefaultConcurrencyLevel_m9903CA8C87B5C3ADEF97598A89045BB4040811DF(NULL);
		ConcurrentDictionary_2__ctor_m30CD397A2CCA91BD4FB6FA95D23859849A4780A1(__this, L_0, ((int32_t)31), (bool)1, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		return;
	}
}
// Method Definition Index: 11329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m0F86F8B5A12ED1D1217E94F2390E5B0221CDA0B8_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0;
		L_0 = ConcurrentDictionary_2_get_DefaultConcurrencyLevel_m9903CA8C87B5C3ADEF97598A89045BB4040811DF(NULL);
		RuntimeObject* L_1 = ___0_comparer;
		ConcurrentDictionary_2__ctor_m30CD397A2CCA91BD4FB6FA95D23859849A4780A1(__this, L_0, ((int32_t)31), (bool)1, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		return;
	}
}
// Method Definition Index: 11330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_InitializeFromCollection_m300BC020F3C4DC3DE6AA37038EC6BDDA424BECE7_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_collection;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 5), L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_1;
				NullCheck(L_4);
				KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_4);
				V_2 = L_5;
				Il2CppSharedGenericObject* L_6;
				L_6 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&V_2), NULL);
				if (L_6)
				{
					goto IL_0023_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_0023_1:
			{
				Il2CppSharedGenericObject* L_7;
				L_7 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&V_2), NULL);
				RuntimeObject* L_8 = __this->____comparer;
				Il2CppSharedGenericObject* L_9;
				L_9 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&V_2), NULL);
				NullCheck(L_8);
				int32_t L_10;
				L_10 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_8, L_9);
				Il2CppSharedGenericObject* L_11;
				L_11 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline((&V_2), NULL);
				bool L_12;
				L_12 = ConcurrentDictionary_2_TryAddInternal_m90C1E37EDE7223697AE4DF6F298CF69E939B6414(__this, L_7, L_10, L_11, (bool)0, (bool)0, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
				if (L_12)
				{
					goto IL_005a_1;
				}
			}
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEC0CC039753090F0DDDF2727802FC6E1570B317B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
			}

IL_005a_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck((RuntimeObject*)L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
				if (L_15)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_006e;
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

IL_006e:
	{
		int32_t L_16 = __this->____budget;
		if (L_16)
		{
			goto IL_009b;
		}
	}
	{
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_17 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_17);
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_18 = L_17->____buckets;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_20 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20->____locks;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		__this->____budget = ((int32_t)(L_19/L_22));
	}

IL_009b:
	{
		return;
	}
}
// Method Definition Index: 11331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m30CD397A2CCA91BD4FB6FA95D23859849A4780A1_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, int32_t ___0_concurrencyLevel, int32_t ___1_capacity, bool ___2_growLockArray, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* G_B11_0 = NULL;
	ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* G_B11_1 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* G_B10_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_concurrencyLevel;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF10EFAF6473141D13A05C1B850DEF40E641A918)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68445D6E030501243B18C07E57CF1AE5C1C5AAF2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_001a:
	{
		int32_t L_2 = ___1_capacity;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE59C400B29D20EE4CB5A86E1F46ED782D7872D43)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_002e:
	{
		int32_t L_4 = ___1_capacity;
		int32_t L_5 = ___0_concurrencyLevel;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_6 = ___0_concurrencyLevel;
		___1_capacity = L_6;
	}

IL_0035:
	{
		int32_t L_7 = ___0_concurrencyLevel;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_0 = L_8;
		V_3 = 0;
		goto IL_004c;
	}

IL_0040:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		int32_t L_10 = V_3;
		RuntimeObject* L_11 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_11, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (RuntimeObject*)L_11);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004c:
	{
		int32_t L_13 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0040;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_1 = L_18;
		int32_t L_19 = ___1_capacity;
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_20 = (NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02*)(NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_19);
		V_2 = L_20;
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_21 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_24 = (Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		Tables__ctor_mB705132BE24B8F6C537D3034D02189E4B78A80AF(L_24, L_21, L_22, L_23, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____tables = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_24);
		RuntimeObject* L_25 = ___3_comparer;
		RuntimeObject* L_26 = L_25;
		if (L_26)
		{
			G_B11_0 = L_26;
			G_B11_1 = __this;
			goto IL_007e;
		}
		G_B10_0 = L_26;
		G_B10_1 = __this;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_27;
		L_27 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		G_B11_0 = ((RuntimeObject*)(L_27));
		G_B11_1 = G_B10_1;
	}

IL_007e:
	{
		NullCheck(G_B11_1);
		G_B11_1->____comparer = G_B11_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B11_1->____comparer), (void*)G_B11_0);
		bool L_28 = ___2_growLockArray;
		__this->____growLockArray = L_28;
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_29)->max_length),NULL));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		__this->____budget = ((int32_t)(L_30/L_32));
		return;
	}
}
// Method Definition Index: 11332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_m64FDDCF0D5401FEB351A5E92F9C44E4D655686A9_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		RuntimeObject* L_2 = __this->____comparer;
		Il2CppSharedGenericObject* L_3 = ___0_key;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_2, L_3);
		Il2CppSharedGenericObject* L_5 = ___1_value;
		bool L_6;
		L_6 = ConcurrentDictionary_2_TryAddInternal_m90C1E37EDE7223697AE4DF6F298CF69E939B6414(__this, L_1, L_4, L_5, (bool)0, (bool)1, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return L_6;
	}
}
// Method Definition Index: 11333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_ContainsKey_m5CA3E686F59D793C294677EEDB10619CC16115E9_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryGetValue_mCA8FA697A225F5EFA39B9E2D9455E1900A8553FC(__this, L_1, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		return L_2;
	}
}
// Method Definition Index: 11334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m11062CCF8497AE57FA505093F6E9069198C835DF_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		Il2CppSharedGenericObject** L_2 = ___1_value;
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_3 = V_0;
		bool L_4;
		L_4 = ConcurrentDictionary_2_TryRemoveInternal_m0472AE52B84E75ACDFA76B5FE985A0783A710375(__this, L_1, L_2, (bool)0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return L_4;
	}
}
// Method Definition Index: 11335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemoveInternal_m0472AE52B84E75ACDFA76B5FE985A0783A710375_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, bool ___2_matchValue, Il2CppSharedGenericObject* ___3_oldValue, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_6 = NULL;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_7 = NULL;
	bool V_8 = false;
	{
		RuntimeObject* L_0 = __this->____comparer;
		Il2CppSharedGenericObject* L_1 = ___0_key;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_0, L_1);
		V_0 = L_2;
	}

IL_000d:
	{
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_3 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_1 = L_3;
		int32_t L_4 = V_0;
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_5 = V_1;
		NullCheck(L_5);
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_6 = L_5->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_8 = V_1;
		NullCheck(L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8->____locks;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_GetBucketAndLockNo_m84354833BDE3B49D6273C2CB91B56FDF6BB2D52D(L_4, (&V_2), (&V_3), L_7, L_10, NULL);
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_11 = V_1;
		NullCheck(L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11->____locks;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		V_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011d:
			{
				{
					bool L_16 = V_5;
					if (!L_16)
					{
						goto IL_0128;
					}
				}
				{
					RuntimeObject* L_17 = V_4;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_17, NULL);
				}

IL_0128:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_18 = V_4;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_18, (&V_5), NULL);
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_19 = V_1;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_20 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC*)L_19) == ((RuntimeObject*)(Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC*)L_20)))
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_000d;
			}

IL_0053_1:
			{
				V_6 = (Node_t56E8135FC81EA186451808FF44BDD62E236A1339*)NULL;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_21 = V_1;
				NullCheck(L_21);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_22 = L_21->____buckets;
				int32_t L_23 = V_2;
				NullCheck(L_22);
				int32_t L_24 = L_23;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_7 = L_25;
				goto IL_0114_1;
			}

IL_0065_1:
			{
				int32_t L_26 = V_0;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_27 = V_7;
				NullCheck(L_27);
				int32_t L_28 = L_27->____hashcode;
				if ((!(((uint32_t)L_26) == ((uint32_t)L_28))))
				{
					goto IL_0105_1;
				}
			}
			{
				RuntimeObject* L_29 = __this->____comparer;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_30 = V_7;
				NullCheck(L_30);
				Il2CppSharedGenericObject* L_31 = L_30->____key;
				Il2CppSharedGenericObject* L_32 = ___0_key;
				NullCheck(L_29);
				bool L_33;
				L_33 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_29, L_31, L_32);
				if (!L_33)
				{
					goto IL_0105_1;
				}
			}
			{
				bool L_34 = ___2_matchValue;
				if (!L_34)
				{
					goto IL_00ae_1;
				}
			}
			{
				EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_35;
				L_35 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
				Il2CppSharedGenericObject* L_36 = ___3_oldValue;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_37 = V_7;
				NullCheck(L_37);
				Il2CppSharedGenericObject* L_38 = L_37->____value;
				NullCheck(L_35);
				bool L_39;
				L_39 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_35, L_36, L_38);
				if (L_39)
				{
					goto IL_00ae_1;
				}
			}
			{
				Il2CppSharedGenericObject** L_40 = ___1_value;
				il2cpp_codegen_initobj(L_40, sizeof(Il2CppSharedGenericObject*));
				V_8 = (bool)0;
				goto IL_0132;
			}

IL_00ae_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_41 = V_6;
				if (L_41)
				{
					goto IL_00ce_1;
				}
			}
			{
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_42 = V_1;
				NullCheck(L_42);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_43 = L_42->____buckets;
				int32_t L_44 = V_2;
				NullCheck(L_43);
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_45 = V_7;
				NullCheck(L_45);
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_46 = L_45->____next;
				il2cpp_codegen_memory_barrier();
				VolatileWrite((Node_t56E8135FC81EA186451808FF44BDD62E236A1339**)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), (Node_t56E8135FC81EA186451808FF44BDD62E236A1339*)L_46);
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_47 = V_6;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_48 = V_7;
				NullCheck(L_48);
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_49 = L_48->____next;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_47);
				il2cpp_codegen_memory_barrier();
				L_47->____next = L_49;
				Il2CppCodeGenWriteBarrier((void**)(&L_47->____next), (void*)L_49);
			}

IL_00e0_1:
			{
				Il2CppSharedGenericObject** L_50 = ___1_value;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_51 = V_7;
				NullCheck(L_51);
				Il2CppSharedGenericObject* L_52 = L_51->____value;
				*(Il2CppSharedGenericObject**)L_50 = L_52;
				Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_50, (void*)L_52);
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_53 = V_1;
				NullCheck(L_53);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = L_53->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_55 = V_3;
				NullCheck(L_54);
				int32_t* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)));
				int32_t L_57 = il2cpp_codegen_ldind<int32_t, int32_t>(L_56);
				il2cpp_codegen_stind<int32_t>((int32_t*)L_56, (int32_t)((int32_t)il2cpp_codegen_subtract(L_57, 1)));
				V_8 = (bool)1;
				goto IL_0132;
			}

IL_0105_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_58 = V_7;
				V_6 = L_58;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_59 = V_7;
				NullCheck(L_59);
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_60 = L_59->____next;
				il2cpp_codegen_memory_barrier();
				V_7 = L_60;
			}

IL_0114_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_61 = V_7;
				if (L_61)
				{
					goto IL_0065_1;
				}
			}
			{
				goto IL_0129;
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

IL_0129:
	{
		Il2CppSharedGenericObject** L_62 = ___1_value;
		il2cpp_codegen_initobj(L_62, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}

IL_0132:
	{
		bool L_63 = V_8;
		return L_63;
	}
}
// Method Definition Index: 11336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_mCA8FA697A225F5EFA39B9E2D9455E1900A8553FC_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		RuntimeObject* L_2 = __this->____comparer;
		Il2CppSharedGenericObject* L_3 = ___0_key;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_2, L_3);
		Il2CppSharedGenericObject** L_5 = ___1_value;
		bool L_6;
		L_6 = ConcurrentDictionary_2_TryGetValueInternal_m010BFC355AF22021EACF8DD662BE40DA00535109(__this, L_1, L_4, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		return L_6;
	}
}
// Method Definition Index: 11337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValueInternal_m010BFC355AF22021EACF8DD662BE40DA00535109_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, Il2CppSharedGenericObject** ___2_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* V_0 = NULL;
	int32_t V_1 = 0;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_2 = NULL;
	{
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1 = ___1_hashcode;
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_2 = V_0;
		NullCheck(L_2);
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_3 = L_2->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = ConcurrentDictionary_2_GetBucket_mA43D089ACD256C1D34D35CAA3C17D1636A15235A(L_1, L_4, NULL);
		V_1 = L_5;
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_6 = V_0;
		NullCheck(L_6);
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_7 = L_6->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_9;
		L_9 = VolatileRead(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))));
		V_2 = L_9;
		goto IL_0060;
	}

IL_002c:
	{
		int32_t L_10 = ___1_hashcode;
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12 = L_11->____hashcode;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_12))))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_14 = V_2;
		NullCheck(L_14);
		Il2CppSharedGenericObject* L_15 = L_14->____key;
		Il2CppSharedGenericObject* L_16 = ___0_key;
		NullCheck(L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_13, L_15, L_16);
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		Il2CppSharedGenericObject** L_18 = ___2_value;
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_19 = V_2;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_20 = L_19->____value;
		*(Il2CppSharedGenericObject**)L_18 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_18, (void*)L_20);
		return (bool)1;
	}

IL_0057:
	{
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_21 = V_2;
		NullCheck(L_21);
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_22 = L_21->____next;
		il2cpp_codegen_memory_barrier();
		V_2 = L_22;
	}

IL_0060:
	{
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_23 = V_2;
		if (L_23)
		{
			goto IL_002c;
		}
	}
	{
		Il2CppSharedGenericObject** L_24 = ___2_value;
		il2cpp_codegen_initobj(L_24, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
// Method Definition Index: 11338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryUpdateInternal_mA5103068ABCAFF05AE22019CBBFDD3D479D0DDEF_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, Il2CppSharedGenericObject* ___2_newValue, Il2CppSharedGenericObject* ___3_comparisonValue, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_6 = NULL;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_7 = NULL;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_8 = NULL;
	bool V_9 = false;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0;
		L_0 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_0 = (RuntimeObject*)L_0;
	}

IL_0006:
	{
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_1 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_3 = L_1;
		int32_t L_2 = ___1_hashcode;
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_3 = V_3;
		NullCheck(L_3);
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_6 = V_3;
		NullCheck(L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6->____locks;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_GetBucketAndLockNo_m84354833BDE3B49D6273C2CB91B56FDF6BB2D52D(L_2, (&V_1), (&V_2), L_5, L_8, NULL);
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_9 = V_3;
		NullCheck(L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____locks;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		V_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0101:
			{
				{
					bool L_14 = V_5;
					if (!L_14)
					{
						goto IL_010c;
					}
				}
				{
					RuntimeObject* L_15 = V_4;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_15, NULL);
				}

IL_010c:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_16 = V_4;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_16, (&V_5), NULL);
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_17 = V_3;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_18 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC*)L_17) == ((RuntimeObject*)(Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC*)L_18)))
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_0006;
			}

IL_004c_1:
			{
				V_6 = (Node_t56E8135FC81EA186451808FF44BDD62E236A1339*)NULL;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_19 = V_3;
				NullCheck(L_19);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_20 = L_19->____buckets;
				int32_t L_21 = V_1;
				NullCheck(L_20);
				int32_t L_22 = L_21;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
				V_7 = L_23;
				goto IL_00f5_1;
			}

IL_005e_1:
			{
				int32_t L_24 = ___1_hashcode;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_25 = V_7;
				NullCheck(L_25);
				int32_t L_26 = L_25->____hashcode;
				if ((!(((uint32_t)L_24) == ((uint32_t)L_26))))
				{
					goto IL_00e6_1;
				}
			}
			{
				RuntimeObject* L_27 = __this->____comparer;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_28 = V_7;
				NullCheck(L_28);
				Il2CppSharedGenericObject* L_29 = L_28->____key;
				Il2CppSharedGenericObject* L_30 = ___0_key;
				NullCheck(L_27);
				bool L_31;
				L_31 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_27, L_29, L_30);
				if (!L_31)
				{
					goto IL_00e6_1;
				}
			}
			{
				RuntimeObject* L_32 = V_0;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_33 = V_7;
				NullCheck(L_33);
				Il2CppSharedGenericObject* L_34 = L_33->____value;
				Il2CppSharedGenericObject* L_35 = ___3_comparisonValue;
				NullCheck(L_32);
				bool L_36;
				L_36 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_32, L_34, L_35);
				if (!L_36)
				{
					goto IL_00e1_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				bool L_37 = ((ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)))->___s_isValueWriteAtomic;
				if (!L_37)
				{
					goto IL_009f_1;
				}
			}
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_38 = V_7;
				Il2CppSharedGenericObject* L_39 = ___2_newValue;
				NullCheck(L_38);
				L_38->____value = L_39;
				Il2CppCodeGenWriteBarrier((void**)(&L_38->____value), (void*)L_39);
				goto IL_00dc_1;
			}

IL_009f_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_40 = V_7;
				NullCheck(L_40);
				Il2CppSharedGenericObject* L_41 = L_40->____key;
				Il2CppSharedGenericObject* L_42 = ___2_newValue;
				int32_t L_43 = ___1_hashcode;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_44 = V_7;
				NullCheck(L_44);
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_45 = L_44->____next;
				il2cpp_codegen_memory_barrier();
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_46 = (Node_t56E8135FC81EA186451808FF44BDD62E236A1339*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				Node__ctor_mE53CBD5779AF8B8571EE6CB5297EED0A2A4DA062(L_46, L_41, L_42, L_43, L_45, NULL);
				V_8 = L_46;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_47 = V_6;
				if (L_47)
				{
					goto IL_00d1_1;
				}
			}
			{
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_48 = V_3;
				NullCheck(L_48);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_49 = L_48->____buckets;
				int32_t L_50 = V_1;
				NullCheck(L_49);
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_51 = V_8;
				VolatileWrite((Node_t56E8135FC81EA186451808FF44BDD62E236A1339**)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50))), (Node_t56E8135FC81EA186451808FF44BDD62E236A1339*)L_51);
				goto IL_00dc_1;
			}

IL_00d1_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_52 = V_6;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_53 = V_8;
				NullCheck(L_52);
				il2cpp_codegen_memory_barrier();
				L_52->____next = L_53;
				Il2CppCodeGenWriteBarrier((void**)(&L_52->____next), (void*)L_53);
			}

IL_00dc_1:
			{
				V_9 = (bool)1;
				goto IL_010d;
			}

IL_00e1_1:
			{
				V_9 = (bool)0;
				goto IL_010d;
			}

IL_00e6_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_54 = V_7;
				V_6 = L_54;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_55 = V_7;
				NullCheck(L_55);
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_56 = L_55->____next;
				il2cpp_codegen_memory_barrier();
				V_7 = L_56;
			}

IL_00f5_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_57 = V_7;
				if (L_57)
				{
					goto IL_005e_1;
				}
			}
			{
				V_9 = (bool)0;
				goto IL_010d;
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

IL_010d:
	{
		bool L_58 = V_9;
		return L_58;
	}
}
// Method Definition Index: 11339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_Clear_m60C808632D6283A66CF827D32494A55C4A385808_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* V_1 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m737F26AF08909572A0CFB96035988064959A5A84(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			ConcurrentDictionary_2_AcquireAllLocks_m6D4FB77BA4870F2509D869DCD8EDA711F775BD84(__this, (&V_0), NULL);
			NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_1 = (NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02*)(NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)((int32_t)31));
			Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_2 = __this->____tables;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_2);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2->____locks;
			Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_4 = __this->____tables;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_4);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->____countPerLock;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_5);
			int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
			Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_8 = (Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
			Tables__ctor_mB705132BE24B8F6C537D3034D02189E4B78A80AF(L_8, L_1, L_3, L_7, NULL);
			V_1 = L_8;
			Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_9 = V_1;
			il2cpp_codegen_memory_barrier();
			__this->____tables = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_9);
			Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_10 = V_1;
			NullCheck(L_10);
			NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_11 = L_10->____buckets;
			NullCheck(L_11);
			int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
			Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_13 = V_1;
			NullCheck(L_13);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13->____locks;
			NullCheck(L_14);
			int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
			CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			int32_t L_16;
			L_16 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, ((int32_t)(L_12/L_15)), NULL);
			__this->____budget = L_16;
			goto IL_006b;
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
		return;
	}
}
// Method Definition Index: 11340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mC5B2CA655EB7E86EA47682F46A95E7E51CC2BF43_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_0 = ___0_array;
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
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0D86565E49BD212E7AC64BABD33BE3668A4C45B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0081:
			{
				int32_t L_4 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m737F26AF08909572A0CFB96035988064959A5A84(__this, 0, L_4, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m6D4FB77BA4870F2509D869DCD8EDA711F775BD84(__this, (&V_0), NULL);
				V_1 = 0;
				V_2 = 0;
				goto IL_004a_1;
			}

IL_0032_1:
			{
				int32_t L_5 = V_1;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_6 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_6);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_8 = V_2;
				NullCheck(L_7);
				int32_t L_9 = L_8;
				int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
				V_1 = ((int32_t)il2cpp_codegen_add(L_5, L_10));
				int32_t L_11 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			}

IL_004a_1:
			{
				int32_t L_12 = V_2;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_13 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_13);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13->____locks;
				NullCheck(L_14);
				int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
				if ((((int32_t)L_12) >= ((int32_t)L_15)))
				{
					goto IL_0060_1;
				}
			}
			{
				int32_t L_16 = V_1;
				if ((((int32_t)L_16) >= ((int32_t)0)))
				{
					goto IL_0032_1;
				}
			}

IL_0060_1:
			{
				KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_17 = ___0_array;
				NullCheck(L_17);
				int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
				int32_t L_19 = V_1;
				int32_t L_20 = ___1_index;
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, L_19))) < ((int32_t)L_20)))
				{
					goto IL_006c_1;
				}
			}
			{
				int32_t L_21 = V_1;
				if ((((int32_t)L_21) >= ((int32_t)0)))
				{
					goto IL_0077_1;
				}
			}

IL_006c_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral672E993A9AD93822B712B165C6987759C6DED80B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
			}

IL_0077_1:
			{
				KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_23 = ___0_array;
				int32_t L_24 = ___1_index;
				ConcurrentDictionary_2_CopyToPairs_m8F7657E03133E309126273D0584F8D5326697897(__this, L_23, L_24, NULL);
				goto IL_008a;
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

IL_008a:
	{
		return;
	}
}
// Method Definition Index: 11341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ConcurrentDictionary_2_ToArray_mB7BEF7AB0F93F41DA7626273762D41F08FDBEE07_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* V_2 = NULL;
	int32_t V_3 = 0;
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* V_4 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m737F26AF08909572A0CFB96035988064959A5A84(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m6D4FB77BA4870F2509D869DCD8EDA711F775BD84(__this, (&V_0), NULL);
				V_1 = 0;
				V_3 = 0;
				goto IL_0028_1;
			}

IL_0010_1:
			{
				int32_t L_1 = V_1;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_2 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_2);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_4 = V_3;
				NullCheck(L_3);
				int32_t L_5 = L_4;
				int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
				if (((int64_t)L_1 + (int64_t)L_6 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_1 + (int64_t)L_6 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				V_1 = ((int32_t)il2cpp_codegen_add(L_1, L_6));
				int32_t L_7 = V_3;
				if (((int64_t)L_7 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_7 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
			}

IL_0028_1:
			{
				int32_t L_8 = V_3;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_9 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_9);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____locks;
				NullCheck(L_10);
				int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
				if ((((int32_t)L_8) < ((int32_t)L_11)))
				{
					goto IL_0010_1;
				}
			}
			{
				int32_t L_12 = V_1;
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_13;
				L_13 = Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
				V_4 = L_13;
				goto IL_0063;
			}

IL_0046_1:
			{
				int32_t L_14 = V_1;
				KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_15 = (KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*)(KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42), (uint32_t)L_14);
				V_2 = L_15;
				KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_16 = V_2;
				ConcurrentDictionary_2_CopyToPairs_m8F7657E03133E309126273D0584F8D5326697897(__this, L_16, 0, NULL);
				KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_17 = V_2;
				V_4 = L_17;
				goto IL_0063;
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

IL_0063:
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_18 = V_4;
		return L_18;
	}
}
// Method Definition Index: 11342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToPairs_m8F7657E03133E309126273D0584F8D5326697897_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* V_0 = NULL;
	int32_t V_1 = 0;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_2 = NULL;
	{
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0045;
	}

IL_0012:
	{
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_003e;
	}

IL_0018:
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_8 = V_2;
		NullCheck(L_8);
		Il2CppSharedGenericObject* L_9 = L_8->____key;
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_10 = V_2;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_11 = L_10->____value;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_12;
		memset((&L_12), 0, sizeof(L_12));
		KeyValuePair_2__ctor_mB2C82D7A225B9949D85AD00F49A2506C80C3EFED((&L_12), L_9, L_11, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826)L_12);
		int32_t L_13 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_14 = V_2;
		NullCheck(L_14);
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_15 = L_14->____next;
		il2cpp_codegen_memory_barrier();
		V_2 = L_15;
	}

IL_003e:
	{
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_16 = V_2;
		if (L_16)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0045:
	{
		int32_t L_18 = V_1;
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToEntries_m4C51E924D6F0741B4C40132D020E813E54698BA5_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* V_0 = NULL;
	int32_t V_1 = 0;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_2 = NULL;
	{
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_004f;
	}

IL_0012:
	{
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_0048;
	}

IL_0018:
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_8 = V_2;
		NullCheck(L_8);
		Il2CppSharedGenericObject* L_9 = L_8->____key;
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_10 = V_2;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_11 = L_10->____value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_12;
		memset((&L_12), 0, sizeof(L_12));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_12), (RuntimeObject*)L_9, (RuntimeObject*)L_11, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_12);
		int32_t L_13 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_14 = V_2;
		NullCheck(L_14);
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_15 = L_14->____next;
		il2cpp_codegen_memory_barrier();
		V_2 = L_15;
	}

IL_0048:
	{
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_16 = V_2;
		if (L_16)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004f:
	{
		int32_t L_18 = V_1;
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToObjects_m408C2C1E86CE15A810BEE1DA4F5AB40D99FCF3C1_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* V_0 = NULL;
	int32_t V_1 = 0;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_2 = NULL;
	{
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0046;
	}

IL_0012:
	{
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_003f;
	}

IL_0018:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_8 = V_2;
		NullCheck(L_8);
		Il2CppSharedGenericObject* L_9 = L_8->____key;
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_10 = V_2;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_11 = L_10->____value;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_12;
		memset((&L_12), 0, sizeof(L_12));
		KeyValuePair_2__ctor_mB2C82D7A225B9949D85AD00F49A2506C80C3EFED((&L_12), L_9, L_11, NULL);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9), &L_13);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_14);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_14);
		int32_t L_15 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_16 = V_2;
		NullCheck(L_16);
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_17 = L_16->____next;
		il2cpp_codegen_memory_barrier();
		V_2 = L_17;
	}

IL_003f:
	{
		Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_18 = V_2;
		if (L_18)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0046:
	{
		int32_t L_20 = V_1;
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m5E2C0EBDF59D498AB4D40133331641C23FB4B366_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CGetEnumeratorU3Ed__35_tE0AE463CC0DAC69CFE2C2EF588ED4B5D526E48F1* L_0 = (U3CGetEnumeratorU3Ed__35_tE0AE463CC0DAC69CFE2C2EF588ED4B5D526E48F1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44));
		U3CGetEnumeratorU3Ed__35__ctor_m0051D498A386D8AF7299C71ED4D14283E10FE050(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__35_tE0AE463CC0DAC69CFE2C2EF588ED4B5D526E48F1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAddInternal_m90C1E37EDE7223697AE4DF6F298CF69E939B6414_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, Il2CppSharedGenericObject* ___2_value, bool ___3_updateIfExists, bool ___4_acquireLock, Il2CppSharedGenericObject** ___5_resultingValue, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_5 = NULL;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_6 = NULL;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_7 = NULL;
	bool V_8 = false;

IL_0000:
	{
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_2 = L_0;
		int32_t L_1 = ___1_hashcode;
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_2 = V_2;
		NullCheck(L_2);
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_3 = L_2->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_5 = V_2;
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5->____locks;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_GetBucketAndLockNo_m84354833BDE3B49D6273C2CB91B56FDF6BB2D52D(L_1, (&V_0), (&V_1), L_4, L_7, NULL);
		V_3 = (bool)0;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_014e:
			{
				{
					bool L_8 = V_4;
					if (!L_8)
					{
						goto IL_015f;
					}
				}
				{
					Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_9 = V_2;
					NullCheck(L_9);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____locks;
					int32_t L_11 = V_1;
					NullCheck(L_10);
					int32_t L_12 = L_11;
					RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_13, NULL);
				}

IL_015f:
				{
					return;
				}
			}
		});
		try
		{
			{
				bool L_14 = ___4_acquireLock;
				if (!L_14)
				{
					goto IL_003b_1;
				}
			}
			{
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_15 = V_2;
				NullCheck(L_15);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15->____locks;
				int32_t L_17 = V_1;
				NullCheck(L_16);
				int32_t L_18 = L_17;
				RuntimeObject* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_19, (&V_4), NULL);
			}

IL_003b_1:
			{
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_20 = V_2;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_21 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC*)L_20) == ((RuntimeObject*)(Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC*)L_21)))
				{
					goto IL_0048_1;
				}
			}
			{
				goto IL_0000;
			}

IL_0048_1:
			{
				V_5 = (Node_t56E8135FC81EA186451808FF44BDD62E236A1339*)NULL;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_22 = V_2;
				NullCheck(L_22);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_23 = L_22->____buckets;
				int32_t L_24 = V_0;
				NullCheck(L_23);
				int32_t L_25 = L_24;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
				V_6 = L_26;
				goto IL_00fd_1;
			}

IL_005a_1:
			{
				int32_t L_27 = ___1_hashcode;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_28 = V_6;
				NullCheck(L_28);
				int32_t L_29 = L_28->____hashcode;
				if ((!(((uint32_t)L_27) == ((uint32_t)L_29))))
				{
					goto IL_00ee_1;
				}
			}
			{
				RuntimeObject* L_30 = __this->____comparer;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_31 = V_6;
				NullCheck(L_31);
				Il2CppSharedGenericObject* L_32 = L_31->____key;
				Il2CppSharedGenericObject* L_33 = ___0_key;
				NullCheck(L_30);
				bool L_34;
				L_34 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_30, L_32, L_33);
				if (!L_34)
				{
					goto IL_00ee_1;
				}
			}
			{
				bool L_35 = ___3_updateIfExists;
				if (!L_35)
				{
					goto IL_00d8_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				bool L_36 = ((ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)))->___s_isValueWriteAtomic;
				if (!L_36)
				{
					goto IL_0091_1;
				}
			}
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_37 = V_6;
				Il2CppSharedGenericObject* L_38 = ___2_value;
				NullCheck(L_37);
				L_37->____value = L_38;
				Il2CppCodeGenWriteBarrier((void**)(&L_37->____value), (void*)L_38);
				goto IL_00ce_1;
			}

IL_0091_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_39 = V_6;
				NullCheck(L_39);
				Il2CppSharedGenericObject* L_40 = L_39->____key;
				Il2CppSharedGenericObject* L_41 = ___2_value;
				int32_t L_42 = ___1_hashcode;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_43 = V_6;
				NullCheck(L_43);
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_44 = L_43->____next;
				il2cpp_codegen_memory_barrier();
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_45 = (Node_t56E8135FC81EA186451808FF44BDD62E236A1339*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				Node__ctor_mE53CBD5779AF8B8571EE6CB5297EED0A2A4DA062(L_45, L_40, L_41, L_42, L_44, NULL);
				V_7 = L_45;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_46 = V_5;
				if (L_46)
				{
					goto IL_00c3_1;
				}
			}
			{
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_47 = V_2;
				NullCheck(L_47);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_48 = L_47->____buckets;
				int32_t L_49 = V_0;
				NullCheck(L_48);
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_50 = V_7;
				VolatileWrite((Node_t56E8135FC81EA186451808FF44BDD62E236A1339**)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), (Node_t56E8135FC81EA186451808FF44BDD62E236A1339*)L_50);
				goto IL_00ce_1;
			}

IL_00c3_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_51 = V_5;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_52 = V_7;
				NullCheck(L_51);
				il2cpp_codegen_memory_barrier();
				L_51->____next = L_52;
				Il2CppCodeGenWriteBarrier((void**)(&L_51->____next), (void*)L_52);
			}

IL_00ce_1:
			{
				Il2CppSharedGenericObject** L_53 = ___5_resultingValue;
				Il2CppSharedGenericObject* L_54 = ___2_value;
				*(Il2CppSharedGenericObject**)L_53 = L_54;
				Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_53, (void*)L_54);
				goto IL_00e6_1;
			}

IL_00d8_1:
			{
				Il2CppSharedGenericObject** L_55 = ___5_resultingValue;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_56 = V_6;
				NullCheck(L_56);
				Il2CppSharedGenericObject* L_57 = L_56->____value;
				*(Il2CppSharedGenericObject**)L_55 = L_57;
				Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_55, (void*)L_57);
			}

IL_00e6_1:
			{
				V_8 = (bool)0;
				goto IL_0174;
			}

IL_00ee_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_58 = V_6;
				V_5 = L_58;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_59 = V_6;
				NullCheck(L_59);
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_60 = L_59->____next;
				il2cpp_codegen_memory_barrier();
				V_6 = L_60;
			}

IL_00fd_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_61 = V_6;
				if (L_61)
				{
					goto IL_005a_1;
				}
			}
			{
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_62 = V_2;
				NullCheck(L_62);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_63 = L_62->____buckets;
				int32_t L_64 = V_0;
				NullCheck(L_63);
				Il2CppSharedGenericObject* L_65 = ___0_key;
				Il2CppSharedGenericObject* L_66 = ___2_value;
				int32_t L_67 = ___1_hashcode;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_68 = V_2;
				NullCheck(L_68);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_69 = L_68->____buckets;
				int32_t L_70 = V_0;
				NullCheck(L_69);
				int32_t L_71 = L_70;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_73 = (Node_t56E8135FC81EA186451808FF44BDD62E236A1339*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				Node__ctor_mE53CBD5779AF8B8571EE6CB5297EED0A2A4DA062(L_73, L_65, L_66, L_67, L_72, NULL);
				VolatileWrite((Node_t56E8135FC81EA186451808FF44BDD62E236A1339**)((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64))), (Node_t56E8135FC81EA186451808FF44BDD62E236A1339*)L_73);
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_74 = V_2;
				NullCheck(L_74);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = L_74->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_76 = V_1;
				NullCheck(L_75);
				int32_t* L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)));
				int32_t L_78 = il2cpp_codegen_ldind<int32_t, int32_t>(L_77);
				if (((int64_t)L_78 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_78 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				il2cpp_codegen_stind<int32_t>((int32_t*)L_77, (int32_t)((int32_t)il2cpp_codegen_add(L_78, 1)));
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_79 = V_2;
				NullCheck(L_79);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = L_79->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_81 = V_1;
				NullCheck(L_80);
				int32_t L_82 = L_81;
				int32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
				int32_t L_84 = __this->____budget;
				if ((((int32_t)L_83) <= ((int32_t)L_84)))
				{
					goto IL_014c_1;
				}
			}
			{
				V_3 = (bool)1;
			}

IL_014c_1:
			{
				goto IL_0160;
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

IL_0160:
	{
		bool L_85 = V_3;
		if (!L_85)
		{
			goto IL_016a;
		}
	}
	{
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_86 = V_2;
		ConcurrentDictionary_2_GrowTable_m73470FB0D0D0AF3204B5B03FECC9C1B51F4E6D39(__this, L_86, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47));
	}

IL_016a:
	{
		Il2CppSharedGenericObject** L_87 = ___5_resultingValue;
		Il2CppSharedGenericObject* L_88 = ___2_value;
		*(Il2CppSharedGenericObject**)L_87 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_87, (void*)L_88);
		return (bool)1;
	}

IL_0174:
	{
		bool L_89 = V_8;
		return L_89;
	}
}
// Method Definition Index: 11347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ConcurrentDictionary_2_get_Item_m375CFB334805B0E46FE1E4187567BB8950334F10_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ConcurrentDictionary_2_TryGetValue_mCA8FA697A225F5EFA39B9E2D9455E1900A8553FC(__this, L_0, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Il2CppSharedGenericObject* L_2 = ___0_key;
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNotFoundException_mFF2C0E4DC32A39250479D9B77B8D5516DD0E4245((RuntimeObject*)L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 48));
	}

IL_0016:
	{
		Il2CppSharedGenericObject* L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 11348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_m88409C18FD4A6A3BD9E9A90711D94E51019E5688_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		RuntimeObject* L_2 = __this->____comparer;
		Il2CppSharedGenericObject* L_3 = ___0_key;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_2, L_3);
		Il2CppSharedGenericObject* L_5 = ___1_value;
		bool L_6;
		L_6 = ConcurrentDictionary_2_TryAddInternal_m90C1E37EDE7223697AE4DF6F298CF69E939B6414(__this, L_1, L_4, L_5, (bool)1, (bool)1, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return;
	}
}
// Method Definition Index: 11349
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNotFoundException_mFF2C0E4DC32A39250479D9B77B8D5516DD0E4245_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_0);
		String_t* L_2;
		L_2 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141)), L_1, NULL);
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_3 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}
}
// Method Definition Index: 11350
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_0 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_get_Count_mD65D9F8788AF715409A93D8DD878DC769C50712E_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m737F26AF08909572A0CFB96035988064959A5A84(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			ConcurrentDictionary_2_AcquireAllLocks_m6D4FB77BA4870F2509D869DCD8EDA711F775BD84(__this, (&V_0), NULL);
			int32_t L_1;
			L_1 = ConcurrentDictionary_2_GetCountInternal_m98C4DBDA1CB153A75CA32F201B16C24FF3D4640C(__this, NULL);
			V_1 = L_1;
			goto IL_001c;
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

IL_001c:
	{
		int32_t L_2 = V_1;
		return L_2;
	}
}
// Method Definition Index: 11352
// Method Definition Index: 11353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ConcurrentDictionary_2_GetOrAdd_mF1090A4CE866BD9F5361BC55286F526FEF871FF4_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___1_valueFactory, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_1 = ___1_valueFactory;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF68BB0CB45867DA95163C2C6A4B0677DCE80DCF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		RuntimeObject* L_3 = __this->____comparer;
		Il2CppSharedGenericObject* L_4 = ___0_key;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_3, L_4);
		V_0 = L_5;
		Il2CppSharedGenericObject* L_6 = ___0_key;
		int32_t L_7 = V_0;
		bool L_8;
		L_8 = ConcurrentDictionary_2_TryGetValueInternal_m010BFC355AF22021EACF8DD662BE40DA00535109(__this, L_6, L_7, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		Il2CppSharedGenericObject* L_9 = ___0_key;
		int32_t L_10 = V_0;
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_11 = ___1_valueFactory;
		Il2CppSharedGenericObject* L_12 = ___0_key;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_inline(L_11, L_12, NULL);
		bool L_14;
		L_14 = ConcurrentDictionary_2_TryAddInternal_m90C1E37EDE7223697AE4DF6F298CF69E939B6414(__this, L_9, L_10, L_13, (bool)0, (bool)1, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
	}

IL_0048:
	{
		Il2CppSharedGenericObject* L_15 = V_1;
		return L_15;
	}
}
// Method Definition Index: 11354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ConcurrentDictionary_2_GetOrAdd_m11AC1BE85B805EF2EE09EB821DCAD0F004A15589_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		RuntimeObject* L_1 = __this->____comparer;
		Il2CppSharedGenericObject* L_2 = ___0_key;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_1, L_2);
		V_0 = L_3;
		Il2CppSharedGenericObject* L_4 = ___0_key;
		int32_t L_5 = V_0;
		bool L_6;
		L_6 = ConcurrentDictionary_2_TryGetValueInternal_m010BFC355AF22021EACF8DD662BE40DA00535109(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		Il2CppSharedGenericObject* L_7 = ___0_key;
		int32_t L_8 = V_0;
		Il2CppSharedGenericObject* L_9 = ___1_value;
		bool L_10;
		L_10 = ConcurrentDictionary_2_TryAddInternal_m90C1E37EDE7223697AE4DF6F298CF69E939B6414(__this, L_7, L_8, L_9, (bool)0, (bool)1, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
	}

IL_0034:
	{
		Il2CppSharedGenericObject* L_11 = V_1;
		return L_11;
	}
}
// Method Definition Index: 11355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ConcurrentDictionary_2_AddOrUpdate_m79DE2F22999E8AC1DE96E073C138FA92C624F863_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___1_addValueFactory, Func_3_t8430F1D05DF2620CBCEC84F9563E283593C0C7E8* ___2_updateValueFactory, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	Il2CppSharedGenericObject* V_3 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_1 = ___1_addValueFactory;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FBDA15AB716B63A3A92B84F7B26A1A374DA894D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		Func_3_t8430F1D05DF2620CBCEC84F9563E283593C0C7E8* L_3 = ___2_updateValueFactory;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0524F47F7868CF019B9EC023CC6808DAB5BE2221)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0029:
	{
		RuntimeObject* L_5 = __this->____comparer;
		Il2CppSharedGenericObject* L_6 = ___0_key;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_5, L_6);
		V_0 = L_7;
	}

IL_0036:
	{
		Il2CppSharedGenericObject* L_8 = ___0_key;
		int32_t L_9 = V_0;
		bool L_10;
		L_10 = ConcurrentDictionary_2_TryGetValueInternal_m010BFC355AF22021EACF8DD662BE40DA00535109(__this, L_8, L_9, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		Func_3_t8430F1D05DF2620CBCEC84F9563E283593C0C7E8* L_11 = ___2_updateValueFactory;
		Il2CppSharedGenericObject* L_12 = ___0_key;
		Il2CppSharedGenericObject* L_13 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_14;
		L_14 = Func_3_Invoke_mB52DD65540C4107AF891E48398CF46B8590860F1_inline(L_11, L_12, L_13, NULL);
		V_2 = L_14;
		Il2CppSharedGenericObject* L_15 = ___0_key;
		int32_t L_16 = V_0;
		Il2CppSharedGenericObject* L_17 = V_2;
		Il2CppSharedGenericObject* L_18 = V_1;
		bool L_19;
		L_19 = ConcurrentDictionary_2_TryUpdateInternal_mA5103068ABCAFF05AE22019CBBFDD3D479D0DDEF(__this, L_15, L_16, L_17, L_18, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 52));
		if (!L_19)
		{
			goto IL_0036;
		}
	}
	{
		Il2CppSharedGenericObject* L_20 = V_2;
		return L_20;
	}

IL_0059:
	{
		Il2CppSharedGenericObject* L_21 = ___0_key;
		int32_t L_22 = V_0;
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_23 = ___1_addValueFactory;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_23);
		Il2CppSharedGenericObject* L_25;
		L_25 = Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_inline(L_23, L_24, NULL);
		bool L_26;
		L_26 = ConcurrentDictionary_2_TryAddInternal_m90C1E37EDE7223697AE4DF6F298CF69E939B6414(__this, L_21, L_22, L_25, (bool)0, (bool)1, (&V_3), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		if (!L_26)
		{
			goto IL_0036;
		}
	}
	{
		Il2CppSharedGenericObject* L_27 = V_3;
		return L_27;
	}
}
// Method Definition Index: 11356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m5B21567A0197CF33259747C5E8DDDE487407209F_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryAdd_m64FDDCF0D5401FEB351A5E92F9C44E4D655686A9(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC38D57307791EED2AD28D35927B9E90B23E6281D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0015:
	{
		return;
	}
}
// Method Definition Index: 11357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_m982560232686B5CD5B1164F9ACA472504BC2B910_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ConcurrentDictionary_2_TryRemove_m11062CCF8497AE57FA505093F6E9069198C835DF(__this, L_0, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 54));
		return L_1;
	}
}
// Method Definition Index: 11358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_get_Keys_mE78F552E5AB2AF64E1DBF32A0A3E5CBA70EE58EA_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_0;
		L_0 = ConcurrentDictionary_2_GetKeys_mB7179FAA255498E6BE2BB68DB8A52E75F3FBC06D(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3C6C6AD03B3D49DCAB35BEAC43F02637BABFCB83_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_0;
		L_0 = ConcurrentDictionary_2_GetKeys_mB7179FAA255498E6BE2BB68DB8A52E75F3FBC06D(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_get_Values_m9CC9F38E9D1129E661741C63FD34EDD5C7A942B8_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_0;
		L_0 = ConcurrentDictionary_2_GetValues_m7C13D32EA69766A289F6BB7B4D8046024347A7B1(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11361
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mD1A038BD6A3561259CC6F93FA2B9943B846BB2E8_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_0;
		L_0 = ConcurrentDictionary_2_GetValues_m7C13D32EA69766A289F6BB7B4D8046024347A7B1(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11362
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mF4D5FBFA9F86B1E30E93F92CBAF43EF4932BEC76_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline((&___0_keyValuePair), NULL);
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker2< Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 57), (RuntimeObject*)__this, L_0, L_1);
		return;
	}
}
// Method Definition Index: 11363
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mF50804BB30C94EF1F1D746377AFAC0FE84FEC101_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&___0_keyValuePair), NULL);
		bool L_1;
		L_1 = ConcurrentDictionary_2_TryGetValue_mCA8FA697A225F5EFA39B9E2D9455E1900A8553FC(__this, L_0, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		Il2CppSharedGenericObject* L_3 = V_0;
		Il2CppSharedGenericObject* L_4;
		L_4 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline((&___0_keyValuePair), NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_2, L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 11364
// Method Definition Index: 11365
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mE8DEA3EFC15C82A1761D975228B465CE8EEFC658_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&___0_keyValuePair), NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral561DA6E332E7EF45E52D96B07EC786D85C2955BE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral020F27A067D9C2A1BC9628BCE378DE63A6F2B5BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_001e:
	{
		Il2CppSharedGenericObject* L_2;
		L_2 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_3;
		L_3 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline((&___0_keyValuePair), NULL);
		bool L_4;
		L_4 = ConcurrentDictionary_2_TryRemoveInternal_m0472AE52B84E75ACDFA76B5FE985A0783A710375(__this, L_2, (&V_0), (bool)1, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return L_4;
	}
}
// Method Definition Index: 11366
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IEnumerable_GetEnumerator_m6D41629A9DB35BAE9E6AB91BBA3B1548E43A6F97_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0;
		L_0 = ConcurrentDictionary_2_GetEnumerator_m5E2C0EBDF59D498AB4D40133331641C23FB4B366(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 59));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_IDictionary_Add_m865A309CB7FC609B9B60D14C9A696ECEB86EB170_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD8CE285C77CDFBCDCBA338A795AFF019E6C3B66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
	}
	try
	{
		RuntimeObject* L_3 = ___1_value;
		V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20D029102A70CD96274496928ED59E8B9C014BBA)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		RuntimeObject* L_6 = ___0_key;
		Il2CppSharedGenericObject* L_7 = V_0;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker2< Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 57), (RuntimeObject*)__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), L_7);
		return;
	}
}
// Method Definition Index: 11368
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_IDictionary_Contains_m99B2C3A2E7A8118DB797D1F155ACC16317387DC9_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (!((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ConcurrentDictionary_2_ContainsKey_m5CA3E686F59D793C294677EEDB10619CC16115E9(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 60));
		return L_3;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_GetEnumerator_mAD11B8407C68FC164DE2F2E780BB3433CEDA8DA7_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* L_0 = (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 61));
		DictionaryEnumerator__ctor_mAD88826314DD95640977D3B87E43E0FA23090A6D(L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 62));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11370
// Method Definition Index: 11371
// Method Definition Index: 11372
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_get_Keys_mCEF540038FBB0E112B3DC44DC8050BECA7230B71_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_0;
		L_0 = ConcurrentDictionary_2_GetKeys_mB7179FAA255498E6BE2BB68DB8A52E75F3FBC06D(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_IDictionary_Remove_m0F5C1092E22DB7A7506BB27140B8E85CD3241467_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (!((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryRemove_m11062CCF8497AE57FA505093F6E9069198C835DF(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 54));
	}

IL_001f:
	{
		return;
	}
}
// Method Definition Index: 11374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_get_Values_m80D0DE629DF0A93A00244FF1912B843B8219ACAC_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_0;
		L_0 = ConcurrentDictionary_2_GetValues_m7C13D32EA69766A289F6BB7B4D8046024347A7B1(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_get_Item_mC7FF7770179A579FE84DC686689458DDBDFB1717_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (!((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryGetValue_mCA8FA697A225F5EFA39B9E2D9455E1900A8553FC(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Il2CppSharedGenericObject* L_4 = V_0;
		return (RuntimeObject*)L_4;
	}

IL_0027:
	{
		return NULL;
	}
}
// Method Definition Index: 11376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_IDictionary_set_Item_mF3791B4A7FD90175611764306C9353FBEBD9E73B_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_m0A8616D1EEFE73BE0B1751F4F29999C5801674E6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD8CE285C77CDFBCDCBA338A795AFF019E6C3B66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		RuntimeObject* L_3 = ___1_value;
		if (((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20D029102A70CD96274496928ED59E8B9C014BBA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_002e:
	{
		RuntimeObject* L_5 = ___0_key;
		RuntimeObject* L_6 = ___1_value;
		ConcurrentDictionary_2_set_Item_m88409C18FD4A6A3BD9E9A90711D94E51019E5688(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 63));
		return;
	}
}
// Method Definition Index: 11377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_ICollection_CopyTo_m984D9479BCCE0A6AFD7A2682FDE2F1EE5AD04D71_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* V_1 = NULL;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* V_3 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;
	int32_t V_6 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
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
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0D86565E49BD212E7AC64BABD33BE3668A4C45B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cc:
			{
				int32_t L_4 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m737F26AF08909572A0CFB96035988064959A5A84(__this, 0, L_4, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m6D4FB77BA4870F2509D869DCD8EDA711F775BD84(__this, (&V_0), NULL);
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_5 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				V_1 = L_5;
				V_2 = 0;
				V_6 = 0;
				goto IL_0050_1;
			}

IL_003c_1:
			{
				int32_t L_6 = V_2;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_7 = V_1;
				NullCheck(L_7);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_9 = V_6;
				NullCheck(L_8);
				int32_t L_10 = L_9;
				int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				V_2 = ((int32_t)il2cpp_codegen_add(L_6, L_11));
				int32_t L_12 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			}

IL_0050_1:
			{
				int32_t L_13 = V_6;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_14 = V_1;
				NullCheck(L_14);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14->____locks;
				NullCheck(L_15);
				int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
				if ((((int32_t)L_13) >= ((int32_t)L_16)))
				{
					goto IL_0060_1;
				}
			}
			{
				int32_t L_17 = V_2;
				if ((((int32_t)L_17) >= ((int32_t)0)))
				{
					goto IL_003c_1;
				}
			}

IL_0060_1:
			{
				RuntimeArray* L_18 = ___0_array;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = il2cpp_codegen_array_get_length(L_18);
				int32_t L_20 = V_2;
				int32_t L_21 = ___1_index;
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_19, L_20))) < ((int32_t)L_21)))
				{
					goto IL_006f_1;
				}
			}
			{
				int32_t L_22 = V_2;
				if ((((int32_t)L_22) >= ((int32_t)0)))
				{
					goto IL_007a_1;
				}
			}

IL_006f_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral672E993A9AD93822B712B165C6987759C6DED80B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
			}

IL_007a_1:
			{
				RuntimeArray* L_24 = ___0_array;
				V_3 = ((KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*)IsInstSealed((RuntimeObject*)L_24, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42)));
				KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_25 = V_3;
				if (!L_25)
				{
					goto IL_008e_1;
				}
			}
			{
				KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_26 = V_3;
				int32_t L_27 = ___1_index;
				ConcurrentDictionary_2_CopyToPairs_m8F7657E03133E309126273D0584F8D5326697897(__this, L_26, L_27, NULL);
				goto IL_00d5;
			}

IL_008e_1:
			{
				RuntimeArray* L_28 = ___0_array;
				V_4 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_28, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
				DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_29 = V_4;
				if (!L_29)
				{
					goto IL_00a5_1;
				}
			}
			{
				DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_30 = V_4;
				int32_t L_31 = ___1_index;
				ConcurrentDictionary_2_CopyToEntries_m4C51E924D6F0741B4C40132D020E813E54698BA5(__this, L_30, L_31, NULL);
				goto IL_00d5;
			}

IL_00a5_1:
			{
				RuntimeArray* L_32 = ___0_array;
				V_5 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_32, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = V_5;
				if (!L_33)
				{
					goto IL_00bc_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = V_5;
				int32_t L_35 = ___1_index;
				ConcurrentDictionary_2_CopyToObjects_m408C2C1E86CE15A810BEE1DA4F5AB40D99FCF3C1(__this, L_34, L_35, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 65));
				goto IL_00d5;
			}

IL_00bc_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_36 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA05D9DA01CB9AD0AA6BE899FE1E39018B72923DB)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, method);
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

IL_00d5:
	{
		return;
	}
}
// Method Definition Index: 11378
// Method Definition Index: 11379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_ICollection_get_SyncRoot_mB0FE4395FB66D69862B94D6A12B6A13EAB8C87A2_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4CC02BED909F9630E59013E4804C6C269FF8370A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_GrowTable_m73470FB0D0D0AF3204B5B03FECC9C1B51F4E6D39_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* ___0_tables, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01fd:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m737F26AF08909572A0CFB96035988064959A5A84(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireLocks_m36566CCAD7291F4C94D63066C9F41535296A7865(__this, 0, 1, (&V_0), NULL);
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_1 = ___0_tables;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_2 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC*)L_1) == ((RuntimeObject*)(Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC*)L_2)))
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0206;
			}

IL_001c_1:
			{
				int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
				V_1 = L_3;
				V_7 = 0;
				goto IL_0039_1;
			}

IL_0024_1:
			{
				int64_t L_4 = V_1;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_5 = ___0_tables;
				NullCheck(L_5);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_7 = V_7;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
				V_1 = ((int64_t)il2cpp_codegen_add(L_4, L_10));
				int32_t L_11 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			}

IL_0039_1:
			{
				int32_t L_12 = V_7;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_13 = ___0_tables;
				NullCheck(L_13);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->____countPerLock;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_14);
				int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
				if ((((int32_t)L_12) < ((int32_t)L_15)))
				{
					goto IL_0024_1;
				}
			}
			{
				int64_t L_16 = V_1;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_17 = ___0_tables;
				NullCheck(L_17);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_18 = L_17->____buckets;
				NullCheck(L_18);
				int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
				int64_t L_20 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)(L_19/4)),NULL));
				if ((((int64_t)L_16) >= ((int64_t)L_20)))
				{
					goto IL_007c_1;
				}
			}
			{
				int32_t L_21 = __this->____budget;
				__this->____budget = ((int32_t)il2cpp_codegen_multiply(2, L_21));
				int32_t L_22 = __this->____budget;
				if ((((int32_t)L_22) >= ((int32_t)0)))
				{
					goto IL_0077_1;
				}
			}
			{
				__this->____budget = ((int32_t)2147483647LL);
			}

IL_0077_1:
			{
				goto IL_0206;
			}

IL_007c_1:
			{
				V_2 = 0;
				V_3 = (bool)0;
			}
			try
			{
				{
					Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_23 = ___0_tables;
					NullCheck(L_23);
					NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_24 = L_23->____buckets;
					NullCheck(L_24);
					int32_t L_25 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_24)->max_length),NULL));
					if (((int64_t)L_25 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_25 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_25, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_25, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_25, 2)), 1));
					goto IL_0093_2;
				}

IL_008f_2:
				{
					int32_t L_26 = V_2;
					if (((int64_t)L_26 + (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_26 + (int64_t)2 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					V_2 = ((int32_t)il2cpp_codegen_add(L_26, 2));
				}

IL_0093_2:
				{
					int32_t L_27 = V_2;
					if (!((int32_t)(L_27%3)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_28 = V_2;
					if (!((int32_t)(L_28%5)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_29 = V_2;
					if (!((int32_t)(L_29%7)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_30 = V_2;
					if ((((int32_t)L_30) <= ((int32_t)((int32_t)2146435071))))
					{
						goto IL_00ac_2;
					}
				}
				{
					V_3 = (bool)1;
				}

IL_00ac_2:
				{
					goto IL_00b3_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00ae_1;
				}
				throw e;
			}

CATCH_00ae_1:
			{
				OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_31 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));;
				V_3 = (bool)1;
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_00b3_1;
			}

IL_00b3_1:
			{
				bool L_32 = V_3;
				if (!L_32)
				{
					goto IL_00c7_1;
				}
			}
			{
				V_2 = ((int32_t)2146435071);
				__this->____budget = ((int32_t)2147483647LL);
			}

IL_00c7_1:
			{
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_33 = ___0_tables;
				NullCheck(L_33);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_33->____locks;
				NullCheck(L_34);
				int32_t L_35 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_34)->max_length),NULL));
				ConcurrentDictionary_2_AcquireLocks_m36566CCAD7291F4C94D63066C9F41535296A7865(__this, 1, L_35, (&V_0), NULL);
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_36 = ___0_tables;
				NullCheck(L_36);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_36->____locks;
				V_4 = L_37;
				bool L_38 = __this->____growLockArray;
				if (!L_38)
				{
					goto IL_0143_1;
				}
			}
			{
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_39 = ___0_tables;
				NullCheck(L_39);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_39->____locks;
				NullCheck(L_40);
				int32_t L_41 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_40)->max_length),NULL));
				if ((((int32_t)L_41) >= ((int32_t)((int32_t)1024))))
				{
					goto IL_0143_1;
				}
			}
			{
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_42 = ___0_tables;
				NullCheck(L_42);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_42->____locks;
				NullCheck(L_43);
				int32_t L_44 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_43)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_44, 2)));
				V_4 = L_45;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_46 = ___0_tables;
				NullCheck(L_46);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = L_46->____locks;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = V_4;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_49 = ___0_tables;
				NullCheck(L_49);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_49->____locks;
				NullCheck(L_50);
				int32_t L_51 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_50)->max_length),NULL));
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_47, 0, (RuntimeArray*)L_48, 0, L_51, NULL);
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_52 = ___0_tables;
				NullCheck(L_52);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = L_52->____locks;
				NullCheck(L_53);
				int32_t L_54 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_53)->max_length),NULL));
				V_8 = L_54;
				goto IL_013b_1;
			}

IL_012b_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = V_4;
				int32_t L_56 = V_8;
				RuntimeObject* L_57 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
				Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_57, NULL);
				NullCheck(L_55);
				ArrayElementTypeCheck (L_55, L_57);
				(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (RuntimeObject*)L_57);
				int32_t L_58 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_58, 1));
			}

IL_013b_1:
			{
				int32_t L_59 = V_8;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = V_4;
				NullCheck(L_60);
				int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
				if ((((int32_t)L_59) < ((int32_t)L_61)))
				{
					goto IL_012b_1;
				}
			}

IL_0143_1:
			{
				int32_t L_62 = V_2;
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_63 = (NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02*)(NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_62);
				V_5 = L_63;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = V_4;
				NullCheck(L_64);
				int32_t L_65 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_64)->max_length),NULL));
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_65);
				V_6 = L_66;
				V_9 = 0;
				goto IL_01c7_1;
			}

IL_015b_1:
			{
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_67 = ___0_tables;
				NullCheck(L_67);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_68 = L_67->____buckets;
				int32_t L_69 = V_9;
				NullCheck(L_68);
				int32_t L_70 = L_69;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
				V_10 = L_71;
				goto IL_01bd_1;
			}

IL_0168_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_72 = V_10;
				NullCheck(L_72);
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_73 = L_72->____next;
				il2cpp_codegen_memory_barrier();
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_74 = V_10;
				NullCheck(L_74);
				int32_t L_75 = L_74->____hashcode;
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_76 = V_5;
				NullCheck(L_76);
				int32_t L_77 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_76)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = V_4;
				NullCheck(L_78);
				int32_t L_79 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_78)->max_length),NULL));
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				ConcurrentDictionary_2_GetBucketAndLockNo_m84354833BDE3B49D6273C2CB91B56FDF6BB2D52D(L_75, (&V_11), (&V_12), L_77, L_79, NULL);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_80 = V_5;
				int32_t L_81 = V_11;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_82 = V_10;
				NullCheck(L_82);
				Il2CppSharedGenericObject* L_83 = L_82->____key;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_84 = V_10;
				NullCheck(L_84);
				Il2CppSharedGenericObject* L_85 = L_84->____value;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_86 = V_10;
				NullCheck(L_86);
				int32_t L_87 = L_86->____hashcode;
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_88 = V_5;
				int32_t L_89 = V_11;
				NullCheck(L_88);
				int32_t L_90 = L_89;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_92 = (Node_t56E8135FC81EA186451808FF44BDD62E236A1339*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				Node__ctor_mE53CBD5779AF8B8571EE6CB5297EED0A2A4DA062(L_92, L_83, L_85, L_87, L_91, NULL);
				NullCheck(L_80);
				(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (Node_t56E8135FC81EA186451808FF44BDD62E236A1339*)L_92);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_6;
				int32_t L_94 = V_12;
				NullCheck(L_93);
				int32_t* L_95 = ((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94)));
				int32_t L_96 = il2cpp_codegen_ldind<int32_t, int32_t>(L_95);
				if (((int64_t)L_96 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_96 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				il2cpp_codegen_stind<int32_t>((int32_t*)L_95, (int32_t)((int32_t)il2cpp_codegen_add(L_96, 1)));
				V_10 = L_73;
			}

IL_01bd_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_97 = V_10;
				if (L_97)
				{
					goto IL_0168_1;
				}
			}
			{
				int32_t L_98 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_98, 1));
			}

IL_01c7_1:
			{
				int32_t L_99 = V_9;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_100 = ___0_tables;
				NullCheck(L_100);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_101 = L_100->____buckets;
				NullCheck(L_101);
				int32_t L_102 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_101)->max_length),NULL));
				if ((((int32_t)L_99) < ((int32_t)L_102)))
				{
					goto IL_015b_1;
				}
			}
			{
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_103 = V_5;
				NullCheck(L_103);
				int32_t L_104 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_103)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_105 = V_4;
				NullCheck(L_105);
				int32_t L_106 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_105)->max_length),NULL));
				CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_107;
				L_107 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, ((int32_t)(L_104/L_106)), NULL);
				__this->____budget = L_107;
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_108 = V_5;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_109 = V_4;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_6;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_111 = (Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
				Tables__ctor_mB705132BE24B8F6C537D3034D02189E4B78A80AF(L_111, L_108, L_109, L_110, NULL);
				il2cpp_codegen_memory_barrier();
				__this->____tables = L_111;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_111);
				goto IL_0206;
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

IL_0206:
	{
		return;
	}
}
// Method Definition Index: 11381
// Method Definition Index: 11382
// Method Definition Index: 11383
// Method Definition Index: 11384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_AcquireAllLocks_m6D4FB77BA4870F2509D869DCD8EDA711F775BD84_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, int32_t* ___0_locksAcquired, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit,(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* L_0 = ((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log;
		NullCheck(L_0);
		bool L_1;
		L_1 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		CHECKED_LOCAL_INIT(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit,(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* L_2 = ((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log;
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_3 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_3);
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		NullCheck(L_2);
		CDSCollectionETWBCLProvider_ConcurrentDictionary_AcquiringAllLocks_mF33BBE9D19970C7F3C3DB3C0F6BCF16BEEC26EFA(L_2, L_5, NULL);
	}

IL_0025:
	{
		int32_t* L_6 = ___0_locksAcquired;
		ConcurrentDictionary_2_AcquireLocks_m36566CCAD7291F4C94D63066C9F41535296A7865(__this, 0, 1, L_6, NULL);
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_7 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7->____locks;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t* L_10 = ___0_locksAcquired;
		ConcurrentDictionary_2_AcquireLocks_m36566CCAD7291F4C94D63066C9F41535296A7865(__this, 1, L_9, L_10, NULL);
		return;
	}
}
// Method Definition Index: 11385
// Method Definition Index: 11386
// Method Definition Index: 11387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* ConcurrentDictionary_2_GetKeys_mB7179FAA255498E6BE2BB68DB8A52E75F3FBC06D_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* V_1 = NULL;
	int32_t V_2 = 0;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_3 = NULL;
	ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* V_4 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m737F26AF08909572A0CFB96035988064959A5A84(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m6D4FB77BA4870F2509D869DCD8EDA711F775BD84(__this, (&V_0), NULL);
				int32_t L_1;
				L_1 = ConcurrentDictionary_2_GetCountInternal_m98C4DBDA1CB153A75CA32F201B16C24FF3D4640C(__this, NULL);
				int32_t L_2 = L_1;
				if ((((int32_t)L_2) >= ((int32_t)0)))
				{
					G_B3_0 = L_2;
					goto IL_001a_1;
				}
				G_B2_0 = L_2;
			}
			{
				OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_3 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)));
				OutOfMemoryException__ctor_m2CDADA05A6304090686E8D5E3E99A1596FAF5951(L_3, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
			}

IL_001a_1:
			{
				List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_4 = (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 67));
				List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516(L_4, G_B3_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 68));
				V_1 = L_4;
				V_2 = 0;
				goto IL_0052_1;
			}

IL_0024_1:
			{
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_5 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_5);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_6 = L_5->____buckets;
				int32_t L_7 = V_2;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				V_3 = L_9;
				goto IL_004b_1;
			}

IL_0036_1:
			{
				List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_10 = V_1;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_11 = V_3;
				NullCheck(L_11);
				Il2CppSharedGenericObject* L_12 = L_11->____key;
				NullCheck(L_10);
				List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_10, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 69));
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_13 = V_3;
				NullCheck(L_13);
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_14 = L_13->____next;
				il2cpp_codegen_memory_barrier();
				V_3 = L_14;
			}

IL_004b_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_15 = V_3;
				if (L_15)
				{
					goto IL_0036_1;
				}
			}
			{
				int32_t L_16 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0052_1:
			{
				int32_t L_17 = V_2;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_18 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_18);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_19 = L_18->____buckets;
				NullCheck(L_19);
				int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
				if ((((int32_t)L_17) < ((int32_t)L_20)))
				{
					goto IL_0024_1;
				}
			}
			{
				List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_21 = V_1;
				ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_22 = (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 70));
				ReadOnlyCollection_1__ctor_mC1890FAC00703F47A655C35CBCB613C74A811580(L_22, (RuntimeObject*)L_21, NULL);
				V_4 = L_22;
				goto IL_0077;
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

IL_0077:
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_23 = V_4;
		return L_23;
	}
}
// Method Definition Index: 11388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* ConcurrentDictionary_2_GetValues_m7C13D32EA69766A289F6BB7B4D8046024347A7B1_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* V_1 = NULL;
	int32_t V_2 = 0;
	Node_t56E8135FC81EA186451808FF44BDD62E236A1339* V_3 = NULL;
	ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* V_4 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m737F26AF08909572A0CFB96035988064959A5A84(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m6D4FB77BA4870F2509D869DCD8EDA711F775BD84(__this, (&V_0), NULL);
				int32_t L_1;
				L_1 = ConcurrentDictionary_2_GetCountInternal_m98C4DBDA1CB153A75CA32F201B16C24FF3D4640C(__this, NULL);
				int32_t L_2 = L_1;
				if ((((int32_t)L_2) >= ((int32_t)0)))
				{
					G_B3_0 = L_2;
					goto IL_001a_1;
				}
				G_B2_0 = L_2;
			}
			{
				OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_3 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)));
				OutOfMemoryException__ctor_m2CDADA05A6304090686E8D5E3E99A1596FAF5951(L_3, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
			}

IL_001a_1:
			{
				List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_4 = (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 72));
				List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516(L_4, G_B3_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 73));
				V_1 = L_4;
				V_2 = 0;
				goto IL_0052_1;
			}

IL_0024_1:
			{
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_5 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_5);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_6 = L_5->____buckets;
				int32_t L_7 = V_2;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				V_3 = L_9;
				goto IL_004b_1;
			}

IL_0036_1:
			{
				List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_10 = V_1;
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_11 = V_3;
				NullCheck(L_11);
				Il2CppSharedGenericObject* L_12 = L_11->____value;
				NullCheck(L_10);
				List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_10, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 74));
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_13 = V_3;
				NullCheck(L_13);
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_14 = L_13->____next;
				il2cpp_codegen_memory_barrier();
				V_3 = L_14;
			}

IL_004b_1:
			{
				Node_t56E8135FC81EA186451808FF44BDD62E236A1339* L_15 = V_3;
				if (L_15)
				{
					goto IL_0036_1;
				}
			}
			{
				int32_t L_16 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0052_1:
			{
				int32_t L_17 = V_2;
				Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_18 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_18);
				NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_19 = L_18->____buckets;
				NullCheck(L_19);
				int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
				if ((((int32_t)L_17) < ((int32_t)L_20)))
				{
					goto IL_0024_1;
				}
			}
			{
				List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_21 = V_1;
				ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_22 = (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 75));
				ReadOnlyCollection_1__ctor_mC1890FAC00703F47A655C35CBCB613C74A811580(L_22, (RuntimeObject*)L_21, NULL);
				V_4 = L_22;
				goto IL_0077;
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

IL_0077:
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_23 = V_4;
		return L_23;
	}
}
// Method Definition Index: 11389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_OnSerializing_m02A08654778C88C400735FEE4B542A07C7B7B2A9_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___0_context, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* V_0 = NULL;
	{
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_1;
		L_1 = ConcurrentDictionary_2_ToArray_mB7BEF7AB0F93F41DA7626273762D41F08FDBEE07(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 77));
		__this->____serializationArray = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationArray), (void*)L_1);
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_2 = V_0;
		NullCheck(L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2->____locks;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		__this->____serializationConcurrencyLevel = L_4;
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_5 = V_0;
		NullCheck(L_5);
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_6 = L_5->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____serializationCapacity = L_7;
		return;
	}
}
// Method Definition Index: 11390
// Method Definition Index: 11391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_OnDeserialized_mEA767AF3435640590BED9C1F16E0A671BB1F7166_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* V_0 = NULL;
	NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_0 = __this->____serializationArray;
		V_0 = L_0;
		int32_t L_1 = __this->____serializationCapacity;
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_2 = (NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02*)(NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_1);
		V_1 = L_2;
		int32_t L_3 = __this->____serializationConcurrencyLevel;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		int32_t L_5 = __this->____serializationConcurrencyLevel;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_3 = L_6;
		V_4 = 0;
		goto IL_003f;
	}

IL_0030:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_3;
		int32_t L_8 = V_4;
		RuntimeObject* L_9 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_9, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003f:
	{
		int32_t L_11 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_3;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0030;
		}
	}
	{
		NodeU5BU5D_t453C539DB47FA11897CD65DCECC58CA28B34AF02* L_14 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_2;
		Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* L_17 = (Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		Tables__ctor_mB705132BE24B8F6C537D3034D02189E4B78A80AF(L_17, L_14, L_15, L_16, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____tables = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_17);
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_18 = V_0;
		ConcurrentDictionary_2_InitializeFromCollection_m300BC020F3C4DC3DE6AA37038EC6BDDA424BECE7(__this, (RuntimeObject*)L_18, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 78));
		__this->____serializationArray = (KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationArray), (void*)(KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*)NULL);
		return;
	}
}
// Method Definition Index: 11392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__cctor_mAF80F1794F6F68AE65B96E4A4261E96FD7B63266_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ConcurrentDictionary_2_IsValueWriteAtomic_m74689C9F03BF8A0F241A531E8FEADC3F638A093E(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 79));
		((ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)))->___s_isValueWriteAtomic = L_0;
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
// Method Definition Index: 11327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_IsValueWriteAtomic_m16A364B69C9A8EF222E525CBA92585A8D69D0B09_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)1;
	}

IL_0015:
	{
		Type_t* L_4 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466(L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 3)))
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0056;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_0056;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0056;
			}
			case 7:
			{
				goto IL_0056;
			}
			case 8:
			{
				goto IL_0058;
			}
			case 9:
			{
				goto IL_0058;
			}
			case 10:
			{
				goto IL_0056;
			}
			case 11:
			{
				goto IL_0058;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0056:
	{
		return (bool)1;
	}

IL_0058:
	{
		int32_t L_7;
		L_7 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		return (bool)((((int32_t)L_7) == ((int32_t)8))? 1 : 0);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m2815E6BC02EFE6383AD6CBF434FBBD0DD290241F_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0;
		L_0 = ConcurrentDictionary_2_get_DefaultConcurrencyLevel_mF8DC687602A59F7400FE844431A8836322D94FE9(NULL);
		ConcurrentDictionary_2__ctor_mD753670974F8B5B5C5868778B3C24E37A44B265B(__this, L_0, ((int32_t)31), (bool)1, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		return;
	}
}
// Method Definition Index: 11329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_mDFE3C66ADF2D36AF847E4D6918D4B6DD0AC1B138_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0;
		L_0 = ConcurrentDictionary_2_get_DefaultConcurrencyLevel_mF8DC687602A59F7400FE844431A8836322D94FE9(NULL);
		RuntimeObject* L_1 = ___0_comparer;
		ConcurrentDictionary_2__ctor_mD753670974F8B5B5C5868778B3C24E37A44B265B(__this, L_0, ((int32_t)31), (bool)1, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		return;
	}
}
// Method Definition Index: 11330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_InitializeFromCollection_m27DE2C2479865D942A87800621ABA47583AB50B1_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_collection;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 5), L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_1;
				NullCheck(L_4);
				KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_4);
				V_2 = L_5;
				Il2CppSharedGenericObject* L_6;
				L_6 = KeyValuePair_2_get_Key_m59E82E5A467D2D93DBAA6AA381F5CC5286E533DD_inline((&V_2), NULL);
				if (L_6)
				{
					goto IL_0023_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_0023_1:
			{
				Il2CppSharedGenericObject* L_7;
				L_7 = KeyValuePair_2_get_Key_m59E82E5A467D2D93DBAA6AA381F5CC5286E533DD_inline((&V_2), NULL);
				RuntimeObject* L_8 = __this->____comparer;
				Il2CppSharedGenericObject* L_9;
				L_9 = KeyValuePair_2_get_Key_m59E82E5A467D2D93DBAA6AA381F5CC5286E533DD_inline((&V_2), NULL);
				NullCheck(L_8);
				int32_t L_10;
				L_10 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_8, L_9);
				int32_t L_11;
				L_11 = KeyValuePair_2_get_Value_m9EBB8AC826C6439F35AE628B8FBD3FC1A322E493_inline((&V_2), NULL);
				bool L_12;
				L_12 = ConcurrentDictionary_2_TryAddInternal_m557FDD32269B23DC3F74ECF39AE4E46FD1089712(__this, L_7, L_10, L_11, (bool)0, (bool)0, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
				if (L_12)
				{
					goto IL_005a_1;
				}
			}
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEC0CC039753090F0DDDF2727802FC6E1570B317B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
			}

IL_005a_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck((RuntimeObject*)L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
				if (L_15)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_006e;
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

IL_006e:
	{
		int32_t L_16 = __this->____budget;
		if (L_16)
		{
			goto IL_009b;
		}
	}
	{
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_17 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_17);
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_18 = L_17->____buckets;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_20 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20->____locks;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		__this->____budget = ((int32_t)(L_19/L_22));
	}

IL_009b:
	{
		return;
	}
}
// Method Definition Index: 11331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_mD753670974F8B5B5C5868778B3C24E37A44B265B_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, int32_t ___0_concurrencyLevel, int32_t ___1_capacity, bool ___2_growLockArray, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* G_B11_0 = NULL;
	ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* G_B11_1 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* G_B10_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_concurrencyLevel;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF10EFAF6473141D13A05C1B850DEF40E641A918)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68445D6E030501243B18C07E57CF1AE5C1C5AAF2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_001a:
	{
		int32_t L_2 = ___1_capacity;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE59C400B29D20EE4CB5A86E1F46ED782D7872D43)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_002e:
	{
		int32_t L_4 = ___1_capacity;
		int32_t L_5 = ___0_concurrencyLevel;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_6 = ___0_concurrencyLevel;
		___1_capacity = L_6;
	}

IL_0035:
	{
		int32_t L_7 = ___0_concurrencyLevel;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_0 = L_8;
		V_3 = 0;
		goto IL_004c;
	}

IL_0040:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		int32_t L_10 = V_3;
		RuntimeObject* L_11 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_11, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (RuntimeObject*)L_11);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004c:
	{
		int32_t L_13 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0040;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_1 = L_18;
		int32_t L_19 = ___1_capacity;
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_20 = (NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630*)(NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_19);
		V_2 = L_20;
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_21 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_24 = (Tables_t0E315C824AE282366793BBC56D608560C6DCF865*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		Tables__ctor_m07CC2782D8399B3982CA68633ED34991FC356F60(L_24, L_21, L_22, L_23, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____tables = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_24);
		RuntimeObject* L_25 = ___3_comparer;
		RuntimeObject* L_26 = L_25;
		if (L_26)
		{
			G_B11_0 = L_26;
			G_B11_1 = __this;
			goto IL_007e;
		}
		G_B10_0 = L_26;
		G_B10_1 = __this;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_27;
		L_27 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		G_B11_0 = ((RuntimeObject*)(L_27));
		G_B11_1 = G_B10_1;
	}

IL_007e:
	{
		NullCheck(G_B11_1);
		G_B11_1->____comparer = G_B11_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B11_1->____comparer), (void*)G_B11_0);
		bool L_28 = ___2_growLockArray;
		__this->____growLockArray = L_28;
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_29)->max_length),NULL));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		__this->____budget = ((int32_t)(L_30/L_32));
		return;
	}
}
// Method Definition Index: 11332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_m7C2A0E663CCEBCADE29087D2BCE8C724C07D8EAA_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		RuntimeObject* L_2 = __this->____comparer;
		Il2CppSharedGenericObject* L_3 = ___0_key;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_2, L_3);
		int32_t L_5 = ___1_value;
		bool L_6;
		L_6 = ConcurrentDictionary_2_TryAddInternal_m557FDD32269B23DC3F74ECF39AE4E46FD1089712(__this, L_1, L_4, L_5, (bool)0, (bool)1, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return L_6;
	}
}
// Method Definition Index: 11333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_ContainsKey_m730195EAA4F2F9BF95445A4FB9762B904149F22B_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryGetValue_m398EFFB0EBF6050AB20148A6F2CD9425BC9EC28B(__this, L_1, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		return L_2;
	}
}
// Method Definition Index: 11334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_mE436A198E4A1C975E7F66AFC03C72D488CBDB662_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		int32_t* L_2 = ___1_value;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_3 = V_0;
		bool L_4;
		L_4 = ConcurrentDictionary_2_TryRemoveInternal_m46B776D0225E7BCF4A36CF6477F87BA1FB2740D0(__this, L_1, L_2, (bool)0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return L_4;
	}
}
// Method Definition Index: 11335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemoveInternal_m46B776D0225E7BCF4A36CF6477F87BA1FB2740D0_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, bool ___2_matchValue, int32_t ___3_oldValue, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Tables_t0E315C824AE282366793BBC56D608560C6DCF865* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_6 = NULL;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_7 = NULL;
	bool V_8 = false;
	{
		RuntimeObject* L_0 = __this->____comparer;
		Il2CppSharedGenericObject* L_1 = ___0_key;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_0, L_1);
		V_0 = L_2;
	}

IL_000d:
	{
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_3 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_1 = L_3;
		int32_t L_4 = V_0;
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_5 = V_1;
		NullCheck(L_5);
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_6 = L_5->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_8 = V_1;
		NullCheck(L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8->____locks;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_GetBucketAndLockNo_m5E8B11F20877C6E1B164FBD2ED2655972027E86D(L_4, (&V_2), (&V_3), L_7, L_10, NULL);
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_11 = V_1;
		NullCheck(L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11->____locks;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		V_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011d:
			{
				{
					bool L_16 = V_5;
					if (!L_16)
					{
						goto IL_0128;
					}
				}
				{
					RuntimeObject* L_17 = V_4;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_17, NULL);
				}

IL_0128:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_18 = V_4;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_18, (&V_5), NULL);
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_19 = V_1;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_20 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_t0E315C824AE282366793BBC56D608560C6DCF865*)L_19) == ((RuntimeObject*)(Tables_t0E315C824AE282366793BBC56D608560C6DCF865*)L_20)))
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_000d;
			}

IL_0053_1:
			{
				V_6 = (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A*)NULL;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_21 = V_1;
				NullCheck(L_21);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_22 = L_21->____buckets;
				int32_t L_23 = V_2;
				NullCheck(L_22);
				int32_t L_24 = L_23;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_7 = L_25;
				goto IL_0114_1;
			}

IL_0065_1:
			{
				int32_t L_26 = V_0;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_27 = V_7;
				NullCheck(L_27);
				int32_t L_28 = L_27->____hashcode;
				if ((!(((uint32_t)L_26) == ((uint32_t)L_28))))
				{
					goto IL_0105_1;
				}
			}
			{
				RuntimeObject* L_29 = __this->____comparer;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_30 = V_7;
				NullCheck(L_30);
				Il2CppSharedGenericObject* L_31 = L_30->____key;
				Il2CppSharedGenericObject* L_32 = ___0_key;
				NullCheck(L_29);
				bool L_33;
				L_33 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_29, L_31, L_32);
				if (!L_33)
				{
					goto IL_0105_1;
				}
			}
			{
				bool L_34 = ___2_matchValue;
				if (!L_34)
				{
					goto IL_00ae_1;
				}
			}
			{
				EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_35;
				L_35 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
				int32_t L_36 = ___3_oldValue;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_37 = V_7;
				NullCheck(L_37);
				int32_t L_38 = L_37->____value;
				NullCheck(L_35);
				bool L_39;
				L_39 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_35, L_36, L_38);
				if (L_39)
				{
					goto IL_00ae_1;
				}
			}
			{
				int32_t* L_40 = ___1_value;
				il2cpp_codegen_initobj(L_40, sizeof(int32_t));
				V_8 = (bool)0;
				goto IL_0132;
			}

IL_00ae_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_41 = V_6;
				if (L_41)
				{
					goto IL_00ce_1;
				}
			}
			{
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_42 = V_1;
				NullCheck(L_42);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_43 = L_42->____buckets;
				int32_t L_44 = V_2;
				NullCheck(L_43);
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_45 = V_7;
				NullCheck(L_45);
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_46 = L_45->____next;
				il2cpp_codegen_memory_barrier();
				VolatileWrite((Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A**)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A*)L_46);
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_47 = V_6;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_48 = V_7;
				NullCheck(L_48);
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_49 = L_48->____next;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_47);
				il2cpp_codegen_memory_barrier();
				L_47->____next = L_49;
				Il2CppCodeGenWriteBarrier((void**)(&L_47->____next), (void*)L_49);
			}

IL_00e0_1:
			{
				int32_t* L_50 = ___1_value;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_51 = V_7;
				NullCheck(L_51);
				int32_t L_52 = L_51->____value;
				*(int32_t*)L_50 = L_52;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_53 = V_1;
				NullCheck(L_53);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = L_53->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_55 = V_3;
				NullCheck(L_54);
				int32_t* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)));
				int32_t L_57 = il2cpp_codegen_ldind<int32_t, int32_t>(L_56);
				il2cpp_codegen_stind<int32_t>((int32_t*)L_56, (int32_t)((int32_t)il2cpp_codegen_subtract(L_57, 1)));
				V_8 = (bool)1;
				goto IL_0132;
			}

IL_0105_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_58 = V_7;
				V_6 = L_58;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_59 = V_7;
				NullCheck(L_59);
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_60 = L_59->____next;
				il2cpp_codegen_memory_barrier();
				V_7 = L_60;
			}

IL_0114_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_61 = V_7;
				if (L_61)
				{
					goto IL_0065_1;
				}
			}
			{
				goto IL_0129;
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

IL_0129:
	{
		int32_t* L_62 = ___1_value;
		il2cpp_codegen_initobj(L_62, sizeof(int32_t));
		return (bool)0;
	}

IL_0132:
	{
		bool L_63 = V_8;
		return L_63;
	}
}
// Method Definition Index: 11336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_m398EFFB0EBF6050AB20148A6F2CD9425BC9EC28B_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		RuntimeObject* L_2 = __this->____comparer;
		Il2CppSharedGenericObject* L_3 = ___0_key;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_2, L_3);
		int32_t* L_5 = ___1_value;
		bool L_6;
		L_6 = ConcurrentDictionary_2_TryGetValueInternal_m9DDA685C0FF1419016622559F267A755DB7776E0(__this, L_1, L_4, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		return L_6;
	}
}
// Method Definition Index: 11337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValueInternal_m9DDA685C0FF1419016622559F267A755DB7776E0_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t* ___2_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	Tables_t0E315C824AE282366793BBC56D608560C6DCF865* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_2 = NULL;
	{
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1 = ___1_hashcode;
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_2 = V_0;
		NullCheck(L_2);
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_3 = L_2->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = ConcurrentDictionary_2_GetBucket_m0F312F4F63B6C76EAD8172852BE14AF061E2BBFD(L_1, L_4, NULL);
		V_1 = L_5;
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_6 = V_0;
		NullCheck(L_6);
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_7 = L_6->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_9;
		L_9 = VolatileRead(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))));
		V_2 = L_9;
		goto IL_0060;
	}

IL_002c:
	{
		int32_t L_10 = ___1_hashcode;
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12 = L_11->____hashcode;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_12))))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_14 = V_2;
		NullCheck(L_14);
		Il2CppSharedGenericObject* L_15 = L_14->____key;
		Il2CppSharedGenericObject* L_16 = ___0_key;
		NullCheck(L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_13, L_15, L_16);
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		int32_t* L_18 = ___2_value;
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_19 = V_2;
		NullCheck(L_19);
		int32_t L_20 = L_19->____value;
		*(int32_t*)L_18 = L_20;
		return (bool)1;
	}

IL_0057:
	{
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_21 = V_2;
		NullCheck(L_21);
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_22 = L_21->____next;
		il2cpp_codegen_memory_barrier();
		V_2 = L_22;
	}

IL_0060:
	{
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_23 = V_2;
		if (L_23)
		{
			goto IL_002c;
		}
	}
	{
		int32_t* L_24 = ___2_value;
		il2cpp_codegen_initobj(L_24, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 11338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryUpdateInternal_m3578B43E95E53FB205D48F82042D19E16D9075C8_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t ___2_newValue, int32_t ___3_comparisonValue, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Tables_t0E315C824AE282366793BBC56D608560C6DCF865* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_6 = NULL;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_7 = NULL;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_8 = NULL;
	bool V_9 = false;
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_0;
		L_0 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_0 = (RuntimeObject*)L_0;
	}

IL_0006:
	{
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_1 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_3 = L_1;
		int32_t L_2 = ___1_hashcode;
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_3 = V_3;
		NullCheck(L_3);
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_6 = V_3;
		NullCheck(L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6->____locks;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_GetBucketAndLockNo_m5E8B11F20877C6E1B164FBD2ED2655972027E86D(L_2, (&V_1), (&V_2), L_5, L_8, NULL);
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_9 = V_3;
		NullCheck(L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____locks;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		V_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0101:
			{
				{
					bool L_14 = V_5;
					if (!L_14)
					{
						goto IL_010c;
					}
				}
				{
					RuntimeObject* L_15 = V_4;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_15, NULL);
				}

IL_010c:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_16 = V_4;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_16, (&V_5), NULL);
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_17 = V_3;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_18 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_t0E315C824AE282366793BBC56D608560C6DCF865*)L_17) == ((RuntimeObject*)(Tables_t0E315C824AE282366793BBC56D608560C6DCF865*)L_18)))
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_0006;
			}

IL_004c_1:
			{
				V_6 = (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A*)NULL;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_19 = V_3;
				NullCheck(L_19);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_20 = L_19->____buckets;
				int32_t L_21 = V_1;
				NullCheck(L_20);
				int32_t L_22 = L_21;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
				V_7 = L_23;
				goto IL_00f5_1;
			}

IL_005e_1:
			{
				int32_t L_24 = ___1_hashcode;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_25 = V_7;
				NullCheck(L_25);
				int32_t L_26 = L_25->____hashcode;
				if ((!(((uint32_t)L_24) == ((uint32_t)L_26))))
				{
					goto IL_00e6_1;
				}
			}
			{
				RuntimeObject* L_27 = __this->____comparer;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_28 = V_7;
				NullCheck(L_28);
				Il2CppSharedGenericObject* L_29 = L_28->____key;
				Il2CppSharedGenericObject* L_30 = ___0_key;
				NullCheck(L_27);
				bool L_31;
				L_31 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_27, L_29, L_30);
				if (!L_31)
				{
					goto IL_00e6_1;
				}
			}
			{
				RuntimeObject* L_32 = V_0;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_33 = V_7;
				NullCheck(L_33);
				int32_t L_34 = L_33->____value;
				int32_t L_35 = ___3_comparisonValue;
				NullCheck(L_32);
				bool L_36;
				L_36 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_32, L_34, L_35);
				if (!L_36)
				{
					goto IL_00e1_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				bool L_37 = ((ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)))->___s_isValueWriteAtomic;
				if (!L_37)
				{
					goto IL_009f_1;
				}
			}
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_38 = V_7;
				int32_t L_39 = ___2_newValue;
				NullCheck(L_38);
				L_38->____value = L_39;
				goto IL_00dc_1;
			}

IL_009f_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_40 = V_7;
				NullCheck(L_40);
				Il2CppSharedGenericObject* L_41 = L_40->____key;
				int32_t L_42 = ___2_newValue;
				int32_t L_43 = ___1_hashcode;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_44 = V_7;
				NullCheck(L_44);
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_45 = L_44->____next;
				il2cpp_codegen_memory_barrier();
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_46 = (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				Node__ctor_m6F8EFC954ED470D3283D08AEA5C1B7A520B0EF24(L_46, L_41, L_42, L_43, L_45, NULL);
				V_8 = L_46;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_47 = V_6;
				if (L_47)
				{
					goto IL_00d1_1;
				}
			}
			{
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_48 = V_3;
				NullCheck(L_48);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_49 = L_48->____buckets;
				int32_t L_50 = V_1;
				NullCheck(L_49);
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_51 = V_8;
				VolatileWrite((Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A**)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50))), (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A*)L_51);
				goto IL_00dc_1;
			}

IL_00d1_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_52 = V_6;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_53 = V_8;
				NullCheck(L_52);
				il2cpp_codegen_memory_barrier();
				L_52->____next = L_53;
				Il2CppCodeGenWriteBarrier((void**)(&L_52->____next), (void*)L_53);
			}

IL_00dc_1:
			{
				V_9 = (bool)1;
				goto IL_010d;
			}

IL_00e1_1:
			{
				V_9 = (bool)0;
				goto IL_010d;
			}

IL_00e6_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_54 = V_7;
				V_6 = L_54;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_55 = V_7;
				NullCheck(L_55);
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_56 = L_55->____next;
				il2cpp_codegen_memory_barrier();
				V_7 = L_56;
			}

IL_00f5_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_57 = V_7;
				if (L_57)
				{
					goto IL_005e_1;
				}
			}
			{
				V_9 = (bool)0;
				goto IL_010d;
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

IL_010d:
	{
		bool L_58 = V_9;
		return L_58;
	}
}
// Method Definition Index: 11339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_Clear_mC71F2E5DE7332C0734F634CA75AA1CD4EC5EE6AA_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Tables_t0E315C824AE282366793BBC56D608560C6DCF865* V_1 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m51A3F9CEDCD19B2423B97CB9B9992B337D6E02F3(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			ConcurrentDictionary_2_AcquireAllLocks_m43AEB8C0E662224BEDDE807935CE4C2FDD4317E5(__this, (&V_0), NULL);
			NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_1 = (NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630*)(NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)((int32_t)31));
			Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_2 = __this->____tables;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_2);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2->____locks;
			Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_4 = __this->____tables;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_4);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->____countPerLock;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_5);
			int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
			Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_8 = (Tables_t0E315C824AE282366793BBC56D608560C6DCF865*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
			Tables__ctor_m07CC2782D8399B3982CA68633ED34991FC356F60(L_8, L_1, L_3, L_7, NULL);
			V_1 = L_8;
			Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_9 = V_1;
			il2cpp_codegen_memory_barrier();
			__this->____tables = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_9);
			Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_10 = V_1;
			NullCheck(L_10);
			NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_11 = L_10->____buckets;
			NullCheck(L_11);
			int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
			Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_13 = V_1;
			NullCheck(L_13);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13->____locks;
			NullCheck(L_14);
			int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
			CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			int32_t L_16;
			L_16 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, ((int32_t)(L_12/L_15)), NULL);
			__this->____budget = L_16;
			goto IL_006b;
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
		return;
	}
}
// Method Definition Index: 11340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m02F48FD712E4F2497BA633DF96246F33BFDD8F94_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_0 = ___0_array;
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
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0D86565E49BD212E7AC64BABD33BE3668A4C45B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0081:
			{
				int32_t L_4 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m51A3F9CEDCD19B2423B97CB9B9992B337D6E02F3(__this, 0, L_4, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m43AEB8C0E662224BEDDE807935CE4C2FDD4317E5(__this, (&V_0), NULL);
				V_1 = 0;
				V_2 = 0;
				goto IL_004a_1;
			}

IL_0032_1:
			{
				int32_t L_5 = V_1;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_6 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_6);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_8 = V_2;
				NullCheck(L_7);
				int32_t L_9 = L_8;
				int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
				V_1 = ((int32_t)il2cpp_codegen_add(L_5, L_10));
				int32_t L_11 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			}

IL_004a_1:
			{
				int32_t L_12 = V_2;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_13 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_13);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13->____locks;
				NullCheck(L_14);
				int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
				if ((((int32_t)L_12) >= ((int32_t)L_15)))
				{
					goto IL_0060_1;
				}
			}
			{
				int32_t L_16 = V_1;
				if ((((int32_t)L_16) >= ((int32_t)0)))
				{
					goto IL_0032_1;
				}
			}

IL_0060_1:
			{
				KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_17 = ___0_array;
				NullCheck(L_17);
				int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
				int32_t L_19 = V_1;
				int32_t L_20 = ___1_index;
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, L_19))) < ((int32_t)L_20)))
				{
					goto IL_006c_1;
				}
			}
			{
				int32_t L_21 = V_1;
				if ((((int32_t)L_21) >= ((int32_t)0)))
				{
					goto IL_0077_1;
				}
			}

IL_006c_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral672E993A9AD93822B712B165C6987759C6DED80B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
			}

IL_0077_1:
			{
				KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_23 = ___0_array;
				int32_t L_24 = ___1_index;
				ConcurrentDictionary_2_CopyToPairs_mF5CD68DD700C0FD7EC6BB3EB323EE04E8A218F31(__this, L_23, L_24, NULL);
				goto IL_008a;
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

IL_008a:
	{
		return;
	}
}
// Method Definition Index: 11341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* ConcurrentDictionary_2_ToArray_m5EAE034E0E7F06C122D5F31285549651E9345B81_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* V_2 = NULL;
	int32_t V_3 = 0;
	KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* V_4 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m51A3F9CEDCD19B2423B97CB9B9992B337D6E02F3(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m43AEB8C0E662224BEDDE807935CE4C2FDD4317E5(__this, (&V_0), NULL);
				V_1 = 0;
				V_3 = 0;
				goto IL_0028_1;
			}

IL_0010_1:
			{
				int32_t L_1 = V_1;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_2 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_2);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_4 = V_3;
				NullCheck(L_3);
				int32_t L_5 = L_4;
				int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
				if (((int64_t)L_1 + (int64_t)L_6 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_1 + (int64_t)L_6 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				V_1 = ((int32_t)il2cpp_codegen_add(L_1, L_6));
				int32_t L_7 = V_3;
				if (((int64_t)L_7 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_7 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
			}

IL_0028_1:
			{
				int32_t L_8 = V_3;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_9 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_9);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____locks;
				NullCheck(L_10);
				int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
				if ((((int32_t)L_8) < ((int32_t)L_11)))
				{
					goto IL_0010_1;
				}
			}
			{
				int32_t L_12 = V_1;
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_13;
				L_13 = Array_Empty_TisKeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120_m3DAC5947C7DA5A5E357F497BE6BA770642F8A232_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
				V_4 = L_13;
				goto IL_0063;
			}

IL_0046_1:
			{
				int32_t L_14 = V_1;
				KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_15 = (KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D*)(KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42), (uint32_t)L_14);
				V_2 = L_15;
				KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_16 = V_2;
				ConcurrentDictionary_2_CopyToPairs_mF5CD68DD700C0FD7EC6BB3EB323EE04E8A218F31(__this, L_16, 0, NULL);
				KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_17 = V_2;
				V_4 = L_17;
				goto IL_0063;
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

IL_0063:
	{
		KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_18 = V_4;
		return L_18;
	}
}
// Method Definition Index: 11342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToPairs_mF5CD68DD700C0FD7EC6BB3EB323EE04E8A218F31_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_2 = NULL;
	{
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0045;
	}

IL_0012:
	{
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_003e;
	}

IL_0018:
	{
		KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_8 = V_2;
		NullCheck(L_8);
		Il2CppSharedGenericObject* L_9 = L_8->____key;
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->____value;
		KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 L_12;
		memset((&L_12), 0, sizeof(L_12));
		KeyValuePair_2__ctor_m723623F2CA55A4B8CA68E3D59E291D9ECEC3E315((&L_12), L_9, L_11, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120)L_12);
		int32_t L_13 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_14 = V_2;
		NullCheck(L_14);
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_15 = L_14->____next;
		il2cpp_codegen_memory_barrier();
		V_2 = L_15;
	}

IL_003e:
	{
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_16 = V_2;
		if (L_16)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0045:
	{
		int32_t L_18 = V_1;
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToEntries_m87ADCB4F712024D91535AE14392A26BA8E25A4F2_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_2 = NULL;
	{
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_004f;
	}

IL_0012:
	{
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_0048;
	}

IL_0018:
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_8 = V_2;
		NullCheck(L_8);
		Il2CppSharedGenericObject* L_9 = L_8->____key;
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->____value;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), &L_12);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_14;
		memset((&L_14), 0, sizeof(L_14));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_14), (RuntimeObject*)L_9, L_13, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_14);
		int32_t L_15 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_16 = V_2;
		NullCheck(L_16);
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_17 = L_16->____next;
		il2cpp_codegen_memory_barrier();
		V_2 = L_17;
	}

IL_0048:
	{
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_18 = V_2;
		if (L_18)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004f:
	{
		int32_t L_20 = V_1;
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToObjects_m088B2EFE2850EF373D64801B014353519F8CB39A_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_2 = NULL;
	{
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0046;
	}

IL_0012:
	{
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_003f;
	}

IL_0018:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_8 = V_2;
		NullCheck(L_8);
		Il2CppSharedGenericObject* L_9 = L_8->____key;
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->____value;
		KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 L_12;
		memset((&L_12), 0, sizeof(L_12));
		KeyValuePair_2__ctor_m723623F2CA55A4B8CA68E3D59E291D9ECEC3E315((&L_12), L_9, L_11, NULL);
		KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9), &L_13);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_14);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_14);
		int32_t L_15 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_16 = V_2;
		NullCheck(L_16);
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_17 = L_16->____next;
		il2cpp_codegen_memory_barrier();
		V_2 = L_17;
	}

IL_003f:
	{
		Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_18 = V_2;
		if (L_18)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0046:
	{
		int32_t L_20 = V_1;
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m902D4621DB439D17D464419FE299710F9F01E9C2_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CGetEnumeratorU3Ed__35_t8A9F5879A8C4CA197FA6E180F095D6864EEB7D79* L_0 = (U3CGetEnumeratorU3Ed__35_t8A9F5879A8C4CA197FA6E180F095D6864EEB7D79*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44));
		U3CGetEnumeratorU3Ed__35__ctor_m3E2212234B0ECF46D835DB37EF2FB598E3CAA3B6(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__35_t8A9F5879A8C4CA197FA6E180F095D6864EEB7D79* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAddInternal_m557FDD32269B23DC3F74ECF39AE4E46FD1089712_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_hashcode, int32_t ___2_value, bool ___3_updateIfExists, bool ___4_acquireLock, int32_t* ___5_resultingValue, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Tables_t0E315C824AE282366793BBC56D608560C6DCF865* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_5 = NULL;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_6 = NULL;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_7 = NULL;
	bool V_8 = false;

IL_0000:
	{
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_2 = L_0;
		int32_t L_1 = ___1_hashcode;
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_2 = V_2;
		NullCheck(L_2);
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_3 = L_2->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_5 = V_2;
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5->____locks;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_GetBucketAndLockNo_m5E8B11F20877C6E1B164FBD2ED2655972027E86D(L_1, (&V_0), (&V_1), L_4, L_7, NULL);
		V_3 = (bool)0;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_014e:
			{
				{
					bool L_8 = V_4;
					if (!L_8)
					{
						goto IL_015f;
					}
				}
				{
					Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_9 = V_2;
					NullCheck(L_9);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____locks;
					int32_t L_11 = V_1;
					NullCheck(L_10);
					int32_t L_12 = L_11;
					RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_13, NULL);
				}

IL_015f:
				{
					return;
				}
			}
		});
		try
		{
			{
				bool L_14 = ___4_acquireLock;
				if (!L_14)
				{
					goto IL_003b_1;
				}
			}
			{
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_15 = V_2;
				NullCheck(L_15);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15->____locks;
				int32_t L_17 = V_1;
				NullCheck(L_16);
				int32_t L_18 = L_17;
				RuntimeObject* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_19, (&V_4), NULL);
			}

IL_003b_1:
			{
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_20 = V_2;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_21 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_t0E315C824AE282366793BBC56D608560C6DCF865*)L_20) == ((RuntimeObject*)(Tables_t0E315C824AE282366793BBC56D608560C6DCF865*)L_21)))
				{
					goto IL_0048_1;
				}
			}
			{
				goto IL_0000;
			}

IL_0048_1:
			{
				V_5 = (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A*)NULL;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_22 = V_2;
				NullCheck(L_22);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_23 = L_22->____buckets;
				int32_t L_24 = V_0;
				NullCheck(L_23);
				int32_t L_25 = L_24;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
				V_6 = L_26;
				goto IL_00fd_1;
			}

IL_005a_1:
			{
				int32_t L_27 = ___1_hashcode;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_28 = V_6;
				NullCheck(L_28);
				int32_t L_29 = L_28->____hashcode;
				if ((!(((uint32_t)L_27) == ((uint32_t)L_29))))
				{
					goto IL_00ee_1;
				}
			}
			{
				RuntimeObject* L_30 = __this->____comparer;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_31 = V_6;
				NullCheck(L_31);
				Il2CppSharedGenericObject* L_32 = L_31->____key;
				Il2CppSharedGenericObject* L_33 = ___0_key;
				NullCheck(L_30);
				bool L_34;
				L_34 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_30, L_32, L_33);
				if (!L_34)
				{
					goto IL_00ee_1;
				}
			}
			{
				bool L_35 = ___3_updateIfExists;
				if (!L_35)
				{
					goto IL_00d8_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				bool L_36 = ((ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)))->___s_isValueWriteAtomic;
				if (!L_36)
				{
					goto IL_0091_1;
				}
			}
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_37 = V_6;
				int32_t L_38 = ___2_value;
				NullCheck(L_37);
				L_37->____value = L_38;
				goto IL_00ce_1;
			}

IL_0091_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_39 = V_6;
				NullCheck(L_39);
				Il2CppSharedGenericObject* L_40 = L_39->____key;
				int32_t L_41 = ___2_value;
				int32_t L_42 = ___1_hashcode;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_43 = V_6;
				NullCheck(L_43);
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_44 = L_43->____next;
				il2cpp_codegen_memory_barrier();
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_45 = (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				Node__ctor_m6F8EFC954ED470D3283D08AEA5C1B7A520B0EF24(L_45, L_40, L_41, L_42, L_44, NULL);
				V_7 = L_45;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_46 = V_5;
				if (L_46)
				{
					goto IL_00c3_1;
				}
			}
			{
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_47 = V_2;
				NullCheck(L_47);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_48 = L_47->____buckets;
				int32_t L_49 = V_0;
				NullCheck(L_48);
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_50 = V_7;
				VolatileWrite((Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A**)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A*)L_50);
				goto IL_00ce_1;
			}

IL_00c3_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_51 = V_5;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_52 = V_7;
				NullCheck(L_51);
				il2cpp_codegen_memory_barrier();
				L_51->____next = L_52;
				Il2CppCodeGenWriteBarrier((void**)(&L_51->____next), (void*)L_52);
			}

IL_00ce_1:
			{
				int32_t* L_53 = ___5_resultingValue;
				int32_t L_54 = ___2_value;
				*(int32_t*)L_53 = L_54;
				goto IL_00e6_1;
			}

IL_00d8_1:
			{
				int32_t* L_55 = ___5_resultingValue;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_56 = V_6;
				NullCheck(L_56);
				int32_t L_57 = L_56->____value;
				*(int32_t*)L_55 = L_57;
			}

IL_00e6_1:
			{
				V_8 = (bool)0;
				goto IL_0174;
			}

IL_00ee_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_58 = V_6;
				V_5 = L_58;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_59 = V_6;
				NullCheck(L_59);
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_60 = L_59->____next;
				il2cpp_codegen_memory_barrier();
				V_6 = L_60;
			}

IL_00fd_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_61 = V_6;
				if (L_61)
				{
					goto IL_005a_1;
				}
			}
			{
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_62 = V_2;
				NullCheck(L_62);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_63 = L_62->____buckets;
				int32_t L_64 = V_0;
				NullCheck(L_63);
				Il2CppSharedGenericObject* L_65 = ___0_key;
				int32_t L_66 = ___2_value;
				int32_t L_67 = ___1_hashcode;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_68 = V_2;
				NullCheck(L_68);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_69 = L_68->____buckets;
				int32_t L_70 = V_0;
				NullCheck(L_69);
				int32_t L_71 = L_70;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_73 = (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				Node__ctor_m6F8EFC954ED470D3283D08AEA5C1B7A520B0EF24(L_73, L_65, L_66, L_67, L_72, NULL);
				VolatileWrite((Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A**)((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64))), (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A*)L_73);
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_74 = V_2;
				NullCheck(L_74);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = L_74->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_76 = V_1;
				NullCheck(L_75);
				int32_t* L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)));
				int32_t L_78 = il2cpp_codegen_ldind<int32_t, int32_t>(L_77);
				if (((int64_t)L_78 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_78 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				il2cpp_codegen_stind<int32_t>((int32_t*)L_77, (int32_t)((int32_t)il2cpp_codegen_add(L_78, 1)));
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_79 = V_2;
				NullCheck(L_79);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = L_79->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_81 = V_1;
				NullCheck(L_80);
				int32_t L_82 = L_81;
				int32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
				int32_t L_84 = __this->____budget;
				if ((((int32_t)L_83) <= ((int32_t)L_84)))
				{
					goto IL_014c_1;
				}
			}
			{
				V_3 = (bool)1;
			}

IL_014c_1:
			{
				goto IL_0160;
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

IL_0160:
	{
		bool L_85 = V_3;
		if (!L_85)
		{
			goto IL_016a;
		}
	}
	{
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_86 = V_2;
		ConcurrentDictionary_2_GrowTable_m9A6CDC9CB93A84012E138E31E28D87A821702D8F(__this, L_86, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47));
	}

IL_016a:
	{
		int32_t* L_87 = ___5_resultingValue;
		int32_t L_88 = ___2_value;
		*(int32_t*)L_87 = L_88;
		return (bool)1;
	}

IL_0174:
	{
		bool L_89 = V_8;
		return L_89;
	}
}
// Method Definition Index: 11347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_get_Item_mBBAF805AA1F45AB4236D3B1DD41684DCC3C09480_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ConcurrentDictionary_2_TryGetValue_m398EFFB0EBF6050AB20148A6F2CD9425BC9EC28B(__this, L_0, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Il2CppSharedGenericObject* L_2 = ___0_key;
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNotFoundException_mC74DD7418A20A6071750C4DF7BE33E40F8B3D2AB((RuntimeObject*)L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 48));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 11348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_mA8C485A2FF36CAC712EB3126BDDFC267B77C929D_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Il2CppSharedGenericObject* L_1 = ___0_key;
		RuntimeObject* L_2 = __this->____comparer;
		Il2CppSharedGenericObject* L_3 = ___0_key;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_2, L_3);
		int32_t L_5 = ___1_value;
		bool L_6;
		L_6 = ConcurrentDictionary_2_TryAddInternal_m557FDD32269B23DC3F74ECF39AE4E46FD1089712(__this, L_1, L_4, L_5, (bool)1, (bool)1, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return;
	}
}
// Method Definition Index: 11349
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNotFoundException_mC74DD7418A20A6071750C4DF7BE33E40F8B3D2AB_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_0);
		String_t* L_2;
		L_2 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141)), L_1, NULL);
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_3 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}
}
// Method Definition Index: 11350
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_0 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_get_Count_m8BE7594EAC3C8A00BCFAC22B3FC9C86D930D33CC_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m51A3F9CEDCD19B2423B97CB9B9992B337D6E02F3(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			ConcurrentDictionary_2_AcquireAllLocks_m43AEB8C0E662224BEDDE807935CE4C2FDD4317E5(__this, (&V_0), NULL);
			int32_t L_1;
			L_1 = ConcurrentDictionary_2_GetCountInternal_m90AF6067552A5F8463CD33FE319B8C9DCFBF6B0D(__this, NULL);
			V_1 = L_1;
			goto IL_001c;
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

IL_001c:
	{
		int32_t L_2 = V_1;
		return L_2;
	}
}
// Method Definition Index: 11352
// Method Definition Index: 11353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_GetOrAdd_m27C4A1305362B3559897BB7826A16FAC81780988_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, Func_2_t405860E4F03319562A562B85A5F839EF7CC12AC1* ___1_valueFactory, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Func_2_t405860E4F03319562A562B85A5F839EF7CC12AC1* L_1 = ___1_valueFactory;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF68BB0CB45867DA95163C2C6A4B0677DCE80DCF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		RuntimeObject* L_3 = __this->____comparer;
		Il2CppSharedGenericObject* L_4 = ___0_key;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_3, L_4);
		V_0 = L_5;
		Il2CppSharedGenericObject* L_6 = ___0_key;
		int32_t L_7 = V_0;
		bool L_8;
		L_8 = ConcurrentDictionary_2_TryGetValueInternal_m9DDA685C0FF1419016622559F267A755DB7776E0(__this, L_6, L_7, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		Il2CppSharedGenericObject* L_9 = ___0_key;
		int32_t L_10 = V_0;
		Func_2_t405860E4F03319562A562B85A5F839EF7CC12AC1* L_11 = ___1_valueFactory;
		Il2CppSharedGenericObject* L_12 = ___0_key;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_mCA1B40382E8B6D0BCC94FA8B0E4EA4C64BC8993C_inline(L_11, L_12, NULL);
		bool L_14;
		L_14 = ConcurrentDictionary_2_TryAddInternal_m557FDD32269B23DC3F74ECF39AE4E46FD1089712(__this, L_9, L_10, L_13, (bool)0, (bool)1, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// Method Definition Index: 11354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_GetOrAdd_mC5538AB9BAAACAA9ED9EC836C8F721ABB0B31DEC_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		RuntimeObject* L_1 = __this->____comparer;
		Il2CppSharedGenericObject* L_2 = ___0_key;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_1, L_2);
		V_0 = L_3;
		Il2CppSharedGenericObject* L_4 = ___0_key;
		int32_t L_5 = V_0;
		bool L_6;
		L_6 = ConcurrentDictionary_2_TryGetValueInternal_m9DDA685C0FF1419016622559F267A755DB7776E0(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		Il2CppSharedGenericObject* L_7 = ___0_key;
		int32_t L_8 = V_0;
		int32_t L_9 = ___1_value;
		bool L_10;
		L_10 = ConcurrentDictionary_2_TryAddInternal_m557FDD32269B23DC3F74ECF39AE4E46FD1089712(__this, L_7, L_8, L_9, (bool)0, (bool)1, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
	}

IL_0034:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// Method Definition Index: 11355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_AddOrUpdate_m6068518BB90F890BE39F20502B5AF3C2D2FC4D8A_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, Func_2_t405860E4F03319562A562B85A5F839EF7CC12AC1* ___1_addValueFactory, Func_3_tB6ED5593F7B9989207D4E0B22F1A34196642CCEB* ___2_updateValueFactory, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Func_2_t405860E4F03319562A562B85A5F839EF7CC12AC1* L_1 = ___1_addValueFactory;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FBDA15AB716B63A3A92B84F7B26A1A374DA894D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		Func_3_tB6ED5593F7B9989207D4E0B22F1A34196642CCEB* L_3 = ___2_updateValueFactory;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0524F47F7868CF019B9EC023CC6808DAB5BE2221)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0029:
	{
		RuntimeObject* L_5 = __this->____comparer;
		Il2CppSharedGenericObject* L_6 = ___0_key;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_5, L_6);
		V_0 = L_7;
	}

IL_0036:
	{
		Il2CppSharedGenericObject* L_8 = ___0_key;
		int32_t L_9 = V_0;
		bool L_10;
		L_10 = ConcurrentDictionary_2_TryGetValueInternal_m9DDA685C0FF1419016622559F267A755DB7776E0(__this, L_8, L_9, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		Func_3_tB6ED5593F7B9989207D4E0B22F1A34196642CCEB* L_11 = ___2_updateValueFactory;
		Il2CppSharedGenericObject* L_12 = ___0_key;
		int32_t L_13 = V_1;
		NullCheck(L_11);
		int32_t L_14;
		L_14 = Func_3_Invoke_m79254A650EC859A136A5FCBF2A28DFCD204FDBF2_inline(L_11, L_12, L_13, NULL);
		V_2 = L_14;
		Il2CppSharedGenericObject* L_15 = ___0_key;
		int32_t L_16 = V_0;
		int32_t L_17 = V_2;
		int32_t L_18 = V_1;
		bool L_19;
		L_19 = ConcurrentDictionary_2_TryUpdateInternal_m3578B43E95E53FB205D48F82042D19E16D9075C8(__this, L_15, L_16, L_17, L_18, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 52));
		if (!L_19)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_20 = V_2;
		return L_20;
	}

IL_0059:
	{
		Il2CppSharedGenericObject* L_21 = ___0_key;
		int32_t L_22 = V_0;
		Func_2_t405860E4F03319562A562B85A5F839EF7CC12AC1* L_23 = ___1_addValueFactory;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_23);
		int32_t L_25;
		L_25 = Func_2_Invoke_mCA1B40382E8B6D0BCC94FA8B0E4EA4C64BC8993C_inline(L_23, L_24, NULL);
		bool L_26;
		L_26 = ConcurrentDictionary_2_TryAddInternal_m557FDD32269B23DC3F74ECF39AE4E46FD1089712(__this, L_21, L_22, L_25, (bool)0, (bool)1, (&V_3), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		if (!L_26)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_27 = V_3;
		return L_27;
	}
}
// Method Definition Index: 11356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m3E5231EA977D1E9FDB3D7511125AF2DAFDDCFA0B_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryAdd_m7C2A0E663CCEBCADE29087D2BCE8C724C07D8EAA(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC38D57307791EED2AD28D35927B9E90B23E6281D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0015:
	{
		return;
	}
}
// Method Definition Index: 11357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_mEA5D6EA7468AE3E4B94A12FF5868DE296927C43E_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ConcurrentDictionary_2_TryRemove_mE436A198E4A1C975E7F66AFC03C72D488CBDB662(__this, L_0, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 54));
		return L_1;
	}
}
// Method Definition Index: 11358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_get_Keys_m6A3C31771FCFEA6C27BD8E1F564EA8FDC4CE1937_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_0;
		L_0 = ConcurrentDictionary_2_GetKeys_mF47BA32B5ED3E8AF86BD7A4308AE746BDC9EA2B8(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_mEAF2410E4496A440768B3C449F1B2AE789AD0248_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_0;
		L_0 = ConcurrentDictionary_2_GetKeys_mF47BA32B5ED3E8AF86BD7A4308AE746BDC9EA2B8(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_get_Values_mBD698170AEDF247ECD00BD52C7B63BC427DD7A28_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* L_0;
		L_0 = ConcurrentDictionary_2_GetValues_mA1C0602D83C3DA4CB226682C8D47632063AFEB15(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11361
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m63505D103C03A7621AB182025068066475F7A50A_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* L_0;
		L_0 = ConcurrentDictionary_2_GetValues_mA1C0602D83C3DA4CB226682C8D47632063AFEB15(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11362
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m7958BCE152B088435D2A777603352903517FB490_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m59E82E5A467D2D93DBAA6AA381F5CC5286E533DD_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m9EBB8AC826C6439F35AE628B8FBD3FC1A322E493_inline((&___0_keyValuePair), NULL);
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker2< Il2CppSharedGenericObject*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 57), (RuntimeObject*)__this, L_0, L_1);
		return;
	}
}
// Method Definition Index: 11363
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m6DB314987588AE2FCE654F456F1B91FFBB492E1C_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m59E82E5A467D2D93DBAA6AA381F5CC5286E533DD_inline((&___0_keyValuePair), NULL);
		bool L_1;
		L_1 = ConcurrentDictionary_2_TryGetValue_m398EFFB0EBF6050AB20148A6F2CD9425BC9EC28B(__this, L_0, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_2;
		L_2 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = KeyValuePair_2_get_Value_m9EBB8AC826C6439F35AE628B8FBD3FC1A322E493_inline((&___0_keyValuePair), NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_2, L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 11364
// Method Definition Index: 11365
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8B9405A3A927953AFBB51AA3B2724CA3D70CADFD_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m59E82E5A467D2D93DBAA6AA381F5CC5286E533DD_inline((&___0_keyValuePair), NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral561DA6E332E7EF45E52D96B07EC786D85C2955BE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral020F27A067D9C2A1BC9628BCE378DE63A6F2B5BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_001e:
	{
		Il2CppSharedGenericObject* L_2;
		L_2 = KeyValuePair_2_get_Key_m59E82E5A467D2D93DBAA6AA381F5CC5286E533DD_inline((&___0_keyValuePair), NULL);
		int32_t L_3;
		L_3 = KeyValuePair_2_get_Value_m9EBB8AC826C6439F35AE628B8FBD3FC1A322E493_inline((&___0_keyValuePair), NULL);
		bool L_4;
		L_4 = ConcurrentDictionary_2_TryRemoveInternal_m46B776D0225E7BCF4A36CF6477F87BA1FB2740D0(__this, L_2, (&V_0), (bool)1, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return L_4;
	}
}
// Method Definition Index: 11366
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IEnumerable_GetEnumerator_m9C28CE3E784A818C19601EBB59D0137F6E69C49C_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0;
		L_0 = ConcurrentDictionary_2_GetEnumerator_m902D4621DB439D17D464419FE299710F9F01E9C2(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 59));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_IDictionary_Add_mBCE80CE3E6F68F6D38FBAE7DF71EDDA755154D02_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD8CE285C77CDFBCDCBA338A795AFF019E6C3B66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
	}
	try
	{
		RuntimeObject* L_3 = ___1_value;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20D029102A70CD96274496928ED59E8B9C014BBA)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		RuntimeObject* L_6 = ___0_key;
		int32_t L_7 = V_0;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker2< Il2CppSharedGenericObject*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 57), (RuntimeObject*)__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), L_7);
		return;
	}
}
// Method Definition Index: 11368
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_IDictionary_Contains_m19F9CDC55E6EA67D19B40CC145D5F746037DA643_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (!((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ConcurrentDictionary_2_ContainsKey_m730195EAA4F2F9BF95445A4FB9762B904149F22B(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 60));
		return L_3;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_GetEnumerator_m621EF5F7D6BA928F3C671AB48A5008DBC35E39CE_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		DictionaryEnumerator_t91255A4AF0637E7BBED70962CD0EE7B0F045CBA1* L_0 = (DictionaryEnumerator_t91255A4AF0637E7BBED70962CD0EE7B0F045CBA1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 61));
		DictionaryEnumerator__ctor_m863B5871EF80571B1CC999AC0DDDF801F90F864B(L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 62));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11370
// Method Definition Index: 11371
// Method Definition Index: 11372
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_get_Keys_m747F2ACC7034CF871E4FC58F976D7601D22F9463_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_0;
		L_0 = ConcurrentDictionary_2_GetKeys_mF47BA32B5ED3E8AF86BD7A4308AE746BDC9EA2B8(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_IDictionary_Remove_m403D356E714AC106CF2CD93DD49051FE4F3E108D_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (!((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryRemove_mE436A198E4A1C975E7F66AFC03C72D488CBDB662(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 54));
	}

IL_001f:
	{
		return;
	}
}
// Method Definition Index: 11374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_get_Values_m92EF6134610F9876DCE38A86EB2504A00753283F_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* L_0;
		L_0 = ConcurrentDictionary_2_GetValues_mA1C0602D83C3DA4CB226682C8D47632063AFEB15(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_get_Item_m51E1B0C33073A419D42D47CCA5F4F6D8895F18A5_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (!((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryGetValue_m398EFFB0EBF6050AB20148A6F2CD9425BC9EC28B(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), &L_5);
		return L_6;
	}

IL_0027:
	{
		return NULL;
	}
}
// Method Definition Index: 11376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_IDictionary_set_Item_mBA0E0E6F5395B32FEC3CE8613F8D91829305391C_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_ThrowKeyNullException_mAA7C52B35ADED0DDE227EAB4A08661F06D6C651D(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD8CE285C77CDFBCDCBA338A795AFF019E6C3B66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		RuntimeObject* L_3 = ___1_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20D029102A70CD96274496928ED59E8B9C014BBA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_002e:
	{
		RuntimeObject* L_5 = ___0_key;
		RuntimeObject* L_6 = ___1_value;
		ConcurrentDictionary_2_set_Item_mA8C485A2FF36CAC712EB3126BDDFC267B77C929D(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))), ((*(int32_t*)UnBox(L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 63));
		return;
	}
}
// Method Definition Index: 11377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_ICollection_CopyTo_mE6D32438852C2005C53A7CA87BBD9E806CD8A643_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Tables_t0E315C824AE282366793BBC56D608560C6DCF865* V_1 = NULL;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* V_3 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;
	int32_t V_6 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
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
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0D86565E49BD212E7AC64BABD33BE3668A4C45B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cc:
			{
				int32_t L_4 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m51A3F9CEDCD19B2423B97CB9B9992B337D6E02F3(__this, 0, L_4, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m43AEB8C0E662224BEDDE807935CE4C2FDD4317E5(__this, (&V_0), NULL);
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_5 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				V_1 = L_5;
				V_2 = 0;
				V_6 = 0;
				goto IL_0050_1;
			}

IL_003c_1:
			{
				int32_t L_6 = V_2;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_7 = V_1;
				NullCheck(L_7);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_9 = V_6;
				NullCheck(L_8);
				int32_t L_10 = L_9;
				int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				V_2 = ((int32_t)il2cpp_codegen_add(L_6, L_11));
				int32_t L_12 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			}

IL_0050_1:
			{
				int32_t L_13 = V_6;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_14 = V_1;
				NullCheck(L_14);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14->____locks;
				NullCheck(L_15);
				int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
				if ((((int32_t)L_13) >= ((int32_t)L_16)))
				{
					goto IL_0060_1;
				}
			}
			{
				int32_t L_17 = V_2;
				if ((((int32_t)L_17) >= ((int32_t)0)))
				{
					goto IL_003c_1;
				}
			}

IL_0060_1:
			{
				RuntimeArray* L_18 = ___0_array;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = il2cpp_codegen_array_get_length(L_18);
				int32_t L_20 = V_2;
				int32_t L_21 = ___1_index;
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_19, L_20))) < ((int32_t)L_21)))
				{
					goto IL_006f_1;
				}
			}
			{
				int32_t L_22 = V_2;
				if ((((int32_t)L_22) >= ((int32_t)0)))
				{
					goto IL_007a_1;
				}
			}

IL_006f_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral672E993A9AD93822B712B165C6987759C6DED80B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
			}

IL_007a_1:
			{
				RuntimeArray* L_24 = ___0_array;
				V_3 = ((KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D*)IsInstSealed((RuntimeObject*)L_24, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42)));
				KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_25 = V_3;
				if (!L_25)
				{
					goto IL_008e_1;
				}
			}
			{
				KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_26 = V_3;
				int32_t L_27 = ___1_index;
				ConcurrentDictionary_2_CopyToPairs_mF5CD68DD700C0FD7EC6BB3EB323EE04E8A218F31(__this, L_26, L_27, NULL);
				goto IL_00d5;
			}

IL_008e_1:
			{
				RuntimeArray* L_28 = ___0_array;
				V_4 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_28, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
				DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_29 = V_4;
				if (!L_29)
				{
					goto IL_00a5_1;
				}
			}
			{
				DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_30 = V_4;
				int32_t L_31 = ___1_index;
				ConcurrentDictionary_2_CopyToEntries_m87ADCB4F712024D91535AE14392A26BA8E25A4F2(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 64));
				goto IL_00d5;
			}

IL_00a5_1:
			{
				RuntimeArray* L_32 = ___0_array;
				V_5 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_32, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = V_5;
				if (!L_33)
				{
					goto IL_00bc_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = V_5;
				int32_t L_35 = ___1_index;
				ConcurrentDictionary_2_CopyToObjects_m088B2EFE2850EF373D64801B014353519F8CB39A(__this, L_34, L_35, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 65));
				goto IL_00d5;
			}

IL_00bc_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_36 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA05D9DA01CB9AD0AA6BE899FE1E39018B72923DB)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, method);
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

IL_00d5:
	{
		return;
	}
}
// Method Definition Index: 11378
// Method Definition Index: 11379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_ICollection_get_SyncRoot_m9D571273BEE85A44D48547110899BF040C037D32_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4CC02BED909F9630E59013E4804C6C269FF8370A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_GrowTable_m9A6CDC9CB93A84012E138E31E28D87A821702D8F_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, Tables_t0E315C824AE282366793BBC56D608560C6DCF865* ___0_tables, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01fd:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m51A3F9CEDCD19B2423B97CB9B9992B337D6E02F3(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireLocks_mEFB617D1BFA055FC44B37F93167A8195F7F4F053(__this, 0, 1, (&V_0), NULL);
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_1 = ___0_tables;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_2 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_t0E315C824AE282366793BBC56D608560C6DCF865*)L_1) == ((RuntimeObject*)(Tables_t0E315C824AE282366793BBC56D608560C6DCF865*)L_2)))
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0206;
			}

IL_001c_1:
			{
				int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
				V_1 = L_3;
				V_7 = 0;
				goto IL_0039_1;
			}

IL_0024_1:
			{
				int64_t L_4 = V_1;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_5 = ___0_tables;
				NullCheck(L_5);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_7 = V_7;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
				V_1 = ((int64_t)il2cpp_codegen_add(L_4, L_10));
				int32_t L_11 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			}

IL_0039_1:
			{
				int32_t L_12 = V_7;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_13 = ___0_tables;
				NullCheck(L_13);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->____countPerLock;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_14);
				int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
				if ((((int32_t)L_12) < ((int32_t)L_15)))
				{
					goto IL_0024_1;
				}
			}
			{
				int64_t L_16 = V_1;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_17 = ___0_tables;
				NullCheck(L_17);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_18 = L_17->____buckets;
				NullCheck(L_18);
				int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
				int64_t L_20 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)(L_19/4)),NULL));
				if ((((int64_t)L_16) >= ((int64_t)L_20)))
				{
					goto IL_007c_1;
				}
			}
			{
				int32_t L_21 = __this->____budget;
				__this->____budget = ((int32_t)il2cpp_codegen_multiply(2, L_21));
				int32_t L_22 = __this->____budget;
				if ((((int32_t)L_22) >= ((int32_t)0)))
				{
					goto IL_0077_1;
				}
			}
			{
				__this->____budget = ((int32_t)2147483647LL);
			}

IL_0077_1:
			{
				goto IL_0206;
			}

IL_007c_1:
			{
				V_2 = 0;
				V_3 = (bool)0;
			}
			try
			{
				{
					Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_23 = ___0_tables;
					NullCheck(L_23);
					NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_24 = L_23->____buckets;
					NullCheck(L_24);
					int32_t L_25 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_24)->max_length),NULL));
					if (((int64_t)L_25 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_25 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_25, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_25, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_25, 2)), 1));
					goto IL_0093_2;
				}

IL_008f_2:
				{
					int32_t L_26 = V_2;
					if (((int64_t)L_26 + (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_26 + (int64_t)2 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					V_2 = ((int32_t)il2cpp_codegen_add(L_26, 2));
				}

IL_0093_2:
				{
					int32_t L_27 = V_2;
					if (!((int32_t)(L_27%3)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_28 = V_2;
					if (!((int32_t)(L_28%5)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_29 = V_2;
					if (!((int32_t)(L_29%7)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_30 = V_2;
					if ((((int32_t)L_30) <= ((int32_t)((int32_t)2146435071))))
					{
						goto IL_00ac_2;
					}
				}
				{
					V_3 = (bool)1;
				}

IL_00ac_2:
				{
					goto IL_00b3_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00ae_1;
				}
				throw e;
			}

CATCH_00ae_1:
			{
				OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_31 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));;
				V_3 = (bool)1;
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_00b3_1;
			}

IL_00b3_1:
			{
				bool L_32 = V_3;
				if (!L_32)
				{
					goto IL_00c7_1;
				}
			}
			{
				V_2 = ((int32_t)2146435071);
				__this->____budget = ((int32_t)2147483647LL);
			}

IL_00c7_1:
			{
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_33 = ___0_tables;
				NullCheck(L_33);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_33->____locks;
				NullCheck(L_34);
				int32_t L_35 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_34)->max_length),NULL));
				ConcurrentDictionary_2_AcquireLocks_mEFB617D1BFA055FC44B37F93167A8195F7F4F053(__this, 1, L_35, (&V_0), NULL);
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_36 = ___0_tables;
				NullCheck(L_36);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_36->____locks;
				V_4 = L_37;
				bool L_38 = __this->____growLockArray;
				if (!L_38)
				{
					goto IL_0143_1;
				}
			}
			{
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_39 = ___0_tables;
				NullCheck(L_39);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_39->____locks;
				NullCheck(L_40);
				int32_t L_41 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_40)->max_length),NULL));
				if ((((int32_t)L_41) >= ((int32_t)((int32_t)1024))))
				{
					goto IL_0143_1;
				}
			}
			{
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_42 = ___0_tables;
				NullCheck(L_42);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_42->____locks;
				NullCheck(L_43);
				int32_t L_44 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_43)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_44, 2)));
				V_4 = L_45;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_46 = ___0_tables;
				NullCheck(L_46);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = L_46->____locks;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = V_4;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_49 = ___0_tables;
				NullCheck(L_49);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_49->____locks;
				NullCheck(L_50);
				int32_t L_51 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_50)->max_length),NULL));
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_47, 0, (RuntimeArray*)L_48, 0, L_51, NULL);
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_52 = ___0_tables;
				NullCheck(L_52);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = L_52->____locks;
				NullCheck(L_53);
				int32_t L_54 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_53)->max_length),NULL));
				V_8 = L_54;
				goto IL_013b_1;
			}

IL_012b_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = V_4;
				int32_t L_56 = V_8;
				RuntimeObject* L_57 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
				Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_57, NULL);
				NullCheck(L_55);
				ArrayElementTypeCheck (L_55, L_57);
				(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (RuntimeObject*)L_57);
				int32_t L_58 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_58, 1));
			}

IL_013b_1:
			{
				int32_t L_59 = V_8;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = V_4;
				NullCheck(L_60);
				int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
				if ((((int32_t)L_59) < ((int32_t)L_61)))
				{
					goto IL_012b_1;
				}
			}

IL_0143_1:
			{
				int32_t L_62 = V_2;
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_63 = (NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630*)(NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_62);
				V_5 = L_63;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = V_4;
				NullCheck(L_64);
				int32_t L_65 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_64)->max_length),NULL));
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_65);
				V_6 = L_66;
				V_9 = 0;
				goto IL_01c7_1;
			}

IL_015b_1:
			{
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_67 = ___0_tables;
				NullCheck(L_67);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_68 = L_67->____buckets;
				int32_t L_69 = V_9;
				NullCheck(L_68);
				int32_t L_70 = L_69;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
				V_10 = L_71;
				goto IL_01bd_1;
			}

IL_0168_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_72 = V_10;
				NullCheck(L_72);
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_73 = L_72->____next;
				il2cpp_codegen_memory_barrier();
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_74 = V_10;
				NullCheck(L_74);
				int32_t L_75 = L_74->____hashcode;
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_76 = V_5;
				NullCheck(L_76);
				int32_t L_77 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_76)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = V_4;
				NullCheck(L_78);
				int32_t L_79 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_78)->max_length),NULL));
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				ConcurrentDictionary_2_GetBucketAndLockNo_m5E8B11F20877C6E1B164FBD2ED2655972027E86D(L_75, (&V_11), (&V_12), L_77, L_79, NULL);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_80 = V_5;
				int32_t L_81 = V_11;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_82 = V_10;
				NullCheck(L_82);
				Il2CppSharedGenericObject* L_83 = L_82->____key;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_84 = V_10;
				NullCheck(L_84);
				int32_t L_85 = L_84->____value;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_86 = V_10;
				NullCheck(L_86);
				int32_t L_87 = L_86->____hashcode;
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_88 = V_5;
				int32_t L_89 = V_11;
				NullCheck(L_88);
				int32_t L_90 = L_89;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_92 = (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				Node__ctor_m6F8EFC954ED470D3283D08AEA5C1B7A520B0EF24(L_92, L_83, L_85, L_87, L_91, NULL);
				NullCheck(L_80);
				(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A*)L_92);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_6;
				int32_t L_94 = V_12;
				NullCheck(L_93);
				int32_t* L_95 = ((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94)));
				int32_t L_96 = il2cpp_codegen_ldind<int32_t, int32_t>(L_95);
				if (((int64_t)L_96 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_96 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				il2cpp_codegen_stind<int32_t>((int32_t*)L_95, (int32_t)((int32_t)il2cpp_codegen_add(L_96, 1)));
				V_10 = L_73;
			}

IL_01bd_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_97 = V_10;
				if (L_97)
				{
					goto IL_0168_1;
				}
			}
			{
				int32_t L_98 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_98, 1));
			}

IL_01c7_1:
			{
				int32_t L_99 = V_9;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_100 = ___0_tables;
				NullCheck(L_100);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_101 = L_100->____buckets;
				NullCheck(L_101);
				int32_t L_102 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_101)->max_length),NULL));
				if ((((int32_t)L_99) < ((int32_t)L_102)))
				{
					goto IL_015b_1;
				}
			}
			{
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_103 = V_5;
				NullCheck(L_103);
				int32_t L_104 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_103)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_105 = V_4;
				NullCheck(L_105);
				int32_t L_106 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_105)->max_length),NULL));
				CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_107;
				L_107 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, ((int32_t)(L_104/L_106)), NULL);
				__this->____budget = L_107;
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_108 = V_5;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_109 = V_4;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_6;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_111 = (Tables_t0E315C824AE282366793BBC56D608560C6DCF865*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
				Tables__ctor_m07CC2782D8399B3982CA68633ED34991FC356F60(L_111, L_108, L_109, L_110, NULL);
				il2cpp_codegen_memory_barrier();
				__this->____tables = L_111;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_111);
				goto IL_0206;
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

IL_0206:
	{
		return;
	}
}
// Method Definition Index: 11381
// Method Definition Index: 11382
// Method Definition Index: 11383
// Method Definition Index: 11384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_AcquireAllLocks_m43AEB8C0E662224BEDDE807935CE4C2FDD4317E5_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, int32_t* ___0_locksAcquired, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit,(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* L_0 = ((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log;
		NullCheck(L_0);
		bool L_1;
		L_1 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		CHECKED_LOCAL_INIT(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit,(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* L_2 = ((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log;
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_3 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_3);
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		NullCheck(L_2);
		CDSCollectionETWBCLProvider_ConcurrentDictionary_AcquiringAllLocks_mF33BBE9D19970C7F3C3DB3C0F6BCF16BEEC26EFA(L_2, L_5, NULL);
	}

IL_0025:
	{
		int32_t* L_6 = ___0_locksAcquired;
		ConcurrentDictionary_2_AcquireLocks_mEFB617D1BFA055FC44B37F93167A8195F7F4F053(__this, 0, 1, L_6, NULL);
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_7 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7->____locks;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t* L_10 = ___0_locksAcquired;
		ConcurrentDictionary_2_AcquireLocks_mEFB617D1BFA055FC44B37F93167A8195F7F4F053(__this, 1, L_9, L_10, NULL);
		return;
	}
}
// Method Definition Index: 11385
// Method Definition Index: 11386
// Method Definition Index: 11387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* ConcurrentDictionary_2_GetKeys_mF47BA32B5ED3E8AF86BD7A4308AE746BDC9EA2B8_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* V_1 = NULL;
	int32_t V_2 = 0;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_3 = NULL;
	ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* V_4 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m51A3F9CEDCD19B2423B97CB9B9992B337D6E02F3(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m43AEB8C0E662224BEDDE807935CE4C2FDD4317E5(__this, (&V_0), NULL);
				int32_t L_1;
				L_1 = ConcurrentDictionary_2_GetCountInternal_m90AF6067552A5F8463CD33FE319B8C9DCFBF6B0D(__this, NULL);
				int32_t L_2 = L_1;
				if ((((int32_t)L_2) >= ((int32_t)0)))
				{
					G_B3_0 = L_2;
					goto IL_001a_1;
				}
				G_B2_0 = L_2;
			}
			{
				OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_3 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)));
				OutOfMemoryException__ctor_m2CDADA05A6304090686E8D5E3E99A1596FAF5951(L_3, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
			}

IL_001a_1:
			{
				List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_4 = (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 67));
				List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516(L_4, G_B3_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 68));
				V_1 = L_4;
				V_2 = 0;
				goto IL_0052_1;
			}

IL_0024_1:
			{
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_5 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_5);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_6 = L_5->____buckets;
				int32_t L_7 = V_2;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				V_3 = L_9;
				goto IL_004b_1;
			}

IL_0036_1:
			{
				List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_10 = V_1;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_11 = V_3;
				NullCheck(L_11);
				Il2CppSharedGenericObject* L_12 = L_11->____key;
				NullCheck(L_10);
				List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_10, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 69));
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_13 = V_3;
				NullCheck(L_13);
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_14 = L_13->____next;
				il2cpp_codegen_memory_barrier();
				V_3 = L_14;
			}

IL_004b_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_15 = V_3;
				if (L_15)
				{
					goto IL_0036_1;
				}
			}
			{
				int32_t L_16 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0052_1:
			{
				int32_t L_17 = V_2;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_18 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_18);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_19 = L_18->____buckets;
				NullCheck(L_19);
				int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
				if ((((int32_t)L_17) < ((int32_t)L_20)))
				{
					goto IL_0024_1;
				}
			}
			{
				List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_21 = V_1;
				ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_22 = (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 70));
				ReadOnlyCollection_1__ctor_mC1890FAC00703F47A655C35CBCB613C74A811580(L_22, (RuntimeObject*)L_21, NULL);
				V_4 = L_22;
				goto IL_0077;
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

IL_0077:
	{
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_23 = V_4;
		return L_23;
	}
}
// Method Definition Index: 11388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* ConcurrentDictionary_2_GetValues_mA1C0602D83C3DA4CB226682C8D47632063AFEB15_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* V_1 = NULL;
	int32_t V_2 = 0;
	Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* V_3 = NULL;
	ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* V_4 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{
				int32_t L_0 = V_0;
				ConcurrentDictionary_2_ReleaseLocks_m51A3F9CEDCD19B2423B97CB9B9992B337D6E02F3(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				ConcurrentDictionary_2_AcquireAllLocks_m43AEB8C0E662224BEDDE807935CE4C2FDD4317E5(__this, (&V_0), NULL);
				int32_t L_1;
				L_1 = ConcurrentDictionary_2_GetCountInternal_m90AF6067552A5F8463CD33FE319B8C9DCFBF6B0D(__this, NULL);
				int32_t L_2 = L_1;
				if ((((int32_t)L_2) >= ((int32_t)0)))
				{
					G_B3_0 = L_2;
					goto IL_001a_1;
				}
				G_B2_0 = L_2;
			}
			{
				OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_3 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)));
				OutOfMemoryException__ctor_m2CDADA05A6304090686E8D5E3E99A1596FAF5951(L_3, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
			}

IL_001a_1:
			{
				List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_4 = (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 72));
				List_1__ctor_mBEC4BB23DEF62EFA5D66833D82CEB6FABDD96E04(L_4, G_B3_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 73));
				V_1 = L_4;
				V_2 = 0;
				goto IL_0052_1;
			}

IL_0024_1:
			{
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_5 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_5);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_6 = L_5->____buckets;
				int32_t L_7 = V_2;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				V_3 = L_9;
				goto IL_004b_1;
			}

IL_0036_1:
			{
				List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_10 = V_1;
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_11 = V_3;
				NullCheck(L_11);
				int32_t L_12 = L_11->____value;
				NullCheck(L_10);
				List_1_Add_m24BA4DEDED426A5B0C6A4AB3E523C876B0B918A6_inline(L_10, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 74));
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_13 = V_3;
				NullCheck(L_13);
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_14 = L_13->____next;
				il2cpp_codegen_memory_barrier();
				V_3 = L_14;
			}

IL_004b_1:
			{
				Node_tD7D87359451AA7A3A1D159AD15091AD2A938CF7A* L_15 = V_3;
				if (L_15)
				{
					goto IL_0036_1;
				}
			}
			{
				int32_t L_16 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0052_1:
			{
				int32_t L_17 = V_2;
				Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_18 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_18);
				NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_19 = L_18->____buckets;
				NullCheck(L_19);
				int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
				if ((((int32_t)L_17) < ((int32_t)L_20)))
				{
					goto IL_0024_1;
				}
			}
			{
				List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_21 = V_1;
				ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* L_22 = (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 75));
				ReadOnlyCollection_1__ctor_m401D0350AA4E4ACE83F75DE82712FF72120418D4(L_22, (RuntimeObject*)L_21, NULL);
				V_4 = L_22;
				goto IL_0077;
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

IL_0077:
	{
		ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* L_23 = V_4;
		return L_23;
	}
}
// Method Definition Index: 11389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_OnSerializing_mE81891FF0A07820EC927D6E8E11903F49DC23EA3_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___0_context, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Tables_t0E315C824AE282366793BBC56D608560C6DCF865* V_0 = NULL;
	{
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_1;
		L_1 = ConcurrentDictionary_2_ToArray_m5EAE034E0E7F06C122D5F31285549651E9345B81(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 77));
		__this->____serializationArray = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationArray), (void*)L_1);
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_2 = V_0;
		NullCheck(L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2->____locks;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		__this->____serializationConcurrencyLevel = L_4;
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_5 = V_0;
		NullCheck(L_5);
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_6 = L_5->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____serializationCapacity = L_7;
		return;
	}
}
// Method Definition Index: 11390
// Method Definition Index: 11391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_OnDeserialized_mF4365F57C0B6287E064602FCE98C5640CBBD9F0D_gshared (ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* V_0 = NULL;
	NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	{
		KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_0 = __this->____serializationArray;
		V_0 = L_0;
		int32_t L_1 = __this->____serializationCapacity;
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_2 = (NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630*)(NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_1);
		V_1 = L_2;
		int32_t L_3 = __this->____serializationConcurrencyLevel;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		int32_t L_5 = __this->____serializationConcurrencyLevel;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_3 = L_6;
		V_4 = 0;
		goto IL_003f;
	}

IL_0030:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_3;
		int32_t L_8 = V_4;
		RuntimeObject* L_9 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_9, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003f:
	{
		int32_t L_11 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_3;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0030;
		}
	}
	{
		NodeU5BU5D_t7BC9608DC6046A31923ADC25C56752C3E359C630* L_14 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_2;
		Tables_t0E315C824AE282366793BBC56D608560C6DCF865* L_17 = (Tables_t0E315C824AE282366793BBC56D608560C6DCF865*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		Tables__ctor_m07CC2782D8399B3982CA68633ED34991FC356F60(L_17, L_14, L_15, L_16, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____tables = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_17);
		KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_18 = V_0;
		ConcurrentDictionary_2_InitializeFromCollection_m27DE2C2479865D942A87800621ABA47583AB50B1(__this, (RuntimeObject*)L_18, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 78));
		__this->____serializationArray = (KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationArray), (void*)(KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D*)NULL);
		return;
	}
}
// Method Definition Index: 11392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__cctor_mBCDA655602F6EDAA3D5CCC15C469714B4A452E41_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ConcurrentDictionary_2_IsValueWriteAtomic_m16A364B69C9A8EF222E525CBA92585A8D69D0B09(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 79));
		((ConcurrentDictionary_2_t388738143F9D1F0861DAA4DB5B858F1921AC12DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)))->___s_isValueWriteAtomic = L_0;
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
// Method Definition Index: 11327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_IsValueWriteAtomic_m73B3152A5054C8CCE39DDD9701EE7939D4CCAD7F_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)1;
	}

IL_0015:
	{
		Type_t* L_4 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466(L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 3)))
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0056;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_0056;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0056;
			}
			case 7:
			{
				goto IL_0056;
			}
			case 8:
			{
				goto IL_0058;
			}
			case 9:
			{
				goto IL_0058;
			}
			case 10:
			{
				goto IL_0056;
			}
			case 11:
			{
				goto IL_0058;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0056:
	{
		return (bool)1;
	}

IL_0058:
	{
		int32_t L_7;
		L_7 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		return (bool)((((int32_t)L_7) == ((int32_t)8))? 1 : 0);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m98B384EE9F320311B30C60598D7FEE8220A765D3_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(NULL);
		((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, bool, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, L_0, ((int32_t)31), (bool)1, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		return;
	}
}
// Method Definition Index: 11329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m2D6D3AB210309E5FC0C270696B064E7F63B6732D_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(NULL);
		RuntimeObject* L_1 = ___0_comparer;
		((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, bool, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, L_0, ((int32_t)31), (bool)1, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		return;
	}
}
// Method Definition Index: 11330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_InitializeFromCollection_mD655938CF27AF72CA2E5DE04DAC9D544F2B32F05_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_8 = L_6;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_2 = alloca(SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
	memset(V_2, 0, SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
	{
		RuntimeObject* L_0 = ___0_collection;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 5), L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_1;
				NullCheck(L_4);
				InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
				il2cpp_codegen_memcpy(V_2, L_5, SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_2, (Il2CppFullySharedGenericAny*)L_6);
				bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_6);
				if (L_7)
				{
					goto IL_0023_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_0023_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_2, (Il2CppFullySharedGenericAny*)L_8);
				RuntimeObject* L_9 = __this->____comparer;
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_2, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_9);
				int32_t L_11;
				L_11 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_10: *(void**)L_10));
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_2, (Il2CppFullySharedGenericAny*)L_12);
				bool L_13;
				L_13 = InvokerFuncInvoker6< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny, bool, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_8: *(void**)L_8), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_12: *(void**)L_12), (bool)0, (bool)0, (Il2CppFullySharedGenericAny*)V_0);
				if (L_13)
				{
					goto IL_005a_1;
				}
			}
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEC0CC039753090F0DDDF2727802FC6E1570B317B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
			}

IL_005a_1:
			{
				RuntimeObject* L_15 = V_1;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_006e;
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

IL_006e:
	{
		int32_t L_17 = __this->____budget;
		if (L_17)
		{
			goto IL_009b;
		}
	}
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_18 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_18);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_19 = L_18->____buckets;
		NullCheck(L_19);
		int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_21 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21->____locks;
		NullCheck(L_22);
		int32_t L_23 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_22)->max_length),NULL));
		__this->____budget = ((int32_t)(L_20/L_23));
	}

IL_009b:
	{
		return;
	}
}
// Method Definition Index: 11331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m6641D528D40D97FA0C5A07E6343F1ED807898699_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, int32_t ___0_concurrencyLevel, int32_t ___1_capacity, bool ___2_growLockArray, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* G_B11_0 = NULL;
	ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* G_B11_1 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* G_B10_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_concurrencyLevel;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF10EFAF6473141D13A05C1B850DEF40E641A918)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68445D6E030501243B18C07E57CF1AE5C1C5AAF2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_001a:
	{
		int32_t L_2 = ___1_capacity;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE59C400B29D20EE4CB5A86E1F46ED782D7872D43)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_002e:
	{
		int32_t L_4 = ___1_capacity;
		int32_t L_5 = ___0_concurrencyLevel;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_6 = ___0_concurrencyLevel;
		___1_capacity = L_6;
	}

IL_0035:
	{
		int32_t L_7 = ___0_concurrencyLevel;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_0 = L_8;
		V_3 = 0;
		goto IL_004c;
	}

IL_0040:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		int32_t L_10 = V_3;
		RuntimeObject* L_11 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_11, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (RuntimeObject*)L_11);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004c:
	{
		int32_t L_13 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0040;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_1 = L_18;
		int32_t L_19 = ___1_capacity;
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_20 = (NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)(NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_19);
		V_2 = L_20;
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_21 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_24 = (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		((  void (*) (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*, NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_24, L_21, L_22, L_23, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____tables = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_24);
		RuntimeObject* L_25 = ___3_comparer;
		RuntimeObject* L_26 = L_25;
		if (L_26)
		{
			G_B11_0 = L_26;
			G_B11_1 = __this;
			goto IL_007e;
		}
		G_B10_0 = L_26;
		G_B10_1 = __this;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		G_B11_0 = ((RuntimeObject*)(L_27));
		G_B11_1 = G_B10_1;
	}

IL_007e:
	{
		NullCheck(G_B11_1);
		G_B11_1->____comparer = G_B11_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B11_1->____comparer), (void*)G_B11_0);
		bool L_28 = ___2_growLockArray;
		__this->____growLockArray = L_28;
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_29)->max_length),NULL));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		__this->____budget = ((int32_t)(L_30/L_32));
		return;
	}
}
// Method Definition Index: 11332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_mD11107344E270A7538B40D278E52532A0649D829_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		RuntimeObject* L_3 = __this->____comparer;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_4: *(void**)L_4));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___1_value : &___1_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		bool L_7;
		L_7 = InvokerFuncInvoker6< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny, bool, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_2: *(void**)L_2), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_6: *(void**)L_6), (bool)0, (bool)1, (Il2CppFullySharedGenericAny*)V_0);
		return L_7;
	}
}
// Method Definition Index: 11333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_ContainsKey_m6998FF8E69B91FD09125EE962D6E8B291A231392_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_3;
		L_3 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_2: *(void**)L_2), (Il2CppFullySharedGenericAny*)V_0);
		return L_3;
	}
}
// Method Definition Index: 11334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_mC744D5885F0E343A454C5FAE6857BDC2793D2E06_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		Il2CppFullySharedGenericAny* L_3 = ___1_value;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		bool L_5;
		L_5 = InvokerFuncInvoker4< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_2: *(void**)L_2), L_3, (bool)0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_4: *(void**)L_4));
		return L_5;
	}
}
// Method Definition Index: 11335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemoveInternal_m4A393BED6764C80F4849E88293A4D9D36234B313_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, bool ___2_matchValue, Il2CppFullySharedGenericAny ___3_oldValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_31 = L_1;
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_52 = L_36;
	const Il2CppFullySharedGenericAny L_38 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_6 = NULL;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_7 = NULL;
	bool V_8 = false;
	{
		RuntimeObject* L_0 = __this->____comparer;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_1: *(void**)L_1));
		V_0 = L_2;
	}

IL_000d:
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_3 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_1 = L_3;
		int32_t L_4 = V_0;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_5 = V_1;
		NullCheck(L_5);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_6 = L_5->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_8 = V_1;
		NullCheck(L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8->____locks;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (int32_t, int32_t*, int32_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)))(L_4, (&V_2), (&V_3), L_7, L_10, NULL);
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_11 = V_1;
		NullCheck(L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11->____locks;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		V_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011d:
			{
				{
					bool L_16 = V_5;
					if (!L_16)
					{
						goto IL_0128;
					}
				}
				{
					RuntimeObject* L_17 = V_4;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_17, NULL);
				}

IL_0128:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_18 = V_4;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_18, (&V_5), NULL);
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_19 = V_1;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_20 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_19) == ((RuntimeObject*)(Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_20)))
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_000d;
			}

IL_0053_1:
			{
				V_6 = (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)NULL;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_21 = V_1;
				NullCheck(L_21);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_22 = L_21->____buckets;
				int32_t L_23 = V_2;
				NullCheck(L_22);
				int32_t L_24 = L_23;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_7 = L_25;
				goto IL_0114_1;
			}

IL_0065_1:
			{
				int32_t L_26 = V_0;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_27 = V_7;
				int32_t L_28 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_27, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25));
				if ((!(((uint32_t)L_26) == ((uint32_t)L_28))))
				{
					goto IL_0105_1;
				}
			}
			{
				RuntimeObject* L_29 = __this->____comparer;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_30 = V_7;
				il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(L_30, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				il2cpp_codegen_memcpy(L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				NullCheck(L_29);
				bool L_33;
				L_33 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_31: *(void**)L_31), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_32: *(void**)L_32));
				if (!L_33)
				{
					goto IL_0105_1;
				}
			}
			{
				bool L_34 = ___2_matchValue;
				if (!L_34)
				{
					goto IL_00ae_1;
				}
			}
			{
				EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_35;
				L_35 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
				il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___3_oldValue : &___3_oldValue), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_37 = V_7;
				il2cpp_codegen_memcpy(L_38, il2cpp_codegen_get_field_data_pointer(L_37, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				NullCheck(L_35);
				bool L_39;
				L_39 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_36: *(void**)L_36), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_38: *(void**)L_38));
				if (L_39)
				{
					goto IL_00ae_1;
				}
			}
			{
				Il2CppFullySharedGenericAny* L_40 = ___1_value;
				il2cpp_codegen_initobj(L_40, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				V_8 = (bool)0;
				goto IL_0132;
			}

IL_00ae_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_41 = V_6;
				if (L_41)
				{
					goto IL_00ce_1;
				}
			}
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_42 = V_1;
				NullCheck(L_42);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_43 = L_42->____buckets;
				int32_t L_44 = V_2;
				NullCheck(L_43);
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_45 = V_7;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_46 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_45, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30));
				il2cpp_codegen_memory_barrier();
				Volatile_Write_TisNode_tC5111E77A2002D0AD173457666915D4D0BD59865_m9E4373050D190768311449568F896A3E1F52E227(((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), L_46, NULL);
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_47 = V_6;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_48 = V_7;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_49 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_48, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30));
				il2cpp_codegen_memory_barrier();
				NullCheck(L_47);
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_write_field_data<Node_tC5111E77A2002D0AD173457666915D4D0BD59865*, true>(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30), L_49);
			}

IL_00e0_1:
			{
				Il2CppFullySharedGenericAny* L_50 = ___1_value;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_51 = V_7;
				il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_field_data_pointer(L_51, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_50, L_52, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (void**)(Il2CppFullySharedGenericAny*)L_50, (void*)L_52);
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_53 = V_1;
				NullCheck(L_53);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = L_53->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_55 = V_3;
				NullCheck(L_54);
				int32_t* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)));
				int32_t L_57 = il2cpp_codegen_ldind<int32_t, int32_t>(L_56);
				il2cpp_codegen_stind<int32_t>((int32_t*)L_56, (int32_t)((int32_t)il2cpp_codegen_subtract(L_57, 1)));
				V_8 = (bool)1;
				goto IL_0132;
			}

IL_0105_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_58 = V_7;
				V_6 = L_58;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_59 = V_7;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_60 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_59, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30));
				il2cpp_codegen_memory_barrier();
				V_7 = L_60;
			}

IL_0114_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_61 = V_7;
				if (L_61)
				{
					goto IL_0065_1;
				}
			}
			{
				goto IL_0129;
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

IL_0129:
	{
		Il2CppFullySharedGenericAny* L_62 = ___1_value;
		il2cpp_codegen_initobj(L_62, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		return (bool)0;
	}

IL_0132:
	{
		bool L_63 = V_8;
		return L_63;
	}
}
// Method Definition Index: 11336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_m394ECF25DA7E42CBCE88AC5357D1DF70E5FB95E0_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		RuntimeObject* L_3 = __this->____comparer;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_4: *(void**)L_4));
		Il2CppFullySharedGenericAny* L_6 = ___1_value;
		bool L_7;
		L_7 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_2: *(void**)L_2), L_5, L_6);
		return L_7;
	}
}
// Method Definition Index: 11337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValueInternal_m8BB840B1605A1FA8F0503DDF00B4BADAE21809BB_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_hashcode, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_2 = NULL;
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1 = ___1_hashcode;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_2 = V_0;
		NullCheck(L_2);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_3 = L_2->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)))(L_1, L_4, NULL);
		V_1 = L_5;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_6 = V_0;
		NullCheck(L_6);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_7 = L_6->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_9;
		L_9 = Volatile_Read_TisNode_tC5111E77A2002D0AD173457666915D4D0BD59865_mD76E44CC90A4D6EA388439C0CC2E91C5AD5DFD7E(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), NULL);
		V_2 = L_9;
		goto IL_0060;
	}

IL_002c:
	{
		int32_t L_10 = ___1_hashcode;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_11 = V_2;
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_11, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25));
		if ((!(((uint32_t)L_10) == ((uint32_t)L_12))))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_14 = V_2;
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_field_data_pointer(L_14, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_16: *(void**)L_16));
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_18 = ___2_value;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_19 = V_2;
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_field_data_pointer(L_19, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_18, L_20, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (void**)(Il2CppFullySharedGenericAny*)L_18, (void*)L_20);
		return (bool)1;
	}

IL_0057:
	{
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_21 = V_2;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_22 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30));
		il2cpp_codegen_memory_barrier();
		V_2 = L_22;
	}

IL_0060:
	{
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_23 = V_2;
		if (L_23)
		{
			goto IL_002c;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_24 = ___2_value;
		il2cpp_codegen_initobj(L_24, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		return (bool)0;
	}
}
// Method Definition Index: 11338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryUpdateInternal_m8AA92F724E450D0F4165F82A68A5925161B5D3C5_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_hashcode, Il2CppFullySharedGenericAny ___2_newValue, Il2CppFullySharedGenericAny ___3_comparisonValue, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_41 = L_29;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_39 = L_34;
	const Il2CppFullySharedGenericAny L_42 = L_34;
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_6 = NULL;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_7 = NULL;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_8 = NULL;
	bool V_9 = false;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_0 = (RuntimeObject*)L_0;
	}

IL_0006:
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_1 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_3 = L_1;
		int32_t L_2 = ___1_hashcode;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_3 = V_3;
		NullCheck(L_3);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_6 = V_3;
		NullCheck(L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6->____locks;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (int32_t, int32_t*, int32_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)))(L_2, (&V_1), (&V_2), L_5, L_8, NULL);
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_9 = V_3;
		NullCheck(L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____locks;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		V_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0101:
			{
				{
					bool L_14 = V_5;
					if (!L_14)
					{
						goto IL_010c;
					}
				}
				{
					RuntimeObject* L_15 = V_4;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_15, NULL);
				}

IL_010c:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_16 = V_4;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_16, (&V_5), NULL);
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_17 = V_3;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_18 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_17) == ((RuntimeObject*)(Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_18)))
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_0006;
			}

IL_004c_1:
			{
				V_6 = (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)NULL;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_19 = V_3;
				NullCheck(L_19);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_20 = L_19->____buckets;
				int32_t L_21 = V_1;
				NullCheck(L_20);
				int32_t L_22 = L_21;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
				V_7 = L_23;
				goto IL_00f5_1;
			}

IL_005e_1:
			{
				int32_t L_24 = ___1_hashcode;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_25 = V_7;
				int32_t L_26 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_25, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25));
				if ((!(((uint32_t)L_24) == ((uint32_t)L_26))))
				{
					goto IL_00e6_1;
				}
			}
			{
				RuntimeObject* L_27 = __this->____comparer;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_28 = V_7;
				il2cpp_codegen_memcpy(L_29, il2cpp_codegen_get_field_data_pointer(L_28, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				NullCheck(L_27);
				bool L_31;
				L_31 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_29: *(void**)L_29), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_30: *(void**)L_30));
				if (!L_31)
				{
					goto IL_00e6_1;
				}
			}
			{
				RuntimeObject* L_32 = V_0;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_33 = V_7;
				il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_field_data_pointer(L_33, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___3_comparisonValue : &___3_comparisonValue), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				NullCheck(L_32);
				bool L_36;
				L_36 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_35: *(void**)L_35));
				if (!L_36)
				{
					goto IL_00e1_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				bool L_37 = ((ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)))->___s_isValueWriteAtomic;
				if (!L_37)
				{
					goto IL_009f_1;
				}
			}
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_38 = V_7;
				il2cpp_codegen_memcpy(L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___2_newValue : &___2_newValue), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				NullCheck(L_38);
				il2cpp_codegen_write_field_data<true>(L_38, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29), L_39, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				goto IL_00dc_1;
			}

IL_009f_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_40 = V_7;
				il2cpp_codegen_memcpy(L_41, il2cpp_codegen_get_field_data_pointer(L_40, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				il2cpp_codegen_memcpy(L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___2_newValue : &___2_newValue), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				int32_t L_43 = ___1_hashcode;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_44 = V_7;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_45 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_44, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30));
				il2cpp_codegen_memory_barrier();
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_46 = (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, int32_t, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37), L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_41: *(void**)L_41), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_42: *(void**)L_42), L_43, L_45);
				V_8 = L_46;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_47 = V_6;
				if (L_47)
				{
					goto IL_00d1_1;
				}
			}
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_48 = V_3;
				NullCheck(L_48);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_49 = L_48->____buckets;
				int32_t L_50 = V_1;
				NullCheck(L_49);
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_51 = V_8;
				Volatile_Write_TisNode_tC5111E77A2002D0AD173457666915D4D0BD59865_m9E4373050D190768311449568F896A3E1F52E227(((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50))), L_51, NULL);
				goto IL_00dc_1;
			}

IL_00d1_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_52 = V_6;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_53 = V_8;
				NullCheck(L_52);
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_write_field_data<Node_tC5111E77A2002D0AD173457666915D4D0BD59865*, true>(L_52, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30), L_53);
			}

IL_00dc_1:
			{
				V_9 = (bool)1;
				goto IL_010d;
			}

IL_00e1_1:
			{
				V_9 = (bool)0;
				goto IL_010d;
			}

IL_00e6_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_54 = V_7;
				V_6 = L_54;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_55 = V_7;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_56 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_55, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30));
				il2cpp_codegen_memory_barrier();
				V_7 = L_56;
			}

IL_00f5_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_57 = V_7;
				if (L_57)
				{
					goto IL_005e_1;
				}
			}
			{
				V_9 = (bool)0;
				goto IL_010d;
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

IL_010d:
	{
		bool L_58 = V_9;
		return L_58;
	}
}
// Method Definition Index: 11339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_Clear_mBA89387480CBDF6E872ABCEA395CC5040C2A6132_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* V_1 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{
				int32_t L_0 = V_0;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)))(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)))(__this, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
			NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_1 = (NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)(NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)((int32_t)31));
			Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_2 = __this->____tables;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_2);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2->____locks;
			Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_4 = __this->____tables;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_4);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->____countPerLock;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_5);
			int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
			Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_8 = (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
			((  void (*) (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*, NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_8, L_1, L_3, L_7, NULL);
			V_1 = L_8;
			Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_9 = V_1;
			il2cpp_codegen_memory_barrier();
			__this->____tables = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_9);
			Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_10 = V_1;
			NullCheck(L_10);
			NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_11 = L_10->____buckets;
			NullCheck(L_11);
			int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
			Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_13 = V_1;
			NullCheck(L_13);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13->____locks;
			NullCheck(L_14);
			int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
			CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			int32_t L_16;
			L_16 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, ((int32_t)(L_12/L_15)), NULL);
			__this->____budget = L_16;
			goto IL_006b;
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
		return;
	}
}
// Method Definition Index: 11340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m641512B29A4F9DFA75019D8E0EB46B12D95BE2D0_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
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
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0D86565E49BD212E7AC64BABD33BE3668A4C45B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0081:
			{
				int32_t L_4 = V_0;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)))(__this, 0, L_4, NULL);
				return;
			}
		});
		try
		{
			{
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)))(__this, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
				V_1 = 0;
				V_2 = 0;
				goto IL_004a_1;
			}

IL_0032_1:
			{
				int32_t L_5 = V_1;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_6 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_6);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_8 = V_2;
				NullCheck(L_7);
				int32_t L_9 = L_8;
				int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
				V_1 = ((int32_t)il2cpp_codegen_add(L_5, L_10));
				int32_t L_11 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			}

IL_004a_1:
			{
				int32_t L_12 = V_2;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_13 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_13);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13->____locks;
				NullCheck(L_14);
				int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
				if ((((int32_t)L_12) >= ((int32_t)L_15)))
				{
					goto IL_0060_1;
				}
			}
			{
				int32_t L_16 = V_1;
				if ((((int32_t)L_16) >= ((int32_t)0)))
				{
					goto IL_0032_1;
				}
			}

IL_0060_1:
			{
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_17 = ___0_array;
				NullCheck(L_17);
				int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
				int32_t L_19 = V_1;
				int32_t L_20 = ___1_index;
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, L_19))) < ((int32_t)L_20)))
				{
					goto IL_006c_1;
				}
			}
			{
				int32_t L_21 = V_1;
				if ((((int32_t)L_21) >= ((int32_t)0)))
				{
					goto IL_0077_1;
				}
			}

IL_006c_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral672E993A9AD93822B712B165C6987759C6DED80B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
			}

IL_0077_1:
			{
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = ___0_array;
				int32_t L_24 = ___1_index;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40)))(__this, L_23, L_24, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
				goto IL_008a;
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

IL_008a:
	{
		return;
	}
}
// Method Definition Index: 11341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ConcurrentDictionary_2_ToArray_m95F353F48726B8602C9E1D0E09770526620EEFEB_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_2 = NULL;
	int32_t V_3 = 0;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_4 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{
				int32_t L_0 = V_0;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)))(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)))(__this, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
				V_1 = 0;
				V_3 = 0;
				goto IL_0028_1;
			}

IL_0010_1:
			{
				int32_t L_1 = V_1;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_2 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_2);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_4 = V_3;
				NullCheck(L_3);
				int32_t L_5 = L_4;
				int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
				if (((int64_t)L_1 + (int64_t)L_6 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_1 + (int64_t)L_6 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				V_1 = ((int32_t)il2cpp_codegen_add(L_1, L_6));
				int32_t L_7 = V_3;
				if (((int64_t)L_7 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_7 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
			}

IL_0028_1:
			{
				int32_t L_8 = V_3;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_9 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_9);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____locks;
				NullCheck(L_10);
				int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
				if ((((int32_t)L_8) < ((int32_t)L_11)))
				{
					goto IL_0010_1;
				}
			}
			{
				int32_t L_12 = V_1;
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_13;
				L_13 = ((  KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
				V_4 = L_13;
				goto IL_0063;
			}

IL_0046_1:
			{
				int32_t L_14 = V_1;
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_15 = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42), (uint32_t)L_14);
				V_2 = L_15;
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_16 = V_2;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40)))(__this, L_16, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_17 = V_2;
				V_4 = L_17;
				goto IL_0063;
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

IL_0063:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_4;
		return L_18;
	}
}
// Method Definition Index: 11342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToPairs_mB29DE9F99C438139032B46CF257772B8D67C9D81_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_14 = alloca(SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
	//<source_info:<no-source>:1>
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_2 = NULL;
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0045;
	}

IL_0012:
	{
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_003e;
	}

IL_0018:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_8 = V_2;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_10 = V_2;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(L_10, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		memset(L_14, 0, SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? il2cpp_codegen_memcpy(L_12, L_9, SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? il2cpp_codegen_memcpy(L_13, L_11, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF): *(void**)L_11), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_14, SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_14);
		int32_t L_15 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_16 = V_2;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_17 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30));
		il2cpp_codegen_memory_barrier();
		V_2 = L_17;
	}

IL_003e:
	{
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_18 = V_2;
		if (L_18)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0045:
	{
		int32_t L_20 = V_1;
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToEntries_m963F17C04F9A702D1C83334C27ABD9BC936DF357_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_2 = NULL;
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_004f;
	}

IL_0012:
	{
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_0048;
	}

IL_0018:
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_8 = V_2;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_9);
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_11 = V_2;
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_field_data_pointer(L_11, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_12);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_14;
		memset((&L_14), 0, sizeof(L_14));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_14), L_10, L_13, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_14);
		int32_t L_15 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_16 = V_2;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_17 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30));
		il2cpp_codegen_memory_barrier();
		V_2 = L_17;
	}

IL_0048:
	{
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_18 = V_2;
		if (L_18)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004f:
	{
		int32_t L_20 = V_1;
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_CopyToObjects_mCC63F0BBFE09722AC0F6C6D383DDF8D7A47DFBD2_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_14 = alloca(SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
	//<source_info:<no-source>:1>
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_2 = NULL;
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_1 = L_0->____buckets;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0046;
	}

IL_0012:
	{
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_003f;
	}

IL_0018:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_8 = V_2;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_10 = V_2;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(L_10, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		memset(L_14, 0, SizeOf_KeyValuePair_2_tD5CB06BF496878AA4AFA9D8ACE7541CA484F69C0);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? il2cpp_codegen_memcpy(L_12, L_9, SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? il2cpp_codegen_memcpy(L_13, L_11, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF): *(void**)L_11), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9), L_14);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_15);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_15);
		int32_t L_16 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_16, 1));
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_17 = V_2;
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_18 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_17, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30));
		il2cpp_codegen_memory_barrier();
		V_2 = L_18;
	}

IL_003f:
	{
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_19 = V_2;
		if (L_19)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0046:
	{
		int32_t L_21 = V_1;
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_22)->max_length),NULL));
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_mB8E0C74DF9390E74FAED06B806E09260FEA6D626_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* L_0 = (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44));
		((  void (*) (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45)))(L_0, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* L_1 = L_0;
		NullCheck(L_1);
		il2cpp_codegen_write_field_data<ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, true>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46), __this);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAddInternal_mA7A0FCD2CFB2DE061C507C25D130AC58B32CEB7A_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_hashcode, Il2CppFullySharedGenericAny ___2_value, bool ___3_updateIfExists, bool ___4_acquireLock, Il2CppFullySharedGenericAny* ___5_resultingValue, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_40 = L_32;
	const Il2CppFullySharedGenericAny L_65 = L_32;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_38 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_41 = L_38;
	const Il2CppFullySharedGenericAny L_54 = L_38;
	const Il2CppFullySharedGenericAny L_57 = L_38;
	const Il2CppFullySharedGenericAny L_66 = L_38;
	const Il2CppFullySharedGenericAny L_88 = L_38;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_5 = NULL;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_6 = NULL;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_7 = NULL;
	bool V_8 = false;

IL_0000:
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_2 = L_0;
		int32_t L_1 = ___1_hashcode;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_2 = V_2;
		NullCheck(L_2);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_3 = L_2->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_5 = V_2;
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5->____locks;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (int32_t, int32_t*, int32_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)))(L_1, (&V_0), (&V_1), L_4, L_7, NULL);
		V_3 = (bool)0;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_014e:
			{
				{
					bool L_8 = V_4;
					if (!L_8)
					{
						goto IL_015f;
					}
				}
				{
					Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_9 = V_2;
					NullCheck(L_9);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9->____locks;
					int32_t L_11 = V_1;
					NullCheck(L_10);
					int32_t L_12 = L_11;
					RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_13, NULL);
				}

IL_015f:
				{
					return;
				}
			}
		});
		try
		{
			{
				bool L_14 = ___4_acquireLock;
				if (!L_14)
				{
					goto IL_003b_1;
				}
			}
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_15 = V_2;
				NullCheck(L_15);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15->____locks;
				int32_t L_17 = V_1;
				NullCheck(L_16);
				int32_t L_18 = L_17;
				RuntimeObject* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_19, (&V_4), NULL);
			}

IL_003b_1:
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_20 = V_2;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_21 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_20) == ((RuntimeObject*)(Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_21)))
				{
					goto IL_0048_1;
				}
			}
			{
				goto IL_0000;
			}

IL_0048_1:
			{
				V_5 = (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)NULL;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_22 = V_2;
				NullCheck(L_22);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_23 = L_22->____buckets;
				int32_t L_24 = V_0;
				NullCheck(L_23);
				int32_t L_25 = L_24;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
				V_6 = L_26;
				goto IL_00fd_1;
			}

IL_005a_1:
			{
				int32_t L_27 = ___1_hashcode;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_28 = V_6;
				int32_t L_29 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_28, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25));
				if ((!(((uint32_t)L_27) == ((uint32_t)L_29))))
				{
					goto IL_00ee_1;
				}
			}
			{
				RuntimeObject* L_30 = __this->____comparer;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_31 = V_6;
				il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_field_data_pointer(L_31, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				NullCheck(L_30);
				bool L_34;
				L_34 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_32: *(void**)L_32), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_33: *(void**)L_33));
				if (!L_34)
				{
					goto IL_00ee_1;
				}
			}
			{
				bool L_35 = ___3_updateIfExists;
				if (!L_35)
				{
					goto IL_00d8_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				bool L_36 = ((ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)))->___s_isValueWriteAtomic;
				if (!L_36)
				{
					goto IL_0091_1;
				}
			}
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_37 = V_6;
				il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___2_value : &___2_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				NullCheck(L_37);
				il2cpp_codegen_write_field_data<true>(L_37, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29), L_38, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				goto IL_00ce_1;
			}

IL_0091_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_39 = V_6;
				il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_field_data_pointer(L_39, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				il2cpp_codegen_memcpy(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___2_value : &___2_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				int32_t L_42 = ___1_hashcode;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_43 = V_6;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_44 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_43, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30));
				il2cpp_codegen_memory_barrier();
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_45 = (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, int32_t, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37), L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_40: *(void**)L_40), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_41: *(void**)L_41), L_42, L_44);
				V_7 = L_45;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_46 = V_5;
				if (L_46)
				{
					goto IL_00c3_1;
				}
			}
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_47 = V_2;
				NullCheck(L_47);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_48 = L_47->____buckets;
				int32_t L_49 = V_0;
				NullCheck(L_48);
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_50 = V_7;
				Volatile_Write_TisNode_tC5111E77A2002D0AD173457666915D4D0BD59865_m9E4373050D190768311449568F896A3E1F52E227(((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), L_50, NULL);
				goto IL_00ce_1;
			}

IL_00c3_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_51 = V_5;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_52 = V_7;
				NullCheck(L_51);
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_write_field_data<Node_tC5111E77A2002D0AD173457666915D4D0BD59865*, true>(L_51, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30), L_52);
			}

IL_00ce_1:
			{
				Il2CppFullySharedGenericAny* L_53 = ___5_resultingValue;
				il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___2_value : &___2_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_53, L_54, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (void**)(Il2CppFullySharedGenericAny*)L_53, (void*)L_54);
				goto IL_00e6_1;
			}

IL_00d8_1:
			{
				Il2CppFullySharedGenericAny* L_55 = ___5_resultingValue;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_56 = V_6;
				il2cpp_codegen_memcpy(L_57, il2cpp_codegen_get_field_data_pointer(L_56, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_55, L_57, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (void**)(Il2CppFullySharedGenericAny*)L_55, (void*)L_57);
			}

IL_00e6_1:
			{
				V_8 = (bool)0;
				goto IL_0174;
			}

IL_00ee_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_58 = V_6;
				V_5 = L_58;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_59 = V_6;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_60 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_59, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30));
				il2cpp_codegen_memory_barrier();
				V_6 = L_60;
			}

IL_00fd_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_61 = V_6;
				if (L_61)
				{
					goto IL_005a_1;
				}
			}
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_62 = V_2;
				NullCheck(L_62);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_63 = L_62->____buckets;
				int32_t L_64 = V_0;
				NullCheck(L_63);
				il2cpp_codegen_memcpy(L_65, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				il2cpp_codegen_memcpy(L_66, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___2_value : &___2_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				int32_t L_67 = ___1_hashcode;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_68 = V_2;
				NullCheck(L_68);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_69 = L_68->____buckets;
				int32_t L_70 = V_0;
				NullCheck(L_69);
				int32_t L_71 = L_70;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_73 = (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, int32_t, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37), L_73, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_65: *(void**)L_65), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_66: *(void**)L_66), L_67, L_72);
				Volatile_Write_TisNode_tC5111E77A2002D0AD173457666915D4D0BD59865_m9E4373050D190768311449568F896A3E1F52E227(((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64))), L_73, NULL);
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_74 = V_2;
				NullCheck(L_74);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = L_74->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_76 = V_1;
				NullCheck(L_75);
				int32_t* L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)));
				int32_t L_78 = il2cpp_codegen_ldind<int32_t, int32_t>(L_77);
				if (((int64_t)L_78 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_78 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				il2cpp_codegen_stind<int32_t>((int32_t*)L_77, (int32_t)((int32_t)il2cpp_codegen_add(L_78, 1)));
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_79 = V_2;
				NullCheck(L_79);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = L_79->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_81 = V_1;
				NullCheck(L_80);
				int32_t L_82 = L_81;
				int32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
				int32_t L_84 = __this->____budget;
				if ((((int32_t)L_83) <= ((int32_t)L_84)))
				{
					goto IL_014c_1;
				}
			}
			{
				V_3 = (bool)1;
			}

IL_014c_1:
			{
				goto IL_0160;
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

IL_0160:
	{
		bool L_85 = V_3;
		if (!L_85)
		{
			goto IL_016a;
		}
	}
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_86 = V_2;
		((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, Tables_tD895B223685217918C345ED5D52074F7E29E5F95*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47)))(__this, L_86, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47));
	}

IL_016a:
	{
		Il2CppFullySharedGenericAny* L_87 = ___5_resultingValue;
		il2cpp_codegen_memcpy(L_88, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___2_value : &___2_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_87, L_88, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (void**)(Il2CppFullySharedGenericAny*)L_87, (void*)L_88);
		return (bool)1;
	}

IL_0174:
	{
		bool L_89 = V_8;
		return L_89;
	}
}
// Method Definition Index: 11347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_get_Item_m3E282309A89340BEE70BB1BA3231AC350EB63476_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_1;
		L_1 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_0: *(void**)L_0), (Il2CppFullySharedGenericAny*)V_0);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_2);
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 48)))(L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 48));
	}

IL_0016:
	{
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		return;
	}
}
// Method Definition Index: 11348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_mB9751D1BE987E51A6B1B2D2BF2851678004FF269_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		RuntimeObject* L_3 = __this->____comparer;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_4: *(void**)L_4));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___1_value : &___1_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		bool L_7;
		L_7 = InvokerFuncInvoker6< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny, bool, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_2: *(void**)L_2), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_6: *(void**)L_6), (bool)1, (bool)1, (Il2CppFullySharedGenericAny*)V_0);
		return;
	}
}
// Method Definition Index: 11349
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNotFoundException_m65C4F1EFB50BF283F02C2E2C53F3535FDD685DE5_fshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_0);
		String_t* L_2;
		L_2 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141)), L_1, NULL);
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_3 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}
}
// Method Definition Index: 11350
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ThrowKeyNullException_mEF107859AE4074A8B054F778F40CE4FD1D8D271F_fshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_0 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_get_Count_mC28E6D211E5DB9E4E103B4105579628203C682A4_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				int32_t L_0 = V_0;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)))(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)))(__this, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
			int32_t L_1;
			L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49)))(__this, NULL);
			V_1 = L_1;
			goto IL_001c;
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

IL_001c:
	{
		int32_t L_2 = V_1;
		return L_2;
	}
}
// Method Definition Index: 11352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_GetCountInternal_mABB50180C1CBF2FBBBAB8667ED74FCC74FFB3F1C_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_001e;
	}

IL_0006:
	{
		int32_t L_0 = V_0;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_1 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1->____countPerLock;
		il2cpp_codegen_memory_barrier();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_5));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		int32_t L_7 = V_1;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_8 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____countPerLock;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		if ((((int32_t)L_7) < ((int32_t)L_10)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// Method Definition Index: 11353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_GetOrAdd_mA265AF3ECF3E03D9F24BA7F18C80A70ED9F34846_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_valueFactory, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_13 = L_7;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_16 = L_14;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_1, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___1_valueFactory;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF68BB0CB45867DA95163C2C6A4B0677DCE80DCF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001b:
	{
		RuntimeObject* L_4 = __this->____comparer;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_4);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_5: *(void**)L_5));
		V_0 = L_6;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_7: *(void**)L_7), L_8, (Il2CppFullySharedGenericAny*)V_1);
		if (L_9)
		{
			goto IL_0048;
		}
	}
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		int32_t L_11 = V_0;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_12 = ___1_valueFactory;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_12);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50), L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_13: *(void**)L_13), (Il2CppFullySharedGenericAny*)L_14);
		bool L_15;
		L_15 = InvokerFuncInvoker6< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny, bool, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_10: *(void**)L_10), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_14: *(void**)L_14), (bool)0, (bool)1, (Il2CppFullySharedGenericAny*)V_1);
	}

IL_0048:
	{
		il2cpp_codegen_memcpy(L_16, V_1, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		return;
	}
}
// Method Definition Index: 11354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_GetOrAdd_mD7D4FE8B123ABFEABF8821D526AB2B1E46A05B24_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	const Il2CppFullySharedGenericAny L_8 = L_0;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_1, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		RuntimeObject* L_2 = __this->____comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		int32_t L_6 = V_0;
		bool L_7;
		L_7 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_5: *(void**)L_5), L_6, (Il2CppFullySharedGenericAny*)V_1);
		if (L_7)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		int32_t L_9 = V_0;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___1_value : &___1_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		bool L_11;
		L_11 = InvokerFuncInvoker6< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny, bool, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_8: *(void**)L_8), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_10: *(void**)L_10), (bool)0, (bool)1, (Il2CppFullySharedGenericAny*)V_1);
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		return;
	}
}
// Method Definition Index: 11355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_AddOrUpdate_mC29F9BF534BBA9A02001203A38E128AD33B72953_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_addValueFactory, Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___2_updateValueFactory, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_7 = L_0;
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_13 = L_0;
	const Il2CppFullySharedGenericAny L_22 = L_0;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_25 = L_16;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_21 = L_14;
	const Il2CppFullySharedGenericAny L_26 = L_14;
	const Il2CppFullySharedGenericAny L_28 = L_14;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_1, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_2, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_3, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_000d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___1_addValueFactory;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FBDA15AB716B63A3A92B84F7B26A1A374DA894D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001b:
	{
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_4 = ___2_updateValueFactory;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0524F47F7868CF019B9EC023CC6808DAB5BE2221)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0029:
	{
		RuntimeObject* L_6 = __this->____comparer;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_7: *(void**)L_7));
		V_0 = L_8;
	}

IL_0036:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		int32_t L_10 = V_0;
		bool L_11;
		L_11 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_9: *(void**)L_9), L_10, (Il2CppFullySharedGenericAny*)V_1);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_12 = ___2_updateValueFactory;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		il2cpp_codegen_memcpy(L_14, V_1, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		NullCheck(L_12);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51), L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_14: *(void**)L_14), (Il2CppFullySharedGenericAny*)L_15);
		il2cpp_codegen_memcpy(V_2, L_15, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		int32_t L_17 = V_0;
		il2cpp_codegen_memcpy(L_18, V_2, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		il2cpp_codegen_memcpy(L_19, V_1, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		bool L_20;
		L_20 = InvokerFuncInvoker4< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 52)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 52), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_16: *(void**)L_16), L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_18: *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_19: *(void**)L_19));
		if (!L_20)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_memcpy(L_21, V_2, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_21, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		return;
	}

IL_0059:
	{
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		int32_t L_23 = V_0;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_24 = ___1_addValueFactory;
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		NullCheck(L_24);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50), L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_25: *(void**)L_25), (Il2CppFullySharedGenericAny*)L_26);
		bool L_27;
		L_27 = InvokerFuncInvoker6< bool, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny, bool, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_22: *(void**)L_22), L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_26: *(void**)L_26), (bool)0, (bool)1, (Il2CppFullySharedGenericAny*)V_3);
		if (!L_27)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_memcpy(L_28, V_3, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_28, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		return;
	}
}
// Method Definition Index: 11356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m2A1279D54D2B0303EDFD78EBBE582219E9A6AE7A_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___1_value : &___1_value), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_1: *(void**)L_1));
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC38D57307791EED2AD28D35927B9E90B23E6281D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0015:
	{
		return;
	}
}
// Method Definition Index: 11357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_m9337AF5E27F91FCC2C3080F725E3020FA1584ADB_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? ___0_key : &___0_key), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
		bool L_1;
		L_1 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 54)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 54), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_0: *(void**)L_0), (Il2CppFullySharedGenericAny*)V_0);
		return L_1;
	}
}
// Method Definition Index: 11358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_get_Keys_mFB7259BEF1260F41B8D3518183349BEA64412311_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_0;
		L_0 = ((  ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9A1A7D9913C0E591E0F7BA72B863AB9918523207_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_0;
		L_0 = ((  ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_get_Values_m4AFBB5710869A753B5E89CDC1D269CA302F99FD9_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_0;
		L_0 = ((  ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11361
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m97AEC4C2C5D0F9E003D8A0BD8C6FC837ED42842F_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_0;
		L_0 = ((  ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11362
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mB91CF82B34FFCC4ED31CA846C7B0F17E34EB3726_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_1);
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 57), (RuntimeObject*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_1: *(void**)L_1));
		return;
	}
}
// Method Definition Index: 11363
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2C94785221845049CC56412AEB3F0B5EE13BDEA7_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		bool L_1;
		L_1 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_0: *(void**)L_0), (Il2CppFullySharedGenericAny*)V_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2;
		L_2 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_4);
		NullCheck(L_2);
		bool L_5;
		L_5 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_4: *(void**)L_4));
		return L_5;
	}
}
// Method Definition Index: 11364
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mE2C54BEA1DE0B6A2373F3D15DD5DF0B49D5D5EAF_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 11365
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m882A8610C8C7A397ED7CA5BC5875A0C98E49BA36_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral561DA6E332E7EF45E52D96B07EC786D85C2955BE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral020F27A067D9C2A1BC9628BCE378DE63A6F2B5BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001e:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_4);
		bool L_5;
		L_5 = InvokerFuncInvoker4< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_3: *(void**)L_3), (Il2CppFullySharedGenericAny*)V_0, (bool)1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_4: *(void**)L_4));
		return L_5;
	}
}
// Method Definition Index: 11366
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IEnumerable_GetEnumerator_m067A04B1E5100135B9D3D280C142C3840B8B6664_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 59)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 59));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_IDictionary_Add_m06677641693CE2CEA2129EF908F04C5A84AC0095_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	const Il2CppFullySharedGenericAny L_11 = L_4;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD8CE285C77CDFBCDCBA338A795AFF019E6C3B66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
	}
	try
	{
		RuntimeObject* L_3 = ___1_value;
		void* L_5 = UnBox_Any(L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_4);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_5)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_6 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20D029102A70CD96274496928ED59E8B9C014BBA)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0031:
	{
		RuntimeObject* L_8 = ___0_key;
		void* L_10 = UnBox_Any(L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_9);
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 57), (RuntimeObject*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_11: *(void**)L_11));
		return;
	}
}
// Method Definition Index: 11368
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_IDictionary_Contains_mDBFDE9C27485B0906901D8817CE9E8EADF270B2D_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 60)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 60), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_GetEnumerator_m3401A01C25F9B8BE9CBEF5375640E47FF18E3E39_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* L_0 = (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 61));
		((  void (*) (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A*, ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 62)))(L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 62));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11370
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_IDictionary_get_IsFixedSize_m992C27CFC95AEA9467BEDB5D7038BCEA745B1DA9_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 11371
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_IDictionary_get_IsReadOnly_mD3FE3455B4BA9AD532EBB0A40AACD7436879D3A1_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 11372
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_get_Keys_m52EAFCB7CE4E20E70DC7688674E7460F811BB005_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_0;
		L_0 = ((  ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_IDictionary_Remove_m872F8CEFF9F16157385F248DFFE42A0E2FF1AF95_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 54)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 54), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), (Il2CppFullySharedGenericAny*)V_0);
	}

IL_001f:
	{
		return;
	}
}
// Method Definition Index: 11374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_get_Values_m3464C3463F8C09F1E70F0CC8958A22F18E43D19E_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_0;
		L_0 = ((  ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_IDictionary_get_Item_m566C8F3BBA17807BB1CEF134C17D6A60955C1860_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	memset(V_0, 0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), (Il2CppFullySharedGenericAny*)V_0);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_6);
		return L_7;
	}

IL_0027:
	{
		return NULL;
	}
}
// Method Definition Index: 11376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_IDictionary_set_Item_mDB89BB0838AFD262BE7D3F1604FE2AB1721CEC8A_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_key;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD8CE285C77CDFBCDCBA338A795AFF019E6C3B66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		RuntimeObject* L_3 = ___1_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20D029102A70CD96274496928ED59E8B9C014BBA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_002e:
	{
		RuntimeObject* L_5 = ___0_key;
		void* L_7 = UnBox_Any(L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11), L_6);
		RuntimeObject* L_8 = ___1_value;
		void* L_10 = UnBox_Any(L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_9);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 63)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 63), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10))));
		return;
	}
}
// Method Definition Index: 11377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_System_Collections_ICollection_CopyTo_m83DE666C7BAB44677E1D0CDA16D76998451EB411_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* V_1 = NULL;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_3 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;
	int32_t V_6 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
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
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0D86565E49BD212E7AC64BABD33BE3668A4C45B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cc:
			{
				int32_t L_4 = V_0;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)))(__this, 0, L_4, NULL);
				return;
			}
		});
		try
		{
			{
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)))(__this, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_5 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				V_1 = L_5;
				V_2 = 0;
				V_6 = 0;
				goto IL_0050_1;
			}

IL_003c_1:
			{
				int32_t L_6 = V_2;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_7 = V_1;
				NullCheck(L_7);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_9 = V_6;
				NullCheck(L_8);
				int32_t L_10 = L_9;
				int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				V_2 = ((int32_t)il2cpp_codegen_add(L_6, L_11));
				int32_t L_12 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			}

IL_0050_1:
			{
				int32_t L_13 = V_6;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_14 = V_1;
				NullCheck(L_14);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14->____locks;
				NullCheck(L_15);
				int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
				if ((((int32_t)L_13) >= ((int32_t)L_16)))
				{
					goto IL_0060_1;
				}
			}
			{
				int32_t L_17 = V_2;
				if ((((int32_t)L_17) >= ((int32_t)0)))
				{
					goto IL_003c_1;
				}
			}

IL_0060_1:
			{
				RuntimeArray* L_18 = ___0_array;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = il2cpp_codegen_array_get_length(L_18);
				int32_t L_20 = V_2;
				int32_t L_21 = ___1_index;
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_19, L_20))) < ((int32_t)L_21)))
				{
					goto IL_006f_1;
				}
			}
			{
				int32_t L_22 = V_2;
				if ((((int32_t)L_22) >= ((int32_t)0)))
				{
					goto IL_007a_1;
				}
			}

IL_006f_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral672E993A9AD93822B712B165C6987759C6DED80B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
			}

IL_007a_1:
			{
				RuntimeArray* L_24 = ___0_array;
				V_3 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInstSealed((RuntimeObject*)L_24, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42)));
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_25 = V_3;
				if (!L_25)
				{
					goto IL_008e_1;
				}
			}
			{
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_26 = V_3;
				int32_t L_27 = ___1_index;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40)))(__this, L_26, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
				goto IL_00d5;
			}

IL_008e_1:
			{
				RuntimeArray* L_28 = ___0_array;
				V_4 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_28, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
				DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_29 = V_4;
				if (!L_29)
				{
					goto IL_00a5_1;
				}
			}
			{
				DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_30 = V_4;
				int32_t L_31 = ___1_index;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 64)))(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 64));
				goto IL_00d5;
			}

IL_00a5_1:
			{
				RuntimeArray* L_32 = ___0_array;
				V_5 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_32, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = V_5;
				if (!L_33)
				{
					goto IL_00bc_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = V_5;
				int32_t L_35 = ___1_index;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 65)))(__this, L_34, L_35, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 65));
				goto IL_00d5;
			}

IL_00bc_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_36 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA05D9DA01CB9AD0AA6BE899FE1E39018B72923DB)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, method);
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

IL_00d5:
	{
		return;
	}
}
// Method Definition Index: 11378
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_System_Collections_ICollection_get_IsSynchronized_m20B7DE7AF656FF5F0F1D1BFAE0AF0FFCC2E89042_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 11379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_System_Collections_ICollection_get_SyncRoot_m8AD982FEACF3DB9191434BE19BF7A1A5B1F1EC69_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4CC02BED909F9630E59013E4804C6C269FF8370A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_GrowTable_mB6A05711EB1E3E4657393BA2295265B9C4746A93_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ___0_tables, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit);
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	const Il2CppFullySharedGenericAny L_83 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	const Il2CppFullySharedGenericAny L_85 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01fd:
			{
				int32_t L_0 = V_0;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)))(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 66)))(__this, 0, 1, (&V_0), NULL);
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_1 = ___0_tables;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_2 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				if ((((RuntimeObject*)(Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_1) == ((RuntimeObject*)(Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_2)))
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0206;
			}

IL_001c_1:
			{
				int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
				V_1 = L_3;
				V_7 = 0;
				goto IL_0039_1;
			}

IL_0024_1:
			{
				int64_t L_4 = V_1;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_5 = ___0_tables;
				NullCheck(L_5);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->____countPerLock;
				il2cpp_codegen_memory_barrier();
				int32_t L_7 = V_7;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
				V_1 = ((int64_t)il2cpp_codegen_add(L_4, L_10));
				int32_t L_11 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			}

IL_0039_1:
			{
				int32_t L_12 = V_7;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_13 = ___0_tables;
				NullCheck(L_13);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->____countPerLock;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_14);
				int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
				if ((((int32_t)L_12) < ((int32_t)L_15)))
				{
					goto IL_0024_1;
				}
			}
			{
				int64_t L_16 = V_1;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_17 = ___0_tables;
				NullCheck(L_17);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_18 = L_17->____buckets;
				NullCheck(L_18);
				int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
				int64_t L_20 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)(L_19/4)),NULL));
				if ((((int64_t)L_16) >= ((int64_t)L_20)))
				{
					goto IL_007c_1;
				}
			}
			{
				int32_t L_21 = __this->____budget;
				__this->____budget = ((int32_t)il2cpp_codegen_multiply(2, L_21));
				int32_t L_22 = __this->____budget;
				if ((((int32_t)L_22) >= ((int32_t)0)))
				{
					goto IL_0077_1;
				}
			}
			{
				__this->____budget = ((int32_t)2147483647LL);
			}

IL_0077_1:
			{
				goto IL_0206;
			}

IL_007c_1:
			{
				V_2 = 0;
				V_3 = (bool)0;
			}
			try
			{
				{
					Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_23 = ___0_tables;
					NullCheck(L_23);
					NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_24 = L_23->____buckets;
					NullCheck(L_24);
					int32_t L_25 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_24)->max_length),NULL));
					if (((int64_t)L_25 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_25 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_25, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_25, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_25, 2)), 1));
					goto IL_0093_2;
				}

IL_008f_2:
				{
					int32_t L_26 = V_2;
					if (((int64_t)L_26 + (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_26 + (int64_t)2 > (int64_t)kIl2CppInt32Max))
						IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
					V_2 = ((int32_t)il2cpp_codegen_add(L_26, 2));
				}

IL_0093_2:
				{
					int32_t L_27 = V_2;
					if (!((int32_t)(L_27%3)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_28 = V_2;
					if (!((int32_t)(L_28%5)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_29 = V_2;
					if (!((int32_t)(L_29%7)))
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_30 = V_2;
					if ((((int32_t)L_30) <= ((int32_t)((int32_t)2146435071))))
					{
						goto IL_00ac_2;
					}
				}
				{
					V_3 = (bool)1;
				}

IL_00ac_2:
				{
					goto IL_00b3_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00ae_1;
				}
				throw e;
			}

CATCH_00ae_1:
			{
				OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_31 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));;
				V_3 = (bool)1;
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_00b3_1;
			}

IL_00b3_1:
			{
				bool L_32 = V_3;
				if (!L_32)
				{
					goto IL_00c7_1;
				}
			}
			{
				V_2 = ((int32_t)2146435071);
				__this->____budget = ((int32_t)2147483647LL);
			}

IL_00c7_1:
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_33 = ___0_tables;
				NullCheck(L_33);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_33->____locks;
				NullCheck(L_34);
				int32_t L_35 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_34)->max_length),NULL));
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 66)))(__this, 1, L_35, (&V_0), NULL);
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_36 = ___0_tables;
				NullCheck(L_36);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_36->____locks;
				V_4 = L_37;
				bool L_38 = __this->____growLockArray;
				if (!L_38)
				{
					goto IL_0143_1;
				}
			}
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_39 = ___0_tables;
				NullCheck(L_39);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_39->____locks;
				NullCheck(L_40);
				int32_t L_41 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_40)->max_length),NULL));
				if ((((int32_t)L_41) >= ((int32_t)((int32_t)1024))))
				{
					goto IL_0143_1;
				}
			}
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_42 = ___0_tables;
				NullCheck(L_42);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_42->____locks;
				NullCheck(L_43);
				int32_t L_44 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_43)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_44, 2)));
				V_4 = L_45;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_46 = ___0_tables;
				NullCheck(L_46);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = L_46->____locks;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = V_4;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_49 = ___0_tables;
				NullCheck(L_49);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_49->____locks;
				NullCheck(L_50);
				int32_t L_51 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_50)->max_length),NULL));
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_47, 0, (RuntimeArray*)L_48, 0, L_51, NULL);
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_52 = ___0_tables;
				NullCheck(L_52);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = L_52->____locks;
				NullCheck(L_53);
				int32_t L_54 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_53)->max_length),NULL));
				V_8 = L_54;
				goto IL_013b_1;
			}

IL_012b_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = V_4;
				int32_t L_56 = V_8;
				RuntimeObject* L_57 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
				Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_57, NULL);
				NullCheck(L_55);
				ArrayElementTypeCheck (L_55, L_57);
				(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (RuntimeObject*)L_57);
				int32_t L_58 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_58, 1));
			}

IL_013b_1:
			{
				int32_t L_59 = V_8;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = V_4;
				NullCheck(L_60);
				int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
				if ((((int32_t)L_59) < ((int32_t)L_61)))
				{
					goto IL_012b_1;
				}
			}

IL_0143_1:
			{
				int32_t L_62 = V_2;
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_63 = (NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)(NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_62);
				V_5 = L_63;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = V_4;
				NullCheck(L_64);
				int32_t L_65 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_64)->max_length),NULL));
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_65);
				V_6 = L_66;
				V_9 = 0;
				goto IL_01c7_1;
			}

IL_015b_1:
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_67 = ___0_tables;
				NullCheck(L_67);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_68 = L_67->____buckets;
				int32_t L_69 = V_9;
				NullCheck(L_68);
				int32_t L_70 = L_69;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
				V_10 = L_71;
				goto IL_01bd_1;
			}

IL_0168_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_72 = V_10;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_73 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_72, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30));
				il2cpp_codegen_memory_barrier();
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_74 = V_10;
				int32_t L_75 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_74, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25));
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_76 = V_5;
				NullCheck(L_76);
				int32_t L_77 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_76)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = V_4;
				NullCheck(L_78);
				int32_t L_79 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_78)->max_length),NULL));
				CHECKED_LOCAL_INIT(ConcurrentDictionary_2_tCE219B37DABA4B7F6DCCC9F2EF997532205D9242_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)),il2cpp_codegen_runtime_class_init_inline);
				((  void (*) (int32_t, int32_t*, int32_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)))(L_75, (&V_11), (&V_12), L_77, L_79, NULL);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_80 = V_5;
				int32_t L_81 = V_11;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_82 = V_10;
				il2cpp_codegen_memcpy(L_83, il2cpp_codegen_get_field_data_pointer(L_82, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_84 = V_10;
				il2cpp_codegen_memcpy(L_85, il2cpp_codegen_get_field_data_pointer(L_84, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_86 = V_10;
				int32_t L_87 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_86, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25));
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_88 = V_5;
				int32_t L_89 = V_11;
				NullCheck(L_88);
				int32_t L_90 = L_89;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_92 = (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
				InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, int32_t, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37), L_92, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_83: *(void**)L_83), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_85: *(void**)L_85), L_87, L_91);
				NullCheck(L_80);
				(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)L_92);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_6;
				int32_t L_94 = V_12;
				NullCheck(L_93);
				int32_t* L_95 = ((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94)));
				int32_t L_96 = il2cpp_codegen_ldind<int32_t, int32_t>(L_95);
				if (((int64_t)L_96 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_96 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				il2cpp_codegen_stind<int32_t>((int32_t*)L_95, (int32_t)((int32_t)il2cpp_codegen_add(L_96, 1)));
				V_10 = L_73;
			}

IL_01bd_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_97 = V_10;
				if (L_97)
				{
					goto IL_0168_1;
				}
			}
			{
				int32_t L_98 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_98, 1));
			}

IL_01c7_1:
			{
				int32_t L_99 = V_9;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_100 = ___0_tables;
				NullCheck(L_100);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_101 = L_100->____buckets;
				NullCheck(L_101);
				int32_t L_102 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_101)->max_length),NULL));
				if ((((int32_t)L_99) < ((int32_t)L_102)))
				{
					goto IL_015b_1;
				}
			}
			{
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_103 = V_5;
				NullCheck(L_103);
				int32_t L_104 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_103)->max_length),NULL));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_105 = V_4;
				NullCheck(L_105);
				int32_t L_106 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_105)->max_length),NULL));
				CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_107;
				L_107 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, ((int32_t)(L_104/L_106)), NULL);
				__this->____budget = L_107;
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_108 = V_5;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_109 = V_4;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_6;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_111 = (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
				((  void (*) (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*, NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_111, L_108, L_109, L_110, NULL);
				il2cpp_codegen_memory_barrier();
				__this->____tables = L_111;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_111);
				goto IL_0206;
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

IL_0206:
	{
		return;
	}
}
// Method Definition Index: 11381
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_GetBucket_m03138F665728DE0C8A4DA4A1720688414FC3C19B_fshared (int32_t ___0_hashcode, int32_t ___1_bucketCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_hashcode;
		int32_t L_1 = ___1_bucketCount;
		return ((int32_t)(((int32_t)(L_0&((int32_t)2147483647LL)))%L_1));
	}
}
// Method Definition Index: 11382
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_GetBucketAndLockNo_mE101532D7BE14E9975B37B3B265789858E3FDEBA_fshared (int32_t ___0_hashcode, int32_t* ___1_bucketNo, int32_t* ___2_lockNo, int32_t ___3_bucketCount, int32_t ___4_lockCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t* L_0 = ___1_bucketNo;
		int32_t L_1 = ___0_hashcode;
		int32_t L_2 = ___3_bucketCount;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_0, (int32_t)((int32_t)(((int32_t)(L_1&((int32_t)2147483647LL)))%L_2)));
		int32_t* L_3 = ___2_lockNo;
		int32_t* L_4 = ___1_bucketNo;
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, int32_t>(L_4);
		int32_t L_6 = ___4_lockCount;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_3, (int32_t)((int32_t)(L_5%L_6)));
		return;
	}
}
// Method Definition Index: 11383
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_get_DefaultConcurrencyLevel_m81D29524F689635A16DBE57641F159E3CF7218A6_fshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformHelper_t5E497382616B62F0B318E53D098F90E22AB35722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PlatformHelper_t5E497382616B62F0B318E53D098F90E22AB35722_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(PlatformHelper_t5E497382616B62F0B318E53D098F90E22AB35722_StaticInit,(PlatformHelper_t5E497382616B62F0B318E53D098F90E22AB35722_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0;
		L_0 = PlatformHelper_get_ProcessorCount_m123AB465E201104882D03864A7C6E08F1A55F3F9(NULL);
		return L_0;
	}
}
// Method Definition Index: 11384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_AcquireAllLocks_m116BB98251DC473C28D00F477613C1F68EF7EB8D_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, int32_t* ___0_locksAcquired, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit,(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* L_0 = ((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log;
		NullCheck(L_0);
		bool L_1;
		L_1 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		CHECKED_LOCAL_INIT(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticInit,(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* L_2 = ((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_3 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_3);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		NullCheck(L_2);
		CDSCollectionETWBCLProvider_ConcurrentDictionary_AcquiringAllLocks_mF33BBE9D19970C7F3C3DB3C0F6BCF16BEEC26EFA(L_2, L_5, NULL);
	}

IL_0025:
	{
		int32_t* L_6 = ___0_locksAcquired;
		((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 66)))(__this, 0, 1, L_6, NULL);
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_7 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7->____locks;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t* L_10 = ___0_locksAcquired;
		((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 66)))(__this, 1, L_9, L_10, NULL);
		return;
	}
}
// Method Definition Index: 11385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_AcquireLocks_mCDAED510DBF85E983BCB08E9A214020EDE61D999_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, int32_t ___0_fromInclusive, int32_t ___1_toExclusive, int32_t* ___2_locksAcquired, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0->____locks;
		V_0 = L_1;
		int32_t L_2 = ___0_fromInclusive;
		V_1 = L_2;
		goto IL_002e;
	}

IL_0012:
	{
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0020:
			{
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_0029;
					}
				}
				{
					int32_t* L_4 = ___2_locksAcquired;
					int32_t* L_5 = ___2_locksAcquired;
					int32_t L_6 = il2cpp_codegen_ldind<int32_t, int32_t>(L_5);
					il2cpp_codegen_stind<int32_t>((int32_t*)L_4, (int32_t)((int32_t)il2cpp_codegen_add(L_6, 1)));
				}

IL_0029:
				{
					return;
				}
			}
		});
		try
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
			int32_t L_8 = V_1;
			NullCheck(L_7);
			int32_t L_9 = L_8;
			RuntimeObject* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_10, (&V_2), NULL);
			goto IL_002a;
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

IL_002a:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ___1_toExclusive;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11386
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_ReleaseLocks_mDD3A19565988306ADEA547D93369C5FADCAF3F5B_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, int32_t ___0_fromInclusive, int32_t ___1_toExclusive, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_fromInclusive;
		V_0 = L_0;
		goto IL_001c;
	}

IL_0004:
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_1 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1->____locks;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001c:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___1_toExclusive;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* ConcurrentDictionary_2_GetKeys_m1EC8E74E7D861CE4E659320B44AFD1F12D3CE524_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_1 = NULL;
	int32_t V_2 = 0;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_3 = NULL;
	ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* V_4 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{
				int32_t L_0 = V_0;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)))(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)))(__this, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
				int32_t L_1;
				L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49)))(__this, NULL);
				int32_t L_2 = L_1;
				if ((((int32_t)L_2) >= ((int32_t)0)))
				{
					G_B3_0 = L_2;
					goto IL_001a_1;
				}
				G_B2_0 = L_2;
			}
			{
				OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_3 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)));
				OutOfMemoryException__ctor_m2CDADA05A6304090686E8D5E3E99A1596FAF5951(L_3, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
			}

IL_001a_1:
			{
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 67));
				((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 68)))(L_4, G_B3_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 68));
				V_1 = L_4;
				V_2 = 0;
				goto IL_0052_1;
			}

IL_0024_1:
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_5 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_5);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_6 = L_5->____buckets;
				int32_t L_7 = V_2;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				V_3 = L_9;
				goto IL_004b_1;
			}

IL_0036_1:
			{
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_10 = V_1;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_11 = V_3;
				il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_field_data_pointer(L_11, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26)), SizeOf_TKey_tCC55C40A53F1EAEC3F26E4225BC710D59DE23034);
				NullCheck(L_10);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 69)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 69), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)) ? L_12: *(void**)L_12));
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_13 = V_3;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_14 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30));
				il2cpp_codegen_memory_barrier();
				V_3 = L_14;
			}

IL_004b_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_15 = V_3;
				if (L_15)
				{
					goto IL_0036_1;
				}
			}
			{
				int32_t L_16 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0052_1:
			{
				int32_t L_17 = V_2;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_18 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_18);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_19 = L_18->____buckets;
				NullCheck(L_19);
				int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
				if ((((int32_t)L_17) < ((int32_t)L_20)))
				{
					goto IL_0024_1;
				}
			}
			{
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_21 = V_1;
				ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_22 = (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 70));
				((  void (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 71)))(L_22, (RuntimeObject*)L_21, NULL);
				V_4 = L_22;
				goto IL_0077;
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

IL_0077:
	{
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_23 = V_4;
		return L_23;
	}
}
// Method Definition Index: 11388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* ConcurrentDictionary_2_GetValues_mCC2139859753771D33B9F9BA3273EAF46B04ED52_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_1 = NULL;
	int32_t V_2 = 0;
	Node_tC5111E77A2002D0AD173457666915D4D0BD59865* V_3 = NULL;
	ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* V_4 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{
				int32_t L_0 = V_0;
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)))(__this, 0, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)))(__this, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
				int32_t L_1;
				L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49)))(__this, NULL);
				int32_t L_2 = L_1;
				if ((((int32_t)L_2) >= ((int32_t)0)))
				{
					G_B3_0 = L_2;
					goto IL_001a_1;
				}
				G_B2_0 = L_2;
			}
			{
				OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_3 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)));
				OutOfMemoryException__ctor_m2CDADA05A6304090686E8D5E3E99A1596FAF5951(L_3, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
			}

IL_001a_1:
			{
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 72));
				((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 73)))(L_4, G_B3_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 73));
				V_1 = L_4;
				V_2 = 0;
				goto IL_0052_1;
			}

IL_0024_1:
			{
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_5 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_5);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_6 = L_5->____buckets;
				int32_t L_7 = V_2;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				V_3 = L_9;
				goto IL_004b_1;
			}

IL_0036_1:
			{
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_10 = V_1;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_11 = V_3;
				il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_field_data_pointer(L_11, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29)), SizeOf_TValue_tA84E69092AB414DE721A38E63D901FB16B94FAFF);
				NullCheck(L_10);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 74)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 74), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_12: *(void**)L_12));
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_13 = V_3;
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_14 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 30));
				il2cpp_codegen_memory_barrier();
				V_3 = L_14;
			}

IL_004b_1:
			{
				Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_15 = V_3;
				if (L_15)
				{
					goto IL_0036_1;
				}
			}
			{
				int32_t L_16 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0052_1:
			{
				int32_t L_17 = V_2;
				Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_18 = __this->____tables;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_18);
				NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_19 = L_18->____buckets;
				NullCheck(L_19);
				int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
				if ((((int32_t)L_17) < ((int32_t)L_20)))
				{
					goto IL_0024_1;
				}
			}
			{
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_21 = V_1;
				ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_22 = (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 75));
				((  void (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 76)))(L_22, (RuntimeObject*)L_21, NULL);
				V_4 = L_22;
				goto IL_0077;
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

IL_0077:
	{
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_23 = V_4;
		return L_23;
	}
}
// Method Definition Index: 11389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_OnSerializing_m9B65EAFEB34D9D46A4C31A79E060E9782F86FD8C_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___0_context, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* V_0 = NULL;
	{
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_0 = __this->____tables;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_1;
		L_1 = ((  KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 77)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 77));
		__this->____serializationArray = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationArray), (void*)L_1);
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_2 = V_0;
		NullCheck(L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2->____locks;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		__this->____serializationConcurrencyLevel = L_4;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_5 = V_0;
		NullCheck(L_5);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_6 = L_5->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____serializationCapacity = L_7;
		return;
	}
}
// Method Definition Index: 11390
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_OnSerialized_m6A8BB19CBAC6EE0EB0B3AF1F424EDE25CD918043_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___0_context, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__this->____serializationArray = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationArray), (void*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)NULL);
		return;
	}
}
// Method Definition Index: 11391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_OnDeserialized_mD01735199C55716C1CDAFFA84F3C04129D476A79_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = __this->____serializationArray;
		V_0 = L_0;
		int32_t L_1 = __this->____serializationCapacity;
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_2 = (NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)(NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17), (uint32_t)L_1);
		V_1 = L_2;
		int32_t L_3 = __this->____serializationConcurrencyLevel;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		int32_t L_5 = __this->____serializationConcurrencyLevel;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_3 = L_6;
		V_4 = 0;
		goto IL_003f;
	}

IL_0030:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_3;
		int32_t L_8 = V_4;
		RuntimeObject* L_9 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_9, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003f:
	{
		int32_t L_11 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_3;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0030;
		}
	}
	{
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_14 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_2;
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_17 = (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		((  void (*) (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*, NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_17, L_14, L_15, L_16, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____tables = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tables), (void*)L_17);
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_0;
		((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 78)))(__this, (RuntimeObject*)L_18, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 78));
		__this->____serializationArray = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationArray), (void*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)NULL);
		return;
	}
}
// Method Definition Index: 11392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__cctor_m96B4F76D0E9460939A672A025F840C82BA15A116_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 79)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 79));
		((ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)))->___s_isValueWriteAtomic = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 11754
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mAB9D8A9DFA29977A417398BB6B906B46654CBA55_gshared_inline (KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 11755
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_mC4FA6226F7C3B5DA7FF94EB9C869DA45A2802D71_gshared_inline (KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11999
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_0 = NULL;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0 = ((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 11999
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 3347
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* Array_Empty_TisKeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8_m6D57C806A2072E9083C494D7C2C58F0A723FEBB1_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_0 = ((EmptyArray_1_t46547AC9A07D2F85B8BEE14E5641F44E9FB7B2CF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 904
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mC5D09FDDF69CB207846BD8D87EEF798562622F8A_gshared_inline (Func_2_t6D8CF90F987D57D84F64DDBE39D18F9BDC2E39AF* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 906
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m8767CBB7E9036B260BE8696BF49C389180299A0C_gshared_inline (Func_3_t9E3CBC04411CC1249EB8AD7578E5997AA9EDE6BC* __this, Il2CppSharedGenericObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
// Method Definition Index: 11774
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		return;
	}

IL_0034:
	{
		int32_t L_10 = ___0_item;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
// Method Definition Index: 11754
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 11755
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 3347
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_0 = ((EmptyArray_1_t2F24CF6B13CDDAA8B0F0764FD24AFE6483C69336_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 904
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_gshared_inline (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 906
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_3_Invoke_mB52DD65540C4107AF891E48398CF46B8590860F1_gshared_inline (Func_3_t8430F1D05DF2620CBCEC84F9563E283593C0C7E8* __this, Il2CppSharedGenericObject* ___0_arg1, Il2CppSharedGenericObject* ___1_arg2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 11754
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m59E82E5A467D2D93DBAA6AA381F5CC5286E533DD_gshared_inline (KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 11755
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m9EBB8AC826C6439F35AE628B8FBD3FC1A322E493_gshared_inline (KeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11999
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* V_0 = NULL;
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_0 = ((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 3347
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* Array_Empty_TisKeyValuePair_2_t5C1150961277957A4C2ED877761BA696CB566120_m3DAC5947C7DA5A5E357F497BE6BA770642F8A232_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		KeyValuePair_2U5BU5D_tEC672328CD74146C562AA86BCDF85CBE6273321D* L_0 = ((EmptyArray_1_t0091A58E035B640DE4638A1A0DB2A83CE0A644BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 904
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mCA1B40382E8B6D0BCC94FA8B0E4EA4C64BC8993C_gshared_inline (Func_2_t405860E4F03319562A562B85A5F839EF7CC12AC1* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 906
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m79254A650EC859A136A5FCBF2A28DFCD204FDBF2_gshared_inline (Func_3_tB6ED5593F7B9989207D4E0B22F1A34196642CCEB* __this, Il2CppSharedGenericObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 11774
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m24BA4DEDED426A5B0C6A4AB3E523C876B0B918A6_gshared_inline (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_4 = V_0;
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
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		return;
	}

IL_0034:
	{
		int32_t L_10 = ___0_item;
		List_1_AddWithResize_m3B53F17525936469654379AC0F1F0B19EC3DCCE5(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
