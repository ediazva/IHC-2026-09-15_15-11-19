#include "pch-cpp.hpp"





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
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
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
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CGetEnumeratorU3Ed__12_t5BA6B26CCE76C4C96264AB2FE1DCC652F6E7E311;
struct U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0;
struct U3CGetEnumeratorU3Ed__12_tC5137CFECCDECBA4273608757D06E64ACF35EB35;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct ConditionalWeakTable_2_t821A608C447E94C3A70B02015D52C3C9B4DBEE14;
struct ConditionalWeakTable_2_tE473109D1EF9EA4E1AA06539AE5262421E166EFD;
struct ConditionalWeakTable_2_tA0A6618FEA1BDC4E0A5C70A205A73167784823D9;
struct ConditionalWeakTable_2_t4FA84C9C03B7929ACDC537F2AB91C3AA9D39B9E6;
struct ConditionalWeakTable_2_t7A2E67B090266E74762BADC1D4FA6F9E55FC7E89;
struct ConditionalWeakTable_2_t0C7EBEF7B5FDF44A62BA413DFCC87BBE7FA2C39B;
struct ConditionalWeakTable_2_tD204B678FB5C57190177AACB4C57D5BDE9ED70E4;
struct ConditionalWeakTable_2_t9A498D558E8C556CC2FFDFE8D525E273BADE92FC;
struct ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46;
struct ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C;
struct ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1;
struct ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2;
struct ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8;
struct ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD;
struct ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5;
struct ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E;
struct DefaultComparer_1_t9C7341E5478D67148593B9F5D9828B0B26E8771C;
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5;
struct Dictionary_2_tE8D02A3D5DD039B176B8F64028DA5F0883237494;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53;
struct Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C;
struct Entry_tF06D862F67605F4445B225A073D780D96080578A;
struct Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581;
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_tC9AB857B1CD194F9FD9DF6190DFB57DB51896CFF;
struct Grouping_tC342F29CA88E55F4A2F155C8E1CE8784467A2FB9;
struct Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1;
struct Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2;
struct Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1;
struct ICollection_1_t58D5B5A564BF08CD3C8EE106100AC0D7B8C4508B;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t12EABB13015817A8CAAADE092BDD999417F74843;
struct IEnumerator_1_tF742E85673756F0B02FF588D4DD8B832677FA339;
struct IEnumerator_1_t74853403C7C7DFC030E7101E08595429BC57F672;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_tFDA57E20DAA9EE5A0CF490B930683CCB76E00921;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t95351C62AE7A3DC1F5A634C37AF7444A078B5B99;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t9CDB2E77DE70F06FC5ED90C78DB6B9C356ECCEA9;
struct IGrouping_2_t162AA99FF13819F0E379E1C5C6388A7C5B6EBB88;
struct IGrouping_2_t6485033266F07DCCDEBAFAEBC5894E6A5F04989C;
struct IGrouping_2_t3305DA2B83385480DF0AB9EE04DB26310342235B;
struct List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA;
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347;
struct List_1_tA7C2A3DF62733E04DA16EDD931856E01BE8283F0;
struct List_1_t57EA5F2BB613ED1B7739D0485D861F4F3EE78310;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_tFB3B8D8B7BE5503ECBA1D7F8AC630424F1211AFF;
struct Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87;
struct LockedStack_tC6464121C817D6CF5A640F4B29A59939C1DE489F;
struct LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17;
struct LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B;
struct LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC;
struct LockedStack_t12BEECEFBBB3CF0B3EB7D62B7410226EF3FB9B49;
struct LockedStack_t63BC219D4CE5201DEBFED7516E423EE62E1DD03B;
struct LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A;
struct LockedStack_t4122471C7A8C267BE318B41F4016EFF9B1CADE80;
struct LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2;
struct Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614;
struct Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332;
struct Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D;
struct LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F;
struct LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47;
struct LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104;
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9;
struct LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF;
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0;
struct ManagedObjectStore_1_t5991B3BF02302E92A67BFA3777506211F997B6FA;
struct ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1;
struct Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141;
struct EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C;
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52;
struct GroupingU5BU5D_t79F1E2097F4B6E3670C4A45142F10696626624EB;
struct GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B;
struct GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B;
struct GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC;
struct PerCoreLockedStacksU5BU5D_t9241D7F827FF07CEB3E9B700F4255379B5B802B9;
struct PerCoreLockedStacksU5BU5D_t66F38702B1BDB999EE73628348DDFE580E352C9D;
struct PerCoreLockedStacksU5BU5D_t4BBE2725C0221B3E883AFC60A3A21970D7CB67B1;
struct PerCoreLockedStacksU5BU5D_tCAB737265F2B693EDA232C9438A4E4DF884A0166;
struct PerCoreLockedStacksU5BU5D_t30F2C2E36EB59623B0FB859F59895A44398FE69F;
struct PerCoreLockedStacksU5BU5D_tCC9D37BE7A22D9C02DF2C406BE3D85D58C09F6AB;
struct PerCoreLockedStacksU5BU5D_t9CDDE75124B27D018B8CD21AC5D6E007D0686752;
struct PerCoreLockedStacksU5BU5D_t04DB134443EFF8874A73AEEA9FD3500AE6FAECF5;
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06;
struct ValueTuple_2U5BU5D_t1FD8FAA93501FC119B38DB381247D0357A2C818E;
struct SelectorWorkItemU5BU5DU5BU5D_t5F640BD9A98042DB46A703DADB5D1B5408607245;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF;
struct QuaternionU5BU5DU5BU5D_tC582D58BAA98A66AA29D85281963F8141149A281;
struct __CanonU5BU5DU5BU5D_t265B5710371F7635CACCD1295C7780EAD4D63374;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct GrabPointDeltaU5BU5DU5BU5D_tCBBAFB99A08958F98BE244756D5F3359D55017C6;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IllogicalCallContext_tBE27BC899B192B585D0D20F6A296DC5296C8BFD5;
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
struct LogicalCallContext_t4BB407B088DB9FA68FE1EC2DB78D33F5BB4BDE9E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C;
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52;
struct GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B;
struct GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B;
struct GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC;
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06;
struct ValueTuple_2U5BU5D_t1FD8FAA93501FC119B38DB381247D0357A2C818E;
struct SelectorWorkItemU5BU5DU5BU5D_t5F640BD9A98042DB46A703DADB5D1B5408607245;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF;
struct QuaternionU5BU5DU5BU5D_tC582D58BAA98A66AA29D85281963F8141149A281;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct GrabPointDeltaU5BU5DU5BU5D_tCBBAFB99A08958F98BE244756D5F3359D55017C6;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0  : public RuntimeObject
{
};
struct U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97  : public RuntimeObject
{
};
struct U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D  : public RuntimeObject
{
};
struct U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549  : public RuntimeObject
{
};
struct U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC  : public RuntimeObject
{
};
struct U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F  : public RuntimeObject
{
};
struct U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6  : public RuntimeObject
{
};
struct U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1  : public RuntimeObject
{
};
struct U3CGetEnumeratorU3Ed__12_t5BA6B26CCE76C4C96264AB2FE1DCC652F6E7E311  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614* ___U3CU3E4__this;
	Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* ___U3CgU3E5__2;
};
struct U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* ___U3CU3E4__this;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* ___U3CgU3E5__2;
};
struct U3CGetEnumeratorU3Ed__12_tC5137CFECCDECBA4273608757D06E64ACF35EB35  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D* ___U3CU3E4__this;
	Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* ___U3CgU3E5__2;
};
struct ArrayPool_1_t6C4F2741A306689AA319DFDC5BCE588D802DF6B9  : public RuntimeObject
{
};
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07  : public RuntimeObject
{
};
struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B  : public RuntimeObject
{
};
struct ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01  : public RuntimeObject
{
};
struct ArrayPool_1_t04C7B68EBEA52B8FFBF7FA0A89431A1245DDC94F  : public RuntimeObject
{
};
struct ArrayPool_1_tB8F044C390E4460F8484C263621910F5DAD5E0EB  : public RuntimeObject
{
};
struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774  : public RuntimeObject
{
};
struct ArrayPool_1_t432F9D5838E1DE3CF943E7D23B8A9D46FFD28563  : public RuntimeObject
{
};
struct DefaultComparer_1_t9C7341E5478D67148593B9F5D9828B0B26E8771C  : public RuntimeObject
{
};
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5  : public RuntimeObject
{
};
struct Entry_tF06D862F67605F4445B225A073D780D96080578A  : public RuntimeObject
{
	int32_t ____key;
	Il2CppSharedGenericObject* ____value;
	Entry_tF06D862F67605F4445B225A073D780D96080578A* ____next;
};
struct Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA : public RuntimeObject {};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581  : public RuntimeObject
{
};
struct Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1  : public RuntimeObject
{
	Il2CppSharedGenericObject* ___key;
	int32_t ___hashCode;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___elements;
	int32_t ___count;
	Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* ___hashNext;
	Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* ___next;
};
struct Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2 : public RuntimeObject {};
struct Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1  : public RuntimeObject
{
	int32_t ___key;
	int32_t ___hashCode;
	ValueTuple_2U5BU5D_t1FD8FAA93501FC119B38DB381247D0357A2C818E* ___elements;
	int32_t ___count;
	Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* ___hashNext;
	Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* ___next;
};
struct List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA  : public RuntimeObject
{
	__CanonU5BU5DU5BU5D_t265B5710371F7635CACCD1295C7780EAD4D63374* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ____items;
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
struct Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87  : public RuntimeObject
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ____listeners;
	Func_2_tC9AB857B1CD194F9FD9DF6190DFB57DB51896CFF* ____filter;
	int32_t ____objectID;
	int32_t ____listenerReaderCount;
};
struct LockedStack_tC6464121C817D6CF5A640F4B29A59939C1DE489F  : public RuntimeObject
{
	SelectorWorkItemU5BU5DU5BU5D_t5F640BD9A98042DB46A703DADB5D1B5408607245* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17  : public RuntimeObject
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B  : public RuntimeObject
{
	CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC  : public RuntimeObject
{
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t12BEECEFBBB3CF0B3EB7D62B7410226EF3FB9B49  : public RuntimeObject
{
	IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t63BC219D4CE5201DEBFED7516E423EE62E1DD03B  : public RuntimeObject
{
	QuaternionU5BU5DU5BU5D_tC582D58BAA98A66AA29D85281963F8141149A281* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t4122471C7A8C267BE318B41F4016EFF9B1CADE80  : public RuntimeObject
{
	GrabPointDeltaU5BU5DU5BU5D_tCBBAFB99A08958F98BE244756D5F3359D55017C6* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct Lookup_2_tDD4C9AA1D7A3AF6DC9D71C25B28CE4DB0F144FDD  : public RuntimeObject
{
	RuntimeObject* ___comparer;
	GroupingU5BU5D_t79F1E2097F4B6E3670C4A45142F10696626624EB* ___groupings;
	Grouping_tC342F29CA88E55F4A2F155C8E1CE8784467A2FB9* ___lastGrouping;
	int32_t ___count;
};
struct Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614  : public RuntimeObject
{
	RuntimeObject* ___comparer;
	GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B* ___groupings;
	Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* ___lastGrouping;
	int32_t ___count;
};
struct Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332  : public RuntimeObject
{
	RuntimeObject* ___comparer;
	GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* ___groupings;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* ___lastGrouping;
	int32_t ___count;
};
struct Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D  : public RuntimeObject
{
	RuntimeObject* ___comparer;
	GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC* ___groupings;
	Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* ___lastGrouping;
	int32_t ___count;
};
struct LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F  : public RuntimeObject
{
	EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* ____buckets;
	int32_t ____numEntries;
	int32_t ____version;
	RuntimeObject* ____comparer;
};
struct LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47  : public RuntimeObject
{
	EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* ____buckets;
	int32_t ____numEntries;
	int32_t ____version;
	RuntimeObject* ____comparer;
};
struct LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ManagedObjectStore_1_t5991B3BF02302E92A67BFA3777506211F997B6FA  : public RuntimeObject
{
	int32_t ___m_ChunkSize;
	int32_t ___m_Length;
	List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* ___m_Chunks;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___m_Free;
};
struct ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9  : public RuntimeObject
{
	int32_t ___m_ChunkSize;
	int32_t ___m_Length;
	List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* ___m_Chunks;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___m_Free;
};
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1  : public RuntimeObject
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_Item1;
	RuntimeObject* ___m_Item2;
};
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	Exception_t* ___m_Exception;
	RuntimeObject* ___m_stackTrace;
};
struct ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113  : public RuntimeObject
{
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
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	int32_t ___m_taskSchedulerId;
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
struct Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16 
{
	LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104* ____list;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0;
struct LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2  : public EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9
{
};
struct LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104  : public LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF
{
};
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9  : public LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0
{
};
struct ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	bool ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	Il2CppSharedGenericObject* ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 
{
	bool ____initialized;
	uint64_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D 
{
	bool ____initialized;
	Il2CppSharedGenericObject* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t1CD36A06EB8F774E58FC1EB4912B6C122E51FBF6  : public ArrayPool_1_t6C4F2741A306689AA319DFDC5BCE588D802DF6B9
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t9241D7F827FF07CEB3E9B700F4255379B5B802B9* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542  : public ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t66F38702B1BDB999EE73628348DDFE580E352C9D* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00  : public ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t4BBE2725C0221B3E883AFC60A3A21970D7CB67B1* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC  : public ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_tCAB737265F2B693EDA232C9438A4E4DF884A0166* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE3CD236C7829D60F8961D18BD1EC059C9823B3E5  : public ArrayPool_1_t04C7B68EBEA52B8FFBF7FA0A89431A1245DDC94F
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t30F2C2E36EB59623B0FB859F59895A44398FE69F* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t9604A8E04E179F7E27875589B7D0995A0C40A140  : public ArrayPool_1_tB8F044C390E4460F8484C263621910F5DAD5E0EB
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_tCC9D37BE7A22D9C02DF2C406BE3D85D58C09F6AB* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F  : public ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t9CDDE75124B27D018B8CD21AC5D6E007D0686752* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t58DCC1FF0326348CD88D696B99D5A75C6A07F138  : public ArrayPool_1_t432F9D5838E1DE3CF943E7D23B8A9D46FFD28563
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t04DB134443EFF8874A73AEEA9FD3500AE6FAECF5* ____buckets;
	int32_t ____callbackCreated;
};
struct ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_tF26D33EF5DDC05CC71093ABD6C984D70452A7C5A 
{
	int32_t ___Item1;
	Il2CppSharedGenericObject* ___Item2;
};
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
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
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
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
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
struct ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct MemoryPressure_t12C53FDB3D069AAE9DB8F6D9FDDD6D8C733E1A4E 
{
	int32_t ___value__;
};
struct MemoryPressure_t211225B7C4B31AFD064E1D7ABDD38BD64F5C97C2 
{
	int32_t ___value__;
};
struct MemoryPressure_tF20E59A2FCD73572EF954182450F33E0A686455A 
{
	int32_t ___value__;
};
struct MemoryPressure_tDDA5D8E48826B4CBA5699D6EE80C85F2F0F4B717 
{
	int32_t ___value__;
};
struct MemoryPressure_t842F850D315484F407FE5A0D42F82BC882AD9402 
{
	int32_t ___value__;
};
struct MemoryPressure_tF5D6FF2361EFD4E88547037E04D95BBFEC692F20 
{
	int32_t ___value__;
};
struct MemoryPressure_t7AAFC0465C6ACE5222645A59D867C7FD22F28381 
{
	int32_t ___value__;
};
struct MemoryPressure_t7D21C8A6329CC326E234FF7BC14D5785D9B0B33D 
{
	int32_t ___value__;
};
struct OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 
{
	bool ____initialized;
	Guid_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
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
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
	Guid_t ___U3CUuidU3Ek__BackingField;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SelectorAccelerationTableType_t29E86C4FCF992B838F757327FF6002927A251B9A 
{
	int32_t ___value__;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct SynchronizationContextProperties_t5ED82C778B4C396AD94A93CFBEF00022BDECF058 
{
	int32_t ___value__;
};
struct TaskContinuationOptions_tF334758E3027B6DCFA9A814B17CE878029537814 
{
	int32_t ___value__;
};
struct TaskCreationOptions_tB15CB42D61B8958640A7C702A79097B56D5C7ABA 
{
	int32_t ___value__;
};
struct ValueTaskSourceOnCompletedFlags_t3181838E33741E1E7338B33740CCEAD38C6B8BFF 
{
	int32_t ___value__;
};
struct ValueTaskSourceStatus_t9F496A09D3BF95F42C0C5366D8DEBA49F08C4FD3 
{
	int32_t ___value__;
};
struct Flags_tD935E34E819419AC18907444AF9A5993A183FC09 
{
	int32_t ___value__;
};
struct GrabPointDelta_t076641B26214B9EF4E5E75DF32BA5C14F0699A6D 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPrevCentroidOffsetU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CCentroidOffsetU3Ek__BackingField;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CPrevRotationU3Ek__BackingField;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField;
};
struct ConfigureTrackerResult_t073B11F91678F715E405998906D6F44A9DF141D4 
{
	int32_t ___value__;
};
struct EraseResult_t27CCAC05D8F12165F5B34088ECFFAE9410A59707 
{
	int32_t ___value__;
};
struct FetchResult_t6C02AA7FC4DC5E33605E1C5ACB176CBEE7F338F4 
{
	int32_t ___value__;
};
struct SaveResult_t158A36F68A44B33A2045C4AC8FD6A48E7493DC61 
{
	int32_t ___value__;
};
struct ShareResult_t90D8BAF09E08C8C86153A674AE72DED88E706A2B 
{
	int32_t ___value__;
};
struct Result_t2D88432FA2C70DFD3C20AE308848F404D22376D0 
{
	int32_t ___value__;
};
struct Result_t65718B00CEF7A5D1E84402EA2DDCF5BF3D3E6797 
{
	int32_t ___value__;
};
struct LoadSceneModelResult_t7EF1562A6712CE21E388C7FCAE0EAD67764E2E77 
{
	int32_t ___value__;
};
struct OperationResult_tCEEF60CD40479FB5175A075F097BA5C1811E555D 
{
	int32_t ___value__;
};
struct ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct OVRResult_1_t818CB35A297A5AE3E9CDCBB6667EED49D9F69E77 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tB4C409E92182D241881B5489DFC13C09318A76A3 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tF988667599076489ACDDFD42A76371B27BA35639 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tE6BBB1049D1315EA6F35DA9728C0D01262F252B6 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tEB79882A5FAC624158C1D66DFCBF4BD9DC20BDFD 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tDAAFCA1B3EDC2316E4F4B638730B55EA212C31A1 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_tE368B721B1E19A0AC8DF0E70D330733463E0DCED 
{
	bool ____initialized;
	List_1_t57EA5F2BB613ED1B7739D0485D861F4F3EE78310* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_tB3DE08B0AE1C37D6758B3195A8D643FA51CCF032 
{
	bool ____initialized;
	List_1_tFB3B8D8B7BE5503ECBA1D7F8AC630424F1211AFF* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_tA2ED6DC610EC6F41EF14C5CC3B2AE83BBB3AC029 
{
	bool ____initialized;
	List_1_tFB3B8D8B7BE5503ECBA1D7F8AC630424F1211AFF* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t45942B55D92B1AE419FB104E94788902FC71248F 
{
	bool ____initialized;
	Guid_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t38C6F30BDF2C9E7FE8C1D3A842710DA20541AA20 
{
	bool ____initialized;
	uint64_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 
{
	int32_t ___type;
	int32_t ___uniqueStringId;
};
struct ValueTuple_2_t00530A70E027E978C248DC47A49207715B93E3E1 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710  : public RuntimeObject
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____syncContext;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____syncContextNoFlow;
	LogicalCallContext_t4BB407B088DB9FA68FE1EC2DB78D33F5BB4BDE9E* ____logicalCallContext;
	IllogicalCallContext_tBE27BC899B192B585D0D20F6A296DC5296C8BFD5* ____illogicalCallContext;
	int32_t ____flags;
	Dictionary_2_tE8D02A3D5DD039B176B8F64028DA5F0883237494* ____localValues;
	List_1_tA7C2A3DF62733E04DA16EDD931856E01BE8283F0* ____localChangeNotifications;
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
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	int32_t ____props;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0  : public RuntimeObject
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_defaultCancellationToken;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_defaultScheduler;
	int32_t ___m_defaultCreationOptions;
	int32_t ___m_defaultContinuationOptions;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1  : public MulticastDelegate_t
{
};
struct ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5  : public MulticastDelegate_t
{
};
struct ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E  : public MulticastDelegate_t
{
};
struct Func_2_tC9AB857B1CD194F9FD9DF6190DFB57DB51896CFF  : public MulticastDelegate_t
{
};
struct ManualResetValueTaskSourceCore_1_t9D46914F6792C23ADDD0977C316A9B39096632AC 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_t818CB35A297A5AE3E9CDCBB6667EED49D9F69E77 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t49A683C035E9754A360539AEE85399929A56DEC8 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tB4C409E92182D241881B5489DFC13C09318A76A3 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tF30060C21BA57ACA8FD40996D154E4CEB3F4911A 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tF988667599076489ACDDFD42A76371B27BA35639 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tDC987E53B0C4E84CCA07A16A3F705E69CCDA602B 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tE6BBB1049D1315EA6F35DA9728C0D01262F252B6 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tC3B9C67B67DD3203C4A245361EEA11972E220D67 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tEB79882A5FAC624158C1D66DFCBF4BD9DC20BDFD ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t475BDC90EB9D192DCB7C092762FA8D243CDDA890 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tDAAFCA1B3EDC2316E4F4B638730B55EA212C31A1 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tCA97ED50751D5A2D5504306B87C4D084B3C4FB8A 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_tE368B721B1E19A0AC8DF0E70D330733463E0DCED ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t9CBBB4E0EBA4D6D17BF284DCB6013B6C5719917A 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_tB3DE08B0AE1C37D6758B3195A8D643FA51CCF032 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t75D8FA9F3A403BD05EC767109CB661B074DF2DAA 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_tA2ED6DC610EC6F41EF14C5CC3B2AE83BBB3AC029 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t2786AF0527550C71E6A45EB0936BD321EEF87ED3 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t45942B55D92B1AE419FB104E94788902FC71248F ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t236379DB803801F959F1391B14505A9D3CD9E980 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t38C6F30BDF2C9E7FE8C1D3A842710DA20541AA20 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t1210CCD6E418EA3A577725405E872BAC2A44CC11 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	ValueTuple_2_t00530A70E027E978C248DC47A49207715B93E3E1 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken;
};
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields
{
	U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields
{
	U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields
{
	U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields
{
	U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields
{
	U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields
{
	U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields
{
	U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields
{
	U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields
{
	EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* ___defaultComparer;
};
struct List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA_StaticFields
{
	__CanonU5BU5DU5BU5D_t265B5710371F7635CACCD1295C7780EAD4D63374* ___s_emptyArray;
};
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_sentinel;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler;
	int32_t ___s_taskSchedulerIdCounter;
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException;
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t1CD36A06EB8F774E58FC1EB4912B6C122E51FBF6_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_t821A608C447E94C3A70B02015D52C3C9B4DBEE14* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t1CD36A06EB8F774E58FC1EB4912B6C122E51FBF6_ThreadStaticFields
{
	SelectorWorkItemU5BU5DU5BU5D_t5F640BD9A98042DB46A703DADB5D1B5408607245* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_tE473109D1EF9EA4E1AA06539AE5262421E166EFD* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542_ThreadStaticFields
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_tA0A6618FEA1BDC4E0A5C70A205A73167784823D9* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00_ThreadStaticFields
{
	CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_t4FA84C9C03B7929ACDC537F2AB91C3AA9D39B9E6* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC_ThreadStaticFields
{
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE3CD236C7829D60F8961D18BD1EC059C9823B3E5_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_t7A2E67B090266E74762BADC1D4FA6F9E55FC7E89* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE3CD236C7829D60F8961D18BD1EC059C9823B3E5_ThreadStaticFields
{
	IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t9604A8E04E179F7E27875589B7D0995A0C40A140_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_t0C7EBEF7B5FDF44A62BA413DFCC87BBE7FA2C39B* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t9604A8E04E179F7E27875589B7D0995A0C40A140_ThreadStaticFields
{
	QuaternionU5BU5DU5BU5D_tC582D58BAA98A66AA29D85281963F8141149A281* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_tD204B678FB5C57190177AACB4C57D5BDE9ED70E4* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_ThreadStaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t58DCC1FF0326348CD88D696B99D5A75C6A07F138_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_t9A498D558E8C556CC2FFDFE8D525E273BADE92FC* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t58DCC1FF0326348CD88D696B99D5A75C6A07F138_ThreadStaticFields
{
	GrabPointDeltaU5BU5DU5BU5D_tCBBAFB99A08958F98BE244756D5F3359D55017C6* ___t_tlsBuckets;
};
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields
{
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* ___Log;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_StaticFields
{
	Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C* ____deferredTasks;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___Null;
	Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53* ____typeMap;
};
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticFields
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___s_dummyDefaultEC;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___Default;
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
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06  : public RuntimeArray
{
	ALIGN_FIELD (8) SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 m_Items[1];

	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 value)
	{
		m_Items[index] = value;
	}
};
struct SelectorWorkItemU5BU5DU5BU5D_t5F640BD9A98042DB46A703DADB5D1B5408607245  : public RuntimeArray
{
	ALIGN_FIELD (8) SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* m_Items[1];

	inline SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680  : public RuntimeArray
{
	ALIGN_FIELD (8) CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* m_Items[1];

	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* value)
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
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
struct IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF  : public RuntimeArray
{
	ALIGN_FIELD (8) IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* m_Items[1];

	inline IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};
struct QuaternionU5BU5DU5BU5D_tC582D58BAA98A66AA29D85281963F8141149A281  : public RuntimeArray
{
	ALIGN_FIELD (8) QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* m_Items[1];

	inline QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* value)
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
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F  : public RuntimeArray
{
	ALIGN_FIELD (8) __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* m_Items[1];

	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517  : public RuntimeArray
{
	ALIGN_FIELD (8) GrabPointDelta_t076641B26214B9EF4E5E75DF32BA5C14F0699A6D m_Items[1];

	inline GrabPointDelta_t076641B26214B9EF4E5E75DF32BA5C14F0699A6D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GrabPointDelta_t076641B26214B9EF4E5E75DF32BA5C14F0699A6D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GrabPointDelta_t076641B26214B9EF4E5E75DF32BA5C14F0699A6D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GrabPointDelta_t076641B26214B9EF4E5E75DF32BA5C14F0699A6D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GrabPointDelta_t076641B26214B9EF4E5E75DF32BA5C14F0699A6D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GrabPointDelta_t076641B26214B9EF4E5E75DF32BA5C14F0699A6D value)
	{
		m_Items[index] = value;
	}
};
struct GrabPointDeltaU5BU5DU5BU5D_tCBBAFB99A08958F98BE244756D5F3359D55017C6  : public RuntimeArray
{
	ALIGN_FIELD (8) GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517* m_Items[1];

	inline GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B  : public RuntimeArray
{
	ALIGN_FIELD (8) Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* m_Items[1];

	inline Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
struct GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B  : public RuntimeArray
{
	ALIGN_FIELD (8) Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* m_Items[1];

	inline Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC  : public RuntimeArray
{
	ALIGN_FIELD (8) Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* m_Items[1];

	inline Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ValueTuple_2U5BU5D_t1FD8FAA93501FC119B38DB381247D0357A2C818E  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tF26D33EF5DDC05CC71093ABD6C984D70452A7C5A m_Items[1];

	inline ValueTuple_2_tF26D33EF5DDC05CC71093ABD6C984D70452A7C5A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tF26D33EF5DDC05CC71093ABD6C984D70452A7C5A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tF26D33EF5DDC05CC71093ABD6C984D70452A7C5A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2), (void*)NULL);
	}
	inline ValueTuple_2_tF26D33EF5DDC05CC71093ABD6C984D70452A7C5A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tF26D33EF5DDC05CC71093ABD6C984D70452A7C5A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tF26D33EF5DDC05CC71093ABD6C984D70452A7C5A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2), (void*)NULL);
	}
};
struct EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tF06D862F67605F4445B225A073D780D96080578A* m_Items[1];

	inline Entry_tF06D862F67605F4445B225A073D780D96080578A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tF06D862F67605F4445B225A073D780D96080578A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tF06D862F67605F4445B225A073D780D96080578A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Entry_tF06D862F67605F4445B225A073D780D96080578A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tF06D862F67605F4445B225A073D780D96080578A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tF06D862F67605F4445B225A073D780D96080578A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* m_Items[1];

	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Index_IndexOfReference_TisIl2CppSharedGenericObject_mB76E615050927E51843A5C228930CC093DC71440_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_list, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Listeners_1_IndexOfReference_mB57653157CB53F43A4A17BE0404F0DFD229AA96B_gshared (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, Il2CppSharedGenericObject* ___0_listener, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mCD8F7775F9C4842958A7188EBC0EBF1BE03101EF_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_m3837DE03BEA738B4FB4A586787ABAB0638DFCD7F_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12__ctor_m953833D39380D4BB54F9C489EB5914C5BFF90E92_fshared (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_GetEnumerator_mE46E375C2644CB39C98379DDDF0944F1B9314C08_gshared (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lookup_2_InternalGetHashCode_m9F9636747C418253EEB150FB6C6DF78C3F071FC1_gshared (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2_Resize_mAE0FAEEBFB72510C6F245CEF85F527870488DC7D_gshared (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grouping__ctor_mCDE1A56686DFD326A7C0A3FD0494F04597C8A7A4_fshared (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_GetEnumerator_m23403BE73711CA64C97C08AB144E00CC775F32B0_gshared (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lookup_2_InternalGetHashCode_m4A019C1711618753A3BFD863C411B5E0135B8FC5_gshared (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2_Resize_m7F70374C6591C732F13C0E663583C26FABDFCD18_gshared (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482_fshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_mD1857E9A4FD7FAB6E1C713430247CBB7D4461B89_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m2A900BFEFBAACE1AD66C82F0AE3D9D610968F68C_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_tF06D862F67605F4445B225A073D780D96080578A* LowLevelDictionary_2_Find_m090FF3CE8F8EFEC07BA8CD7C44BEC9D1ED7C24EC_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_tF06D862F67605F4445B225A073D780D96080578A* LowLevelDictionary_2_UncheckedAdd_m8F0FBEEB4E8FE0669873E1089B2BC787C78A5AA0_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_mF7C93480EC7D3ED139A91A428980199D4D6BD021_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m50DA99B3EE92A0B3C7CBF76172DCF3DDDFCB2C93_fshared (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m4C8F10A4D0B8D7BF72591BF4338D7C5802B907BB_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_m5EDF9059E2B9E18A9B5485805DA1E437CD9E5923_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mD1211C8F15F5F71881D532224ABE5C511D692167_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB5816A014E8FD33359980F2C8997DBC95D4FBE26_gshared (Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16* __this, LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_mB4490D5C551F28A4FE6897BB059CE8409F6B000A_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_mFD67211CC6B3CEFE404094D7A79E6067F26C3EEC_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m47DFA9E3D242417D8F8811704C9527E5D149F289_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_mB0038DF2ABB1F369C435382E2ED90134B770CC5A_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mAB5978B3C0C4CDDF7878DEA8731D5CBD2298D403_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_m145190E4B3563DA9050BBD1732DECF8B7169F58E_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m0D1BCA6B69206FE601D18CE99C804285BEFCB977_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m703A20CDDC3611F8211B0715F3A6E2571BCA7485_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_TisIl2CppSharedGenericObject_mCF99C9926BB09726ED355A16D81D4F63A2DA261A_gshared (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___0_callBack, Il2CppSharedGenericObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_UnsafeQueueUserWorkItem_TisIl2CppSharedGenericObject_m86789ED5ECA7A1D021FAB83EF64B3999213E6A27_gshared (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___0_callBack, Il2CppSharedGenericObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* Tuple_Create_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m61DE7E645AC7E63FCFEF4C23D698A20FA37C635A_gshared (Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mA096D168F1A82CF843AD35E32615EEBB5DC724E9_gshared (ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D_m35FA3CF45AB0E616CF900A2898F7B93BF9542578_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* ___1_callback, ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m0181594F490D085AC1D3192B292137CAC3DA7347_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m093A31DD2E7BC5FFF95B0AA090016C157DF992EE_gshared_inline (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m7C12920F91882B8531ADEB8219501513FAE5ABD3_gshared (ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC_m7B67CFD8908704D7A55F54F7D7C84A11D30675F5_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* ___1_callback, ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_gshared_inline (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mCFC760AE37F29B90109B3885633629190BBFE1A4_gshared (ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369_m58F55B6F98BDD809220D8BCECCB9B7C98C617362_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* ___1_callback, ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_gshared_inline (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m3C0646D90D93985DFADB16CB7C77676EA91B9890_gshared (ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453_mB6A7135BE82DF261F28CEC2690136CA2B1E7F9AA_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* ___1_callback, ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_gshared_inline (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m1D1138C9C2B05332D3995811A2D3FA4E994377EA_gshared (ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D_mF93DCD1BBC9B00DE84C9DCB034F901983D030ABF_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* ___1_callback, ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_gshared_inline (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mA83DB47025F22195C2BB2F503DE6164EADABC2A2 (ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37_m420C8B58A424BD3BB9D90950711F6105EE1A852E (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* ___1_callback, ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mB1E431588F126DE18FB75EDF9F35BE8931EC4733 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6_inline (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m3731483A5BF1AE81DEA361D571C6EE457C09E27D (ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F_m3A6840FF0F517F607E3109C22634630B43E05B3E (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* ___1_callback, ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m452BF4BDE67423D27473821F91A1ECB4C6ED1265 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8_inline (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m41F97653966262D0B31ED2A6A46DDB6C61CE0BCA_gshared (ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829_m741BB25BF530740A4A26117257B2D7C0341DBA9D_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* ___1_callback, ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_gshared_inline (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
inline int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
inline int32_t Index_IndexOfReference_TisIl2CppSharedGenericObject_mB76E615050927E51843A5C228930CC093DC71440 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_list, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))Index_IndexOfReference_TisIl2CppSharedGenericObject_mB76E615050927E51843A5C228930CC093DC71440_gshared)(___0_list, ___1_item, method);
}
inline int32_t Listeners_1_IndexOfReference_mB57653157CB53F43A4A17BE0404F0DFD229AA96B (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, Il2CppSharedGenericObject* ___0_listener, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87*, Il2CppSharedGenericObject*, const RuntimeMethod*))Listeners_1_IndexOfReference_mB57653157CB53F43A4A17BE0404F0DFD229AA96B_gshared)(__this, ___0_listener, method);
}
inline void List_1_set_Item_mCD8F7775F9C4842958A7188EBC0EBF1BE03101EF (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_set_Item_mCD8F7775F9C4842958A7188EBC0EBF1BE03101EF_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C_gshared)(__this, ___0_index, method);
}
inline void List_1_TrimExcess_m3837DE03BEA738B4FB4A586787ABAB0638DFCD7F (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_TrimExcess_m3837DE03BEA738B4FB4A586787ABAB0638DFCD7F_gshared)(__this, method);
}
inline Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0 (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___0_bufferId, int32_t ___1_bufferSize, int32_t ___2_poolId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_SetType_m5D07E1C38028872E49EA01129ED5BF1AF674C475 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline void U3CGetEnumeratorU3Ed__12__ctor_m95177776C932418B82EB4E94B8065FE86162544F (U3CGetEnumeratorU3Ed__12_t5BA6B26CCE76C4C96264AB2FE1DCC652F6E7E311* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__12_t5BA6B26CCE76C4C96264AB2FE1DCC652F6E7E311*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__12__ctor_m953833D39380D4BB54F9C489EB5914C5BFF90E92_fshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* Lookup_2_GetEnumerator_mE46E375C2644CB39C98379DDDF0944F1B9314C08 (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614*, const RuntimeMethod*))Lookup_2_GetEnumerator_mE46E375C2644CB39C98379DDDF0944F1B9314C08_gshared)(__this, method);
}
inline int32_t Lookup_2_InternalGetHashCode_m9F9636747C418253EEB150FB6C6DF78C3F071FC1 (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614*, Il2CppSharedGenericObject*, const RuntimeMethod*))Lookup_2_InternalGetHashCode_m9F9636747C418253EEB150FB6C6DF78C3F071FC1_gshared)(__this, ___0_key, method);
}
inline void Lookup_2_Resize_mAE0FAEEBFB72510C6F245CEF85F527870488DC7D (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614* __this, const RuntimeMethod* method)
{
	((  void (*) (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614*, const RuntimeMethod*))Lookup_2_Resize_mAE0FAEEBFB72510C6F245CEF85F527870488DC7D_gshared)(__this, method);
}
inline void Grouping__ctor_m598F0FE224AD56F3CD1A1E3664C0B18DCFB895B8 (Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* __this, const RuntimeMethod* method)
{
	((  void (*) (Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1*, const RuntimeMethod*))Grouping__ctor_mCDE1A56686DFD326A7C0A3FD0494F04597C8A7A4_fshared)(__this, method);
}
inline EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline)(method);
}
inline void U3CGetEnumeratorU3Ed__12__ctor_m02BCB2778B8AE54CD87BBD58FC34A99A54B7C7FA (U3CGetEnumeratorU3Ed__12_tC5137CFECCDECBA4273608757D06E64ACF35EB35* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__12_tC5137CFECCDECBA4273608757D06E64ACF35EB35*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__12__ctor_m953833D39380D4BB54F9C489EB5914C5BFF90E92_fshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* Lookup_2_GetEnumerator_m23403BE73711CA64C97C08AB144E00CC775F32B0 (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D*, const RuntimeMethod*))Lookup_2_GetEnumerator_m23403BE73711CA64C97C08AB144E00CC775F32B0_gshared)(__this, method);
}
inline int32_t Lookup_2_InternalGetHashCode_m4A019C1711618753A3BFD863C411B5E0135B8FC5 (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D*, int32_t, const RuntimeMethod*))Lookup_2_InternalGetHashCode_m4A019C1711618753A3BFD863C411B5E0135B8FC5_gshared)(__this, ___0_key, method);
}
inline void Lookup_2_Resize_m7F70374C6591C732F13C0E663583C26FABDFCD18 (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D* __this, const RuntimeMethod* method)
{
	((  void (*) (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D*, const RuntimeMethod*))Lookup_2_Resize_m7F70374C6591C732F13C0E663583C26FABDFCD18_gshared)(__this, method);
}
inline void Grouping__ctor_m821904E57FCF405950840DDCA895981D05931C71 (Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* __this, const RuntimeMethod* method)
{
	((  void (*) (Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1*, const RuntimeMethod*))Grouping__ctor_mCDE1A56686DFD326A7C0A3FD0494F04597C8A7A4_fshared)(__this, method);
}
inline void DefaultComparer_1__ctor_m392ABCFA5EFDB1256CD23BFFE3D7ECD3B52D7FC2 (DefaultComparer_1_t9C7341E5478D67148593B9F5D9828B0B26E8771C* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultComparer_1_t9C7341E5478D67148593B9F5D9828B0B26E8771C*, const RuntimeMethod*))DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482_fshared)(__this, method);
}
inline void LowLevelDictionary_2__ctor_mD1857E9A4FD7FAB6E1C713430247CBB7D4461B89 (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelDictionary_2__ctor_mD1857E9A4FD7FAB6E1C713430247CBB7D4461B89_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void LowLevelDictionary_2_Clear_m2A900BFEFBAACE1AD66C82F0AE3D9D610968F68C (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F*, int32_t, const RuntimeMethod*))LowLevelDictionary_2_Clear_m2A900BFEFBAACE1AD66C82F0AE3D9D610968F68C_gshared)(__this, ___0_capacity, method);
}
inline Entry_tF06D862F67605F4445B225A073D780D96080578A* LowLevelDictionary_2_Find_m090FF3CE8F8EFEC07BA8CD7C44BEC9D1ED7C24EC (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  Entry_tF06D862F67605F4445B225A073D780D96080578A* (*) (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F*, int32_t, const RuntimeMethod*))LowLevelDictionary_2_Find_m090FF3CE8F8EFEC07BA8CD7C44BEC9D1ED7C24EC_gshared)(__this, ___0_key, method);
}
inline Entry_tF06D862F67605F4445B225A073D780D96080578A* LowLevelDictionary_2_UncheckedAdd_m8F0FBEEB4E8FE0669873E1089B2BC787C78A5AA0 (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	return ((  Entry_tF06D862F67605F4445B225A073D780D96080578A* (*) (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))LowLevelDictionary_2_UncheckedAdd_m8F0FBEEB4E8FE0669873E1089B2BC787C78A5AA0_gshared)(__this, ___0_key, ___1_value, method);
}
inline int32_t LowLevelDictionary_2_GetBucket_mF7C93480EC7D3ED139A91A428980199D4D6BD021 (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F*, int32_t, int32_t, const RuntimeMethod*))LowLevelDictionary_2_GetBucket_mF7C93480EC7D3ED139A91A428980199D4D6BD021_gshared)(__this, ___0_key, ___1_numBuckets, method);
}
inline void Entry__ctor_m14DE30993A2CA554B68F04F050AE74A3DEAB1136 (Entry_tF06D862F67605F4445B225A073D780D96080578A* __this, const RuntimeMethod* method)
{
	((  void (*) (Entry_tF06D862F67605F4445B225A073D780D96080578A*, const RuntimeMethod*))Entry__ctor_m50DA99B3EE92A0B3C7CBF76172DCF3DDDFCB2C93_fshared)(__this, method);
}
inline void LowLevelDictionary_2_ExpandBuckets_m4C8F10A4D0B8D7BF72591BF4338D7C5802B907BB (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F*, const RuntimeMethod*))LowLevelDictionary_2_ExpandBuckets_m4C8F10A4D0B8D7BF72591BF4338D7C5802B907BB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void LowLevelList_1__ctor_m5EDF9059E2B9E18A9B5485805DA1E437CD9E5923 (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, const RuntimeMethod*))LowLevelList_1__ctor_m5EDF9059E2B9E18A9B5485805DA1E437CD9E5923_gshared)(__this, method);
}
inline void LowLevelList_1__ctor_mD1211C8F15F5F71881D532224ABE5C511D692167 (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, int32_t, const RuntimeMethod*))LowLevelList_1__ctor_mD1211C8F15F5F71881D532224ABE5C511D692167_gshared)(__this, ___0_capacity, method);
}
inline void Enumerator__ctor_mB5816A014E8FD33359980F2C8997DBC95D4FBE26 (Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16* __this, LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16*, LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104*, const RuntimeMethod*))Enumerator__ctor_mB5816A014E8FD33359980F2C8997DBC95D4FBE26_gshared)(__this, ___0_list, method);
}
inline void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775 (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9*, const RuntimeMethod*))Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_fshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
inline void LowLevelList_1_EnsureCapacity_mB4490D5C551F28A4FE6897BB059CE8409F6B000A (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, int32_t, const RuntimeMethod*))LowLevelList_1_EnsureCapacity_mB4490D5C551F28A4FE6897BB059CE8409F6B000A_gshared)(__this, ___0_min, method);
}
inline void LowLevelList_1_set_Capacity_mFD67211CC6B3CEFE404094D7A79E6067F26C3EEC (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, int32_t, const RuntimeMethod*))LowLevelList_1_set_Capacity_mFD67211CC6B3CEFE404094D7A79E6067F26C3EEC_gshared)(__this, ___0_value, method);
}
inline void LowLevelList_1_InsertRange_m47DFA9E3D242417D8F8811704C9527E5D149F289 (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelList_1_InsertRange_m47DFA9E3D242417D8F8811704C9527E5D149F289_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t LowLevelList_1_IndexOf_mB0038DF2ABB1F369C435382E2ED90134B770CC5A (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, Il2CppSharedGenericObject*, const RuntimeMethod*))LowLevelList_1_IndexOf_mB0038DF2ABB1F369C435382E2ED90134B770CC5A_gshared)(__this, ___0_item, method);
}
inline int32_t Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Il2CppSharedGenericObject*, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void LowLevelList_1_Insert_mAB5978B3C0C4CDDF7878DEA8731D5CBD2298D403 (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))LowLevelList_1_Insert_mAB5978B3C0C4CDDF7878DEA8731D5CBD2298D403_gshared)(__this, ___0_index, ___1_item, method);
}
inline void LowLevelList_1_RemoveAt_m145190E4B3563DA9050BBD1732DECF8B7169F58E (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, int32_t, const RuntimeMethod*))LowLevelList_1_RemoveAt_m145190E4B3563DA9050BBD1732DECF8B7169F58E_gshared)(__this, ___0_index, method);
}
inline bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88*, Il2CppSharedGenericObject*, const RuntimeMethod*))Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void List_1__ctor_m98EAD4ACCCE25AA8D4084520C07D03C84B50C4E6 (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
inline void List_1_Add_mF106F76286D35F37A6488E53F808CB0394A8F59F_inline (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* List_1_get_Item_mCC309293366D22D4535488B86EBC8BC43C683D68 (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA*, int32_t, const RuntimeMethod*))List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) ;
inline int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mA09DAC378E78D61150174B308A222FB598C1B216_inline (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_m0D1BCA6B69206FE601D18CE99C804285BEFCB977 (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_m0D1BCA6B69206FE601D18CE99C804285BEFCB977_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
inline void ManualResetValueTaskSourceCore_1_ValidateToken_m703A20CDDC3611F8211B0715F3A6E2571BCA7485 (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_m703A20CDDC3611F8211B0715F3A6E2571BCA7485_gshared)(__this, ___0_token, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) ;
inline bool ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_callBack, RuntimeObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method)
{
	return ((  bool (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, bool, const RuntimeMethod*))ThreadPool_QueueUserWorkItem_TisIl2CppSharedGenericObject_mCF99C9926BB09726ED355A16D81D4F63A2DA261A_gshared)(___0_callBack, ___1_state, ___2_preferLocal, method);
}
inline bool ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_callBack, RuntimeObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method)
{
	return ((  bool (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, bool, const RuntimeMethod*))ThreadPool_UnsafeQueueUserWorkItem_TisIl2CppSharedGenericObject_m86789ED5ECA7A1D021FAB83EF64B3999213E6A27_gshared)(___0_callBack, ___1_state, ___2_preferLocal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
inline Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method)
{
	return ((  Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Tuple_Create_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m61DE7E645AC7E63FCFEF4C23D698A20FA37C635A_gshared)(___0_item1, ___1_item2, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8 (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_action, RuntimeObject* ___1_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___4_scheduler, const RuntimeMethod* method) ;
inline void ContextCallback_1__ctor_mA096D168F1A82CF843AD35E32615EEBB5DC724E9 (ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_mA096D168F1A82CF843AD35E32615EEBB5DC724E9_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D_m35FA3CF45AB0E616CF900A2898F7B93BF9542578 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* ___1_callback, ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46*, ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D_m35FA3CF45AB0E616CF900A2898F7B93BF9542578_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_m0181594F490D085AC1D3192B292137CAC3DA7347 (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_m0181594F490D085AC1D3192B292137CAC3DA7347_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m093A31DD2E7BC5FFF95B0AA090016C157DF992EE_inline (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m093A31DD2E7BC5FFF95B0AA090016C157DF992EE_gshared_inline)(__this, method);
}
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline)(__this, ___0_obj, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2 (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360 (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_m7C12920F91882B8531ADEB8219501513FAE5ABD3 (ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_m7C12920F91882B8531ADEB8219501513FAE5ABD3_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC_m7B67CFD8908704D7A55F54F7D7C84A11D30675F5 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* ___1_callback, ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C*, ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC_m7B67CFD8908704D7A55F54F7D7C84A11D30675F5_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_inline (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_gshared_inline)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705 (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_mCFC760AE37F29B90109B3885633629190BBFE1A4 (ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_mCFC760AE37F29B90109B3885633629190BBFE1A4_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369_m58F55B6F98BDD809220D8BCECCB9B7C98C617362 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* ___1_callback, ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1*, ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369_m58F55B6F98BDD809220D8BCECCB9B7C98C617362_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_inline (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_gshared_inline)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458 (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865 (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_m3C0646D90D93985DFADB16CB7C77676EA91B9890 (ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_m3C0646D90D93985DFADB16CB7C77676EA91B9890_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453_mB6A7135BE82DF261F28CEC2690136CA2B1E7F9AA (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* ___1_callback, ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2*, ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453_mB6A7135BE82DF261F28CEC2690136CA2B1E7F9AA_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758 (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_inline (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_gshared_inline)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4 (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_m1D1138C9C2B05332D3995811A2D3FA4E994377EA (ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_m1D1138C9C2B05332D3995811A2D3FA4E994377EA_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D_mF93DCD1BBC9B00DE84C9DCB034F901983D030ABF (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* ___1_callback, ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8*, ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D_mF93DCD1BBC9B00DE84C9DCB034F901983D030ABF_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00 (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_inline (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mA83DB47025F22195C2BB2F503DE6164EADABC2A2 (ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37_m420C8B58A424BD3BB9D90950711F6105EE1A852E (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* ___1_callback, ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mB1E431588F126DE18FB75EDF9F35BE8931EC4733 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6_inline (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m3731483A5BF1AE81DEA361D571C6EE457C09E27D (ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F_m3A6840FF0F517F607E3109C22634630B43E05B3E (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* ___1_callback, ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m452BF4BDE67423D27473821F91A1ECB4C6ED1265 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8_inline (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335 (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_m41F97653966262D0B31ED2A6A46DDB6C61CE0BCA (ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_m41F97653966262D0B31ED2A6A46DDB6C61CE0BCA_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829_m741BB25BF530740A4A26117257B2D7C0341DBA9D (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* ___1_callback, ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E*, ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829_m741BB25BF530740A4A26117257B2D7C0341DBA9D_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501 (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_inline (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_gshared_inline)(__this, method);
}
inline void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared)(__this, ___0_item, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
inline EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 85577
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listeners_1__ctor_m175DAF8DF34577A589E7C3281CD701BD5AC0D6A7_gshared (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, int32_t ___0_ObjectID, Func_2_tC9AB857B1CD194F9FD9DF6190DFB57DB51896CFF* ___1_notifyFilter, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		__this->____listeners = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listeners), (void*)L_0);
		Func_2_tC9AB857B1CD194F9FD9DF6190DFB57DB51896CFF* L_1 = ___1_notifyFilter;
		__this->____filter = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filter), (void*)L_1);
		int32_t L_2 = ___0_ObjectID;
		__this->____objectID = L_2;
		__this->____listenerReaderCount = 0;
		return;
	}
}
// Method Definition Index: 85578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Listeners_1_get_HasListeners_m9EDC324483C9D5458332C075D0B386BA475C41DE_gshared (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->____listeners;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_0, NULL);
		return (bool)((((int32_t)0) < ((int32_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 85579
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listeners_1_Add_mC3D4409ED55845959F3891FC6E03CBEB3B29F730_gshared (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, Il2CppSharedGenericObject* ___0_listener, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->____listeners;
		Il2CppSharedGenericObject* L_1 = ___0_listener;
		NullCheck(L_0);
		List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 85580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Listeners_1_IndexOfReference_mB57653157CB53F43A4A17BE0404F0DFD229AA96B_gshared (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, Il2CppSharedGenericObject* ___0_listener, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->____listeners;
		Il2CppSharedGenericObject* L_1 = ___0_listener;
		int32_t L_2;
		L_2 = Index_IndexOfReference_TisIl2CppSharedGenericObject_mB76E615050927E51843A5C228930CC093DC71440(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 85581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listeners_1_Remove_mF1B0B0A16A8A59B4BF18A4FCD5F5DBDB9D7B3BC7_gshared (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, Il2CppSharedGenericObject* ___0_listener, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_listener;
		int32_t L_1;
		L_1 = Listeners_1_IndexOfReference_mB57653157CB53F43A4A17BE0404F0DFD229AA96B(__this, L_0, NULL);
		V_0 = L_1;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_2 = __this->____listeners;
		int32_t L_3 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_4 = V_1;
		NullCheck(L_2);
		List_1_set_Item_mCD8F7775F9C4842958A7188EBC0EBF1BE03101EF(L_2, L_3, L_4, NULL);
		int32_t L_5 = __this->____listenerReaderCount;
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_6 = __this->____listeners;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C(L_6, L_7, NULL);
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_8 = __this->____listeners;
		NullCheck(L_8);
		List_1_TrimExcess_m3837DE03BEA738B4FB4A586787ABAB0638DFCD7F(L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 85583
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listeners_1_RemoveNullListeners_mB3817FF0BD852EC7BF6E774C637EF8FCC55B64A5_gshared (Listeners_1_t642C538E48955A6A0C7E30768E5D77100BB8CB87* __this, int32_t ___0_nullIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_nullIndex;
		V_0 = L_0;
		goto IL_0027;
	}

IL_0004:
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_1 = __this->____listeners;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Il2CppSharedGenericObject* L_3;
		L_3 = List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_4 = __this->____listeners;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C(L_4, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)0) <= ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
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
// Method Definition Index: 12090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m11CC15523CB444920E47A221178C176C6D8503F1 (LockedStack_tC6464121C817D6CF5A640F4B29A59939C1DE489F* __this, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		CHECKED_LOCAL_INIT(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t1CD36A06EB8F774E58FC1EB4912B6C122E51FBF6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = L_3;
	}

IL_002b:
	{
		SelectorWorkItemU5BU5DU5BU5D_t5F640BD9A98042DB46A703DADB5D1B5408607245* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_8 = ___0_array;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 12091
// Method Definition Index: 12092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_mC49CFF6ED8D1CFCBDDE42DB6A33B0BBAD175D139 (LockedStack_tC6464121C817D6CF5A640F4B29A59939C1DE489F* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit);
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	LockedStack_tC6464121C817D6CF5A640F4B29A59939C1DE489F* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
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
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_tC6464121C817D6CF5A640F4B29A59939C1DE489F* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_tC6464121C817D6CF5A640F4B29A59939C1DE489F* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				CHECKED_LOCAL_INIT(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit,(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = il2cpp_unsafe_sizeof<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>();
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = il2cpp_unsafe_sizeof<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>();
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				SelectorWorkItemU5BU5DU5BU5D_t5F640BD9A98042DB46A703DADB5D1B5408607245* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				SelectorWorkItemU5BU5DU5BU5D_t5F640BD9A98042DB46A703DADB5D1B5408607245* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck(L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
				int32_t L_35 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, L_34, L_35, NULL);
			}

IL_00d3_1:
			{
				int32_t L_36 = __this->____count;
				if ((((int32_t)L_36) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_37 = V_4;
				int32_t L_38 = L_37;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
				if ((((int32_t)L_38) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_39 = __this->____count;
				if ((((int32_t)L_39) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_41 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = ((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
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

IL_011a:
	{
		return;
	}
}
// Method Definition Index: 12093
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_m5689AB787E7B926FA3B18460FB38B9F492582AEF (LockedStack_tC6464121C817D6CF5A640F4B29A59939C1DE489F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SelectorWorkItemU5BU5DU5BU5D_t5F640BD9A98042DB46A703DADB5D1B5408607245* L_0 = (SelectorWorkItemU5BU5DU5BU5D_t5F640BD9A98042DB46A703DADB5D1B5408607245*)(SelectorWorkItemU5BU5DU5BU5D_t5F640BD9A98042DB46A703DADB5D1B5408607245*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 12090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m5BDC2C116499049CE5BA9BE19DA9FB24922D6C35 (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		CHECKED_LOCAL_INIT(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = L_3;
	}

IL_002b:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 12091
// Method Definition Index: 12092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_mE6765D2537AE69D5BE9A7F77BE76190B24237FD2 (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit);
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
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
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				CHECKED_LOCAL_INIT(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit,(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = il2cpp_unsafe_sizeof<uint8_t>();
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = il2cpp_unsafe_sizeof<uint8_t>();
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck(L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
				int32_t L_35 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, L_34, L_35, NULL);
			}

IL_00d3_1:
			{
				int32_t L_36 = __this->____count;
				if ((((int32_t)L_36) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_37 = V_4;
				int32_t L_38 = L_37;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
				if ((((int32_t)L_38) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_39 = __this->____count;
				if ((((int32_t)L_39) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_41 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = ((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
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

IL_011a:
	{
		return;
	}
}
// Method Definition Index: 12093
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_m48BF912C083D1F7936C86ADE5D2E67C635D446A7 (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 12090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m82B3979AB5E28781A560CEA668FE26A16F5DA7F3 (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		CHECKED_LOCAL_INIT(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = L_3;
	}

IL_002b:
	{
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___0_array;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 12091
// Method Definition Index: 12092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m6223F32D4A246447A96A76D92C720547ED1A4F81 (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit);
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
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
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				CHECKED_LOCAL_INIT(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit,(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = il2cpp_unsafe_sizeof<Il2CppChar>();
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = il2cpp_unsafe_sizeof<Il2CppChar>();
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck(L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
				int32_t L_35 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, L_34, L_35, NULL);
			}

IL_00d3_1:
			{
				int32_t L_36 = __this->____count;
				if ((((int32_t)L_36) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_37 = V_4;
				int32_t L_38 = L_37;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
				if ((((int32_t)L_38) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_39 = __this->____count;
				if ((((int32_t)L_39) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_41 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = ((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
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

IL_011a:
	{
		return;
	}
}
// Method Definition Index: 12093
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_mDB2CB0C8C084B569C05BEFC87650BA56778A4A42 (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_0 = (CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680*)(CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 12090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m42B8D8A267B151AFF0AB674C698C6E45DFB7BAE7 (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		CHECKED_LOCAL_INIT(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = L_3;
	}

IL_002b:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_array;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 12091
// Method Definition Index: 12092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m4D537414CE1A41665FDDD1E21D002889BE70B5F8 (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit);
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
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
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				CHECKED_LOCAL_INIT(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit,(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = il2cpp_unsafe_sizeof<int32_t>();
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = il2cpp_unsafe_sizeof<int32_t>();
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck(L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
				int32_t L_35 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, L_34, L_35, NULL);
			}

IL_00d3_1:
			{
				int32_t L_36 = __this->____count;
				if ((((int32_t)L_36) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_37 = V_4;
				int32_t L_38 = L_37;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
				if ((((int32_t)L_38) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_39 = __this->____count;
				if ((((int32_t)L_39) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_41 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = ((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
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

IL_011a:
	{
		return;
	}
}
// Method Definition Index: 12093
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_m4E8B919AC1335C2FE1D57995CEF343FBE0386EE1 (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_0 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 12090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_mAC695C2A5C6B759465D32C1306A08F9ABC44CA77 (LockedStack_t12BEECEFBBB3CF0B3EB7D62B7410226EF3FB9B49* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		CHECKED_LOCAL_INIT(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_tE3CD236C7829D60F8961D18BD1EC059C9823B3E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = L_3;
	}

IL_002b:
	{
		IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_8 = ___0_array;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 12091
// Method Definition Index: 12092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m51D385AA4E4C4CAB14A86F59BCE68696A07DFF9C (LockedStack_t12BEECEFBBB3CF0B3EB7D62B7410226EF3FB9B49* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit);
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	LockedStack_t12BEECEFBBB3CF0B3EB7D62B7410226EF3FB9B49* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
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
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_t12BEECEFBBB3CF0B3EB7D62B7410226EF3FB9B49* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t12BEECEFBBB3CF0B3EB7D62B7410226EF3FB9B49* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				CHECKED_LOCAL_INIT(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit,(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = il2cpp_unsafe_sizeof<intptr_t>();
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = il2cpp_unsafe_sizeof<intptr_t>();
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck(L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
				int32_t L_35 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, L_34, L_35, NULL);
			}

IL_00d3_1:
			{
				int32_t L_36 = __this->____count;
				if ((((int32_t)L_36) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_37 = V_4;
				int32_t L_38 = L_37;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
				if ((((int32_t)L_38) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_39 = __this->____count;
				if ((((int32_t)L_39) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_41 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = ((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
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

IL_011a:
	{
		return;
	}
}
// Method Definition Index: 12093
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_m72E4499CCBADE201E89B853973E1B4291D19E707 (LockedStack_t12BEECEFBBB3CF0B3EB7D62B7410226EF3FB9B49* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF* L_0 = (IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF*)(IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 12090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_mF2B632ABA869624D74A0D73FE58C2F4A7E28F15F (LockedStack_t63BC219D4CE5201DEBFED7516E423EE62E1DD03B* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		CHECKED_LOCAL_INIT(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t9604A8E04E179F7E27875589B7D0995A0C40A140_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = L_3;
	}

IL_002b:
	{
		QuaternionU5BU5DU5BU5D_tC582D58BAA98A66AA29D85281963F8141149A281* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_8 = ___0_array;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 12091
// Method Definition Index: 12092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m371B8499DABA17ECFC9A0674012F5C12EEDD092D (LockedStack_t63BC219D4CE5201DEBFED7516E423EE62E1DD03B* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit);
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	LockedStack_t63BC219D4CE5201DEBFED7516E423EE62E1DD03B* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
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
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_t63BC219D4CE5201DEBFED7516E423EE62E1DD03B* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t63BC219D4CE5201DEBFED7516E423EE62E1DD03B* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				CHECKED_LOCAL_INIT(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit,(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = il2cpp_unsafe_sizeof<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>();
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = il2cpp_unsafe_sizeof<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>();
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				QuaternionU5BU5DU5BU5D_tC582D58BAA98A66AA29D85281963F8141149A281* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				QuaternionU5BU5DU5BU5D_tC582D58BAA98A66AA29D85281963F8141149A281* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck(L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
				int32_t L_35 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, L_34, L_35, NULL);
			}

IL_00d3_1:
			{
				int32_t L_36 = __this->____count;
				if ((((int32_t)L_36) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_37 = V_4;
				int32_t L_38 = L_37;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
				if ((((int32_t)L_38) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_39 = __this->____count;
				if ((((int32_t)L_39) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_41 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = ((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
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

IL_011a:
	{
		return;
	}
}
// Method Definition Index: 12093
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_m5F7B0E33D82E4BA4973E63A20CCA14CBD3A4155E (LockedStack_t63BC219D4CE5201DEBFED7516E423EE62E1DD03B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		QuaternionU5BU5DU5BU5D_tC582D58BAA98A66AA29D85281963F8141149A281* L_0 = (QuaternionU5BU5DU5BU5D_tC582D58BAA98A66AA29D85281963F8141149A281*)(QuaternionU5BU5DU5BU5D_tC582D58BAA98A66AA29D85281963F8141149A281*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 12090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m43E5E7A2F0386A3BEF9CFD2705141DB4E81D52B0_fshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		CHECKED_LOCAL_INIT(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = L_3;
	}

IL_002b:
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 12091
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* LockedStack_TryPop_m25DDC8C5A35FAD9A7D146972888DE02342BD5DAB_fshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		NullCheck(L_1);
		int32_t L_5 = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 12092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m2611CBE6E011E00269FB6B0610403EA10DEFCA1C_fshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit);
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
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
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				CHECKED_LOCAL_INIT(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit,(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck(L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
				int32_t L_35 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, L_34, L_35, NULL);
			}

IL_00d3_1:
			{
				int32_t L_36 = __this->____count;
				if ((((int32_t)L_36) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_37 = V_4;
				int32_t L_38 = L_37;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
				if ((((int32_t)L_38) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_39 = __this->____count;
				if ((((int32_t)L_39) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_41 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = ((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
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

IL_011a:
	{
		return;
	}
}
// Method Definition Index: 12093
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_mDC1C46693A1D2D00E172498967CA24C98E5205D4_fshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_0 = (__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F*)(__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
// Method Definition Index: 12090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m059AE27B57097A552FA0FDAF5A2A5297544ECB8A (LockedStack_t4122471C7A8C267BE318B41F4016EFF9B1CADE80* __this, GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		CHECKED_LOCAL_INIT(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t58DCC1FF0326348CD88D696B99D5A75C6A07F138_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = L_3;
	}

IL_002b:
	{
		GrabPointDeltaU5BU5DU5BU5D_tCBBAFB99A08958F98BE244756D5F3359D55017C6* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517* L_8 = ___0_array;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 12091
// Method Definition Index: 12092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m1C984AD5E67241AEABF61ACD491D3C66F92A2ADF (LockedStack_t4122471C7A8C267BE318B41F4016EFF9B1CADE80* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit);
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	LockedStack_t4122471C7A8C267BE318B41F4016EFF9B1CADE80* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
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
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_t4122471C7A8C267BE318B41F4016EFF9B1CADE80* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t4122471C7A8C267BE318B41F4016EFF9B1CADE80* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				CHECKED_LOCAL_INIT(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit,(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = il2cpp_unsafe_sizeof<GrabPointDelta_t076641B26214B9EF4E5E75DF32BA5C14F0699A6D>();
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = il2cpp_unsafe_sizeof<GrabPointDelta_t076641B26214B9EF4E5E75DF32BA5C14F0699A6D>();
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				GrabPointDeltaU5BU5DU5BU5D_tCBBAFB99A08958F98BE244756D5F3359D55017C6* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				GrabPointDeltaU5BU5DU5BU5D_tCBBAFB99A08958F98BE244756D5F3359D55017C6* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck(L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				GrabPointDeltaU5BU5D_t580F20C88E3DF2F193A54721C69AFBF0C62BB517* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
				int32_t L_35 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, L_34, L_35, NULL);
			}

IL_00d3_1:
			{
				int32_t L_36 = __this->____count;
				if ((((int32_t)L_36) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_37 = V_4;
				int32_t L_38 = L_37;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
				if ((((int32_t)L_38) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_39 = __this->____count;
				if ((((int32_t)L_39) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_41 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = ((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
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

IL_011a:
	{
		return;
	}
}
// Method Definition Index: 12093
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_m51660CB08B72D2342F1A9AB664CA90BF55FC0234 (LockedStack_t4122471C7A8C267BE318B41F4016EFF9B1CADE80* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		GrabPointDeltaU5BU5DU5BU5D_tCBBAFB99A08958F98BE244756D5F3359D55017C6* L_0 = (GrabPointDeltaU5BU5DU5BU5D_tCBBAFB99A08958F98BE244756D5F3359D55017C6*)(GrabPointDeltaU5BU5DU5BU5D_tCBBAFB99A08958F98BE244756D5F3359D55017C6*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 12044
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongEnumEqualityComparer_1_Equals_m87226A6E5044C64940B1E62F62D70FCE887EA333_fshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, Il2CppFullySharedGenericStruct ___0_x, Il2CppFullySharedGenericStruct ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	//<source_info:<no-source>:1>
	int64_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_x, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_1;
		L_1 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1), NULL, L_0);
		il2cpp_codegen_memcpy(L_2, ___1_y, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_3;
		L_3 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1), NULL, L_2);
		V_0 = L_3;
		int64_t L_4 = V_0;
		return (bool)((((int64_t)L_1) == ((int64_t)L_4))? 1 : 0);
	}
}
// Method Definition Index: 12045
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongEnumEqualityComparer_1_GetHashCode_m61BF4CA9A33282177F9DD76BB500FCF4D37CBBBE_fshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, Il2CppFullySharedGenericStruct ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	//<source_info:<no-source>:1>
	int64_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_obj, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_1;
		L_1 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1), NULL, L_0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return L_2;
	}
}
// Method Definition Index: 12046
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongEnumEqualityComparer_1_Equals_m280B770B270E901648E8FDD542D25AF52CA6277D_fshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2*)((LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 12047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongEnumEqualityComparer_1_GetHashCode_m1B5FABC53D2E5598D4A5A1270A520F1B4641E11C_fshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_0;
		L_0 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		return L_2;
	}
}
// Method Definition Index: 12048
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1__ctor_mE638EE50B5DDF2DB094F6BF8703B23872496CBA6_fshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		((  void (*) (EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))((EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*)__this, NULL);
		return;
	}
}
// Method Definition Index: 12049
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1__ctor_mA0738549DB4AF45B2147E7AEE297513FD4CC4F0D_fshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_information, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		((  void (*) (EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))((EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*)__this, NULL);
		return;
	}
}
// Method Definition Index: 12050
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1_GetObjectData_mD2CD7924C13DE56E2A77BC35201C20CEC5FEA139_fshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 4)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m5D07E1C38028872E49EA01129ED5BF1AF674C475(L_0, L_2, NULL);
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
// Method Definition Index: 92875
// Method Definition Index: 92876
// Method Definition Index: 92877
// Method Definition Index: 92878
// Method Definition Index: 92879
// Method Definition Index: 92880
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 92875
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2__ctor_mA02FA095C0166A5903160702237A0838E164DDCB_gshared (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
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
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1;
		L_1 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->___comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)L_2);
		GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B* L_3 = (GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B*)(GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), (uint32_t)7);
		__this->___groupings = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groupings), (void*)L_3);
		return;
	}
}
// Method Definition Index: 92876
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_GetEnumerator_mE46E375C2644CB39C98379DDDF0944F1B9314C08_gshared (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CGetEnumeratorU3Ed__12_t5BA6B26CCE76C4C96264AB2FE1DCC652F6E7E311* L_0 = (U3CGetEnumeratorU3Ed__12_t5BA6B26CCE76C4C96264AB2FE1DCC652F6E7E311*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
		U3CGetEnumeratorU3Ed__12__ctor_m95177776C932418B82EB4E94B8065FE86162544F(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__12_t5BA6B26CCE76C4C96264AB2FE1DCC652F6E7E311* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 92877
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_System_Collections_IEnumerable_GetEnumerator_m9D313DFF8B6F4B0E458683B1A209CB19B5284665_gshared (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0;
		L_0 = Lookup_2_GetEnumerator_mE46E375C2644CB39C98379DDDF0944F1B9314C08(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 92878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lookup_2_InternalGetHashCode_m9F9636747C418253EEB150FB6C6DF78C3F071FC1_gshared (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->___comparer;
		Il2CppSharedGenericObject* L_2 = ___0_key;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 11), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}

IL_001b:
	{
		return 0;
	}
}
// Method Definition Index: 92879
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* Lookup_2_GetGrouping_m2DBDB60A013176DD2F6B585F690EAEA4164ED2AF_gshared (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614* __this, Il2CppSharedGenericObject* ___0_key, bool ___1_create, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* V_1 = NULL;
	int32_t V_2 = 0;
	Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* V_3 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Lookup_2_InternalGetHashCode_m9F9636747C418253EEB150FB6C6DF78C3F071FC1(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		V_0 = L_1;
		GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B* L_2 = __this->___groupings;
		int32_t L_3 = V_0;
		GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B* L_4 = __this->___groupings;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		NullCheck(L_2);
		int32_t L_6 = ((int32_t)(L_3%L_5));
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_0042;
	}

IL_001c:
	{
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___hashCode;
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_11 = __this->___comparer;
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_12 = V_1;
		NullCheck(L_12);
		Il2CppSharedGenericObject* L_13 = L_12->___key;
		Il2CppSharedGenericObject* L_14 = ___0_key;
		NullCheck(L_11);
		bool L_15;
		L_15 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 11), L_11, L_13, L_14);
		if (!L_15)
		{
			goto IL_003b;
		}
	}
	{
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_16 = V_1;
		return L_16;
	}

IL_003b:
	{
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_17 = V_1;
		NullCheck(L_17);
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_18 = L_17->___hashNext;
		V_1 = L_18;
	}

IL_0042:
	{
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_19 = V_1;
		if (L_19)
		{
			goto IL_001c;
		}
	}
	{
		bool L_20 = ___1_create;
		if (!L_20)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_21 = __this->___count;
		GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B* L_22 = __this->___groupings;
		NullCheck(L_22);
		int32_t L_23 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_22)->max_length),NULL));
		if ((!(((uint32_t)L_21) == ((uint32_t)L_23))))
		{
			goto IL_0061;
		}
	}
	{
		Lookup_2_Resize_mAE0FAEEBFB72510C6F245CEF85F527870488DC7D(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
	}

IL_0061:
	{
		int32_t L_24 = V_0;
		GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B* L_25 = __this->___groupings;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		V_2 = ((int32_t)(L_24%L_26));
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_27 = (Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
		Grouping__ctor_m598F0FE224AD56F3CD1A1E3664C0B18DCFB895B8(L_27, NULL);
		V_3 = L_27;
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_28 = V_3;
		Il2CppSharedGenericObject* L_29 = ___0_key;
		NullCheck(L_28);
		L_28->___key = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___key), (void*)L_29);
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_30 = V_3;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		L_30->___hashCode = L_31;
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_32 = V_3;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_33 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21), (uint32_t)1);
		NullCheck(L_32);
		L_32->___elements = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___elements), (void*)L_33);
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_34 = V_3;
		GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B* L_35 = __this->___groupings;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_34);
		L_34->___hashNext = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->___hashNext), (void*)L_38);
		GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B* L_39 = __this->___groupings;
		int32_t L_40 = V_2;
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_41 = V_3;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_41);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1*)L_41);
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_42 = __this->___lastGrouping;
		if (L_42)
		{
			goto IL_00b4;
		}
	}
	{
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_43 = V_3;
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_44 = V_3;
		NullCheck(L_43);
		L_43->___next = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&L_43->___next), (void*)L_44);
		goto IL_00d1;
	}

IL_00b4:
	{
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_45 = V_3;
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_46 = __this->___lastGrouping;
		NullCheck(L_46);
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_47 = L_46->___next;
		NullCheck(L_45);
		L_45->___next = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->___next), (void*)L_47);
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_48 = __this->___lastGrouping;
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_49 = V_3;
		NullCheck(L_48);
		L_48->___next = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_48->___next), (void*)L_49);
	}

IL_00d1:
	{
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_50 = V_3;
		__this->___lastGrouping = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastGrouping), (void*)L_50);
		int32_t L_51 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_51, 1));
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_52 = V_3;
		return L_52;
	}

IL_00e8:
	{
		return (Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1*)NULL;
	}
}
// Method Definition Index: 92880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2_Resize_mAE0FAEEBFB72510C6F245CEF85F527870488DC7D_gshared (Lookup_2_tF333630C4D15C01B67F01DC691119567DCA7B614* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B* V_1 = NULL;
	Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___count;
		if (((int64_t)L_0 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1));
		int32_t L_1 = V_0;
		GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B* L_2 = (GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B*)(GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), (uint32_t)L_1);
		V_1 = L_2;
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_3 = __this->___lastGrouping;
		V_2 = L_3;
	}

IL_0019:
	{
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_4 = V_2;
		NullCheck(L_4);
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_5 = L_4->___next;
		V_2 = L_5;
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___hashCode;
		int32_t L_8 = V_0;
		V_3 = ((int32_t)(L_7%L_8));
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_9 = V_2;
		GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		L_9->___hashNext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___hashNext), (void*)L_13);
		GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B* L_14 = V_1;
		int32_t L_15 = V_3;
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_16 = V_2;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1*)L_16);
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_17 = V_2;
		Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1* L_18 = __this->___lastGrouping;
		if ((!(((RuntimeObject*)(Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1*)L_17) == ((RuntimeObject*)(Grouping_tB833F1D5A3155ED008B20FD22FF263B15D3713B1*)L_18))))
		{
			goto IL_0019;
		}
	}
	{
		GroupingU5BU5D_tFE7745AEAB0E7BD72BE81F3FF47D793A8697B22B* L_19 = V_1;
		__this->___groupings = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groupings), (void*)L_19);
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
// Method Definition Index: 92875
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2__ctor_m4A4D75DF5543CBBCA4F46BD626491C48CCD19F0E_fshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
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
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->___comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)L_2);
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_3 = (GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B*)(GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), (uint32_t)7);
		__this->___groupings = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groupings), (void*)L_3);
		return;
	}
}
// Method Definition Index: 92876
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_GetEnumerator_m47E3B98B370E167AA41F09ABEE90DA88F5472414_fshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* L_0 = (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
		((  void (*) (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 92877
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_System_Collections_IEnumerable_GetEnumerator_m44E299E786D62CCB11A00FF185A7F514C03D50A4_fshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 92878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lookup_2_InternalGetHashCode_m157EBC022CFC1205E1D913F757883DB1D18B486A_fshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_0);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_2 = __this->___comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 11), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_3: *(void**)L_3));
		return ((int32_t)(L_4&((int32_t)2147483647LL)));
	}

IL_001b:
	{
		return 0;
	}
}
// Method Definition Index: 92879
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* Lookup_2_GetGrouping_m32B7EBEA5CFFA4B56BEEC877518351A407B92C8C_fshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, Il2CppFullySharedGenericAny ___0_key, bool ___1_create, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
	const Il2CppFullySharedGenericAny L_13 = L_0;
	const Il2CppFullySharedGenericAny L_29 = L_0;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* V_1 = NULL;
	int32_t V_2 = 0;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* V_3 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_2 = __this->___groupings;
		int32_t L_3 = V_0;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_4 = __this->___groupings;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		NullCheck(L_2);
		int32_t L_6 = ((int32_t)(L_3%L_5));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_0042;
	}

IL_001c:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_8 = V_1;
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_11 = __this->___comparer;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_12 = V_1;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16)), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		NullCheck(L_11);
		bool L_15;
		L_15 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 11), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_14: *(void**)L_14));
		if (!L_15)
		{
			goto IL_003b;
		}
	}
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_16 = V_1;
		return L_16;
	}

IL_003b:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_17 = V_1;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_18 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_field_data_pointer(L_17, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 18));
		V_1 = L_18;
	}

IL_0042:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_19 = V_1;
		if (L_19)
		{
			goto IL_001c;
		}
	}
	{
		bool L_20 = ___1_create;
		if (!L_20)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_21 = __this->___count;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_22 = __this->___groupings;
		NullCheck(L_22);
		int32_t L_23 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_22)->max_length),NULL));
		if ((!(((uint32_t)L_21) == ((uint32_t)L_23))))
		{
			goto IL_0061;
		}
	}
	{
		((  void (*) (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
	}

IL_0061:
	{
		int32_t L_24 = V_0;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_25 = __this->___groupings;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		V_2 = ((int32_t)(L_24%L_26));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_27 = (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
		((  void (*) (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)))(L_27, NULL);
		V_3 = L_27;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_28 = V_3;
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		NullCheck(L_28);
		il2cpp_codegen_write_field_data<true>(L_28, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16), L_29, SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_30 = V_3;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		il2cpp_codegen_write_field_data<int32_t, false>(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_31);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_32 = V_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21), (uint32_t)1);
		NullCheck(L_32);
		il2cpp_codegen_write_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, true>(L_32, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 22), L_33);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_34 = V_3;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_35 = __this->___groupings;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_34);
		il2cpp_codegen_write_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*, true>(L_34, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 18), L_38);
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_39 = __this->___groupings;
		int32_t L_40 = V_2;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_41 = V_3;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_41);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_41);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_42 = __this->___lastGrouping;
		if (L_42)
		{
			goto IL_00b4;
		}
	}
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_43 = V_3;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_44 = V_3;
		NullCheck(L_43);
		il2cpp_codegen_write_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*, true>(L_43, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23), L_44);
		goto IL_00d1;
	}

IL_00b4:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_45 = V_3;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_46 = __this->___lastGrouping;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_47 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_field_data_pointer(L_46, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23));
		NullCheck(L_45);
		il2cpp_codegen_write_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*, true>(L_45, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23), L_47);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_48 = __this->___lastGrouping;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_49 = V_3;
		NullCheck(L_48);
		il2cpp_codegen_write_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*, true>(L_48, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23), L_49);
	}

IL_00d1:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_50 = V_3;
		__this->___lastGrouping = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastGrouping), (void*)L_50);
		int32_t L_51 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_51, 1));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_52 = V_3;
		return L_52;
	}

IL_00e8:
	{
		return (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)NULL;
	}
}
// Method Definition Index: 92880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2_Resize_m48EEED38EF3F4EEDD302E1CED9FA7E8CA6B43B9E_fshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* V_1 = NULL;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___count;
		if (((int64_t)L_0 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1));
		int32_t L_1 = V_0;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_2 = (GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B*)(GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), (uint32_t)L_1);
		V_1 = L_2;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_3 = __this->___lastGrouping;
		V_2 = L_3;
	}

IL_0019:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_4 = V_2;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_5 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_field_data_pointer(L_4, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 23));
		V_2 = L_5;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_6 = V_2;
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
		int32_t L_8 = V_0;
		V_3 = ((int32_t)(L_7%L_8));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_9 = V_2;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		il2cpp_codegen_write_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*, true>(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 18), L_13);
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_14 = V_1;
		int32_t L_15 = V_3;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_16 = V_2;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_16);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_17 = V_2;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_18 = __this->___lastGrouping;
		if ((!(((RuntimeObject*)(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_17) == ((RuntimeObject*)(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_18))))
		{
			goto IL_0019;
		}
	}
	{
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_19 = V_1;
		__this->___groupings = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groupings), (void*)L_19);
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
// Method Definition Index: 92875
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2__ctor_mC785BA8C3D51FF6168E441AC80B3E5574388F335_gshared (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
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
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_1;
		L_1 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->___comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)L_2);
		GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC* L_3 = (GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC*)(GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), (uint32_t)7);
		__this->___groupings = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groupings), (void*)L_3);
		return;
	}
}
// Method Definition Index: 92876
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_GetEnumerator_m23403BE73711CA64C97C08AB144E00CC775F32B0_gshared (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CGetEnumeratorU3Ed__12_tC5137CFECCDECBA4273608757D06E64ACF35EB35* L_0 = (U3CGetEnumeratorU3Ed__12_tC5137CFECCDECBA4273608757D06E64ACF35EB35*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
		U3CGetEnumeratorU3Ed__12__ctor_m02BCB2778B8AE54CD87BBD58FC34A99A54B7C7FA(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__12_tC5137CFECCDECBA4273608757D06E64ACF35EB35* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 92877
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_System_Collections_IEnumerable_GetEnumerator_m72B23B5AE55E021D42723050198CED1531EECFA4_gshared (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0;
		L_0 = Lookup_2_GetEnumerator_m23403BE73711CA64C97C08AB144E00CC775F32B0(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 92878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lookup_2_InternalGetHashCode_m4A019C1711618753A3BFD863C411B5E0135B8FC5_gshared (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
	}
	{
		RuntimeObject* L_1 = __this->___comparer;
		int32_t L_2 = ___0_key;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 11), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}
}
// Method Definition Index: 92879
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* Lookup_2_GetGrouping_mFB5E965DAF65C31F318AE4E96CB17A581763DA3A_gshared (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D* __this, int32_t ___0_key, bool ___1_create, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* V_1 = NULL;
	int32_t V_2 = 0;
	Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* V_3 = NULL;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Lookup_2_InternalGetHashCode_m4A019C1711618753A3BFD863C411B5E0135B8FC5(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		V_0 = L_1;
		GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC* L_2 = __this->___groupings;
		int32_t L_3 = V_0;
		GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC* L_4 = __this->___groupings;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		NullCheck(L_2);
		int32_t L_6 = ((int32_t)(L_3%L_5));
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_0042;
	}

IL_001c:
	{
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___hashCode;
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_11 = __this->___comparer;
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->___key;
		int32_t L_14 = ___0_key;
		NullCheck(L_11);
		bool L_15;
		L_15 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 11), L_11, L_13, L_14);
		if (!L_15)
		{
			goto IL_003b;
		}
	}
	{
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_16 = V_1;
		return L_16;
	}

IL_003b:
	{
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_17 = V_1;
		NullCheck(L_17);
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_18 = L_17->___hashNext;
		V_1 = L_18;
	}

IL_0042:
	{
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_19 = V_1;
		if (L_19)
		{
			goto IL_001c;
		}
	}
	{
		bool L_20 = ___1_create;
		if (!L_20)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_21 = __this->___count;
		GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC* L_22 = __this->___groupings;
		NullCheck(L_22);
		int32_t L_23 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_22)->max_length),NULL));
		if ((!(((uint32_t)L_21) == ((uint32_t)L_23))))
		{
			goto IL_0061;
		}
	}
	{
		Lookup_2_Resize_m7F70374C6591C732F13C0E663583C26FABDFCD18(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
	}

IL_0061:
	{
		int32_t L_24 = V_0;
		GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC* L_25 = __this->___groupings;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		V_2 = ((int32_t)(L_24%L_26));
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_27 = (Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
		Grouping__ctor_m821904E57FCF405950840DDCA895981D05931C71(L_27, NULL);
		V_3 = L_27;
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_28 = V_3;
		int32_t L_29 = ___0_key;
		NullCheck(L_28);
		L_28->___key = L_29;
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_30 = V_3;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		L_30->___hashCode = L_31;
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_32 = V_3;
		ValueTuple_2U5BU5D_t1FD8FAA93501FC119B38DB381247D0357A2C818E* L_33 = (ValueTuple_2U5BU5D_t1FD8FAA93501FC119B38DB381247D0357A2C818E*)(ValueTuple_2U5BU5D_t1FD8FAA93501FC119B38DB381247D0357A2C818E*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21), (uint32_t)1);
		NullCheck(L_32);
		L_32->___elements = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___elements), (void*)L_33);
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_34 = V_3;
		GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC* L_35 = __this->___groupings;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_34);
		L_34->___hashNext = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->___hashNext), (void*)L_38);
		GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC* L_39 = __this->___groupings;
		int32_t L_40 = V_2;
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_41 = V_3;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_41);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1*)L_41);
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_42 = __this->___lastGrouping;
		if (L_42)
		{
			goto IL_00b4;
		}
	}
	{
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_43 = V_3;
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_44 = V_3;
		NullCheck(L_43);
		L_43->___next = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&L_43->___next), (void*)L_44);
		goto IL_00d1;
	}

IL_00b4:
	{
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_45 = V_3;
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_46 = __this->___lastGrouping;
		NullCheck(L_46);
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_47 = L_46->___next;
		NullCheck(L_45);
		L_45->___next = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->___next), (void*)L_47);
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_48 = __this->___lastGrouping;
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_49 = V_3;
		NullCheck(L_48);
		L_48->___next = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_48->___next), (void*)L_49);
	}

IL_00d1:
	{
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_50 = V_3;
		__this->___lastGrouping = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastGrouping), (void*)L_50);
		int32_t L_51 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_51, 1));
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_52 = V_3;
		return L_52;
	}

IL_00e8:
	{
		return (Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1*)NULL;
	}
}
// Method Definition Index: 92880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2_Resize_m7F70374C6591C732F13C0E663583C26FABDFCD18_gshared (Lookup_2_t4DEB2739CEB2C764E918CF7BCD9F29135670FA8D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC* V_1 = NULL;
	Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___count;
		if (((int64_t)L_0 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1));
		int32_t L_1 = V_0;
		GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC* L_2 = (GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC*)(GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), (uint32_t)L_1);
		V_1 = L_2;
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_3 = __this->___lastGrouping;
		V_2 = L_3;
	}

IL_0019:
	{
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_4 = V_2;
		NullCheck(L_4);
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_5 = L_4->___next;
		V_2 = L_5;
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___hashCode;
		int32_t L_8 = V_0;
		V_3 = ((int32_t)(L_7%L_8));
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_9 = V_2;
		GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		L_9->___hashNext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___hashNext), (void*)L_13);
		GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC* L_14 = V_1;
		int32_t L_15 = V_3;
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_16 = V_2;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1*)L_16);
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_17 = V_2;
		Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1* L_18 = __this->___lastGrouping;
		if ((!(((RuntimeObject*)(Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1*)L_17) == ((RuntimeObject*)(Grouping_tB3778D104E7338B0159D0555ECB4AF9786B89AC1*)L_18))))
		{
			goto IL_0019;
		}
	}
	{
		GroupingU5BU5D_tF645642C58708B57CB95D3797A2DB0541EDECFBC* L_19 = V_1;
		__this->___groupings = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groupings), (void*)L_19);
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
// Method Definition Index: 11849
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_mB5B1FDBCF676AAB123EB4F98D58D4A502FD838F8_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		DefaultComparer_1_t9C7341E5478D67148593B9F5D9828B0B26E8771C* L_0 = (DefaultComparer_1_t9C7341E5478D67148593B9F5D9828B0B26E8771C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		DefaultComparer_1__ctor_m392ABCFA5EFDB1256CD23BFFE3D7ECD3B52D7FC2(L_0, NULL);
		LowLevelDictionary_2__ctor_mD1857E9A4FD7FAB6E1C713430247CBB7D4461B89(__this, ((int32_t)17), (RuntimeObject*)L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 11850
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_mD1857E9A4FD7FAB6E1C713430247CBB7D4461B89_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___1_comparer;
		__this->____comparer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_0);
		int32_t L_1 = ___0_capacity;
		LowLevelDictionary_2_Clear_m2A900BFEFBAACE1AD66C82F0AE3D9D610968F68C(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 11851
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_set_Item_mCE968B5C31BE10DCFF54C3A5385EBDFB6C1CCAC5_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Entry_tF06D862F67605F4445B225A073D780D96080578A* V_0 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = ___0_key;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_3;
		L_3 = LowLevelDictionary_2_Find_m090FF3CE8F8EFEC07BA8CD7C44BEC9D1ED7C24EC(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		V_0 = L_3;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = ___1_value;
		NullCheck(L_5);
		L_5->____value = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____value), (void*)L_6);
		return;
	}

IL_0034:
	{
		int32_t L_7 = ___0_key;
		Il2CppSharedGenericObject* L_8 = ___1_value;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_9;
		L_9 = LowLevelDictionary_2_UncheckedAdd_m8F0FBEEB4E8FE0669873E1089B2BC787C78A5AA0(__this, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return;
	}
}
// Method Definition Index: 11852
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m2A900BFEFBAACE1AD66C82F0AE3D9D610968F68C_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_capacity;
		EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_2 = (EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C*)(EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), (uint32_t)L_1);
		__this->____buckets = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_2);
		__this->____numEntries = 0;
		return;
	}
}
// Method Definition Index: 11853
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelDictionary_2_Remove_mA9681158AD062F0DBCCD92D6EAA0599A451A75DB_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Entry_tF06D862F67605F4445B225A073D780D96080578A* V_1 = NULL;
	Entry_tF06D862F67605F4445B225A073D780D96080578A* V_2 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_1 = ___0_key;
		int32_t L_2;
		L_2 = LowLevelDictionary_2_GetBucket_mF7C93480EC7D3ED139A91A428980199D4D6BD021(__this, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		V_0 = L_2;
		V_1 = (Entry_tF06D862F67605F4445B225A073D780D96080578A*)NULL;
		EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_3 = __this->____buckets;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		goto IL_0083;
	}

IL_0029:
	{
		RuntimeObject* L_7 = __this->____comparer;
		int32_t L_8 = ___0_key;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = L_9->____key;
		NullCheck(L_7);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_7, L_8, L_10);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_12 = V_1;
		if (L_12)
		{
			goto IL_0050;
		}
	}
	{
		EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_13 = __this->____buckets;
		int32_t L_14 = V_0;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_15 = V_2;
		NullCheck(L_15);
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_16 = L_15->____next;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Entry_tF06D862F67605F4445B225A073D780D96080578A*)L_16);
		goto IL_005c;
	}

IL_0050:
	{
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_17 = V_1;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_18 = V_2;
		NullCheck(L_18);
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_19 = L_18->____next;
		NullCheck(L_17);
		L_17->____next = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->____next), (void*)L_19);
	}

IL_005c:
	{
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		return (bool)1;
	}

IL_007a:
	{
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_22 = V_2;
		V_1 = L_22;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_23 = V_2;
		NullCheck(L_23);
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_24 = L_23->____next;
		V_2 = L_24;
	}

IL_0083:
	{
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_25 = V_2;
		if (L_25)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}
}
// Method Definition Index: 11854
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_tF06D862F67605F4445B225A073D780D96080578A* LowLevelDictionary_2_Find_m090FF3CE8F8EFEC07BA8CD7C44BEC9D1ED7C24EC_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Entry_tF06D862F67605F4445B225A073D780D96080578A* V_1 = NULL;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = LowLevelDictionary_2_GetBucket_mF7C93480EC7D3ED139A91A428980199D4D6BD021(__this, L_0, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		V_0 = L_1;
		EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_2 = __this->____buckets;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		goto IL_0031;
	}

IL_0014:
	{
		RuntimeObject* L_6 = __this->____comparer;
		int32_t L_7 = ___0_key;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->____key;
		NullCheck(L_6);
		bool L_10;
		L_10 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_6, L_7, L_9);
		if (!L_10)
		{
			goto IL_002a;
		}
	}
	{
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_11 = V_1;
		return L_11;
	}

IL_002a:
	{
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_12 = V_1;
		NullCheck(L_12);
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_13 = L_12->____next;
		V_1 = L_13;
	}

IL_0031:
	{
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_14 = V_1;
		if (L_14)
		{
			goto IL_0014;
		}
	}
	{
		return (Entry_tF06D862F67605F4445B225A073D780D96080578A*)NULL;
	}
}
// Method Definition Index: 11855
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_tF06D862F67605F4445B225A073D780D96080578A* LowLevelDictionary_2_UncheckedAdd_m8F0FBEEB4E8FE0669873E1089B2BC787C78A5AA0_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Entry_tF06D862F67605F4445B225A073D780D96080578A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_0 = (Entry_tF06D862F67605F4445B225A073D780D96080578A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Entry__ctor_m14DE30993A2CA554B68F04F050AE74A3DEAB1136(L_0, NULL);
		V_0 = L_0;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_1 = V_0;
		int32_t L_2 = ___0_key;
		NullCheck(L_1);
		L_1->____key = L_2;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_3 = V_0;
		Il2CppSharedGenericObject* L_4 = ___1_value;
		NullCheck(L_3);
		L_3->____value = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____value), (void*)L_4);
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = LowLevelDictionary_2_GetBucket_mF7C93480EC7D3ED139A91A428980199D4D6BD021(__this, L_5, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		V_1 = L_6;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_7 = V_0;
		EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		L_7->____next = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____next), (void*)L_11);
		EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_12 = __this->____buckets;
		int32_t L_13 = V_1;
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Entry_tF06D862F67605F4445B225A073D780D96080578A*)L_14);
		int32_t L_15 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = __this->____numEntries;
		EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_17 = __this->____buckets;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_18, 2)))))
		{
			goto IL_005a;
		}
	}
	{
		LowLevelDictionary_2_ExpandBuckets_m4C8F10A4D0B8D7BF72591BF4338D7C5802B907BB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
	}

IL_005a:
	{
		Entry_tF06D862F67605F4445B225A073D780D96080578A* L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 11856
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m4C8F10A4D0B8D7BF72591BF4338D7C5802B907BB_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* V_1 = NULL;
	int32_t V_2 = 0;
	Entry_tF06D862F67605F4445B225A073D780D96080578A* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_0 = __this->____buckets;
			NullCheck(L_0);
			int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
			V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, 2)), 1));
			int32_t L_2 = V_0;
			EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_3 = (EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C*)(EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), (uint32_t)L_2);
			V_1 = L_3;
			V_2 = 0;
			goto IL_004f_1;
		}

IL_0018_1:
		{
			EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_4 = __this->____buckets;
			int32_t L_5 = V_2;
			NullCheck(L_4);
			int32_t L_6 = L_5;
			Entry_tF06D862F67605F4445B225A073D780D96080578A* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
			V_3 = L_7;
			goto IL_0048_1;
		}

IL_0023_1:
		{
			Entry_tF06D862F67605F4445B225A073D780D96080578A* L_8 = V_3;
			NullCheck(L_8);
			Entry_tF06D862F67605F4445B225A073D780D96080578A* L_9 = L_8->____next;
			Entry_tF06D862F67605F4445B225A073D780D96080578A* L_10 = V_3;
			NullCheck(L_10);
			int32_t L_11 = L_10->____key;
			int32_t L_12 = V_0;
			int32_t L_13;
			L_13 = LowLevelDictionary_2_GetBucket_mF7C93480EC7D3ED139A91A428980199D4D6BD021(__this, L_11, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
			V_4 = L_13;
			Entry_tF06D862F67605F4445B225A073D780D96080578A* L_14 = V_3;
			EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_15 = V_1;
			int32_t L_16 = V_4;
			NullCheck(L_15);
			int32_t L_17 = L_16;
			Entry_tF06D862F67605F4445B225A073D780D96080578A* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
			NullCheck(L_14);
			L_14->____next = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&L_14->____next), (void*)L_18);
			EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_19 = V_1;
			int32_t L_20 = V_4;
			Entry_tF06D862F67605F4445B225A073D780D96080578A* L_21 = V_3;
			NullCheck(L_19);
			(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Entry_tF06D862F67605F4445B225A073D780D96080578A*)L_21);
			V_3 = L_9;
		}

IL_0048_1:
		{
			Entry_tF06D862F67605F4445B225A073D780D96080578A* L_22 = V_3;
			if (L_22)
			{
				goto IL_0023_1;
			}
		}
		{
			int32_t L_23 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		}

IL_004f_1:
		{
			int32_t L_24 = V_2;
			EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_25 = __this->____buckets;
			NullCheck(L_25);
			int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
			if ((((int32_t)L_24) < ((int32_t)L_26)))
			{
				goto IL_0018_1;
			}
		}
		{
			EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_27 = V_1;
			__this->____buckets = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_27);
			goto IL_0066;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0063;
		}
		throw e;
	}

CATCH_0063:
	{
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_28 = ((OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)IL2CPP_GET_ACTIVE_EXCEPTION(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0066;
	}

IL_0066:
	{
		return;
	}
}
// Method Definition Index: 11857
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_mF7C93480EC7D3ED139A91A428980199D4D6BD021_gshared (LowLevelDictionary_2_tB54B2253B334062F92B380DDF29E17BA8F0FAD7F* __this, int32_t ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		RuntimeObject* L_0 = __this->____comparer;
		int32_t L_1 = ___0_key;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_0, L_1);
		int32_t L_3 = ___1_numBuckets;
		if (!L_3)
		{
			G_B2_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
			goto IL_0018;
		}
		G_B1_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
	}
	{
		int32_t L_4 = ___1_numBuckets;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0018:
	{
		EntryU5BU5D_t0222392F3580EBB1B16470CBBB0A74A8C39A469C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		return ((int32_t)(G_B3_1%G_B3_0));
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
// Method Definition Index: 11849
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m6893497702070CC68AC3BAB751834E9FF68C4528_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* L_0 = (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(L_0, NULL);
		((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(__this, ((int32_t)17), (RuntimeObject*)L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 11850
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___1_comparer;
		__this->____comparer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_0);
		int32_t L_1 = ___0_capacity;
		((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 11851
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_set_Item_mCA9C09B6AFCF6CC5CE6A0C40EA78FC75689EF04D_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const uint32_t SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	const Il2CppFullySharedGenericAny L_10 = L_8;
	//<source_info:<no-source>:1>
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_5;
		L_5 = InvokerFuncInvoker1< Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_4: *(void**)L_4));
		V_0 = L_5;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		NullCheck(L_7);
		il2cpp_codegen_write_field_data<true>(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), L_8, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11;
		L_11 = InvokerFuncInvoker2< Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_10: *(void**)L_10));
		return;
	}
}
// Method Definition Index: 11852
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_capacity;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_2 = (EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)(EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), (uint32_t)L_1);
		__this->____buckets = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_2);
		__this->____numEntries = 0;
		return;
	}
}
// Method Definition Index: 11853
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelDictionary_2_Remove_m70E88A5B684A3A944B6569781B7B3918196A98E6_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_1 = NULL;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_2 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_4;
		L_4 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_3: *(void**)L_3), 0);
		V_0 = L_4;
		V_1 = (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)NULL;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_5 = __this->____buckets;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		goto IL_0083;
	}

IL_0029:
	{
		RuntimeObject* L_9 = __this->____comparer;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11 = V_2;
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_field_data_pointer(L_11, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_9);
		bool L_13;
		L_13 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_12: *(void**)L_12));
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = V_1;
		if (L_14)
		{
			goto IL_0050;
		}
	}
	{
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_17 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_18 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_17, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_18);
		goto IL_005c;
	}

IL_0050:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_19 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_20 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_21 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_20, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
		NullCheck(L_19);
		il2cpp_codegen_write_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, true>(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_21);
	}

IL_005c:
	{
		int32_t L_22 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		return (bool)1;
	}

IL_007a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_24 = V_2;
		V_1 = L_24;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_25 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_26 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_25, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
		V_2 = L_26;
	}

IL_0083:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_27 = V_2;
		if (L_27)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}
}
// Method Definition Index: 11854
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_7 = L_0;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_1 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_0: *(void**)L_0), 0);
		V_0 = L_1;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_2 = __this->____buckets;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		goto IL_0031;
	}

IL_0014:
	{
		RuntimeObject* L_6 = __this->____comparer;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_6);
		bool L_10;
		L_10 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_002a;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11 = V_1;
		return L_11;
	}

IL_002a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_12 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_13 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
		V_1 = L_13;
	}

IL_0031:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = V_1;
		if (L_14)
		{
			goto IL_0014;
		}
	}
	{
		return (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)NULL;
	}
}
// Method Definition Index: 11855
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const uint32_t SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	//<source_info:<no-source>:1>
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_0 = (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		((  void (*) (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))(L_0, NULL);
		V_0 = L_0;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_1);
		il2cpp_codegen_write_field_data<true>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12), L_2, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_3 = V_0;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		NullCheck(L_3);
		il2cpp_codegen_write_field_data<true>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), L_4, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_6;
		L_6 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_5: *(void**)L_5), 0);
		V_1 = L_6;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = V_0;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		il2cpp_codegen_write_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, true>(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_11);
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_12 = __this->____buckets;
		int32_t L_13 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_14);
		int32_t L_15 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = __this->____numEntries;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_17 = __this->____buckets;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_18, 2)))))
		{
			goto IL_005a;
		}
	}
	{
		((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
	}

IL_005a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 11856
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* V_1 = NULL;
	int32_t V_2 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_0 = __this->____buckets;
			NullCheck(L_0);
			int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
			V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, 2)), 1));
			int32_t L_2 = V_0;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_3 = (EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)(EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), (uint32_t)L_2);
			V_1 = L_3;
			V_2 = 0;
			goto IL_004f_1;
		}

IL_0018_1:
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_4 = __this->____buckets;
			int32_t L_5 = V_2;
			NullCheck(L_4);
			int32_t L_6 = L_5;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
			V_3 = L_7;
			goto IL_0048_1;
		}

IL_0023_1:
		{
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_3;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_9 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_10 = V_3;
			il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(L_10, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
			int32_t L_12 = V_0;
			int32_t L_13;
			L_13 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_11: *(void**)L_11), L_12);
			V_4 = L_13;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = V_3;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_15 = V_1;
			int32_t L_16 = V_4;
			NullCheck(L_15);
			int32_t L_17 = L_16;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
			NullCheck(L_14);
			il2cpp_codegen_write_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, true>(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_18);
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_19 = V_1;
			int32_t L_20 = V_4;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_21 = V_3;
			NullCheck(L_19);
			(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_21);
			V_3 = L_9;
		}

IL_0048_1:
		{
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_22 = V_3;
			if (L_22)
			{
				goto IL_0023_1;
			}
		}
		{
			int32_t L_23 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		}

IL_004f_1:
		{
			int32_t L_24 = V_2;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_25 = __this->____buckets;
			NullCheck(L_25);
			int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
			if ((((int32_t)L_24) < ((int32_t)L_26)))
			{
				goto IL_0018_1;
			}
		}
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_27 = V_1;
			__this->____buckets = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_27);
			goto IL_0066;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0063;
		}
		throw e;
	}

CATCH_0063:
	{
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_28 = ((OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)IL2CPP_GET_ACTIVE_EXCEPTION(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0066;
	}

IL_0066:
	{
		return;
	}
}
// Method Definition Index: 11857
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	//<source_info:<no-source>:1>
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		RuntimeObject* L_0 = __this->____comparer;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		int32_t L_3 = ___1_numBuckets;
		if (!L_3)
		{
			G_B2_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
			goto IL_0018;
		}
		G_B1_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
	}
	{
		int32_t L_4 = ___1_numBuckets;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0018:
	{
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		return ((int32_t)(G_B3_1%G_B3_0));
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
// Method Definition Index: 11936
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m7B86069998BAC863F6EE754C9D878200BED47898_gshared (LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		LowLevelList_1__ctor_m5EDF9059E2B9E18A9B5485805DA1E437CD9E5923((LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m245F7AA05280670E61F8C0778A2DC89B981F0E57_gshared (LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		LowLevelList_1__ctor_mD1211C8F15F5F71881D532224ABE5C511D692167((LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*)__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 11938
// Method Definition Index: 11939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m97ADDF2D21785B2A23F4F138D257A56BA6D3F35D_gshared (LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5816A014E8FD33359980F2C8997DBC95D4FBE26((&L_0), __this, NULL);
		Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11940
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_IEnumerable_GetEnumerator_m6B631273A548E9129A08D942E9849BD99DA2BE83_gshared (LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5816A014E8FD33359980F2C8997DBC95D4FBE26((&L_0), __this, NULL);
		Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), &L_1);
		return (RuntimeObject*)L_2;
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
// Method Definition Index: 11936
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m7AB0E8E5B20FFDC048A5EF35FE2D5BFC411168BE_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m4B122A24C900A82393070E3BC47A5195E41D0166_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 11938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelListWithIList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4370070FFE2C281C957687075D458D7367685370_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 11939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2192B77A7D1721166B77434FAE475580AEABF35A_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0 L_0 = alloca(SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
		Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11940
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_IEnumerable_GetEnumerator_mC47144515E8A260A0737260ED6A11C0D5C3B74DE_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0 L_0 = alloca(SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
		Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_0);
		return (RuntimeObject*)L_1;
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
// Method Definition Index: 11916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_m5EDF9059E2B9E18A9B5485805DA1E437CD9E5923_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mD1211C8F15F5F71881D532224ABE5C511D692167_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0015:
	{
		int32_t L_2 = ___0_capacity;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = ((LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_3);
		return;
	}

IL_0024:
	{
		int32_t L_4 = ___0_capacity;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_4);
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		return;
	}
}
// Method Definition Index: 11918
// Method Definition Index: 11919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_mFD67211CC6B3CEFE404094D7A79E6067F26C3EEC_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = ___0_value;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_7 = ___0_value;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		V_0 = L_8;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_9 = __this->____items;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_0046:
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = ((LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 11920
// Method Definition Index: 11921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* LowLevelList_1_get_Item_mF5D87A967226B59493B1B1D2B9D46D705B140C3E_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Il2CppSharedGenericObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// Method Definition Index: 11922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Item_m97013DCB2E8805FC3DB2963DDDB69F239293E4C1_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		Il2CppSharedGenericObject* L_5 = ___1_value;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Il2CppSharedGenericObject*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 11923
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Add_mB18D5DA62BB80B808C3A36DD591B3FD22138BF2D_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = __this->____size;
		LowLevelList_1_EnsureCapacity_mB4490D5C551F28A4FE6897BB059CE8409F6B000A(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_001e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->____items;
		int32_t L_5 = __this->____size;
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		Il2CppSharedGenericObject* L_8 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Il2CppSharedGenericObject*)L_8);
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
// Method Definition Index: 11924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_mB4490D5C551F28A4FE6897BB059CE8409F6B000A_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002f;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		int32_t L_7 = ___0_min;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_8 = ___0_min;
		V_0 = L_8;
	}

IL_0028:
	{
		int32_t L_9 = V_0;
		LowLevelList_1_set_Capacity_mFD67211CC6B3CEFE404094D7A79E6067F26C3EEC(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_002f:
	{
		return;
	}
}
// Method Definition Index: 11925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_AddRange_m246527A296C4E439DEF98D4CFFE22C14D34502F2_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		LowLevelList_1_InsertRange_m47DFA9E3D242417D8F8811704C9527E5D149F289(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
// Method Definition Index: 11926
// Method Definition Index: 11927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Contains_m649C5E8454A840D02915C509716649D85F169D5B_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Il2CppSharedGenericObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		Il2CppSharedGenericObject* L_8 = ___0_item;
		int32_t L_9;
		L_9 = LowLevelList_1_IndexOf_mB0038DF2ABB1F369C435382E2ED90134B770CC5A(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)1;
	}

IL_003c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11928
// Method Definition Index: 11929
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_mB0038DF2ABB1F369C435382E2ED90134B770CC5A_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->____items;
		Il2CppSharedGenericObject* L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		return L_3;
	}
}
// Method Definition Index: 11930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mAB5978B3C0C4CDDF7878DEA8731D5CBD2298D403_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = __this->____size;
		LowLevelList_1_EnsureCapacity_mB4490D5C551F28A4FE6897BB059CE8409F6B000A(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0032:
	{
		int32_t L_7 = ___0_index;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0058;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		int32_t L_14 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
	}

IL_0058:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = __this->____items;
		int32_t L_16 = ___0_index;
		Il2CppSharedGenericObject* L_17 = ___1_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Il2CppSharedGenericObject*)L_17);
		int32_t L_18 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}
}
// Method Definition Index: 11931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m47DFA9E3D242417D8F8811704C9527E5D149F289_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
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
	int32_t V_1 = 0;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->____size;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)));
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_00d8;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 8), L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_10 = __this->____size;
		int32_t L_11 = V_1;
		LowLevelList_1_EnsureCapacity_mB4490D5C551F28A4FE6897BB059CE8409F6B000A(__this, ((int32_t)il2cpp_codegen_add(L_10, L_11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0071;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = __this->____items;
		int32_t L_17 = ___0_index;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->____size;
		int32_t L_20 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, L_18)), ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0071:
	{
		RuntimeObject* L_21 = V_0;
		if ((!(((RuntimeObject*)(LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*)__this) == ((RuntimeObject*)(RuntimeObject*)L_21))))
		{
			goto IL_00aa;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_22 = __this->____items;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_23 = __this->____items;
		int32_t L_24 = ___0_index;
		int32_t L_25 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, L_24, L_25, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_26 = __this->____items;
		int32_t L_27 = ___0_index;
		int32_t L_28 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_29 = __this->____items;
		int32_t L_30 = ___0_index;
		int32_t L_31 = __this->____size;
		int32_t L_32 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, ((int32_t)il2cpp_codegen_add(L_27, L_28)), (RuntimeArray*)L_29, ((int32_t)il2cpp_codegen_multiply(L_30, 2)), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), NULL);
		goto IL_00c8;
	}

IL_00aa:
	{
		int32_t L_33 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_34 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_33);
		V_2 = L_34;
		RuntimeObject* L_35 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_36 = V_2;
		NullCheck(L_35);
		InterfaceActionInvoker2< __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 8), L_35, L_36, 0);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_37 = V_2;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_38 = __this->____items;
		int32_t L_39 = ___0_index;
		int32_t L_40 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, L_39, L_40, NULL);
	}

IL_00c8:
	{
		int32_t L_41 = __this->____size;
		int32_t L_42 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		goto IL_0107;
	}

IL_00d8:
	{
		RuntimeObject* L_43 = ___1_collection;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 11), L_43);
		V_3 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{
				{
					RuntimeObject* L_45 = V_3;
					if (!L_45)
					{
						goto IL_0106;
					}
				}
				{
					RuntimeObject* L_46 = V_3;
					NullCheck((RuntimeObject*)L_46);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				}

IL_0106:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00f3_1;
			}

IL_00e1_1:
			{
				int32_t L_47 = ___0_index;
				int32_t L_48 = L_47;
				___0_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
				RuntimeObject* L_49 = V_3;
				NullCheck(L_49);
				Il2CppSharedGenericObject* L_50;
				L_50 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_49);
				LowLevelList_1_Insert_mAB5978B3C0C4CDDF7878DEA8731D5CBD2298D403(__this, L_48, L_50, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
			}

IL_00f3_1:
			{
				RuntimeObject* L_51 = V_3;
				NullCheck((RuntimeObject*)L_51);
				bool L_52;
				L_52 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
				if (L_52)
				{
					goto IL_00e1_1;
				}
			}
			{
				goto IL_0107;
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

IL_0107:
	{
		int32_t L_53 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_53, 1));
		return;
	}
}
// Method Definition Index: 11932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Remove_mC44C71081087BEDF191A37ECC31F21CDE0BA722B_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = LowLevelList_1_IndexOf_mB0038DF2ABB1F369C435382E2ED90134B770CC5A(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		LowLevelList_1_RemoveAt_m145190E4B3563DA9050BBD1732DECF8B7169F58E(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_RemoveAll_m26C085DDAD35F29EC2DD4563490325E1059E2D84_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* ___0_match, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_0 = ___0_match;
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
		goto IL_0016;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_5 = ___0_match;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____items;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Il2CppSharedGenericObject* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		bool L_10;
		L_10 = Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline(L_5, L_9, NULL);
		if (!L_10)
		{
			goto IL_0012;
		}
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->____size;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		return 0;
	}

IL_003e:
	{
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_008e;
	}

IL_0044:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____size;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0065;
		}
	}
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_17 = ___0_match;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_18 = __this->____items;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Il2CppSharedGenericObject* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_17);
		bool L_22;
		L_22 = Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline(L_17, L_21, NULL);
		if (L_22)
		{
			goto IL_0044;
		}
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->____size;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_008e;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_25 = __this->____items;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_28 = __this->____items;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		NullCheck(L_28);
		int32_t L_31 = L_30;
		Il2CppSharedGenericObject* L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (Il2CppSharedGenericObject*)L_32);
	}

IL_008e:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = __this->____size;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0048;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
// Method Definition Index: 11934
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_m145190E4B3563DA9050BBD1732DECF8B7169F58E_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->____size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
	}

IL_0048:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Il2CppSharedGenericObject*)L_14);
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
// Method Definition Index: 11935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__cctor_m817F38EA7C8C56861A40DBC2351212FBCBF97FAC_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
// Method Definition Index: 11916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0015:
	{
		int32_t L_2 = ___0_capacity;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_3);
		return;
	}

IL_0024:
	{
		int32_t L_4 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_4);
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		return;
	}
}
// Method Definition Index: 11918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Capacity_mE34B1F6427145BD1BC7EC9E5F2290027CB634FAC_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
// Method Definition Index: 11919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = ___0_value;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_7 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		V_0 = L_8;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_0046:
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 11920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Count_m606E086DB7EE87F6497FC018F90AE7988456C6A4_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_get_Item_mE1B6F0331605C882D5552283F3E039DAB1CFE249_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		return;
	}
}
// Method Definition Index: 11922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Item_m43802D3D871A9B9E33879921E12CC84BADF9D917_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___1_value : &___1_value), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 11923
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Add_mA79D24F8FC36DBAE441CD350B69E58E559F3A77A_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = __this->____size;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = __this->____size;
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
// Method Definition Index: 11924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		int32_t L_7 = ___0_min;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_8 = ___0_min;
		V_0 = L_8;
	}

IL_0028:
	{
		int32_t L_9 = V_0;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_002f:
	{
		return;
	}
}
// Method Definition Index: 11925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_AddRange_mBE88210260B339F084E453A719D44DBD91025233_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
// Method Definition Index: 11926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Clear_mE1C2D67C7C00C6323E9825A0ED4946C0C0EAD499_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		int32_t L_2 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		__this->____size = 0;
	}

IL_0022:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
// Method Definition Index: 11927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Contains_mF7E0C9FBFE03FCE5AB7A8A5F2372A6398AC0F027_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_0);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_6 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_5);
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_11;
		L_11 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)1;
	}

IL_003c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11928
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_CopyTo_mF495B6C8191B5C8929B60BC9F7502FE518DC81DE_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
// Method Definition Index: 11929
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_1: *(void**)L_1), 0, L_2);
		return L_3;
	}
}
// Method Definition Index: 11930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = __this->____size;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0032:
	{
		int32_t L_7 = ___0_index;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0058;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		int32_t L_14 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
	}

IL_0058:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____items;
		int32_t L_16 = ___0_index;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___1_item : &___1_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_15);
		il2cpp_codegen_memcpy((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), L_17, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), (void*)L_17);
		int32_t L_18 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}
}
// Method Definition Index: 11931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_50 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->____size;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)));
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_00d8;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 8), L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_10 = __this->____size;
		int32_t L_11 = V_1;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(__this, ((int32_t)il2cpp_codegen_add(L_10, L_11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0071;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->____items;
		int32_t L_17 = ___0_index;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->____size;
		int32_t L_20 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, L_18)), ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0071:
	{
		RuntimeObject* L_21 = V_0;
		if ((!(((RuntimeObject*)(LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this) == ((RuntimeObject*)(RuntimeObject*)L_21))))
		{
			goto IL_00aa;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->____items;
		int32_t L_24 = ___0_index;
		int32_t L_25 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, L_24, L_25, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = __this->____items;
		int32_t L_27 = ___0_index;
		int32_t L_28 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = __this->____items;
		int32_t L_30 = ___0_index;
		int32_t L_31 = __this->____size;
		int32_t L_32 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, ((int32_t)il2cpp_codegen_add(L_27, L_28)), (RuntimeArray*)L_29, ((int32_t)il2cpp_codegen_multiply(L_30, 2)), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), NULL);
		goto IL_00c8;
	}

IL_00aa:
	{
		int32_t L_33 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_34 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_33);
		V_2 = L_34;
		RuntimeObject* L_35 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = V_2;
		NullCheck(L_35);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 8), L_35, L_36, 0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = __this->____items;
		int32_t L_39 = ___0_index;
		int32_t L_40 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, L_39, L_40, NULL);
	}

IL_00c8:
	{
		int32_t L_41 = __this->____size;
		int32_t L_42 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		goto IL_0107;
	}

IL_00d8:
	{
		RuntimeObject* L_43 = ___1_collection;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 11), L_43);
		V_3 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{
				{
					RuntimeObject* L_45 = V_3;
					if (!L_45)
					{
						goto IL_0106;
					}
				}
				{
					RuntimeObject* L_46 = V_3;
					NullCheck((RuntimeObject*)L_46);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				}

IL_0106:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00f3_1;
			}

IL_00e1_1:
			{
				int32_t L_47 = ___0_index;
				int32_t L_48 = L_47;
				___0_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
				RuntimeObject* L_49 = V_3;
				NullCheck(L_49);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_49, (Il2CppFullySharedGenericAny*)L_50);
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15), __this, L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_50: *(void**)L_50));
			}

IL_00f3_1:
			{
				RuntimeObject* L_51 = V_3;
				NullCheck((RuntimeObject*)L_51);
				bool L_52;
				L_52 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
				if (L_52)
				{
					goto IL_00e1_1;
				}
			}
			{
				goto IL_0107;
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

IL_0107:
	{
		int32_t L_53 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_53, 1));
		return;
	}
}
// Method Definition Index: 11932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Remove_m9CA49DFEEE8490053D50ACB37A61A63ECFDF6164_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_RemoveAll_m7EA2BB7ADDD12BF71851BEF2E164FD40AD97757E_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_21 = L_9;
	const Il2CppFullySharedGenericAny L_32 = L_9;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
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
		goto IL_0016;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_5 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_5);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0012;
		}
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->____size;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		return 0;
	}

IL_003e:
	{
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_008e;
	}

IL_0044:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____size;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0065;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_17 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->____items;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_17);
		bool L_22;
		L_22 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_21: *(void**)L_21));
		if (L_22)
		{
			goto IL_0044;
		}
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->____size;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_008e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = __this->____items;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = __this->____items;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		NullCheck(L_28);
		int32_t L_31 = L_30;
		il2cpp_codegen_memcpy(L_32, (L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_25);
		il2cpp_codegen_memcpy((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), L_32, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), (void*)L_32);
	}

IL_008e:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = __this->____size;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
// Method Definition Index: 11934
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	memset(V_0, 0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->____size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
	}

IL_0048:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
// Method Definition Index: 11935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__cctor_m663DD9A631105882B519C495A2D1077501A0FF6E_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
// Method Definition Index: 23270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1__ctor_m94F7AE2A2A577580B6922D16CDB51083CDDDFC80_gshared (ManagedObjectStore_1_t5991B3BF02302E92A67BFA3777506211F997B6FA* __this, int32_t ___0_chunkSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_chunkSize;
		__this->___m_ChunkSize = L_0;
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_1 = (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_m98EAD4ACCCE25AA8D4084520C07D03C84B50C4E6(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_2 = L_1;
		int32_t L_3 = __this->___m_ChunkSize;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (uint32_t)L_3);
		NullCheck(L_2);
		List_1_Add_mF106F76286D35F37A6488E53F808CB0394A8F59F_inline(L_2, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		__this->___m_Chunks = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Chunks), (void*)L_2);
		__this->___m_Length = 1;
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_5 = (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*)il2cpp_codegen_object_new(Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D(L_5, Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		__this->___m_Free = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Free), (void*)L_5);
		return;
	}
}
// Method Definition Index: 23271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ManagedObjectStore_1_GetValue_m0EAC3C100432375B6075EA13FDB46D31388BF816_gshared (ManagedObjectStore_1_t5991B3BF02302E92A67BFA3777506211F997B6FA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	{
		int32_t L_0 = ___0_index;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_1 = V_2;
		return L_1;
	}

IL_000d:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___m_ChunkSize;
		V_0 = ((int32_t)(L_2/L_3));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___m_ChunkSize;
		V_1 = ((int32_t)(L_4%L_5));
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_6 = __this->___m_Chunks;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8;
		L_8 = List_1_get_Item_mCC309293366D22D4535488B86EBC8BC43C683D68(L_6, L_7, NULL);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Il2CppSharedGenericObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return L_11;
	}
}
// Method Definition Index: 23272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1_UpdateValue_mA77B8E92DEA1A3240D0EE7EB3468199CBA49AEB2_gshared (ManagedObjectStore_1_t5991B3BF02302E92A67BFA3777506211F997B6FA* __this, int32_t* ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppSharedGenericObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		if (!L_1)
		{
			goto IL_0075;
		}
	}
	{
		Il2CppSharedGenericObject* L_2 = ___1_value;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		int32_t* L_3 = ___0_index;
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		int32_t L_5 = __this->___m_ChunkSize;
		V_0 = ((int32_t)(L_4/L_5));
		int32_t* L_6 = ___0_index;
		int32_t L_7 = il2cpp_codegen_ldind<int32_t, int32_t>(L_6);
		int32_t L_8 = __this->___m_ChunkSize;
		V_1 = ((int32_t)(L_7%L_8));
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_9 = __this->___m_Chunks;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11;
		L_11 = List_1_get_Item_mCC309293366D22D4535488B86EBC8BC43C683D68(L_9, L_10, NULL);
		int32_t L_12 = V_1;
		Il2CppSharedGenericObject* L_13 = ___1_value;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Il2CppSharedGenericObject*)L_13);
		return;
	}

IL_0034:
	{
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_14 = __this->___m_Free;
		int32_t* L_15 = ___0_index;
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(L_15);
		NullCheck(L_14);
		Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_14, L_16, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		int32_t* L_17 = ___0_index;
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(L_17);
		int32_t L_19 = __this->___m_ChunkSize;
		V_2 = ((int32_t)(L_18/L_19));
		int32_t* L_20 = ___0_index;
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(L_20);
		int32_t L_22 = __this->___m_ChunkSize;
		V_3 = ((int32_t)(L_21%L_22));
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_23 = __this->___m_Chunks;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_25;
		L_25 = List_1_get_Item_mCC309293366D22D4535488B86EBC8BC43C683D68(L_23, L_24, NULL);
		int32_t L_26 = V_3;
		il2cpp_codegen_initobj((&V_4), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_27 = V_4;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppSharedGenericObject*)L_27);
		int32_t* L_28 = ___0_index;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_28, (int32_t)0);
		return;
	}

IL_0075:
	{
		Il2CppSharedGenericObject* L_29 = ___1_value;
		if (!L_29)
		{
			goto IL_0134;
		}
	}
	{
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_30 = __this->___m_Free;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline(L_30, NULL);
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t* L_32 = ___0_index;
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_33 = __this->___m_Free;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650(L_33, Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_32, (int32_t)L_34);
		int32_t* L_35 = ___0_index;
		int32_t L_36 = il2cpp_codegen_ldind<int32_t, int32_t>(L_35);
		int32_t L_37 = __this->___m_ChunkSize;
		V_5 = ((int32_t)(L_36/L_37));
		int32_t* L_38 = ___0_index;
		int32_t L_39 = il2cpp_codegen_ldind<int32_t, int32_t>(L_38);
		int32_t L_40 = __this->___m_ChunkSize;
		V_6 = ((int32_t)(L_39%L_40));
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_41 = __this->___m_Chunks;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_43;
		L_43 = List_1_get_Item_mCC309293366D22D4535488B86EBC8BC43C683D68(L_41, L_42, NULL);
		int32_t L_44 = V_6;
		Il2CppSharedGenericObject* L_45 = ___1_value;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (Il2CppSharedGenericObject*)L_45);
		return;
	}

IL_00c7:
	{
		int32_t* L_46 = ___0_index;
		int32_t L_47 = __this->___m_Length;
		V_9 = L_47;
		int32_t L_48 = V_9;
		__this->___m_Length = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_46, (int32_t)L_49);
		int32_t* L_50 = ___0_index;
		int32_t L_51 = il2cpp_codegen_ldind<int32_t, int32_t>(L_50);
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_52 = __this->___m_Chunks;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_mA09DAC378E78D61150174B308A222FB598C1B216_inline(L_52, NULL);
		int32_t L_54 = __this->___m_ChunkSize;
		if ((((int32_t)L_51) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_53, L_54)))))
		{
			goto IL_0109;
		}
	}
	{
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_55 = __this->___m_Chunks;
		int32_t L_56 = __this->___m_ChunkSize;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_57 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (uint32_t)L_56);
		NullCheck(L_55);
		List_1_Add_mF106F76286D35F37A6488E53F808CB0394A8F59F_inline(L_55, L_57, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0109:
	{
		int32_t* L_58 = ___0_index;
		int32_t L_59 = il2cpp_codegen_ldind<int32_t, int32_t>(L_58);
		int32_t L_60 = __this->___m_ChunkSize;
		V_7 = ((int32_t)(L_59/L_60));
		int32_t* L_61 = ___0_index;
		int32_t L_62 = il2cpp_codegen_ldind<int32_t, int32_t>(L_61);
		int32_t L_63 = __this->___m_ChunkSize;
		V_8 = ((int32_t)(L_62%L_63));
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_64 = __this->___m_Chunks;
		int32_t L_65 = V_7;
		NullCheck(L_64);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_66;
		L_66 = List_1_get_Item_mCC309293366D22D4535488B86EBC8BC43C683D68(L_64, L_65, NULL);
		int32_t L_67 = V_8;
		Il2CppSharedGenericObject* L_68 = ___1_value;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (Il2CppSharedGenericObject*)L_68);
	}

IL_0134:
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
// Method Definition Index: 23270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1__ctor_m40B48A3F93602CA3B11082174419F92C87991ED4_fshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t ___0_chunkSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_chunkSize;
		__this->___m_ChunkSize = L_0;
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_1 = (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_2 = L_1;
		int32_t L_3 = __this->___m_ChunkSize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (uint32_t)L_3);
		NullCheck(L_2);
		InvokerActionInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), L_2, L_4);
		__this->___m_Chunks = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Chunks), (void*)L_2);
		__this->___m_Length = 1;
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_5 = (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*)il2cpp_codegen_object_new(Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D(L_5, Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		__this->___m_Free = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Free), (void*)L_5);
		return;
	}
}
// Method Definition Index: 23271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1_GetValue_mE2FBA0F28BC33EEC4E02CE2979EA177A50E7F634_fshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	const Il2CppFullySharedGenericAny L_11 = L_1;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	memset(V_2, 0, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	{
		int32_t L_0 = ___0_index;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(L_1, V_2, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		return;
	}

IL_000d:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___m_ChunkSize;
		V_0 = ((int32_t)(L_2/L_3));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___m_ChunkSize;
		V_1 = ((int32_t)(L_4%L_5));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_6 = __this->___m_Chunks;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8;
		L_8 = InvokerFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_6, L_7);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		return;
	}
}
// Method Definition Index: 23272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1_UpdateValue_mA68231A6328DCD1A80E8B50EAB8B031C382F071E_fshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t* ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	const Il2CppFullySharedGenericAny L_14 = L_2;
	const Il2CppFullySharedGenericAny L_28 = L_2;
	const Il2CppFullySharedGenericAny L_30 = L_2;
	const Il2CppFullySharedGenericAny L_47 = L_2;
	const Il2CppFullySharedGenericAny L_70 = L_2;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	memset(V_4, 0, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		if (!L_1)
		{
			goto IL_0075;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_2);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, int32_t>(L_4);
		int32_t L_6 = __this->___m_ChunkSize;
		V_0 = ((int32_t)(L_5/L_6));
		int32_t* L_7 = ___0_index;
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(L_7);
		int32_t L_9 = __this->___m_ChunkSize;
		V_1 = ((int32_t)(L_8%L_9));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_10 = __this->___m_Chunks;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12;
		L_12 = InvokerFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_10, L_11);
		int32_t L_13 = V_1;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		return;
	}

IL_0034:
	{
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_15 = __this->___m_Free;
		int32_t* L_16 = ___0_index;
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(L_16);
		NullCheck(L_15);
		Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_15, L_17, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		int32_t* L_18 = ___0_index;
		int32_t L_19 = il2cpp_codegen_ldind<int32_t, int32_t>(L_18);
		int32_t L_20 = __this->___m_ChunkSize;
		V_2 = ((int32_t)(L_19/L_20));
		int32_t* L_21 = ___0_index;
		int32_t L_22 = il2cpp_codegen_ldind<int32_t, int32_t>(L_21);
		int32_t L_23 = __this->___m_ChunkSize;
		V_3 = ((int32_t)(L_22%L_23));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_24 = __this->___m_Chunks;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26;
		L_26 = InvokerFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_24, L_25);
		int32_t L_27 = V_3;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(L_28, V_4, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_26);
		il2cpp_codegen_memcpy((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), L_28, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), (void*)L_28);
		int32_t* L_29 = ___0_index;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_29, (int32_t)0);
		return;
	}

IL_0075:
	{
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_30);
		if (!L_31)
		{
			goto IL_0134;
		}
	}
	{
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_32 = __this->___m_Free;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline(L_32, NULL);
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t* L_34 = ___0_index;
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_35 = __this->___m_Free;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650(L_35, Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_34, (int32_t)L_36);
		int32_t* L_37 = ___0_index;
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(L_37);
		int32_t L_39 = __this->___m_ChunkSize;
		V_5 = ((int32_t)(L_38/L_39));
		int32_t* L_40 = ___0_index;
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, int32_t>(L_40);
		int32_t L_42 = __this->___m_ChunkSize;
		V_6 = ((int32_t)(L_41%L_42));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_43 = __this->___m_Chunks;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_45;
		L_45 = InvokerFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_43, L_44);
		int32_t L_46 = V_6;
		il2cpp_codegen_memcpy(L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_45);
		il2cpp_codegen_memcpy((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)), L_47, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)), (void*)L_47);
		return;
	}

IL_00c7:
	{
		int32_t* L_48 = ___0_index;
		int32_t L_49 = __this->___m_Length;
		V_9 = L_49;
		int32_t L_50 = V_9;
		__this->___m_Length = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_48, (int32_t)L_51);
		int32_t* L_52 = ___0_index;
		int32_t L_53 = il2cpp_codegen_ldind<int32_t, int32_t>(L_52);
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_54 = __this->___m_Chunks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = ((  int32_t (*) (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(L_54, NULL);
		int32_t L_56 = __this->___m_ChunkSize;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_55, L_56)))))
		{
			goto IL_0109;
		}
	}
	{
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_57 = __this->___m_Chunks;
		int32_t L_58 = __this->___m_ChunkSize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_59 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (uint32_t)L_58);
		NullCheck(L_57);
		InvokerActionInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), L_57, L_59);
	}

IL_0109:
	{
		int32_t* L_60 = ___0_index;
		int32_t L_61 = il2cpp_codegen_ldind<int32_t, int32_t>(L_60);
		int32_t L_62 = __this->___m_ChunkSize;
		V_7 = ((int32_t)(L_61/L_62));
		int32_t* L_63 = ___0_index;
		int32_t L_64 = il2cpp_codegen_ldind<int32_t, int32_t>(L_63);
		int32_t L_65 = __this->___m_ChunkSize;
		V_8 = ((int32_t)(L_64%L_65));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_66 = __this->___m_Chunks;
		int32_t L_67 = V_7;
		NullCheck(L_66);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_68;
		L_68 = InvokerFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_66, L_67);
		int32_t L_69 = V_8;
		il2cpp_codegen_memcpy(L_70, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_68);
		il2cpp_codegen_memcpy((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)), L_70, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)), (void*)L_70);
	}

IL_0134:
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
// Method Definition Index: 5530
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m093A31DD2E7BC5FFF95B0AA090016C157DF992EE_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5531
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mF815863FF5D3EA629C32EDB7C91FDFEB7D68BEBF_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9* L_2 = (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5532
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m3C5CC0B6ECB59EFBDAB06B0B16DEA560BC5CEFFB_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_m0D1BCA6B69206FE601D18CE99C804285BEFCB977(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5533
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mFF1453645FFF22A603E2DF467AB4B111537DB8B9_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m0D1BCA6B69206FE601D18CE99C804285BEFCB977(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5534
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m9421E5D97A4BE7042D6B3DF096EFC08BC988B923_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5535
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m5328559BBFAB4987C88BEA28419DA9FDC9E784EF_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m703A20CDDC3611F8211B0715F3A6E2571BCA7485(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5536
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ManualResetValueTaskSourceCore_1_GetResult_mF39AF87BFAF45B5772972B3FBF48FBACE28C3FAE_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m703A20CDDC3611F8211B0715F3A6E2571BCA7485(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5537
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m19BFB766622EDE8258B3B9894A3004ED0EE3A051_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m703A20CDDC3611F8211B0715F3A6E2571BCA7485(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0* L_43 = ((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m703A20CDDC3611F8211B0715F3A6E2571BCA7485_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5539
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m0D1BCA6B69206FE601D18CE99C804285BEFCB977_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* L_7 = ((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0* L_9 = ((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* L_10 = (ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_mA096D168F1A82CF843AD35E32615EEBB5DC724E9(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* L_11 = L_10;
		((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D_m35FA3CF45AB0E616CF900A2898F7B93BF9542578(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m0181594F490D085AC1D3192B292137CAC3DA7347(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m0181594F490D085AC1D3192B292137CAC3DA7347_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m093A31DD2E7BC5FFF95B0AA090016C157DF992EE_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0* L_19 = ((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5530
// Method Definition Index: 5531
// Method Definition Index: 5532
// Method Definition Index: 5533
// Method Definition Index: 5534
// Method Definition Index: 5535
// Method Definition Index: 5536
// Method Definition Index: 5537
// Method Definition Index: 5538
// Method Definition Index: 5539
// Method Definition Index: 5540
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5530
// Method Definition Index: 5531
// Method Definition Index: 5532
// Method Definition Index: 5533
// Method Definition Index: 5534
// Method Definition Index: 5535
// Method Definition Index: 5536
// Method Definition Index: 5537
// Method Definition Index: 5538
// Method Definition Index: 5539
// Method Definition Index: 5540
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5530
// Method Definition Index: 5531
// Method Definition Index: 5532
// Method Definition Index: 5533
// Method Definition Index: 5534
// Method Definition Index: 5535
// Method Definition Index: 5536
// Method Definition Index: 5537
// Method Definition Index: 5538
// Method Definition Index: 5539
// Method Definition Index: 5540
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5530
// Method Definition Index: 5531
// Method Definition Index: 5532
// Method Definition Index: 5533
// Method Definition Index: 5534
// Method Definition Index: 5535
// Method Definition Index: 5536
// Method Definition Index: 5537
// Method Definition Index: 5538
// Method Definition Index: 5539
// Method Definition Index: 5540
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5530
// Method Definition Index: 5531
// Method Definition Index: 5532
// Method Definition Index: 5533
// Method Definition Index: 5534
// Method Definition Index: 5535
// Method Definition Index: 5536
// Method Definition Index: 5537
// Method Definition Index: 5538
// Method Definition Index: 5539
// Method Definition Index: 5540
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5530
// Method Definition Index: 5531
// Method Definition Index: 5532
// Method Definition Index: 5533
// Method Definition Index: 5534
// Method Definition Index: 5535
// Method Definition Index: 5536
// Method Definition Index: 5537
// Method Definition Index: 5538
// Method Definition Index: 5539
// Method Definition Index: 5540
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5530
// Method Definition Index: 5531
// Method Definition Index: 5532
// Method Definition Index: 5533
// Method Definition Index: 5534
// Method Definition Index: 5535
// Method Definition Index: 5536
// Method Definition Index: 5537
// Method Definition Index: 5538
// Method Definition Index: 5539
// Method Definition Index: 5540
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5530
// Method Definition Index: 5531
// Method Definition Index: 5532
// Method Definition Index: 5533
// Method Definition Index: 5534
// Method Definition Index: 5535
// Method Definition Index: 5536
// Method Definition Index: 5537
// Method Definition Index: 5538
// Method Definition Index: 5539
// Method Definition Index: 5540
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5530
// Method Definition Index: 5531
// Method Definition Index: 5532
// Method Definition Index: 5533
// Method Definition Index: 5534
// Method Definition Index: 5535
// Method Definition Index: 5536
// Method Definition Index: 5537
// Method Definition Index: 5538
// Method Definition Index: 5539
// Method Definition Index: 5540
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5530
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5531
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mE970D9419FAC2AE246864EB745D34A34A577849E_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387* L_2 = (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5532
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_mC43C9DA85DE35C28AE72C7650138B75D4DC6B67A_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5533
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_m4BE3C92EF70A708115C401738ED985C1B654E0BA_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5534
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m74A3DD32CA7F3C950E28AAC95ED69245944AD02C_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5535
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m692F1C28071026485741643C07EEC30710B04A33_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5536
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ManualResetValueTaskSourceCore_1_GetResult_m8AD46EC86EE64E18905CC9A16EBD6F05AFFE0A88_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5537
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m04646BE1F16754BFB79C953ECFD27DA0D67111CF_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97* L_43 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5539
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* L_7 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97* L_9 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* L_10 = (ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m7C12920F91882B8531ADEB8219501513FAE5ABD3(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* L_11 = L_10;
		((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC_m7B67CFD8908704D7A55F54F7D7C84A11D30675F5(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97* L_19 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5530
// Method Definition Index: 5531
// Method Definition Index: 5532
// Method Definition Index: 5533
// Method Definition Index: 5534
// Method Definition Index: 5535
// Method Definition Index: 5536
// Method Definition Index: 5537
// Method Definition Index: 5538
// Method Definition Index: 5539
// Method Definition Index: 5540
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5530
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5531
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mD5766A38A9D1C11FD35912C866131273D672336D_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8* L_2 = (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5532
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m642D519C76F5A575328EBC3B68EEEA6308C35A60_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5533
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_m95F190D91E54AB3C573B32A6B930912EC07DAE12_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5534
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mEE079E0EA63A4DB1153740DF1F598A7FEE77BA61_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5535
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m62C6BACDBFAC1AE4F903BD3E1D82064FE0379F59_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5536
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ManualResetValueTaskSourceCore_1_GetResult_mE5D11E7F6A12F171CAAF3B84AA59C7643124A67A_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5537
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mFCA1B9BF69C4D1051066326D3C5DF62C5F066CFA_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D* L_43 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5539
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* L_7 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D* L_9 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* L_10 = (ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_mCFC760AE37F29B90109B3885633629190BBFE1A4(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* L_11 = L_10;
		((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369_m58F55B6F98BDD809220D8BCECCB9B7C98C617362(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D* L_19 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5530
// Method Definition Index: 5531
// Method Definition Index: 5532
// Method Definition Index: 5533
// Method Definition Index: 5534
// Method Definition Index: 5535
// Method Definition Index: 5536
// Method Definition Index: 5537
// Method Definition Index: 5538
// Method Definition Index: 5539
// Method Definition Index: 5540
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5530
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5531
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mE441848250908EBD7088016B27639218657D76B3_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D* L_2 = (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5532
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m93027472B2C83716E6CA8B31C921AA8B2293D6BF_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_0 = ___0_result;
		__this->____result = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____result))->____value), (void*)NULL);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5533
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mAB45E37D8508DD4A026B4C084B3BCF071E1CCBD1_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5534
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mF2F887C8166E3050A2258BDDDC74B681DE6ECB53_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5535
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m069971BC020CAC3542B68F7F5AE4420CAE6F4E2E_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5536
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ManualResetValueTaskSourceCore_1_GetResult_m9EA98CA58B8BEEE6403BAD0A004F82EB0A295CF2_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5537
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m2D5AC6EA5F802A65F0C119C9A87EFCB20617CD7B_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549* L_43 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5539
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* L_7 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549* L_9 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* L_10 = (ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m3C0646D90D93985DFADB16CB7C77676EA91B9890(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* L_11 = L_10;
		((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453_mB6A7135BE82DF261F28CEC2690136CA2B1E7F9AA(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549* L_19 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5530
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5531
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_m449BA9EC55349EF349E738ABAE9265AE1BFABC08_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD* L_2 = (ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5532
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_mA6F82486BB6A1BFA49636709FF1BC84FDBE59D96_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5533
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_m8D9350AAF4FD3265566096119CFF252BB72C8CC2_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5534
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m229C1DFF5BFE3DB429851D460271D58A96A2ED12_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5535
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_mD0AFF0541AEA16977FA06D967C21B35145A467CF_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5536
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD ManualResetValueTaskSourceCore_1_GetResult_m1AF193DE3B26F47F216A34C207988E0A6E580B29_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5537
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mC522B49D7D2CF9A0FCA0037F677F1460DE38EF5E_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC* L_43 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5539
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* L_7 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC* L_9 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* L_10 = (ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m1D1138C9C2B05332D3995811A2D3FA4E994377EA(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* L_11 = L_10;
		((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D_mF93DCD1BBC9B00DE84C9DCB034F901983D030ABF(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC* L_19 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5530
// Method Definition Index: 5531
// Method Definition Index: 5532
// Method Definition Index: 5533
// Method Definition Index: 5534
// Method Definition Index: 5535
// Method Definition Index: 5536
// Method Definition Index: 5537
// Method Definition Index: 5538
// Method Definition Index: 5539
// Method Definition Index: 5540
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5530
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5531
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_m0D16E61936A591EE50C6A0775F03BA50C38BD32A (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		bool* L_2 = (bool*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(bool));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5532
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m68CA264778C35B72D3720931E7657F724D12E04C (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, bool ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		bool L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5533
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mB0640DBFBC14BC4F6CEBEA405E621B9D61B86D4B (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5534
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mDBEB9C4A34525DB098B1BB39EB7C82C6F3A59EBB (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5535
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m9AB7F5CEFC512304D381AA39FCC5C39F90DE1061 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5536
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_GetResult_m966754ADB9C524C24F22E830B21D10BEE4CDBC6E (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		bool L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5537
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mB201EA33D774FB460FF8D5E1F31D81EA8B9BE15C (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F* L_43 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5539
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* L_7 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F* L_9 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* L_10 = (ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_mA83DB47025F22195C2BB2F503DE6164EADABC2A2(L_10, L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* L_11 = L_10;
		((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37_m420C8B58A424BD3BB9D90950711F6105EE1A852E(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_mB1E431588F126DE18FB75EDF9F35BE8931EC4733(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mB1E431588F126DE18FB75EDF9F35BE8931EC4733 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F* L_19 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5530
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5531
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mA1124455316B9A21B574B7534B7634930DBF4819 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* L_2 = (OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5532
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_mAB1E4665D9FAE9382F8E3D9F3DA6E1FDEBDB8988 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5533
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mA9CAF16B00FD644238D06CD1E400C5EAAC77B223 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5534
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mEB84EF7AF3EF779326591C4029D2D67800C83F79 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5535
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_mAF61D032C85265E85C35885CF0BDE1B05C1CBBBA (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5536
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ManualResetValueTaskSourceCore_1_GetResult_m3414631E4E6442F3387FD5696353E4DC4D996F8B (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5537
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mB4BD238C2FB1A7A1ACE0A8BB5BBEE72994F99850 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6* L_43 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5539
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* L_7 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6* L_9 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* L_10 = (ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m3731483A5BF1AE81DEA361D571C6EE457C09E27D(L_10, L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* L_11 = L_10;
		((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F_m3A6840FF0F517F607E3109C22634630B43E05B3E(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m452BF4BDE67423D27473821F91A1ECB4C6ED1265(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m452BF4BDE67423D27473821F91A1ECB4C6ED1265 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6* L_19 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5530
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5531
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mC6B64A53E44C35B583D1A2391FCC1BE81E165344_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		Il2CppSharedGenericObject** L_2 = (Il2CppSharedGenericObject**)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(Il2CppSharedGenericObject*));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5532
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m844EBABC78CC898DA13FB6303B8C6E15893654EB_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, Il2CppSharedGenericObject* ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_result;
		__this->____result = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____result), (void*)L_0);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5533
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mF463755DA8463216488439C2448C5A2C7E25EF54_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5534
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mBF5C8CF17B560BDD9AB1A454DE90029164CA5F4C_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5535
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m3030DC4B16C28DA7A451B34E75CA6913985B005D_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5536
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ManualResetValueTaskSourceCore_1_GetResult_m09A654557257394869C7432EB05B8B88A69C360E_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		Il2CppSharedGenericObject* L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5537
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m04AF624DBD24D07C63B7257D036F1B416AC9E7A6_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1* L_43 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5539
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* L_7 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1* L_9 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* L_10 = (ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m41F97653966262D0B31ED2A6A46DDB6C61CE0BCA(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* L_11 = L_10;
		((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829_m741BB25BF530740A4A26117257B2D7C0341DBA9D(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1* L_19 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 8514
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = __this->___m_Exception;
		return L_0;
	}
}
// Method Definition Index: 5492
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var))->___s_defaultTaskScheduler;
		return L_0;
	}
}
// Method Definition Index: 5283
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CFactoryU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 11761
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11772
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
// Method Definition Index: 11994
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
// Method Definition Index: 11994
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
// Method Definition Index: 924
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 11867
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 5530
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m093A31DD2E7BC5FFF95B0AA090016C157DF992EE_gshared_inline (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 886
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 5530
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_gshared_inline (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5530
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_gshared_inline (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5530
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_gshared_inline (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5530
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_gshared_inline (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5530
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6_inline (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5530
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8_inline (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5530
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_gshared_inline (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
