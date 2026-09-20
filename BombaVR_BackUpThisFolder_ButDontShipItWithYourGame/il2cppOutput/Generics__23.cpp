#include "pch-cpp.hpp"





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

struct Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643;
struct Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D;
struct Action_1_t0D3FDEB853658AAA91C8797C0476DDF845D5BBFF;
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3;
struct AsyncInstantiateOperation_1_t4ADCB11AF0D1CE8F6CBB592A95ED176851CE3C4F;
struct AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB;
struct AsyncLocal_1_t84A5EBAACAF2A906D91794D4121189156DAE7639;
struct AsyncLocal_1_tC1B081876A75186A0139ACF15A78BBAA2AEB9482;
struct AsyncLocal_1_t6FE3AE7F9BEDEDFAF5962FF8DBC977B4D007C150;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct TaskFactory_1_tA691E2BC5961896B5A97C2F15650D3151CE60A00;
struct TaskFactory_1_tD1312B07567D037375AE1BC9E412FA736BE9A26C;
struct TaskFactory_1_t9BADAC0CF805EB57D601FE0FDE41344D8C34C9AD;
struct TaskFactory_1_t1FC6F041AB46A11726B4503E01C3D2C937910EC2;
struct TaskFactory_1_t440BCA273D8F7D2BE5CAA88135480E6CF22A9715;
struct TaskFactory_1_tAE919A7BAE255B9F6EF5F440E30D3AF6A9C9322E;
struct TaskFactory_1_tBDD9E403F37AB99920AC4B70C7BD7DB772111426;
struct TaskFactory_1_tA7344C51E9614CE506F6C6932EEC691776008D8E;
struct TaskFactory_1_tC55B2865C881633A3CE05821411BAC6496587B16;
struct TaskFactory_1_t4181657D5A4477ABB1351E03D8206D2E69706C59;
struct TaskFactory_1_t2CA0293774EF3FA24EE2F38F0FF712FC572449ED;
struct TaskFactory_1_tACAB2D78674C9B330DA23758328DDAF5C7C982DA;
struct TaskFactory_1_tABB15DC046C0C6D8A287F9ECE57EBC9710BB4306;
struct TaskFactory_1_tF6400D4AA7BC2CCC6E1EDE284038E24B53334C48;
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
struct Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0;
struct Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B;
struct Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964;
struct Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239;
struct Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41;
struct Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7;
struct Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F;
struct Task_1_t740E037592A96E7E8D824D7CF3E3790037F2091F;
struct Task_1_t266DA8B27DFB8A47C28B74C0EE7BE00F98FFB78E;
struct Task_1_t4D235A5D59D16FB8C4C21E62079A2BA599CC7675;
struct Task_1_tC06D8ADA71E3D48C0058EBA3F862F3B15D55DA9F;
struct Task_1_t5EC0156FF62B3DE5E55397DD191DC124F922325D;
struct Task_1_t74562F42D0F261A7C152860BE04C5FE86E22EBE0;
struct Task_1_t6FE95C824EF764E0E054CC5C35CD48E56EE731E1;
struct Task_1_tE764C3523DD541F8904F125D2C42495D195C363D;
struct Task_1_t6B948EB7364F83BDE1B3F1870384B96B4146D714;
struct Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7;
struct Task_1_t44BCD4A06A9459564E599F77D864DCEA036DBB7B;
struct Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C;
struct Task_1_t035A10B20E9951D572890459DB38E9E939D3F8CC;
struct Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4;
struct Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027;
struct Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394;
struct Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1;
struct Task_1_t8BA1E4BAD84F1F0BED9C0D49F5AA4D9F7A9553BE;
struct Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A;
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct IAsyncLocal_tA0D8A68D8F9BD48F7C04AD061D087A5C3D3263F6;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1F9D2B282101E190927B5EB5D0453588305508E7;
IL2CPP_EXTERN_C String_t* _stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA;
IL2CPP_EXTERN_C String_t* _stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C;
IL2CPP_EXTERN_C String_t* _stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;

struct Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3  : public RuntimeObject
{
};
struct AsyncLocal_1_t84A5EBAACAF2A906D91794D4121189156DAE7639  : public RuntimeObject
{
	Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643* ___m_valueChangedHandler;
};
struct AsyncLocal_1_tC1B081876A75186A0139ACF15A78BBAA2AEB9482  : public RuntimeObject
{
	Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D* ___m_valueChangedHandler;
};
struct AsyncLocal_1_t6FE3AE7F9BEDEDFAF5962FF8DBC977B4D007C150  : public RuntimeObject
{
	Action_1_t0D3FDEB853658AAA91C8797C0476DDF845D5BBFF* ___m_valueChangedHandler;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
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
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30 
{
	int32_t ___U3CPreviousValueU3Ek__BackingField;
	int32_t ___U3CCurrentValueU3Ek__BackingField;
	bool ___U3CThreadContextChangedU3Ek__BackingField;
};
struct AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95 
{
	Il2CppSharedGenericObject* ___U3CPreviousValueU3Ek__BackingField;
	Il2CppSharedGenericObject* ___U3CCurrentValueU3Ek__BackingField;
	bool ___U3CThreadContextChangedU3Ek__BackingField;
};
typedef Il2CppFullySharedGenericStruct AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429;
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	bool ___hasValue;
	double ___value;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
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
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	bool ___m_result;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	int32_t ___m_result;
};
struct VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA 
{
	bool ___Value;
	int32_t ___Code;
	String_t* ___Error;
};
struct VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 
{
	Il2CppSharedGenericObject* ___Value;
	int32_t ___Code;
	String_t* ___Error;
};
struct ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F 
{
	bool ___Item1;
	Il2CppSharedGenericObject* ___Item2;
};
struct ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A 
{
	Il2CppSharedGenericObject* ___Item1;
	Il2CppSharedGenericObject* ___Item2;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	RuntimeObject* ___m_stateMachine;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
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
struct IntPtr_t 
{
	void* ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
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
struct double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 
{
	double ___x;
	double ___y;
};
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 
{
	float ___x;
	float ___y;
};
struct int2_tB123E869131C6102341F8F9AA01726E0E7C2768D 
{
	int32_t ___x;
	int32_t ___y;
};
struct int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t2F9E450C2C2823F6E23E0595E10B0C80E767A5EB 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t740E037592A96E7E8D824D7CF3E3790037F2091F* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tB0224DB6B113CD7E4D53975D93EA5DFCD25B8632 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t266DA8B27DFB8A47C28B74C0EE7BE00F98FFB78E* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t414401B6580EEE02EA0A9B2F6FC48524ED3DC79C 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t4D235A5D59D16FB8C4C21E62079A2BA599CC7675* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t8CD20560501908B12A1FCFB823DBE951295584A7 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tC06D8ADA71E3D48C0058EBA3F862F3B15D55DA9F* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t64EF31B91C3E5BEE61B9489E95AAF85F18195D0B 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t5EC0156FF62B3DE5E55397DD191DC124F922325D* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t8F5A29035CACF8C81BED1C703A4238CF66CFBBB4 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t74562F42D0F261A7C152860BE04C5FE86E22EBE0* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tFC841874EB132B154E65160A8EA59CB503A013C7 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t6FE95C824EF764E0E054CC5C35CD48E56EE731E1* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tC9CFE327FF202DF24BDF178367E998349FEBF98D 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tE764C3523DD541F8904F125D2C42495D195C363D* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tD710285C76FC8E8DACF86649F9D39E60BF4BC9E1 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t6B948EB7364F83BDE1B3F1870384B96B4146D714* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tE4495D3CAD2B180F873326423A5F22C98BC78725 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t44BCD4A06A9459564E599F77D864DCEA036DBB7B* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t3B64F8F77E4D00222C41E6D45949E215BE00CFB2 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t035A10B20E9951D572890459DB38E9E939D3F8CC* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tBE311BD19322318D8D9F706B0B90F611E00DAF88 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tEA5517039BFF7D7365BC0D6C2CD544B56C697F40 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t8BA1E4BAD84F1F0BED9C0D49F5AA4D9F7A9553BE* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* ___m_task;
};
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	bool ___hasValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value;
};
struct Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB 
{
	bool ___hasValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value;
};
struct OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 
{
	bool ____initialized;
	Guid_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_result;
};
struct Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___m_result;
};
struct Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___m_result;
};
struct Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___m_result;
};
struct Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___m_result;
};
struct Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___m_result;
};
struct Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA ___m_result;
};
struct Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 ___m_result;
};
struct Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___m_result;
};
struct Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___m_result;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AsyncCausalityStatus_tC473F5BDD9EA7F23D03B554577173AC2FA15822C 
{
	int32_t ___value__;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	Il2CppMethodPointer ___m_completeCallback;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
	Il2CppMethodPointer ___m_completeCallback;
};
struct CausalityTraceLevel_t672BEB68BD9D2ED72A9EE022D37D68A28FA9939A 
{
	int32_t ___value__;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime;
	int16_t ____offsetMinutes;
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
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct UCircle_t867F766ACBC8203697A5637D6046595BBCA3A156 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___center;
	float ___radius;
};
struct UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___a;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___b;
	int32_t ___index;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB 
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
struct NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B 
{
	bool ___hasValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value;
};
struct Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___m_result;
};
struct Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___m_result;
};
struct Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___m_result;
};
struct AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___m_Result;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_CancellationToken;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_LinkedCancellation;
};
struct AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke* ___m_Result;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___m_CancellationToken;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_LinkedCancellation;
};
struct AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com** ___m_Result;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___m_CancellationToken;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_LinkedCancellation;
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___va;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___vb;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___vc;
	UCircle_t867F766ACBC8203697A5637D6046595BBCA3A156 ___c;
	float ___area;
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___indices;
};
struct Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643  : public MulticastDelegate_t
{
};
struct Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D  : public MulticastDelegate_t
{
};
struct Action_1_t0D3FDEB853658AAA91C8797C0476DDF845D5BBFF  : public MulticastDelegate_t
{
};
struct Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_Array;
	int32_t ___m_MaxSize;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB 
{
	NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 ___m_Array;
	int32_t ___m_MaxSize;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C 
{
	NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB ___m_Array;
	int32_t ___m_MaxSize;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_Array;
	int32_t ___m_MaxSize;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0 
{
	NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 ___m_Array;
	int32_t ___m_MaxSize;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct Array_1_t250B968A91CBE95FEEC415D43259633F051316FE 
{
	NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D ___m_Array;
	int32_t ___m_MaxSize;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct Array_1_tA484464E515777F9ED9D26DB75195C55A786304B 
{
	NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 ___m_Array;
	int32_t ___m_MaxSize;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct AsyncInstantiateOperation_1_t4ADCB11AF0D1CE8F6CBB592A95ED176851CE3C4F  : public AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40
{
};
struct AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB  : public AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40
{
};
struct Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___m_result;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken;
};
struct ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3_StaticFields
{
	ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* ___s_defaultArraySortHelper;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields
{
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___TrueTask;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___FalseTask;
	Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* ___Int32Tasks;
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
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_StaticFields
{
	double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 ___zero;
};
struct int2_tB123E869131C6102341F8F9AA01726E0E7C2768D_StaticFields
{
	int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___zero;
};
struct AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3_StaticFields
{
	Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E_StaticFields
{
	Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6_StaticFields
{
	Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36_StaticFields
{
	Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7_StaticFields
{
	Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7_StaticFields
{
	Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797_StaticFields
{
	Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t2F9E450C2C2823F6E23E0595E10B0C80E767A5EB_StaticFields
{
	Task_1_t740E037592A96E7E8D824D7CF3E3790037F2091F* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tB0224DB6B113CD7E4D53975D93EA5DFCD25B8632_StaticFields
{
	Task_1_t266DA8B27DFB8A47C28B74C0EE7BE00F98FFB78E* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t414401B6580EEE02EA0A9B2F6FC48524ED3DC79C_StaticFields
{
	Task_1_t4D235A5D59D16FB8C4C21E62079A2BA599CC7675* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t8CD20560501908B12A1FCFB823DBE951295584A7_StaticFields
{
	Task_1_tC06D8ADA71E3D48C0058EBA3F862F3B15D55DA9F* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t64EF31B91C3E5BEE61B9489E95AAF85F18195D0B_StaticFields
{
	Task_1_t5EC0156FF62B3DE5E55397DD191DC124F922325D* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t8F5A29035CACF8C81BED1C703A4238CF66CFBBB4_StaticFields
{
	Task_1_t74562F42D0F261A7C152860BE04C5FE86E22EBE0* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tFC841874EB132B154E65160A8EA59CB503A013C7_StaticFields
{
	Task_1_t6FE95C824EF764E0E054CC5C35CD48E56EE731E1* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tC9CFE327FF202DF24BDF178367E998349FEBF98D_StaticFields
{
	Task_1_tE764C3523DD541F8904F125D2C42495D195C363D* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tD710285C76FC8E8DACF86649F9D39E60BF4BC9E1_StaticFields
{
	Task_1_t6B948EB7364F83BDE1B3F1870384B96B4146D714* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A_StaticFields
{
	Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tE4495D3CAD2B180F873326423A5F22C98BC78725_StaticFields
{
	Task_1_t44BCD4A06A9459564E599F77D864DCEA036DBB7B* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B_StaticFields
{
	Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t3B64F8F77E4D00222C41E6D45949E215BE00CFB2_StaticFields
{
	Task_1_t035A10B20E9951D572890459DB38E9E939D3F8CC* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5_StaticFields
{
	Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tBE311BD19322318D8D9F706B0B90F611E00DAF88_StaticFields
{
	Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC_StaticFields
{
	Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F_StaticFields
{
	Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tEA5517039BFF7D7365BC0D6C2CD544B56C697F40_StaticFields
{
	Task_1_t8BA1E4BAD84F1F0BED9C0D49F5AA4D9F7A9553BE* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084_StaticFields
{
	Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* ___s_defaultResultTask;
};
struct Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0_StaticFields
{
	TaskFactory_1_tA691E2BC5961896B5A97C2F15650D3151CE60A00* ___s_defaultFactory;
};
struct Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41_StaticFields
{
	TaskFactory_1_t440BCA273D8F7D2BE5CAA88135480E6CF22A9715* ___s_defaultFactory;
};
struct Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_StaticFields
{
	TaskFactory_1_tAE919A7BAE255B9F6EF5F440E30D3AF6A9C9322E* ___s_defaultFactory;
};
struct Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F_StaticFields
{
	TaskFactory_1_tBDD9E403F37AB99920AC4B70C7BD7DB772111426* ___s_defaultFactory;
};
struct Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C_StaticFields
{
	TaskFactory_1_tC55B2865C881633A3CE05821411BAC6496587B16* ___s_defaultFactory;
};
struct Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4_StaticFields
{
	TaskFactory_1_t4181657D5A4477ABB1351E03D8206D2E69706C59* ___s_defaultFactory;
};
struct Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027_StaticFields
{
	TaskFactory_1_t2CA0293774EF3FA24EE2F38F0FF712FC572449ED* ___s_defaultFactory;
};
struct Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394_StaticFields
{
	TaskFactory_1_tACAB2D78674C9B330DA23758328DDAF5C7C982DA* ___s_defaultFactory;
};
struct Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1_StaticFields
{
	TaskFactory_1_tABB15DC046C0C6D8A287F9ECE57EBC9710BB4306* ___s_defaultFactory;
};
struct Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A_StaticFields
{
	TaskFactory_1_tF6400D4AA7BC2CCC6E1EDE284038E24B53334C48* ___s_defaultFactory;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B_StaticFields
{
	TaskFactory_1_tD1312B07567D037375AE1BC9E412FA736BE9A26C* ___s_defaultFactory;
};
struct Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239_StaticFields
{
	TaskFactory_1_t1FC6F041AB46A11726B4503E01C3D2C937910EC2* ___s_defaultFactory;
};
struct Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7_StaticFields
{
	TaskFactory_1_tA7344C51E9614CE506F6C6932EEC691776008D8E* ___s_defaultFactory;
};
struct AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_StaticFields
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_GlobalCancellation;
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
struct Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964_StaticFields
{
	TaskFactory_1_t9BADAC0CF805EB57D601FE0FDE41344D8C34C9AD* ___s_defaultFactory;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
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
struct Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8  : public RuntimeArray
{
	ALIGN_FIELD (8) Task_1_t4C228DE57804012969575431CFF12D57C875552D* m_Items[1];

	inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Task_1_t4C228DE57804012969575431CFF12D57C875552D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Task_1_t4C228DE57804012969575431CFF12D57C875552D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Task_1_t4C228DE57804012969575431CFF12D57C875552D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Task_1_t4C228DE57804012969575431CFF12D57C875552D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m512BFB65408F71E9C66D4E4E26C61CD638DC4B3B (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_mE732305914FBFBE640845378BDD9B31684A47131 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_src, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m8243601E23D93A1C5AE0DAEEB1EF637472590823 (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_m2385987230C627563ADAFF30E1021A05759D432D (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m04B53441840F1845CE7BA6A2705089550EB8BFD2 (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m0434907F47772CFD7CFCDF497CA73499DF17A660 (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_mB5D0ACE6E1A75EDA29CF4DF2BAF7693D670B500F (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 ___0_src, NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mA7CDEEDFC55FBF1CED8896DB86D53F012AABABB2 (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m6ABA55C9503F3EC2E1ABAB13B83E59A644DE48A6 (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_m069636457CFF8BF40D36D7EDBE9254F8ACAE0458 (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m331F4361F5DED80035F1E88BBDB17651FE6AA547 (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m89D949BD8F9096FE1BA1ED85899CFFBD73CD849C (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m47AC019B90ACC0B34A248AD9BF26FFF2C0FF9DE0 (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB ___0_src, NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mA27E26AE2C01F85D048DF595A0B091D9AB2F85F1 (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m0475712D05B7EDDE2944CDE8A84118FD3DE5C079 (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_mE8781CBEF6AF23CF32DECD9AC3D0D27C35B53913 (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_m6E943FAD2C16E051CD230D40B9E019072DBF54F9_fshared (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m8AA732E2587739B0742DA56F898B110B7DD53A66 (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m687BFFABACB0445639108DD2025B93398869588F (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m732E623BAA381DB8F3D76ADF72D6E77F4584FEE8 (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 ___0_src, NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mF6BAA5996F95F67D6470C00F51D537A99E821C48 (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m7F7AA29C545D159ACA9EEDEE084E0C42C403065E (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_m6DFBB5FDD0674D5EC0FD84AAEC72F6CA675B4BB5 (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mF8809BF4D122FB7E065C55A567CC2C168FB52B6E (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_mC457D96CA2E9BA8187A6E75515F977431E003212 (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_mA4040FB27AC56A03B7D3CE46FA55481CDB51CD3F (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D ___0_src, NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m16834832CCD09F7D4D5AE7A31308B437A3C37ED0 (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m851A10BE4C667ADD6BFDB33A55976FCAA9D84CCD (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_mFD45D308918A378057EAD42C6FC245963E172ADF (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mF6C966080B926D75CA413609C902BB0AEC386B15 (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m6190C54184E2AC106D934AAB2F2167A4941DA3E7 (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m243FF0F0603EE2FD3140F85B1D77350238A6C759 (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 ___0_src, NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m294381CD64F01D951BA5AD68B012318251A88005 (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_mCEF765AD8855B5697C89E98FA2A3ABD974D8E663 (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_mDF0C9F93DC391B8D928419BBD984E6073862F3CF (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocalValueChangedArgs_1__ctor_mE42A8DCCEF1217FD021FBD189C2BEDAD7FAE52F0 (AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30* __this, int32_t ___0_previousValue, int32_t ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBCE58B67D7100D1DFF3F431F7DF460E9C688745B_inline (Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643* __this, AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocalValueChangedArgs_1__ctor_mCD46AE17C8F65750A0FCD16854B467184DBB7517_gshared (AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95* __this, Il2CppSharedGenericObject* ___0_previousValue, Il2CppSharedGenericObject* ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m15B09A14760255FA046745C030377D21CE4BE793_gshared_inline (Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D* __this, AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocalValueChangedArgs_1__ctor_m8FC80AC8E561902AB0B4888598E9F43818996132_fshared (AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429* __this, Il2CppFullySharedGenericAny ___0_previousValue, Il2CppFullySharedGenericAny ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskMethodBuilder_1_GetTaskForResult_m77E79732C249B6B4254DF543FA0A2FAE26803011 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m0E1289A1CCF695E50715221524D7B407E43BE28C (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0582B44433D671C064F3AE9A809A3EA5FE256781 (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskMethodBuilder_1_get_Task_m7240951B6E9A5DB275CDFCA78339FFEE26BA8802 (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mF447742220AD60B921E950DB392B44F553021674 (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_m96AB4AB175E7A53B8211E82B7CC642AD7E340637 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskMethodBuilder_1_GetTaskForResult_m6B3189831D5E29F5299A08939FE67EE7D6A55CF6 (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m45CC6CDCCB981248C56909C9D64A2995260A2621 (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m4A9FF4B718DBEE05F481602FC54B269D0A99F2FD (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskMethodBuilder_1_get_Task_mC10888726AB1CF669A543F39EC82C1B8B296C524 (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m8D3E36AB4BDE6C83EAEBA04A2495EDF3D5F17E7E (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskCache_CreateCacheableTask_TisNullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_m5C538BE589257259BE446E11D4BF68C8B5C2B2E9 (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskMethodBuilder_1_GetTaskForResult_m56752E94BB4DD52A5AEAC4F698DFEEDF9275A857 (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m7BBE50D093A6F0F6CD80D0AEF961E9B1F489EB15 (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m354CAA69E85D02ECDA58F4E3ED331615B9B286D9 (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskMethodBuilder_1_get_Task_mFF107A582F8CB464DC795B93946486F5CB72C967 (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mAC82BD4DDEA1A5100605394F9936B0F565FCC507 (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_m5C1E3DE59946A59843B982943FCCD902F176696E (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskMethodBuilder_1_GetTaskForResult_m7C0AB57139BF368AC6D19E94BA17FAF38EE26F37 (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_mECC96B0C1F0FF06B9F41396F42346083FBF52CA7 (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m8FD5A31BDA892931A44F70190116C626F5FE76CF (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskMethodBuilder_1_get_Task_m1BFEC2D85643659CCFCB0055986B849F09DB6DE2 (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m4BFE73FA4ECA4AE630CE7CBD188EAC1FE9722429 (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_m4C2678F8646CE15535AA9FF141054C5D350E6E84 (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskMethodBuilder_1_GetTaskForResult_m20835BD24CC7D28A02C3240F74B31E4DB2D2EE6B (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m63A166803A98E96536A3D21D7E9E8F8FFF5761D0 (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m8B35722630A089A6AE51C45F0B6A16B21AE914A0 (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskMethodBuilder_1_get_Task_m7164E00326DC7BC82FE12A781478471DD7A1CE69 (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mC20EE5CCB1CCB1C6150DA69D0756E83E1547BE6A (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_mD2FD1BA37CD7BC9F997D797EF6CBD0208F55D7E2 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskMethodBuilder_1_GetTaskForResult_m81DB6DAED4F1821904FA836D73BB5CE8FBE778EE (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m48D840CA62136D390874D338ED6E57849E33490B (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m7814370659E8E3550E3A679C1F2F516592198487 (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskMethodBuilder_1_get_Task_mB36BC37F05CC1BD3EDB9EC66B9BBEA7DE33F3D03 (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m0A2664C4950556338199629BD2C98586D70A0813 (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskCache_CreateCacheableTask_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m443D01DF96CD3252CAFF048A991441D94DE3B66B (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskMethodBuilder_1_GetTaskForResult_m67F6A4AD611FF3FB5A9FF21B8F6AF483DAC09C6C_gshared (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_mB50D5AA503E72529C566F4EE0137B963F3FE5673_gshared (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m359B80F1DDD3F620C7468C447D5348089529F181_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskMethodBuilder_1_get_Task_m48238D6774C93E57C332776A6554A23FDB5F96DA_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* JitHelpers_UnsafeCast_TisIl2CppSharedGenericObject_m5D9454AE1AF0205501A6EFB33F3D7A80B0DC08F2_gshared (RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m4D4BD509ECDCE011E9B576253B3A653E552612B9_gshared (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskCache_CreateCacheableTask_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_m3753A58FAA7436486AA441B6A740C0FB1F81DADA_gshared (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskMethodBuilder_1_GetTaskForResult_mE32CD0E7E25478FB00E104356F76E6629CA92A38_gshared (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m0CB92709B2014A703FB57915E6ECB17C24789664_gshared (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mD18342A940803A50A2B8530196601B5A54707F8D_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskMethodBuilder_1_get_Task_m49E13587633B83D706E7F85D3122B6583813C2D9_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m541BFC0D49AFB557E47F03FEE5C368C138FA8128_gshared (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mA8F3E545AE2A2D8B0D14213741CF6F3FCAC71F0F_gshared (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskMethodBuilder_1_GetTaskForResult_m067DB75F372431CFB5C8A8F9427357714414B5BF_gshared (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m9203F629B87AA23B46F58CBDDBAD8CD60184C8B9_gshared (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mA36BEF799A8E58526F3FC16F10E1FA407B903FE4_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskMethodBuilder_1_get_Task_m92E592769E741DEDCDD787CC7ADBD08C06A32314_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m19D57D02F2C0DEE7393502186931AB78CEF41EEE_gshared (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mC640EA46869E11911ABB7A864919549B88CFF94C_gshared (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskMethodBuilder_1_GetTaskForResult_mF084BE519715FD8045AB1BC65E80A349906F2073_gshared (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m2B77B5733D9DF23D82119B8392391F2E530C1435_gshared (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mBE3A4804C5B8834205E6DB359356A74C4CE559D7_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskMethodBuilder_1_get_Task_m39CA24472D2EEFF162623CFA59CE7431A2715B56_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m2A47910E1599CEE2DB645BACAB80F9248911C45F_gshared (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_m49ACC1E311C97A79F7CCC1D8DB7BBDB1142D37ED_gshared (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* AsyncTaskMethodBuilder_1_GetTaskForResult_mC76781448C23EA08E3EE37F20247AFD99A869798 (VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m51BE38E64CCD1B4F9A0BEC04EF05C8D4E071B6BD (Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* __this, VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m386BC536DBFC3113B45C3168B2E76F60074A71FB (AsyncTaskMethodBuilder_1_tBE311BD19322318D8D9F706B0B90F611E00DAF88* __this, VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* AsyncTaskMethodBuilder_1_get_Task_mC63E58760F7595F4A540A440F1CDAB2CA6B212EA (AsyncTaskMethodBuilder_1_tBE311BD19322318D8D9F706B0B90F611E00DAF88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mB4766E73551B923B9A2E4FEB6D557326E6A81055 (Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* __this, VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* AsyncTaskCache_CreateCacheableTask_TisVRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA_m1BD09383B66AD091B6BAF54B1577D80111472486 (VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* AsyncTaskMethodBuilder_1_GetTaskForResult_m45B66FEF05C9ED7403B1D96ABD6E3F6301419965_gshared (VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m4DA267D25DABBEA111AF6FC7A0977417845EAB3A_gshared (Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* __this, VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m62AA35EDA8AF8F6A30858A818177900F98830EFF_gshared (AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC* __this, VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* AsyncTaskMethodBuilder_1_get_Task_m89FA5D9935912E607C0B108A35E43597ADA04064_gshared (AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m60404CECCE3BD95F7376A606FC30A4ED02F3AC7D_gshared (Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* __this, VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* AsyncTaskCache_CreateCacheableTask_TisVRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2_m401D33FD896AE2D1DFFC582A7041A73695E18DAF_gshared (VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskMethodBuilder_1_GetTaskForResult_m46974E7C50DB99B6F03020A87DB2DEDF4334862A_gshared (ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m35667C7E8DFA2602F26A7302980F2450EDBD28FA_gshared (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mAE4006FB62DEEE49C59A099D0AF0262DC87FD274_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskMethodBuilder_1_get_Task_mE609D90E26A71ADDE2ADBB19849044C7CA4C4D4B_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m850623421A0EDC334FF9766142F6A0EB81E94F31_gshared (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskCache_CreateCacheableTask_TisValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F_m50D5F3901C4DD732985EF18C8178CF77A93AB0F6_gshared (ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* AsyncTaskMethodBuilder_1_GetTaskForResult_mDA7886360E9B059F5D70D923ACD6BB7056232D55_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m3E9263D31F070E985E55BE9C9BDD539433CE9499_gshared (Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m5A41D891270278B3916431CB436C140145ADC5BB_gshared (AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* AsyncTaskMethodBuilder_1_get_Task_mDBE81F42AD4393A66CC4DB4863199628F00287C1_gshared (AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mFBD6B2A766CBD705A5B785A55CF20350ADDA7041_gshared (Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* AsyncTaskCache_CreateCacheableTask_TisValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A_m065F3734C0CFD641D98D9FE1D2F018A142787A30_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_result, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF (RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntrospectiveSortUtilities_FloorLog2PlusOne_m33AC60574EC2B80A3B7084361A3736D4CFE91F6D (int32_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m512BFB65408F71E9C66D4E4E26C61CD638DC4B3B (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_mE732305914FBFBE640845378BDD9B31684A47131 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_src, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m8243601E23D93A1C5AE0DAEEB1EF637472590823 (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_m2385987230C627563ADAFF30E1021A05759D432D (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m04B53441840F1845CE7BA6A2705089550EB8BFD2 (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m0434907F47772CFD7CFCDF497CA73499DF17A660 (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_mB5D0ACE6E1A75EDA29CF4DF2BAF7693D670B500F (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 ___0_src, NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mA7CDEEDFC55FBF1CED8896DB86D53F012AABABB2 (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m6ABA55C9503F3EC2E1ABAB13B83E59A644DE48A6 (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_m46570D0CEFE63AFB47A56635DFC5DF099A9DA3FD_inline (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_m069636457CFF8BF40D36D7EDBE9254F8ACAE0458 (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m34BE034AF1D89B8A7A43C8DF4AEDECCC6598FE7B_inline (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m8E3B19729B372A03699E419E1E8D61B921CE627B_inline (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m331F4361F5DED80035F1E88BBDB17651FE6AA547 (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m89D949BD8F9096FE1BA1ED85899CFFBD73CD849C (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m47AC019B90ACC0B34A248AD9BF26FFF2C0FF9DE0 (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB ___0_src, NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mA27E26AE2C01F85D048DF595A0B091D9AB2F85F1 (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m0475712D05B7EDDE2944CDE8A84118FD3DE5C079 (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_m1D383B3A1AFF308D1FF726D9D4B203B61A7DA419_inline (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_mE8781CBEF6AF23CF32DECD9AC3D0D27C35B53913 (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m99946527C2E32C27D2E01B126C2FA42AF9B4C900_inline (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_mC5FFB908EB4AA2E7B1763EB469575BD7D1064A1E_inline (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void Array_1_Dispose_m6E943FAD2C16E051CD230D40B9E019072DBF54F9 (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, const RuntimeMethod* method)
{
	((  void (*) (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D*, const RuntimeMethod*))Array_1_Dispose_m6E943FAD2C16E051CD230D40B9E019072DBF54F9_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m8AA732E2587739B0742DA56F898B110B7DD53A66 (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m687BFFABACB0445639108DD2025B93398869588F (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m732E623BAA381DB8F3D76ADF72D6E77F4584FEE8 (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 ___0_src, NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mF6BAA5996F95F67D6470C00F51D537A99E821C48 (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m7F7AA29C545D159ACA9EEDEE084E0C42C403065E (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_mD452ED2E9197E98E649C02EB16AC88FE9DC5C57F_inline (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_m6DFBB5FDD0674D5EC0FD84AAEC72F6CA675B4BB5 (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m90ED08A8599484401DE3939C59D8FE24D82B1D96_inline (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mC95DACEAA72A748027B5ED973E9D111B14CC378E_inline (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mF8809BF4D122FB7E065C55A567CC2C168FB52B6E (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_mC457D96CA2E9BA8187A6E75515F977431E003212 (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_mA4040FB27AC56A03B7D3CE46FA55481CDB51CD3F (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D ___0_src, NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m16834832CCD09F7D4D5AE7A31308B437A3C37ED0 (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m851A10BE4C667ADD6BFDB33A55976FCAA9D84CCD (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_m805D454932F0DDB636B0E273DD0597EBD4251102_inline (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_mFD45D308918A378057EAD42C6FC245963E172ADF (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mAD7CC2792BD7E04169E1F6BE13A79E82506A9503_inline (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mB2BB76E27C7772E7D2DCBCDB4AA5B648A3226079_inline (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mF6C966080B926D75CA413609C902BB0AEC386B15 (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m6190C54184E2AC106D934AAB2F2167A4941DA3E7 (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m243FF0F0603EE2FD3140F85B1D77350238A6C759 (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 ___0_src, NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m294381CD64F01D951BA5AD68B012318251A88005 (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_mCEF765AD8855B5697C89E98FA2A3ABD974D8E663 (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_mBBE95AECF029556CF28AF201FF45ADFA23C7E500_inline (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_mDF0C9F93DC391B8D928419BBD984E6073862F3CF (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m4DA22E3B49F53DFB647D3A164818F93E6C719A71_inline (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m9D209EFA9DBD8484A0CDD800845D2D7C06DB0523_inline (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInstantiateOperation__ctor_m0A63AF9DEC342106170FA1821748827015B47435 (AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40* __this, intptr_t ___0_ptr, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExecutionContext_GetLocalValue_mD7817BA06511586607DB09BC0B147294D11961ED (RuntimeObject* ___0_local, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_SetLocalValue_m47C23A6C729166E0F87ED79D268F7043AD58E1A5 (RuntimeObject* ___0_local, RuntimeObject* ___1_newValue, bool ___2_needChangeNotifications, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocalValueChangedArgs_1__ctor_mE42A8DCCEF1217FD021FBD189C2BEDAD7FAE52F0 (AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30* __this, int32_t ___0_previousValue, int32_t ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBCE58B67D7100D1DFF3F431F7DF460E9C688745B_inline (Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643* __this, AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30 ___0_obj, const RuntimeMethod* method) ;
inline void AsyncLocalValueChangedArgs_1__ctor_mCD46AE17C8F65750A0FCD16854B467184DBB7517 (AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95* __this, Il2CppSharedGenericObject* ___0_previousValue, Il2CppSharedGenericObject* ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method)
{
	((  void (*) (AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, bool, const RuntimeMethod*))AsyncLocalValueChangedArgs_1__ctor_mCD46AE17C8F65750A0FCD16854B467184DBB7517_gshared)(__this, ___0_previousValue, ___1_currentValue, ___2_contextChanged, method);
}
inline void Action_1_Invoke_m15B09A14760255FA046745C030377D21CE4BE793_inline (Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D* __this, AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D*, AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95, const RuntimeMethod*))Action_1_Invoke_m15B09A14760255FA046745C030377D21CE4BE793_gshared_inline)(__this, ___0_obj, method);
}
inline void AsyncLocalValueChangedArgs_1__ctor_m8FC80AC8E561902AB0B4888598E9F43818996132 (AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429* __this, Il2CppFullySharedGenericAny ___0_previousValue, Il2CppFullySharedGenericAny ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method)
{
	((  void (*) (AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, bool, const RuntimeMethod*))AsyncLocalValueChangedArgs_1__ctor_m8FC80AC8E561902AB0B4888598E9F43818996132_fshared)((AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429*)__this, ___0_previousValue, ___1_currentValue, ___2_contextChanged, method);
}
inline void Task_1__ctor_m6FD25DABCE184917175389E391C873409261DDB0 (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskMethodBuilder_1_GetTaskForResult_m77E79732C249B6B4254DF543FA0A2FAE26803011 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335 (int32_t ___0_traceLevel, int32_t ___1_taskId, int32_t ___2_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C (int32_t ___0_taskId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m0E1289A1CCF695E50715221524D7B407E43BE28C (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058 (String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0582B44433D671C064F3AE9A809A3EA5FE256781 (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskMethodBuilder_1_get_Task_m7240951B6E9A5DB275CDFCA78339FFEE26BA8802 (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, RuntimeObject* ___0_exceptionObject, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_tokenToRecord, RuntimeObject* ___1_cancellationException, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mF447742220AD60B921E950DB392B44F553021674 (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_m96AB4AB175E7A53B8211E82B7CC642AD7E340637 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) ;
inline void Task_1__ctor_mD3FC7E2EF363236809F13343A64FC880CA6C74FA (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskMethodBuilder_1_GetTaskForResult_m6B3189831D5E29F5299A08939FE67EE7D6A55CF6 (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m45CC6CDCCB981248C56909C9D64A2995260A2621 (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m4A9FF4B718DBEE05F481602FC54B269D0A99F2FD (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskMethodBuilder_1_get_Task_mC10888726AB1CF669A543F39EC82C1B8B296C524 (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m8D3E36AB4BDE6C83EAEBA04A2495EDF3D5F17E7E (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskCache_CreateCacheableTask_TisNullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_m5C538BE589257259BE446E11D4BF68C8B5C2B2E9 (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) ;
inline void Task_1__ctor_mC8EFB6F199A7B074BA039A2B4CEB2DAA776F959D (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskMethodBuilder_1_GetTaskForResult_m56752E94BB4DD52A5AEAC4F698DFEEDF9275A857 (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m7BBE50D093A6F0F6CD80D0AEF961E9B1F489EB15 (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m354CAA69E85D02ECDA58F4E3ED331615B9B286D9 (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskMethodBuilder_1_get_Task_mFF107A582F8CB464DC795B93946486F5CB72C967 (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mAC82BD4DDEA1A5100605394F9936B0F565FCC507 (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_m5C1E3DE59946A59843B982943FCCD902F176696E (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) ;
inline void Task_1__ctor_m2A24686E3CD6ADE147BFEB3CD25DDEB30D830AE5 (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskMethodBuilder_1_GetTaskForResult_m7C0AB57139BF368AC6D19E94BA17FAF38EE26F37 (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_mECC96B0C1F0FF06B9F41396F42346083FBF52CA7 (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m8FD5A31BDA892931A44F70190116C626F5FE76CF (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskMethodBuilder_1_get_Task_m1BFEC2D85643659CCFCB0055986B849F09DB6DE2 (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m4BFE73FA4ECA4AE630CE7CBD188EAC1FE9722429 (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_m4C2678F8646CE15535AA9FF141054C5D350E6E84 (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
inline void Task_1__ctor_m345E75D3154D6F145F3BC063812295BC72297854 (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskMethodBuilder_1_GetTaskForResult_m20835BD24CC7D28A02C3240F74B31E4DB2D2EE6B (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m63A166803A98E96536A3D21D7E9E8F8FFF5761D0 (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m8B35722630A089A6AE51C45F0B6A16B21AE914A0 (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskMethodBuilder_1_get_Task_m7164E00326DC7BC82FE12A781478471DD7A1CE69 (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mC20EE5CCB1CCB1C6150DA69D0756E83E1547BE6A (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskCache_CreateCacheableTask_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_mD2FD1BA37CD7BC9F997D797EF6CBD0208F55D7E2 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
inline void Task_1__ctor_m9AD5FE1A0F48B1C1AD8614F87739B31DD3DE3568 (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskMethodBuilder_1_GetTaskForResult_m81DB6DAED4F1821904FA836D73BB5CE8FBE778EE (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m48D840CA62136D390874D338ED6E57849E33490B (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m7814370659E8E3550E3A679C1F2F516592198487 (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskMethodBuilder_1_get_Task_mB36BC37F05CC1BD3EDB9EC66B9BBEA7DE33F3D03 (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m0A2664C4950556338199629BD2C98586D70A0813 (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskCache_CreateCacheableTask_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m443D01DF96CD3252CAFF048A991441D94DE3B66B (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
inline void Task_1__ctor_mB69E08DDFCF368BC5ACC43CC245DF9583AB4E038 (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
inline Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskMethodBuilder_1_GetTaskForResult_m67F6A4AD611FF3FB5A9FF21B8F6AF483DAC09C6C (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* (*) (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_m67F6A4AD611FF3FB5A9FF21B8F6AF483DAC09C6C_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_mB50D5AA503E72529C566F4EE0137B963F3FE5673 (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F*, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, const RuntimeMethod*))Task_1_TrySetResult_mB50D5AA503E72529C566F4EE0137B963F3FE5673_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m359B80F1DDD3F620C7468C447D5348089529F181 (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797*, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m359B80F1DDD3F620C7468C447D5348089529F181_gshared)(__this, ___0_result, method);
}
inline Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskMethodBuilder_1_get_Task_m48238D6774C93E57C332776A6554A23FDB5F96DA (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* (*) (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m48238D6774C93E57C332776A6554A23FDB5F96DA_gshared)(__this, method);
}
inline Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* JitHelpers_UnsafeCast_TisTask_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F_mE080E821ED209DAF60F6AB8C9A449191B4F9C6CC (RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	return ((  Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* (*) (RuntimeObject*, const RuntimeMethod*))JitHelpers_UnsafeCast_TisIl2CppSharedGenericObject_m5D9454AE1AF0205501A6EFB33F3D7A80B0DC08F2_gshared)(___0_o, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB (uintptr_t ___0_value1, uintptr_t ___1_value2, const RuntimeMethod* method) ;
inline void Task_1__ctor_m4D4BD509ECDCE011E9B576253B3A653E552612B9 (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F*, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, const RuntimeMethod*))Task_1__ctor_m4D4BD509ECDCE011E9B576253B3A653E552612B9_gshared)(__this, ___0_result, method);
}
inline Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskCache_CreateCacheableTask_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_m3753A58FAA7436486AA441B6A740C0FB1F81DADA (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* (*) (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_m3753A58FAA7436486AA441B6A740C0FB1F81DADA_gshared)(___0_result, method);
}
inline void Task_1__ctor_m9AF80B7E21D4365B610C21031E29FCB83CD32D27 (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
inline Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskMethodBuilder_1_GetTaskForResult_mE32CD0E7E25478FB00E104356F76E6629CA92A38 (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* (*) (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_mE32CD0E7E25478FB00E104356F76E6629CA92A38_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_m0CB92709B2014A703FB57915E6ECB17C24789664 (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7*, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387, const RuntimeMethod*))Task_1_TrySetResult_m0CB92709B2014A703FB57915E6ECB17C24789664_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_mD18342A940803A50A2B8530196601B5A54707F8D (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A*, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mD18342A940803A50A2B8530196601B5A54707F8D_gshared)(__this, ___0_result, method);
}
inline Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskMethodBuilder_1_get_Task_m49E13587633B83D706E7F85D3122B6583813C2D9 (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* (*) (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m49E13587633B83D706E7F85D3122B6583813C2D9_gshared)(__this, method);
}
inline Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* JitHelpers_UnsafeCast_TisTask_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7_m5961D8081C19D6877260F9C7EFFF6C6EBF9365D3 (RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	return ((  Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* (*) (RuntimeObject*, const RuntimeMethod*))JitHelpers_UnsafeCast_TisIl2CppSharedGenericObject_m5D9454AE1AF0205501A6EFB33F3D7A80B0DC08F2_gshared)(___0_o, method);
}
inline void Task_1__ctor_m541BFC0D49AFB557E47F03FEE5C368C138FA8128 (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7*, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387, const RuntimeMethod*))Task_1__ctor_m541BFC0D49AFB557E47F03FEE5C368C138FA8128_gshared)(__this, ___0_result, method);
}
inline Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mA8F3E545AE2A2D8B0D14213741CF6F3FCAC71F0F (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* (*) (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mA8F3E545AE2A2D8B0D14213741CF6F3FCAC71F0F_gshared)(___0_result, method);
}
inline void Task_1__ctor_m75C1D611CBE6A149C79A322EA8F1CF2E65865149 (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
inline Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskMethodBuilder_1_GetTaskForResult_m067DB75F372431CFB5C8A8F9427357714414B5BF (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* (*) (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_m067DB75F372431CFB5C8A8F9427357714414B5BF_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_m9203F629B87AA23B46F58CBDDBAD8CD60184C8B9 (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C*, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8, const RuntimeMethod*))Task_1_TrySetResult_m9203F629B87AA23B46F58CBDDBAD8CD60184C8B9_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_mA36BEF799A8E58526F3FC16F10E1FA407B903FE4 (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B*, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mA36BEF799A8E58526F3FC16F10E1FA407B903FE4_gshared)(__this, ___0_result, method);
}
inline Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskMethodBuilder_1_get_Task_m92E592769E741DEDCDD787CC7ADBD08C06A32314 (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* (*) (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m92E592769E741DEDCDD787CC7ADBD08C06A32314_gshared)(__this, method);
}
inline Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* JitHelpers_UnsafeCast_TisTask_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C_m9166DCF087B082FD222A55A6B16A55E31E5C8259 (RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	return ((  Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* (*) (RuntimeObject*, const RuntimeMethod*))JitHelpers_UnsafeCast_TisIl2CppSharedGenericObject_m5D9454AE1AF0205501A6EFB33F3D7A80B0DC08F2_gshared)(___0_o, method);
}
inline void Task_1__ctor_m19D57D02F2C0DEE7393502186931AB78CEF41EEE (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C*, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8, const RuntimeMethod*))Task_1__ctor_m19D57D02F2C0DEE7393502186931AB78CEF41EEE_gshared)(__this, ___0_result, method);
}
inline Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mC640EA46869E11911ABB7A864919549B88CFF94C (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* (*) (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mC640EA46869E11911ABB7A864919549B88CFF94C_gshared)(___0_result, method);
}
inline void Task_1__ctor_m2D1462857395F1C85B4A7E79CDD63B5BB391A0FC (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
inline Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskMethodBuilder_1_GetTaskForResult_mF084BE519715FD8045AB1BC65E80A349906F2073 (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* (*) (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_mF084BE519715FD8045AB1BC65E80A349906F2073_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_m2B77B5733D9DF23D82119B8392391F2E530C1435 (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4*, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D, const RuntimeMethod*))Task_1_TrySetResult_m2B77B5733D9DF23D82119B8392391F2E530C1435_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_mBE3A4804C5B8834205E6DB359356A74C4CE559D7 (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5*, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mBE3A4804C5B8834205E6DB359356A74C4CE559D7_gshared)(__this, ___0_result, method);
}
inline Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskMethodBuilder_1_get_Task_m39CA24472D2EEFF162623CFA59CE7431A2715B56 (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* (*) (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m39CA24472D2EEFF162623CFA59CE7431A2715B56_gshared)(__this, method);
}
inline Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* JitHelpers_UnsafeCast_TisTask_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4_mCF03DE27861770061661F941FD86938EB0EAB19B (RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	return ((  Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* (*) (RuntimeObject*, const RuntimeMethod*))JitHelpers_UnsafeCast_TisIl2CppSharedGenericObject_m5D9454AE1AF0205501A6EFB33F3D7A80B0DC08F2_gshared)(___0_o, method);
}
inline void Task_1__ctor_m2A47910E1599CEE2DB645BACAB80F9248911C45F (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4*, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D, const RuntimeMethod*))Task_1__ctor_m2A47910E1599CEE2DB645BACAB80F9248911C45F_gshared)(__this, ___0_result, method);
}
inline Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_m49ACC1E311C97A79F7CCC1D8DB7BBDB1142D37ED (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* (*) (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_m49ACC1E311C97A79F7CCC1D8DB7BBDB1142D37ED_gshared)(___0_result, method);
}
inline void Task_1__ctor_m55B3BCD0614CBEE114033B791BDFE5DF7B169063 (Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* AsyncTaskMethodBuilder_1_GetTaskForResult_mC76781448C23EA08E3EE37F20247AFD99A869798 (VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m51BE38E64CCD1B4F9A0BEC04EF05C8D4E071B6BD (Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* __this, VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m386BC536DBFC3113B45C3168B2E76F60074A71FB (AsyncTaskMethodBuilder_1_tBE311BD19322318D8D9F706B0B90F611E00DAF88* __this, VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* AsyncTaskMethodBuilder_1_get_Task_mC63E58760F7595F4A540A440F1CDAB2CA6B212EA (AsyncTaskMethodBuilder_1_tBE311BD19322318D8D9F706B0B90F611E00DAF88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mB4766E73551B923B9A2E4FEB6D557326E6A81055 (Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* __this, VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* AsyncTaskCache_CreateCacheableTask_TisVRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA_m1BD09383B66AD091B6BAF54B1577D80111472486 (VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA ___0_result, const RuntimeMethod* method) ;
inline void Task_1__ctor_m3BBE27E03E9B9A65448D90B4567A451A196F16B4 (Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
inline Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* AsyncTaskMethodBuilder_1_GetTaskForResult_m45B66FEF05C9ED7403B1D96ABD6E3F6301419965 (VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* (*) (VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_m45B66FEF05C9ED7403B1D96ABD6E3F6301419965_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_m4DA267D25DABBEA111AF6FC7A0977417845EAB3A (Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* __this, VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394*, VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2, const RuntimeMethod*))Task_1_TrySetResult_m4DA267D25DABBEA111AF6FC7A0977417845EAB3A_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m62AA35EDA8AF8F6A30858A818177900F98830EFF (AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC* __this, VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC*, VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m62AA35EDA8AF8F6A30858A818177900F98830EFF_gshared)(__this, ___0_result, method);
}
inline Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* AsyncTaskMethodBuilder_1_get_Task_m89FA5D9935912E607C0B108A35E43597ADA04064 (AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* (*) (AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m89FA5D9935912E607C0B108A35E43597ADA04064_gshared)(__this, method);
}
inline Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* JitHelpers_UnsafeCast_TisTask_1_tCADA413A1E83F90F8C592932F204F3E304E5E394_m4D4C5C5CC07E9C358D0B482238B9F27A392B89E1 (RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	return ((  Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* (*) (RuntimeObject*, const RuntimeMethod*))JitHelpers_UnsafeCast_TisIl2CppSharedGenericObject_m5D9454AE1AF0205501A6EFB33F3D7A80B0DC08F2_gshared)(___0_o, method);
}
inline void Task_1__ctor_m60404CECCE3BD95F7376A606FC30A4ED02F3AC7D (Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* __this, VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394*, VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2, const RuntimeMethod*))Task_1__ctor_m60404CECCE3BD95F7376A606FC30A4ED02F3AC7D_gshared)(__this, ___0_result, method);
}
inline Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* AsyncTaskCache_CreateCacheableTask_TisVRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2_m401D33FD896AE2D1DFFC582A7041A73695E18DAF (VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* (*) (VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisVRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2_m401D33FD896AE2D1DFFC582A7041A73695E18DAF_gshared)(___0_result, method);
}
inline void Task_1__ctor_m773E32A0278D4184509216516F51E633D556249D (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
inline Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskMethodBuilder_1_GetTaskForResult_m46974E7C50DB99B6F03020A87DB2DEDF4334862A (ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* (*) (ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_m46974E7C50DB99B6F03020A87DB2DEDF4334862A_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_m35667C7E8DFA2602F26A7302980F2450EDBD28FA (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1*, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F, const RuntimeMethod*))Task_1_TrySetResult_m35667C7E8DFA2602F26A7302980F2450EDBD28FA_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_mAE4006FB62DEEE49C59A099D0AF0262DC87FD274 (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F*, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mAE4006FB62DEEE49C59A099D0AF0262DC87FD274_gshared)(__this, ___0_result, method);
}
inline Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskMethodBuilder_1_get_Task_mE609D90E26A71ADDE2ADBB19849044C7CA4C4D4B (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* (*) (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mE609D90E26A71ADDE2ADBB19849044C7CA4C4D4B_gshared)(__this, method);
}
inline Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* JitHelpers_UnsafeCast_TisTask_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1_m7286BF58224B81BDD4C8B670A0756D3D47C9EB85 (RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	return ((  Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* (*) (RuntimeObject*, const RuntimeMethod*))JitHelpers_UnsafeCast_TisIl2CppSharedGenericObject_m5D9454AE1AF0205501A6EFB33F3D7A80B0DC08F2_gshared)(___0_o, method);
}
inline void Task_1__ctor_m850623421A0EDC334FF9766142F6A0EB81E94F31 (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1*, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F, const RuntimeMethod*))Task_1__ctor_m850623421A0EDC334FF9766142F6A0EB81E94F31_gshared)(__this, ___0_result, method);
}
inline Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskCache_CreateCacheableTask_TisValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F_m50D5F3901C4DD732985EF18C8178CF77A93AB0F6 (ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* (*) (ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F_m50D5F3901C4DD732985EF18C8178CF77A93AB0F6_gshared)(___0_result, method);
}
inline void Task_1__ctor_m77A01D2C65CD6690668562EFFAB7A37C41A3235D (Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
inline Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* AsyncTaskMethodBuilder_1_GetTaskForResult_mDA7886360E9B059F5D70D923ACD6BB7056232D55 (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* (*) (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_mDA7886360E9B059F5D70D923ACD6BB7056232D55_gshared)(___0_result, method);
}
inline bool Task_1_TrySetResult_m3E9263D31F070E985E55BE9C9BDD539433CE9499 (Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*))Task_1_TrySetResult_m3E9263D31F070E985E55BE9C9BDD539433CE9499_gshared)(__this, ___0_result, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_m5A41D891270278B3916431CB436C140145ADC5BB (AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m5A41D891270278B3916431CB436C140145ADC5BB_gshared)(__this, ___0_result, method);
}
inline Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* AsyncTaskMethodBuilder_1_get_Task_mDBE81F42AD4393A66CC4DB4863199628F00287C1 (AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* (*) (AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mDBE81F42AD4393A66CC4DB4863199628F00287C1_gshared)(__this, method);
}
inline Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* JitHelpers_UnsafeCast_TisTask_1_t60702DD15F7E8DA26F8418312C251A9303E5309A_m687D72D7896B552F94F2DB4E931073357D9309D1 (RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	return ((  Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* (*) (RuntimeObject*, const RuntimeMethod*))JitHelpers_UnsafeCast_TisIl2CppSharedGenericObject_m5D9454AE1AF0205501A6EFB33F3D7A80B0DC08F2_gshared)(___0_o, method);
}
inline void Task_1__ctor_mFBD6B2A766CBD705A5B785A55CF20350ADDA7041 (Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*))Task_1__ctor_mFBD6B2A766CBD705A5B785A55CF20350ADDA7041_gshared)(__this, ___0_result, method);
}
inline Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* AsyncTaskCache_CreateCacheableTask_TisValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A_m065F3734C0CFD641D98D9FE1D2F018A142787A30 (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* (*) (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*))AsyncTaskCache_CreateCacheableTask_TisValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A_m065F3734C0CFD641D98D9FE1D2F018A142787A30_gshared)(___0_result, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11967
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Sort_m67A1C1526BE40E2C011C26532C1F58AFBB9BA21E_fshared (ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit);
	//<source_info:<no-source>:1>
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			RuntimeObject* L_0 = ___4_comparer;
			if (!L_0)
			{
				goto IL_000d_1;
			}
		}
		{
			RuntimeObject* L_1 = ___4_comparer;
			Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_2;
			L_2 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
			if ((!(((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*)L_2))))
			{
				goto IL_0014_1;
			}
		}

IL_000d_1:
		{
			Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_3;
			L_3 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
			___4_comparer = (RuntimeObject*)L_3;
		}

IL_0014_1:
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_keys;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___1_values;
			int32_t L_6 = ___2_index;
			int32_t L_7 = ___3_length;
			RuntimeObject* L_8 = ___4_comparer;
			CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)),il2cpp_codegen_runtime_class_init_inline);
			((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
			goto IL_003c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		if(il2cpp_codegen_class_is_assignable_from (ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002f;
		}
		throw e;
	}

CATCH_0022:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = ((IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)IL2CPP_GET_ACTIVE_EXCEPTION(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*));;
		RuntimeObject* L_10 = ___4_comparer;
		IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF((RuntimeObject*)L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003c;
	}

CATCH_002c:
	{
		ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_11 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_002f:
	{
		Exception_t* L_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_12;
		Exception_t* L_13 = V_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EDB6C049ED9617FA335A262A29BF30B15221AEA)), L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 11968
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_SwapIfGreaterWithItems_m6E490EB198D788BBE9D34D8F5A04B80D54576C11_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, RuntimeObject* ___2_comparer, int32_t ___3_a, int32_t ___4_b, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_15 = L_6;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_21 = L_10;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	const Il2CppFullySharedGenericAny L_37 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	memset(V_0, 0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	memset(V_1, 0, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	{
		int32_t L_0 = ___3_a;
		int32_t L_1 = ___4_b;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_comparer;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_keys;
		int32_t L_4 = ___3_a;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_keys;
		int32_t L_8 = ___4_b;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_2);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_keys;
		int32_t L_13 = ___3_a;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		il2cpp_codegen_memcpy(V_0, L_15, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___0_keys;
		int32_t L_17 = ___3_a;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = ___0_keys;
		int32_t L_19 = ___4_b;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_16);
		il2cpp_codegen_memcpy((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), L_21, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), (void*)L_21);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = ___0_keys;
		int32_t L_23 = ___4_b;
		il2cpp_codegen_memcpy(L_24, V_0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_22);
		il2cpp_codegen_memcpy((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), L_24, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), (void*)L_24);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = ___1_values;
		int32_t L_26 = ___3_a;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		il2cpp_codegen_memcpy(L_28, (L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		il2cpp_codegen_memcpy(V_1, L_28, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = ___1_values;
		int32_t L_30 = ___3_a;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = ___1_values;
		int32_t L_32 = ___4_b;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		il2cpp_codegen_memcpy(L_34, (L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_29);
		il2cpp_codegen_memcpy((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)), L_34, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void**)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)), (void*)L_34);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = ___1_values;
		int32_t L_36 = ___4_b;
		il2cpp_codegen_memcpy(L_37, V_1, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_35);
		il2cpp_codegen_memcpy((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)), L_37, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void**)(L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)), (void*)L_37);
	}

IL_005d:
	{
		return;
	}
}
// Method Definition Index: 11969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Swap_m4E3BBA0495CB70B5AF4B4BAAF357D17A7A64067D_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_i, int32_t ___3_j, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	memset(V_0, 0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	memset(V_1, 0, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	{
		int32_t L_0 = ___2_i;
		int32_t L_1 = ___3_j;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0040;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_keys;
		int32_t L_3 = ___2_i;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_keys;
		int32_t L_7 = ___2_i;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_keys;
		int32_t L_9 = ___3_j;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_11, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_11);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_keys;
		int32_t L_13 = ___3_j;
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___1_values;
		int32_t L_16 = ___2_i;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		il2cpp_codegen_memcpy(L_18, (L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		il2cpp_codegen_memcpy(V_1, L_18, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = ___1_values;
		int32_t L_20 = ___2_i;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___1_values;
		int32_t L_22 = ___3_j;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		il2cpp_codegen_memcpy(L_24, (L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_19);
		il2cpp_codegen_memcpy((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), L_24, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void**)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), (void*)L_24);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = ___1_values;
		int32_t L_26 = ___3_j;
		il2cpp_codegen_memcpy(L_27, V_1, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_25);
		il2cpp_codegen_memcpy((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)), L_27, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void**)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)), (void*)L_27);
	}

IL_0040:
	{
		return;
	}
}
// Method Definition Index: 11970
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntrospectiveSort_mA6767EC9E69F44DE6ED028968D465B531788B972_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_left, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___3_length;
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___1_values;
		int32_t L_3 = ___2_left;
		int32_t L_4 = ___3_length;
		int32_t L_5 = ___2_left;
		int32_t L_6 = ___3_length;
		int32_t L_7;
		L_7 = IntrospectiveSortUtilities_FloorLog2PlusOne_m33AC60574EC2B80A3B7084361A3736D4CFE91F6D(L_6, NULL);
		RuntimeObject* L_8 = ___4_comparer;
		CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(L_1, L_2, L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_4, L_5)), 1)), ((int32_t)il2cpp_codegen_multiply(2, L_7)), L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 11971
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_IntroSort_mB8906A91956799131098C0F7B692B9336D1B3515_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_lo, int32_t ___3_hi, int32_t ___4_depthLimit, RuntimeObject* ___5_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0091;
	}

IL_0005:
	{
		int32_t L_0 = ___3_hi;
		int32_t L_1 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0025;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___1_values;
		RuntimeObject* L_7 = ___5_comparer;
		int32_t L_8 = ___2_lo;
		int32_t L_9 = ___3_hi;
		CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return;
	}

IL_0025:
	{
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_004f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___1_values;
		RuntimeObject* L_13 = ___5_comparer;
		int32_t L_14 = ___2_lo;
		int32_t L_15 = ___3_hi;
		CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_11, L_12, L_13, L_14, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___1_values;
		RuntimeObject* L_18 = ___5_comparer;
		int32_t L_19 = ___2_lo;
		int32_t L_20 = ___3_hi;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_16, L_17, L_18, L_19, L_20, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = ___1_values;
		RuntimeObject* L_23 = ___5_comparer;
		int32_t L_24 = ___3_hi;
		int32_t L_25 = ___3_hi;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_21, L_22, L_23, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), L_25, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return;
	}

IL_004f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = ___1_values;
		int32_t L_28 = ___2_lo;
		int32_t L_29 = ___3_hi;
		RuntimeObject* L_30 = ___5_comparer;
		CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(L_26, L_27, L_28, L_29, L_30, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return;
	}

IL_005b:
	{
		int32_t L_31 = ___4_depthLimit;
		if (L_31)
		{
			goto IL_006b;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = ___1_values;
		int32_t L_34 = ___2_lo;
		int32_t L_35 = ___3_hi;
		RuntimeObject* L_36 = ___5_comparer;
		CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))(L_32, L_33, L_34, L_35, L_36, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		return;
	}

IL_006b:
	{
		int32_t L_37 = ___4_depthLimit;
		___4_depthLimit = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_39 = ___1_values;
		int32_t L_40 = ___2_lo;
		int32_t L_41 = ___3_hi;
		RuntimeObject* L_42 = ___5_comparer;
		CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_43;
		L_43 = ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11)))(L_38, L_39, L_40, L_41, L_42, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		V_1 = L_43;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_44 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_45 = ___1_values;
		int32_t L_46 = V_1;
		int32_t L_47 = ___3_hi;
		int32_t L_48 = ___4_depthLimit;
		RuntimeObject* L_49 = ___5_comparer;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(L_44, L_45, ((int32_t)il2cpp_codegen_add(L_46, 1)), L_47, L_48, L_49, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		int32_t L_50 = V_1;
		___3_hi = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
	}

IL_0091:
	{
		int32_t L_51 = ___3_hi;
		int32_t L_52 = ___2_lo;
		if ((((int32_t)L_51) > ((int32_t)L_52)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_2_PickPivotAndPartition_m56C491134822A7E87FDA9773609009929458DDC0_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	CHECKED_LOCAL(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_33 = L_21;
	const Il2CppFullySharedGenericAny L_37 = L_21;
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_42 = L_34;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	memset(V_1, 0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___2_lo;
		int32_t L_1 = ___3_hi;
		int32_t L_2 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___1_values;
		RuntimeObject* L_5 = ___4_comparer;
		int32_t L_6 = ___2_lo;
		int32_t L_7 = V_0;
		CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_3, L_4, L_5, L_6, L_7, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___1_values;
		RuntimeObject* L_10 = ___4_comparer;
		int32_t L_11 = ___2_lo;
		int32_t L_12 = ___3_hi;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_8, L_9, L_10, L_11, L_12, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___1_values;
		RuntimeObject* L_15 = ___4_comparer;
		int32_t L_16 = V_0;
		int32_t L_17 = ___3_hi;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_13, L_14, L_15, L_16, L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = ___0_keys;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		il2cpp_codegen_memcpy(V_1, L_21, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = ___1_values;
		int32_t L_24 = V_0;
		int32_t L_25 = ___3_hi;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(L_22, L_23, L_24, ((int32_t)il2cpp_codegen_subtract(L_25, 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		int32_t L_26 = ___2_lo;
		V_2 = L_26;
		int32_t L_27 = ___3_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_007d;
	}

IL_0044:
	{
		RuntimeObject* L_28 = ___4_comparer;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = ___0_keys;
		int32_t L_30 = V_2;
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		V_2 = L_31;
		NullCheck(L_29);
		int32_t L_32 = L_31;
		il2cpp_codegen_memcpy(L_33, (L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		il2cpp_codegen_memcpy(L_34, V_1, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_28);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_33: *(void**)L_33), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_34: *(void**)L_34));
		if ((((int32_t)L_35) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}

IL_005a:
	{
		RuntimeObject* L_36 = ___4_comparer;
		il2cpp_codegen_memcpy(L_37, V_1, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = ___0_keys;
		int32_t L_39 = V_3;
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		V_3 = L_40;
		NullCheck(L_38);
		int32_t L_41 = L_40;
		il2cpp_codegen_memcpy(L_42, (L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_36);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_37: *(void**)L_37), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_42: *(void**)L_42));
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		if ((((int32_t)L_44) >= ((int32_t)L_45)))
		{
			goto IL_0081;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_46 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_47 = ___1_values;
		int32_t L_48 = V_2;
		int32_t L_49 = V_3;
		CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(L_46, L_47, L_48, L_49, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
	}

IL_007d:
	{
		int32_t L_50 = V_2;
		int32_t L_51 = V_3;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0044;
		}
	}

IL_0081:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_52 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_53 = ___1_values;
		int32_t L_54 = V_2;
		int32_t L_55 = ___3_hi;
		CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(L_52, L_53, L_54, ((int32_t)il2cpp_codegen_subtract(L_55, 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		int32_t L_56 = V_2;
		return L_56;
	}
}
// Method Definition Index: 11973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Heapsort_mC5BEB206939A3EB5A724AD47D76036CE5069CD54_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___3_hi;
		int32_t L_1 = ___2_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001c;
	}

IL_000c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___1_values;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = ___2_lo;
		RuntimeObject* L_8 = ___4_comparer;
		CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))(L_3, L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_001c:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_11 = V_0;
		V_2 = L_11;
		goto IL_0043;
	}

IL_0024:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___1_values;
		int32_t L_14 = ___2_lo;
		int32_t L_15 = ___2_lo;
		int32_t L_16 = V_2;
		CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(L_12, L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, L_16)), 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = ___1_values;
		int32_t L_19 = V_2;
		int32_t L_20 = ___2_lo;
		RuntimeObject* L_21 = ___4_comparer;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))(L_17, L_18, 1, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_0043:
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) > ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_DownHeap_mDD8424C5C919BB8600D0753F66388896A76B9381_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_i, int32_t ___3_n, int32_t ___4_lo, RuntimeObject* ___5_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_18 = L_4;
	const Il2CppFullySharedGenericAny L_27 = L_4;
	const Il2CppFullySharedGenericAny L_41 = L_4;
	const Il2CppFullySharedGenericAny L_56 = L_4;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_32 = L_23;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	const Il2CppFullySharedGenericAny L_49 = L_9;
	const Il2CppFullySharedGenericAny L_60 = L_9;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	memset(V_0, 0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	memset(V_1, 0, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	int32_t V_2 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_keys;
		int32_t L_1 = ___4_lo;
		int32_t L_2 = ___2_i;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1));
		il2cpp_codegen_memcpy(L_4, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___1_values;
		int32_t L_6 = ___4_lo;
		int32_t L_7 = ___2_i;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_6, L_7)), 1));
		il2cpp_codegen_memcpy(L_9, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		il2cpp_codegen_memcpy(V_1, L_9, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		goto IL_0092;
	}

IL_001c:
	{
		int32_t L_10 = ___2_i;
		V_2 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		int32_t L_11 = V_2;
		int32_t L_12 = ___3_n;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_13 = ___5_comparer;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_keys;
		int32_t L_15 = ___4_lo;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, L_16)), 1));
		il2cpp_codegen_memcpy(L_18, (L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = ___0_keys;
		int32_t L_20 = ___4_lo;
		int32_t L_21 = V_2;
		NullCheck(L_19);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		il2cpp_codegen_memcpy(L_23, (L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_13);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_18: *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_23: *(void**)L_23));
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0048:
	{
		RuntimeObject* L_26 = ___5_comparer;
		il2cpp_codegen_memcpy(L_27, V_0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = ___0_keys;
		int32_t L_29 = ___4_lo;
		int32_t L_30 = V_2;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		il2cpp_codegen_memcpy(L_32, (L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_26);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_27: *(void**)L_27), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_32: *(void**)L_32));
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_34 = ___0_keys;
		int32_t L_35 = ___4_lo;
		int32_t L_36 = ___2_i;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = ___0_keys;
		int32_t L_38 = ___4_lo;
		int32_t L_39 = V_2;
		NullCheck(L_37);
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_38, L_39)), 1));
		il2cpp_codegen_memcpy(L_41, (L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_34);
		il2cpp_codegen_memcpy((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1)))), L_41, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1)))), (void*)L_41);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42 = ___1_values;
		int32_t L_43 = ___4_lo;
		int32_t L_44 = ___2_i;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_45 = ___1_values;
		int32_t L_46 = ___4_lo;
		int32_t L_47 = V_2;
		NullCheck(L_45);
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_46, L_47)), 1));
		il2cpp_codegen_memcpy(L_49, (L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_42);
		il2cpp_codegen_memcpy((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_43, L_44)), 1)))), L_49, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void**)(L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_43, L_44)), 1)))), (void*)L_49);
		int32_t L_50 = V_2;
		___2_i = L_50;
	}

IL_0092:
	{
		int32_t L_51 = ___2_i;
		int32_t L_52 = ___3_n;
		if ((((int32_t)L_51) <= ((int32_t)((int32_t)(L_52/2)))))
		{
			goto IL_001c;
		}
	}

IL_0098:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_53 = ___0_keys;
		int32_t L_54 = ___4_lo;
		int32_t L_55 = ___2_i;
		il2cpp_codegen_memcpy(L_56, V_0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_53);
		il2cpp_codegen_memcpy((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_54, L_55)), 1)))), L_56, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_54, L_55)), 1)))), (void*)L_56);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_57 = ___1_values;
		int32_t L_58 = ___4_lo;
		int32_t L_59 = ___2_i;
		il2cpp_codegen_memcpy(L_60, V_1, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_57);
		il2cpp_codegen_memcpy((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_58, L_59)), 1)))), L_60, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void**)(L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_58, L_59)), 1)))), (void*)L_60);
		return;
	}
}
// Method Definition Index: 11975
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_InsertionSort_m0ACE8418FCF4CE4DE24A47EBF8675EA70168B90F_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_lo, int32_t ___3_hi, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_15 = L_5;
	const Il2CppFullySharedGenericAny L_26 = L_5;
	const Il2CppFullySharedGenericAny L_34 = L_5;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	const Il2CppFullySharedGenericAny L_21 = L_9;
	const Il2CppFullySharedGenericAny L_37 = L_9;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	memset(V_2, 0, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	memset(V_3, 0, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
	{
		int32_t L_0 = ___2_lo;
		V_0 = L_0;
		goto IL_006e;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_keys;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		il2cpp_codegen_memcpy(V_2, L_5, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___1_values;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		il2cpp_codegen_memcpy(V_3, L_9, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		goto IL_0040;
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_keys;
		int32_t L_11 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_keys;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1)))), L_15, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1)))), (void*)L_15);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___1_values;
		int32_t L_17 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = ___1_values;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_16);
		il2cpp_codegen_memcpy((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, 1)))), L_21, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void**)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, 1)))), (void*)L_21);
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_0040:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_lo;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0056;
		}
	}
	{
		RuntimeObject* L_25 = ___4_comparer;
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = ___0_keys;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		il2cpp_codegen_memcpy(L_30, (L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)), SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_25);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_26: *(void**)L_26), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_30: *(void**)L_30));
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}

IL_0056:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = ___0_keys;
		int32_t L_33 = V_1;
		il2cpp_codegen_memcpy(L_34, V_2, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		NullCheck(L_32);
		il2cpp_codegen_memcpy((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 1)))), L_34, SizeOf_TKey_tD7031BDFAF460049301CA9A80C84F57AAB3FF2C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 1)))), (void*)L_34);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = ___1_values;
		int32_t L_36 = V_1;
		il2cpp_codegen_memcpy(L_37, V_3, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		NullCheck(L_35);
		il2cpp_codegen_memcpy((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 1)))), L_37, SizeOf_TValue_tBBD4F36A3E92F60C68F61CA0CD15320E25719AF3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void**)(L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 1)))), (void*)L_37);
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_006e:
	{
		int32_t L_39 = V_0;
		int32_t L_40 = ___3_hi;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* ArraySortHelper_2_get_Default_mDA1AE59CEB66F5EC4B5C6DCEA30CE0E5EF4E83DE_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* L_0 = ((ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11977
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2__ctor_m8F559E189035B7379269FEA4D659A1D5BC2C7327_fshared (ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 11978
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2__cctor_m0BD298AED5B9267EB7CDB1ED292C6E238C5A5C2A_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* L_0 = (ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		((  void (*) (ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)))(L_0, NULL);
		((ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___s_defaultArraySortHelper = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___s_defaultArraySortHelper), (void*)L_0);
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
// Method Definition Index: 135777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1__ctor_m990AA5DC56D4A5E8A3073D13DF26DB67202F218D (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, int32_t ___0_length, int32_t ___1_maxSize, int32_t ___2_allocMode, int32_t ___3_options, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_length;
		int32_t L_1 = ___2_allocMode;
		int32_t L_2 = ___3_options;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_3), L_0, L_1, L_2, NULL);
		__this->___m_Array = L_3;
		int32_t L_4 = ___2_allocMode;
		__this->___m_AllocLabel = L_4;
		int32_t L_5 = ___3_options;
		__this->___m_Options = L_5;
		int32_t L_6 = ___1_maxSize;
		__this->___m_MaxSize = L_6;
		return;
	}
}
// Method Definition Index: 135778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m8243601E23D93A1C5AE0DAEEB1EF637472590823 (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B8_0 = 0;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_MaxSize;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___m_MaxSize;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F9D2B282101E190927B5EB5D0453588305508E7)), L_5, L_8, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_10 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_002e:
	{
		int32_t L_11 = ___0_index;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_12 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Array);
		int32_t L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_12)->___m_Length);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		int32_t L_14;
		L_14 = Array_1_get_Length_m512BFB65408F71E9C66D4E4E26C61CD638DC4B3B(__this, NULL);
		if (!L_14)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_1_get_Length_m512BFB65408F71E9C66D4E4E26C61CD638DC4B3B(__this, NULL);
		G_B8_0 = L_15;
		goto IL_004e;
	}

IL_004d:
	{
		G_B8_0 = 1;
	}

IL_004e:
	{
		V_0 = G_B8_0;
		goto IL_0055;
	}

IL_0051:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_16, 2));
	}

IL_0055:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___0_index;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = __this->___m_MaxSize;
		if ((((int32_t)L_19) > ((int32_t)L_20)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_21 = V_0;
		G_B14_0 = L_21;
		goto IL_006b;
	}

IL_0065:
	{
		int32_t L_22 = __this->___m_MaxSize;
		G_B14_0 = L_22;
	}

IL_006b:
	{
		V_0 = G_B14_0;
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___m_AllocLabel;
		int32_t L_25 = __this->___m_Options;
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_1), L_23, L_24, L_25, NULL);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_26 = __this->___m_Array;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_27 = V_1;
		int32_t L_28;
		L_28 = Array_1_get_Length_m512BFB65408F71E9C66D4E4E26C61CD638DC4B3B(__this, NULL);
		NativeArray_1_Copy_mE732305914FBFBE640845378BDD9B31684A47131(L_26, L_27, L_28, NULL);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_29 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Array);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_29, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_30 = V_1;
		__this->___m_Array = L_30;
		return;
	}
}
// Method Definition Index: 135779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Item_mFC1398F91C622A351FDA5A5106D23AFF3380EAC8 (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Array);
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_0)->___m_Buffer, L_1);
		return L_2;
	}
}
// Method Definition Index: 135780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_set_Item_mE1BB6021ADB9D162D87C7A241A1913821FC8738E (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		Array_1_ResizeIfRequired_m8243601E23D93A1C5AE0DAEEB1EF637472590823(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_1 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Array);
		int32_t L_2 = ___0_index;
		int32_t L_3 = ___1_value;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_1)->___m_Buffer, L_2, (L_3));
		return;
	}
}
// Method Definition Index: 135781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_1_get_IsCreated_mA39E8B13AFD4910E3FA1D21D1721056AFD9FB114 (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Array);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 135782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m512BFB65408F71E9C66D4E4E26C61CD638DC4B3B (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_MaxSize;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_1 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Array);
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_1)->___m_Length);
		return L_2;
	}
}
// Method Definition Index: 135783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_m2385987230C627563ADAFF30E1021A05759D432D (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Array);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		__this->___m_MaxSize = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void Array_1_Dispose_m2385987230C627563ADAFF30E1021A05759D432D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2>(__this);
	Array_1_Dispose_m2385987230C627563ADAFF30E1021A05759D432D(_thisAdjusted, method);
}
// Method Definition Index: 135784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_1_get_UnsafePtr_m7655A0C8B1CC11FC014B689E8FE213DE4250C6AE (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_0 = __this->___m_Array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 135785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_1_get_UnsafeReadOnlyPtr_m6572DD3F3140F95F8219CE0A17D5077BFEC963FE (Array_1_t20A1B306CFF7B2DBB8F63D18171BA78C21ECE1B2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_0 = __this->___m_Array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_inline(L_0, NULL);
		return L_1;
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
// Method Definition Index: 135777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1__ctor_m783AB46278CFC96F665734A1A24F328888DE6D68 (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, int32_t ___0_length, int32_t ___1_maxSize, int32_t ___2_allocMode, int32_t ___3_options, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_length;
		int32_t L_1 = ___2_allocMode;
		int32_t L_2 = ___3_options;
		NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeArray_1__ctor_m04B53441840F1845CE7BA6A2705089550EB8BFD2((&L_3), L_0, L_1, L_2, NULL);
		__this->___m_Array = L_3;
		int32_t L_4 = ___2_allocMode;
		__this->___m_AllocLabel = L_4;
		int32_t L_5 = ___3_options;
		__this->___m_Options = L_5;
		int32_t L_6 = ___1_maxSize;
		__this->___m_MaxSize = L_6;
		return;
	}
}
// Method Definition Index: 135778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m6ABA55C9503F3EC2E1ABAB13B83E59A644DE48A6 (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B8_0 = 0;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_MaxSize;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___m_MaxSize;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F9D2B282101E190927B5EB5D0453588305508E7)), L_5, L_8, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_10 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_002e:
	{
		int32_t L_11 = ___0_index;
		NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089* L_12 = (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089*)(&__this->___m_Array);
		int32_t L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_12)->___m_Length);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		int32_t L_14;
		L_14 = Array_1_get_Length_m0434907F47772CFD7CFCDF497CA73499DF17A660(__this, NULL);
		if (!L_14)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_1_get_Length_m0434907F47772CFD7CFCDF497CA73499DF17A660(__this, NULL);
		G_B8_0 = L_15;
		goto IL_004e;
	}

IL_004d:
	{
		G_B8_0 = 1;
	}

IL_004e:
	{
		V_0 = G_B8_0;
		goto IL_0055;
	}

IL_0051:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_16, 2));
	}

IL_0055:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___0_index;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = __this->___m_MaxSize;
		if ((((int32_t)L_19) > ((int32_t)L_20)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_21 = V_0;
		G_B14_0 = L_21;
		goto IL_006b;
	}

IL_0065:
	{
		int32_t L_22 = __this->___m_MaxSize;
		G_B14_0 = L_22;
	}

IL_006b:
	{
		V_0 = G_B14_0;
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___m_AllocLabel;
		int32_t L_25 = __this->___m_Options;
		NativeArray_1__ctor_m04B53441840F1845CE7BA6A2705089550EB8BFD2((&V_1), L_23, L_24, L_25, NULL);
		NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 L_26 = __this->___m_Array;
		NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 L_27 = V_1;
		int32_t L_28;
		L_28 = Array_1_get_Length_m0434907F47772CFD7CFCDF497CA73499DF17A660(__this, NULL);
		NativeArray_1_Copy_mB5D0ACE6E1A75EDA29CF4DF2BAF7693D670B500F(L_26, L_27, L_28, NULL);
		NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089* L_29 = (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089*)(&__this->___m_Array);
		NativeArray_1_Dispose_mA7CDEEDFC55FBF1CED8896DB86D53F012AABABB2(L_29, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 L_30 = V_1;
		__this->___m_Array = L_30;
		return;
	}
}
// Method Definition Index: 135779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 Array_1_get_Item_m81E40AB041ADFCFCBF045703D302CEED56A179D7 (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089* L_0 = (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089*)(&__this->___m_Array);
		int32_t L_1 = ___0_index;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1, (L_0)->___m_Buffer, L_1);
		return L_2;
	}
}
// Method Definition Index: 135780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_set_Item_m8ADF1A975D7D505B4777C56CAC6794163549D659 (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, int32_t ___0_index, UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		Array_1_ResizeIfRequired_m6ABA55C9503F3EC2E1ABAB13B83E59A644DE48A6(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089* L_1 = (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089*)(&__this->___m_Array);
		int32_t L_2 = ___0_index;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 L_3 = ___1_value;
		IL2CPP_NATIVEARRAY_SET_ITEM(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1, (L_1)->___m_Buffer, L_2, (L_3));
		return;
	}
}
// Method Definition Index: 135781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_1_get_IsCreated_m7C5144C2B7D5AE2B3A59452F341C8343388025FA (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089* L_0 = (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089*)(&__this->___m_Array);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m46570D0CEFE63AFB47A56635DFC5DF099A9DA3FD_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 135782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m0434907F47772CFD7CFCDF497CA73499DF17A660 (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_MaxSize;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089* L_1 = (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089*)(&__this->___m_Array);
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_1)->___m_Length);
		return L_2;
	}
}
// Method Definition Index: 135783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_m069636457CFF8BF40D36D7EDBE9254F8ACAE0458 (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089* L_0 = (NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089*)(&__this->___m_Array);
		NativeArray_1_Dispose_mA7CDEEDFC55FBF1CED8896DB86D53F012AABABB2(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		__this->___m_MaxSize = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void Array_1_Dispose_m069636457CFF8BF40D36D7EDBE9254F8ACAE0458_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB>(__this);
	Array_1_Dispose_m069636457CFF8BF40D36D7EDBE9254F8ACAE0458(_thisAdjusted, method);
}
// Method Definition Index: 135784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_1_get_UnsafePtr_m0A0B56CE8B34C1CC3EC96B638C939A544961E0A0 (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 L_0 = __this->___m_Array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m34BE034AF1D89B8A7A43C8DF4AEDECCC6598FE7B_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 135785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_1_get_UnsafeReadOnlyPtr_mBD7AE65F8D22D9863F2B8D98B9B5082132CCD461 (Array_1_t035970850FA62C1B745EA8D88E2616B59F9218CB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_t16BBF9EE3124CB0C26DEA23AE1785D53EF67E089 L_0 = __this->___m_Array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m8E3B19729B372A03699E419E1E8D61B921CE627B_inline(L_0, NULL);
		return L_1;
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
// Method Definition Index: 135777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1__ctor_mC51C2F85385DC28233D85C4D0D88984C8441154F (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, int32_t ___0_length, int32_t ___1_maxSize, int32_t ___2_allocMode, int32_t ___3_options, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_length;
		int32_t L_1 = ___2_allocMode;
		int32_t L_2 = ___3_options;
		NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeArray_1__ctor_m331F4361F5DED80035F1E88BBDB17651FE6AA547((&L_3), L_0, L_1, L_2, NULL);
		__this->___m_Array = L_3;
		int32_t L_4 = ___2_allocMode;
		__this->___m_AllocLabel = L_4;
		int32_t L_5 = ___3_options;
		__this->___m_Options = L_5;
		int32_t L_6 = ___1_maxSize;
		__this->___m_MaxSize = L_6;
		return;
	}
}
// Method Definition Index: 135778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m0475712D05B7EDDE2944CDE8A84118FD3DE5C079 (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B8_0 = 0;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_MaxSize;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___m_MaxSize;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F9D2B282101E190927B5EB5D0453588305508E7)), L_5, L_8, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_10 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_002e:
	{
		int32_t L_11 = ___0_index;
		NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB* L_12 = (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB*)(&__this->___m_Array);
		int32_t L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_12)->___m_Length);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		int32_t L_14;
		L_14 = Array_1_get_Length_m89D949BD8F9096FE1BA1ED85899CFFBD73CD849C(__this, NULL);
		if (!L_14)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_1_get_Length_m89D949BD8F9096FE1BA1ED85899CFFBD73CD849C(__this, NULL);
		G_B8_0 = L_15;
		goto IL_004e;
	}

IL_004d:
	{
		G_B8_0 = 1;
	}

IL_004e:
	{
		V_0 = G_B8_0;
		goto IL_0055;
	}

IL_0051:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_16, 2));
	}

IL_0055:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___0_index;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = __this->___m_MaxSize;
		if ((((int32_t)L_19) > ((int32_t)L_20)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_21 = V_0;
		G_B14_0 = L_21;
		goto IL_006b;
	}

IL_0065:
	{
		int32_t L_22 = __this->___m_MaxSize;
		G_B14_0 = L_22;
	}

IL_006b:
	{
		V_0 = G_B14_0;
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___m_AllocLabel;
		int32_t L_25 = __this->___m_Options;
		NativeArray_1__ctor_m331F4361F5DED80035F1E88BBDB17651FE6AA547((&V_1), L_23, L_24, L_25, NULL);
		NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB L_26 = __this->___m_Array;
		NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB L_27 = V_1;
		int32_t L_28;
		L_28 = Array_1_get_Length_m89D949BD8F9096FE1BA1ED85899CFFBD73CD849C(__this, NULL);
		NativeArray_1_Copy_m47AC019B90ACC0B34A248AD9BF26FFF2C0FF9DE0(L_26, L_27, L_28, NULL);
		NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB* L_29 = (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB*)(&__this->___m_Array);
		NativeArray_1_Dispose_mA27E26AE2C01F85D048DF595A0B091D9AB2F85F1(L_29, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB L_30 = V_1;
		__this->___m_Array = L_30;
		return;
	}
}
// Method Definition Index: 135779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F Array_1_get_Item_m24F4B9056178101C3BA5D2B78A55278E403CE9F2 (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB* L_0 = (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB*)(&__this->___m_Array);
		int32_t L_1 = ___0_index;
		UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F, (L_0)->___m_Buffer, L_1);
		return L_2;
	}
}
// Method Definition Index: 135780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_set_Item_mD41E6A148B64690B76A2EBF095290D8F8559FDEB (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, int32_t ___0_index, UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		Array_1_ResizeIfRequired_m0475712D05B7EDDE2944CDE8A84118FD3DE5C079(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB* L_1 = (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB*)(&__this->___m_Array);
		int32_t L_2 = ___0_index;
		UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F L_3 = ___1_value;
		IL2CPP_NATIVEARRAY_SET_ITEM(UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F, (L_1)->___m_Buffer, L_2, (L_3));
		return;
	}
}
// Method Definition Index: 135781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_1_get_IsCreated_m49259DEAE455349882B9EB8702D871A49834E48C (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB* L_0 = (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB*)(&__this->___m_Array);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m1D383B3A1AFF308D1FF726D9D4B203B61A7DA419_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 135782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m89D949BD8F9096FE1BA1ED85899CFFBD73CD849C (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_MaxSize;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB* L_1 = (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB*)(&__this->___m_Array);
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_1)->___m_Length);
		return L_2;
	}
}
// Method Definition Index: 135783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_mE8781CBEF6AF23CF32DECD9AC3D0D27C35B53913 (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB* L_0 = (NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB*)(&__this->___m_Array);
		NativeArray_1_Dispose_mA27E26AE2C01F85D048DF595A0B091D9AB2F85F1(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		__this->___m_MaxSize = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void Array_1_Dispose_mE8781CBEF6AF23CF32DECD9AC3D0D27C35B53913_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C>(__this);
	Array_1_Dispose_mE8781CBEF6AF23CF32DECD9AC3D0D27C35B53913(_thisAdjusted, method);
}
// Method Definition Index: 135784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_1_get_UnsafePtr_m62B3215417C60FE3A9F8BEAA7A6E35753E3BDA27 (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB L_0 = __this->___m_Array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m99946527C2E32C27D2E01B126C2FA42AF9B4C900_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 135785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_1_get_UnsafeReadOnlyPtr_mF2418346C7A1F351FB413EA4A62B051B61AE9301 (Array_1_tEDB765CEBB8986A86DF3B516AB00B5E25E927A7C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB L_0 = __this->___m_Array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_mC5FFB908EB4AA2E7B1763EB469575BD7D1064A1E_inline(L_0, NULL);
		return L_1;
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
// Method Definition Index: 135777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1__ctor_mB9DE856E3FB4448D99B776020C672C3B44139DD6_fshared (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, int32_t ___0_length, int32_t ___1_maxSize, int32_t ___2_allocMode, int32_t ___3_options, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_length;
		int32_t L_1 = ___2_allocMode;
		int32_t L_2 = ___3_options;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		__this->___m_Array = L_3;
		int32_t L_4 = ___2_allocMode;
		__this->___m_AllocLabel = L_4;
		int32_t L_5 = ___3_options;
		__this->___m_Options = L_5;
		int32_t L_6 = ___1_maxSize;
		__this->___m_MaxSize = L_6;
		return;
	}
}
// Method Definition Index: 135778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m94C853D1BCBE7C5F2B4DE22211A7B5242F3CC3E4_fshared (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B8_0 = 0;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_MaxSize;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___m_MaxSize;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F9D2B282101E190927B5EB5D0453588305508E7)), L_5, L_8, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_10 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_002e:
	{
		int32_t L_11 = ___0_index;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_12 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		int32_t L_13;
		L_13 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(L_12, NULL);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		int32_t L_14;
		L_14 = ((  int32_t (*) (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if (!L_14)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_15;
		L_15 = ((  int32_t (*) (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		G_B8_0 = L_15;
		goto IL_004e;
	}

IL_004d:
	{
		G_B8_0 = 1;
	}

IL_004e:
	{
		V_0 = G_B8_0;
		goto IL_0055;
	}

IL_0051:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_16, 2));
	}

IL_0055:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___0_index;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = __this->___m_MaxSize;
		if ((((int32_t)L_19) > ((int32_t)L_20)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_21 = V_0;
		G_B14_0 = L_21;
		goto IL_006b;
	}

IL_0065:
	{
		int32_t L_22 = __this->___m_MaxSize;
		G_B14_0 = L_22;
	}

IL_006b:
	{
		V_0 = G_B14_0;
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___m_AllocLabel;
		int32_t L_25 = __this->___m_Options;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))((&V_1), L_23, L_24, L_25, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_26 = __this->___m_Array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_27 = V_1;
		int32_t L_28;
		L_28 = ((  int32_t (*) (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)))(L_26, L_27, L_28, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_29 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))(L_29, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_30 = V_1;
		__this->___m_Array = L_30;
		return;
	}
}
// Method Definition Index: 135779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_get_Item_m4B6EECC3E6603139E5A91FED7AA091CD329A6029_fshared (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tC2A6051CB9E781789D3BC933A46D1BC6FFA5B17C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_tC2A6051CB9E781789D3BC933A46D1BC6FFA5B17C);
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		int32_t L_1 = ___0_index;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tC2A6051CB9E781789D3BC933A46D1BC6FFA5B17C);
		return;
	}
}
// Method Definition Index: 135780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_set_Item_mA0328CDC7CC37E553EC18C82A1F70D9A80C95D6B_fshared (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tC2A6051CB9E781789D3BC933A46D1BC6FFA5B17C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tC2A6051CB9E781789D3BC933A46D1BC6FFA5B17C);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		((  void (*) (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		int32_t L_2 = ___0_index;
		il2cpp_codegen_memcpy(L_3, ___1_value, SizeOf_T_tC2A6051CB9E781789D3BC933A46D1BC6FFA5B17C);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_1, L_2, L_3);
		return;
	}
}
// Method Definition Index: 135781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_1_get_IsCreated_m7211B1E72E4BFF93F3678FDC63EE0C6CFB43596C_fshared (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		bool L_1;
		L_1 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 135782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m80CCC540BCE9479556ED7461CD63A954EE789E1E_fshared (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_MaxSize;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 135783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_m6E943FAD2C16E051CD230D40B9E019072DBF54F9_fshared (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		__this->___m_MaxSize = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void Array_1_Dispose_m6E943FAD2C16E051CD230D40B9E019072DBF54F9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D>(__this);
	Array_1_Dispose_m6E943FAD2C16E051CD230D40B9E019072DBF54F9(_thisAdjusted, method);
}
// Method Definition Index: 135784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_1_get_UnsafePtr_m196F691937085E135244EBE3C60F2A8C9426914C_fshared (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = __this->___m_Array;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 135785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_1_get_UnsafeReadOnlyPtr_m05AF1A6965E3FA47500A0A41AE7FA7C29ADEFA51_fshared (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = __this->___m_Array;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11)))(L_0, NULL);
		return L_1;
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
// Method Definition Index: 135777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1__ctor_m8E580089A86D01BD6E394C7006EECC0B7A500196 (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, int32_t ___0_length, int32_t ___1_maxSize, int32_t ___2_allocMode, int32_t ___3_options, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_length;
		int32_t L_1 = ___2_allocMode;
		int32_t L_2 = ___3_options;
		NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeArray_1__ctor_m8AA732E2587739B0742DA56F898B110B7DD53A66((&L_3), L_0, L_1, L_2, NULL);
		__this->___m_Array = L_3;
		int32_t L_4 = ___2_allocMode;
		__this->___m_AllocLabel = L_4;
		int32_t L_5 = ___3_options;
		__this->___m_Options = L_5;
		int32_t L_6 = ___1_maxSize;
		__this->___m_MaxSize = L_6;
		return;
	}
}
// Method Definition Index: 135778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m7F7AA29C545D159ACA9EEDEE084E0C42C403065E (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B8_0 = 0;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_MaxSize;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___m_MaxSize;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F9D2B282101E190927B5EB5D0453588305508E7)), L_5, L_8, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_10 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_002e:
	{
		int32_t L_11 = ___0_index;
		NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9* L_12 = (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9*)(&__this->___m_Array);
		int32_t L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_12)->___m_Length);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		int32_t L_14;
		L_14 = Array_1_get_Length_m687BFFABACB0445639108DD2025B93398869588F(__this, NULL);
		if (!L_14)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_1_get_Length_m687BFFABACB0445639108DD2025B93398869588F(__this, NULL);
		G_B8_0 = L_15;
		goto IL_004e;
	}

IL_004d:
	{
		G_B8_0 = 1;
	}

IL_004e:
	{
		V_0 = G_B8_0;
		goto IL_0055;
	}

IL_0051:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_16, 2));
	}

IL_0055:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___0_index;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = __this->___m_MaxSize;
		if ((((int32_t)L_19) > ((int32_t)L_20)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_21 = V_0;
		G_B14_0 = L_21;
		goto IL_006b;
	}

IL_0065:
	{
		int32_t L_22 = __this->___m_MaxSize;
		G_B14_0 = L_22;
	}

IL_006b:
	{
		V_0 = G_B14_0;
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___m_AllocLabel;
		int32_t L_25 = __this->___m_Options;
		NativeArray_1__ctor_m8AA732E2587739B0742DA56F898B110B7DD53A66((&V_1), L_23, L_24, L_25, NULL);
		NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 L_26 = __this->___m_Array;
		NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 L_27 = V_1;
		int32_t L_28;
		L_28 = Array_1_get_Length_m687BFFABACB0445639108DD2025B93398869588F(__this, NULL);
		NativeArray_1_Copy_m732E623BAA381DB8F3D76ADF72D6E77F4584FEE8(L_26, L_27, L_28, NULL);
		NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9* L_29 = (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9*)(&__this->___m_Array);
		NativeArray_1_Dispose_mF6BAA5996F95F67D6470C00F51D537A99E821C48(L_29, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 L_30 = V_1;
		__this->___m_Array = L_30;
		return;
	}
}
// Method Definition Index: 135779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 Array_1_get_Item_m3E701E09DBB2703CB9617BC90F6A504A365BF8C8 (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9* L_0 = (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9*)(&__this->___m_Array);
		int32_t L_1 = ___0_index;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83, (L_0)->___m_Buffer, L_1);
		return L_2;
	}
}
// Method Definition Index: 135780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_set_Item_m6A38E38A46BDCF617209852EBDCC78862FB42B2A (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, int32_t ___0_index, double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		Array_1_ResizeIfRequired_m7F7AA29C545D159ACA9EEDEE084E0C42C403065E(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9* L_1 = (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9*)(&__this->___m_Array);
		int32_t L_2 = ___0_index;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 L_3 = ___1_value;
		IL2CPP_NATIVEARRAY_SET_ITEM(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83, (L_1)->___m_Buffer, L_2, (L_3));
		return;
	}
}
// Method Definition Index: 135781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_1_get_IsCreated_m615B89312A562DCE22C319A360F089352F5A06DE (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9* L_0 = (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9*)(&__this->___m_Array);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mD452ED2E9197E98E649C02EB16AC88FE9DC5C57F_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 135782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m687BFFABACB0445639108DD2025B93398869588F (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_MaxSize;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9* L_1 = (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9*)(&__this->___m_Array);
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_1)->___m_Length);
		return L_2;
	}
}
// Method Definition Index: 135783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_m6DFBB5FDD0674D5EC0FD84AAEC72F6CA675B4BB5 (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9* L_0 = (NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9*)(&__this->___m_Array);
		NativeArray_1_Dispose_mF6BAA5996F95F67D6470C00F51D537A99E821C48(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		__this->___m_MaxSize = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void Array_1_Dispose_m6DFBB5FDD0674D5EC0FD84AAEC72F6CA675B4BB5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0>(__this);
	Array_1_Dispose_m6DFBB5FDD0674D5EC0FD84AAEC72F6CA675B4BB5(_thisAdjusted, method);
}
// Method Definition Index: 135784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_1_get_UnsafePtr_mB4E3204679FDEF42FD773638A9DDF2AFEBD837E9 (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 L_0 = __this->___m_Array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m90ED08A8599484401DE3939C59D8FE24D82B1D96_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 135785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_1_get_UnsafeReadOnlyPtr_m6449275F69B15444A04D043CA9F4F29D99736FBA (Array_1_tC5F2ECDE991D788111F03316CFE8633816E837F0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 L_0 = __this->___m_Array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mC95DACEAA72A748027B5ED973E9D111B14CC378E_inline(L_0, NULL);
		return L_1;
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
// Method Definition Index: 135777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1__ctor_m068744F89C3051D033AFFD602D7F767BB9857669 (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, int32_t ___0_length, int32_t ___1_maxSize, int32_t ___2_allocMode, int32_t ___3_options, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_length;
		int32_t L_1 = ___2_allocMode;
		int32_t L_2 = ___3_options;
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeArray_1__ctor_mF8809BF4D122FB7E065C55A567CC2C168FB52B6E((&L_3), L_0, L_1, L_2, NULL);
		__this->___m_Array = L_3;
		int32_t L_4 = ___2_allocMode;
		__this->___m_AllocLabel = L_4;
		int32_t L_5 = ___3_options;
		__this->___m_Options = L_5;
		int32_t L_6 = ___1_maxSize;
		__this->___m_MaxSize = L_6;
		return;
	}
}
// Method Definition Index: 135778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_m851A10BE4C667ADD6BFDB33A55976FCAA9D84CCD (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B8_0 = 0;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_MaxSize;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___m_MaxSize;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F9D2B282101E190927B5EB5D0453588305508E7)), L_5, L_8, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_10 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_002e:
	{
		int32_t L_11 = ___0_index;
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D* L_12 = (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D*)(&__this->___m_Array);
		int32_t L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_12)->___m_Length);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		int32_t L_14;
		L_14 = Array_1_get_Length_mC457D96CA2E9BA8187A6E75515F977431E003212(__this, NULL);
		if (!L_14)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_1_get_Length_mC457D96CA2E9BA8187A6E75515F977431E003212(__this, NULL);
		G_B8_0 = L_15;
		goto IL_004e;
	}

IL_004d:
	{
		G_B8_0 = 1;
	}

IL_004e:
	{
		V_0 = G_B8_0;
		goto IL_0055;
	}

IL_0051:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_16, 2));
	}

IL_0055:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___0_index;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = __this->___m_MaxSize;
		if ((((int32_t)L_19) > ((int32_t)L_20)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_21 = V_0;
		G_B14_0 = L_21;
		goto IL_006b;
	}

IL_0065:
	{
		int32_t L_22 = __this->___m_MaxSize;
		G_B14_0 = L_22;
	}

IL_006b:
	{
		V_0 = G_B14_0;
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___m_AllocLabel;
		int32_t L_25 = __this->___m_Options;
		NativeArray_1__ctor_mF8809BF4D122FB7E065C55A567CC2C168FB52B6E((&V_1), L_23, L_24, L_25, NULL);
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D L_26 = __this->___m_Array;
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D L_27 = V_1;
		int32_t L_28;
		L_28 = Array_1_get_Length_mC457D96CA2E9BA8187A6E75515F977431E003212(__this, NULL);
		NativeArray_1_Copy_mA4040FB27AC56A03B7D3CE46FA55481CDB51CD3F(L_26, L_27, L_28, NULL);
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D* L_29 = (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D*)(&__this->___m_Array);
		NativeArray_1_Dispose_m16834832CCD09F7D4D5AE7A31308B437A3C37ED0(L_29, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D L_30 = V_1;
		__this->___m_Array = L_30;
		return;
	}
}
// Method Definition Index: 135779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2_tB123E869131C6102341F8F9AA01726E0E7C2768D Array_1_get_Item_mDB5F2A236F3EBDE8068F82F67D5CC69EBA296102 (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D* L_0 = (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D*)(&__this->___m_Array);
		int32_t L_1 = ___0_index;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D, (L_0)->___m_Buffer, L_1);
		return L_2;
	}
}
// Method Definition Index: 135780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_set_Item_m9776643E7191C117E6EB67D4DF40BE150349F315 (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, int32_t ___0_index, int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		Array_1_ResizeIfRequired_m851A10BE4C667ADD6BFDB33A55976FCAA9D84CCD(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D* L_1 = (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D*)(&__this->___m_Array);
		int32_t L_2 = ___0_index;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D L_3 = ___1_value;
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D, (L_1)->___m_Buffer, L_2, (L_3));
		return;
	}
}
// Method Definition Index: 135781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_1_get_IsCreated_m942E194A92F8034676C9B866B18F4F7DBF4177E4 (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D* L_0 = (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D*)(&__this->___m_Array);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m805D454932F0DDB636B0E273DD0597EBD4251102_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 135782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_mC457D96CA2E9BA8187A6E75515F977431E003212 (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_MaxSize;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D* L_1 = (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D*)(&__this->___m_Array);
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_1)->___m_Length);
		return L_2;
	}
}
// Method Definition Index: 135783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_mFD45D308918A378057EAD42C6FC245963E172ADF (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D* L_0 = (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D*)(&__this->___m_Array);
		NativeArray_1_Dispose_m16834832CCD09F7D4D5AE7A31308B437A3C37ED0(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		__this->___m_MaxSize = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void Array_1_Dispose_mFD45D308918A378057EAD42C6FC245963E172ADF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Array_1_t250B968A91CBE95FEEC415D43259633F051316FE>(__this);
	Array_1_Dispose_mFD45D308918A378057EAD42C6FC245963E172ADF(_thisAdjusted, method);
}
// Method Definition Index: 135784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_1_get_UnsafePtr_m56B679328B095A1C67D1CB631B634DE2091430A0 (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D L_0 = __this->___m_Array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mAD7CC2792BD7E04169E1F6BE13A79E82506A9503_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 135785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_1_get_UnsafeReadOnlyPtr_m318C6D91227CA594BEE8170F4CFDA371E40BA2A2 (Array_1_t250B968A91CBE95FEEC415D43259633F051316FE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D L_0 = __this->___m_Array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mB2BB76E27C7772E7D2DCBCDB4AA5B648A3226079_inline(L_0, NULL);
		return L_1;
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
// Method Definition Index: 135777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1__ctor_m2A0CFBE505AA933BE3E30DF2EE3A776D3D1601CA (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, int32_t ___0_length, int32_t ___1_maxSize, int32_t ___2_allocMode, int32_t ___3_options, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_length;
		int32_t L_1 = ___2_allocMode;
		int32_t L_2 = ___3_options;
		NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeArray_1__ctor_mF6C966080B926D75CA413609C902BB0AEC386B15((&L_3), L_0, L_1, L_2, NULL);
		__this->___m_Array = L_3;
		int32_t L_4 = ___2_allocMode;
		__this->___m_AllocLabel = L_4;
		int32_t L_5 = ___3_options;
		__this->___m_Options = L_5;
		int32_t L_6 = ___1_maxSize;
		__this->___m_MaxSize = L_6;
		return;
	}
}
// Method Definition Index: 135778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_ResizeIfRequired_mCEF765AD8855B5697C89E98FA2A3ABD974D8E663 (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B8_0 = 0;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_MaxSize;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___m_MaxSize;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F9D2B282101E190927B5EB5D0453588305508E7)), L_5, L_8, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_10 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_002e:
	{
		int32_t L_11 = ___0_index;
		NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7* L_12 = (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7*)(&__this->___m_Array);
		int32_t L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_12)->___m_Length);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		int32_t L_14;
		L_14 = Array_1_get_Length_m6190C54184E2AC106D934AAB2F2167A4941DA3E7(__this, NULL);
		if (!L_14)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_1_get_Length_m6190C54184E2AC106D934AAB2F2167A4941DA3E7(__this, NULL);
		G_B8_0 = L_15;
		goto IL_004e;
	}

IL_004d:
	{
		G_B8_0 = 1;
	}

IL_004e:
	{
		V_0 = G_B8_0;
		goto IL_0055;
	}

IL_0051:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_16, 2));
	}

IL_0055:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___0_index;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = __this->___m_MaxSize;
		if ((((int32_t)L_19) > ((int32_t)L_20)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_21 = V_0;
		G_B14_0 = L_21;
		goto IL_006b;
	}

IL_0065:
	{
		int32_t L_22 = __this->___m_MaxSize;
		G_B14_0 = L_22;
	}

IL_006b:
	{
		V_0 = G_B14_0;
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___m_AllocLabel;
		int32_t L_25 = __this->___m_Options;
		NativeArray_1__ctor_mF6C966080B926D75CA413609C902BB0AEC386B15((&V_1), L_23, L_24, L_25, NULL);
		NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 L_26 = __this->___m_Array;
		NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 L_27 = V_1;
		int32_t L_28;
		L_28 = Array_1_get_Length_m6190C54184E2AC106D934AAB2F2167A4941DA3E7(__this, NULL);
		NativeArray_1_Copy_m243FF0F0603EE2FD3140F85B1D77350238A6C759(L_26, L_27, L_28, NULL);
		NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7* L_29 = (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7*)(&__this->___m_Array);
		NativeArray_1_Dispose_m294381CD64F01D951BA5AD68B012318251A88005(L_29, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 L_30 = V_1;
		__this->___m_Array = L_30;
		return;
	}
}
// Method Definition Index: 135779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 Array_1_get_Item_m757FC3F70A07C5DB05475C66925EC7457960CE72 (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7* L_0 = (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7*)(&__this->___m_Array);
		int32_t L_1 = ___0_index;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5, (L_0)->___m_Buffer, L_1);
		return L_2;
	}
}
// Method Definition Index: 135780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_set_Item_m058264C0AD6379AAF812B572C2883ADE494D2038 (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, int32_t ___0_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		Array_1_ResizeIfRequired_mCEF765AD8855B5697C89E98FA2A3ABD974D8E663(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7* L_1 = (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7*)(&__this->___m_Array);
		int32_t L_2 = ___0_index;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_3 = ___1_value;
		IL2CPP_NATIVEARRAY_SET_ITEM(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5, (L_1)->___m_Buffer, L_2, (L_3));
		return;
	}
}
// Method Definition Index: 135781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_1_get_IsCreated_m5A02D8413597927ABFB7CF798A4D663226DF8F91 (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7* L_0 = (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7*)(&__this->___m_Array);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mBBE95AECF029556CF28AF201FF45ADFA23C7E500_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 135782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_1_get_Length_m6190C54184E2AC106D934AAB2F2167A4941DA3E7 (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_MaxSize;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7* L_1 = (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7*)(&__this->___m_Array);
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_1)->___m_Length);
		return L_2;
	}
}
// Method Definition Index: 135783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_Dispose_mDF0C9F93DC391B8D928419BBD984E6073862F3CF (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7* L_0 = (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7*)(&__this->___m_Array);
		NativeArray_1_Dispose_m294381CD64F01D951BA5AD68B012318251A88005(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		__this->___m_MaxSize = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void Array_1_Dispose_mDF0C9F93DC391B8D928419BBD984E6073862F3CF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Array_1_tA484464E515777F9ED9D26DB75195C55A786304B>(__this);
	Array_1_Dispose_mDF0C9F93DC391B8D928419BBD984E6073862F3CF(_thisAdjusted, method);
}
// Method Definition Index: 135784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_1_get_UnsafePtr_m078034F3C18158A53F8080DC949C47814619FABF (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 L_0 = __this->___m_Array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m4DA22E3B49F53DFB647D3A164818F93E6C719A71_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 135785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_1_get_UnsafeReadOnlyPtr_m309B13D224BFFEA3D044AF164E896A774AA3A46A (Array_1_tA484464E515777F9ED9D26DB75195C55A786304B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 L_0 = __this->___m_Array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m9D209EFA9DBD8484A0CDD800845D2D7C06DB0523_inline(L_0, NULL);
		return L_1;
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
// Method Definition Index: 60934
// Method Definition Index: 60935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* AsyncInstantiateOperation_1_CreateResultArray_mDD1ACB926DDECB9F280AB66D8FCCDDB99618C95D_gshared (AsyncInstantiateOperation_1_t4ADCB11AF0D1CE8F6CBB592A95ED176851CE3C4F* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), (uint32_t)L_0);
		((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this)->___m_Result = ((ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)Castclass((RuntimeObject*)L_1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this)->___m_Result), (void*)((ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)Castclass((RuntimeObject*)L_1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2 = ((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this)->___m_Result;
		return L_2;
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
// Method Definition Index: 60934
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInstantiateOperation_1__ctor_m3E48F09CFE1A0F8060541BE23BCFE2BB4B9526B6_fshared (AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* __this, intptr_t ___0_ptr, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_StaticInit);
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_ptr;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		CHECKED_LOCAL_INIT(AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_StaticInit,(AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		AsyncInstantiateOperation__ctor_m0A63AF9DEC342106170FA1821748827015B47435((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 60935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* AsyncInstantiateOperation_1_CreateResultArray_m9C573BE80715CE8902D7526B7AA76900AFEA114A_fshared (AsyncInstantiateOperation_1_t3D0498369D6DB5400200D1982A6CE622DE7615FB* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), (uint32_t)L_0);
		((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this)->___m_Result = ((ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)Castclass((RuntimeObject*)L_1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this)->___m_Result), (void*)((ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)Castclass((RuntimeObject*)L_1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2 = ((AsyncInstantiateOperation_tE6A19AE1928EFCCBD164A0308F8B9CE2B0B35B40*)__this)->___m_Result;
		return L_2;
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
// Method Definition Index: 4437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocalValueChangedArgs_1__ctor_mE42A8DCCEF1217FD021FBD189C2BEDAD7FAE52F0 (AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30* __this, int32_t ___0_previousValue, int32_t ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_initobj(__this, sizeof(AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30));
		int32_t L_0 = ___0_previousValue;
		__this->___U3CPreviousValueU3Ek__BackingField = L_0;
		int32_t L_1 = ___1_currentValue;
		__this->___U3CCurrentValueU3Ek__BackingField = L_1;
		bool L_2 = ___2_contextChanged;
		__this->___U3CThreadContextChangedU3Ek__BackingField = L_2;
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
// Method Definition Index: 4437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocalValueChangedArgs_1__ctor_mCD46AE17C8F65750A0FCD16854B467184DBB7517_gshared (AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95* __this, Il2CppSharedGenericObject* ___0_previousValue, Il2CppSharedGenericObject* ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_initobj(__this, sizeof(AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95));
		Il2CppSharedGenericObject* L_0 = ___0_previousValue;
		__this->___U3CPreviousValueU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPreviousValueU3Ek__BackingField), (void*)L_0);
		Il2CppSharedGenericObject* L_1 = ___1_currentValue;
		__this->___U3CCurrentValueU3Ek__BackingField = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentValueU3Ek__BackingField), (void*)L_1);
		bool L_2 = ___2_contextChanged;
		__this->___U3CThreadContextChangedU3Ek__BackingField = L_2;
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
// Method Definition Index: 4437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocalValueChangedArgs_1__ctor_m8FC80AC8E561902AB0B4888598E9F43818996132_fshared (AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429* __this, Il2CppFullySharedGenericAny ___0_previousValue, Il2CppFullySharedGenericAny ___1_currentValue, bool ___2_contextChanged, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_AsyncLocalValueChangedArgs_1_t22D023561F69794CACFB099BD79CB356229ABDE5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T_tCC831585AE4ED144160E317A3A8F51E92FBDAE17 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tCC831585AE4ED144160E317A3A8F51E92FBDAE17);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tCC831585AE4ED144160E317A3A8F51E92FBDAE17);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_initobj(__this, SizeOf_AsyncLocalValueChangedArgs_1_t22D023561F69794CACFB099BD79CB356229ABDE5);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) ? ___0_previousValue : &___0_previousValue), SizeOf_T_tCC831585AE4ED144160E317A3A8F51E92FBDAE17);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, SizeOf_T_tCC831585AE4ED144160E317A3A8F51E92FBDAE17);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) ? ___1_currentValue : &___1_currentValue), SizeOf_T_tCC831585AE4ED144160E317A3A8F51E92FBDAE17);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_1, SizeOf_T_tCC831585AE4ED144160E317A3A8F51E92FBDAE17);
		bool L_2 = ___2_contextChanged;
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_2);
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
// Method Definition Index: 4432
// Method Definition Index: 4433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncLocal_1_get_Value_m296E3EA2D38BEADA0D4B0B25477E5ACDC7AE30BC (AsyncLocal_1_t84A5EBAACAF2A906D91794D4121189156DAE7639* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = ExecutionContext_GetLocalValue_mD7817BA06511586607DB09BC0B147294D11961ED(__this, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		return ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0))));
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_3 = V_1;
		return L_3;
	}
}
// Method Definition Index: 4434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_set_Value_m78D1DE32F58BA21F7D7FC7596E5CEB5134D5BBE1 (AsyncLocal_1_t84A5EBAACAF2A906D91794D4121189156DAE7639* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_1);
		Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643* L_3 = __this->___m_valueChangedHandler;
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_SetLocalValue_m47C23A6C729166E0F87ED79D268F7043AD58E1A5(__this, L_2, (bool)((!(((RuntimeObject*)(Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		return;
	}
}
// Method Definition Index: 4435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_System_Threading_IAsyncLocal_OnValueChanged_mE5873E6CBA01755AD884C25DC5EF6C0641CB8E98 (AsyncLocal_1_t84A5EBAACAF2A906D91794D4121189156DAE7639* __this, RuntimeObject* ___0_previousValueObj, RuntimeObject* ___1_currentValueObj, bool ___2_contextChanged, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		RuntimeObject* L_0 = ___0_previousValueObj;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_previousValueObj;
		G_B3_0 = ((*(int32_t*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0))));
		goto IL_0014;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		int32_t L_2 = V_2;
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		RuntimeObject* L_3 = ___1_currentValueObj;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = ___1_currentValueObj;
		G_B6_0 = ((*(int32_t*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0))));
		goto IL_0029;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		int32_t L_5 = V_2;
		G_B6_0 = L_5;
	}

IL_0029:
	{
		V_1 = G_B6_0;
		Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643* L_6 = __this->___m_valueChangedHandler;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		bool L_9 = ___2_contextChanged;
		AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30 L_10;
		memset((&L_10), 0, sizeof(L_10));
		AsyncLocalValueChangedArgs_1__ctor_mE42A8DCCEF1217FD021FBD189C2BEDAD7FAE52F0((&L_10), L_7, L_8, L_9, NULL);
		NullCheck(L_6);
		Action_1_Invoke_mBCE58B67D7100D1DFF3F431F7DF460E9C688745B_inline(L_6, L_10, NULL);
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
// Method Definition Index: 4432
// Method Definition Index: 4433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AsyncLocal_1_get_Value_mC3DC799A03B6A3347390F9AFD9515DA96054B64B_gshared (AsyncLocal_1_tC1B081876A75186A0139ACF15A78BBAA2AEB9482* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = ExecutionContext_GetLocalValue_mD7817BA06511586607DB09BC0B147294D11961ED((RuntimeObject*)__this, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)));
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_3 = V_1;
		return L_3;
	}
}
// Method Definition Index: 4434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_set_Value_mF6DB69356350264F4ABC8D6A1F9BD85A451844CB_gshared (AsyncLocal_1_tC1B081876A75186A0139ACF15A78BBAA2AEB9482* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_value;
		Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D* L_1 = __this->___m_valueChangedHandler;
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_SetLocalValue_m47C23A6C729166E0F87ED79D268F7043AD58E1A5((RuntimeObject*)__this, (RuntimeObject*)L_0, (bool)((!(((RuntimeObject*)(Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		return;
	}
}
// Method Definition Index: 4435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_System_Threading_IAsyncLocal_OnValueChanged_m60708CA7F6D822B4DDF0DF0D623C5CD44C5659B6_gshared (AsyncLocal_1_tC1B081876A75186A0139ACF15A78BBAA2AEB9482* __this, RuntimeObject* ___0_previousValueObj, RuntimeObject* ___1_currentValueObj, bool ___2_contextChanged, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	Il2CppSharedGenericObject* G_B3_0 = NULL;
	Il2CppSharedGenericObject* G_B6_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_previousValueObj;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_previousValueObj;
		G_B3_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)));
		goto IL_0014;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_2;
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		RuntimeObject* L_3 = ___1_currentValueObj;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = ___1_currentValueObj;
		G_B6_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)));
		goto IL_0029;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_5 = V_2;
		G_B6_0 = L_5;
	}

IL_0029:
	{
		V_1 = G_B6_0;
		Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D* L_6 = __this->___m_valueChangedHandler;
		Il2CppSharedGenericObject* L_7 = V_0;
		Il2CppSharedGenericObject* L_8 = V_1;
		bool L_9 = ___2_contextChanged;
		AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95 L_10;
		memset((&L_10), 0, sizeof(L_10));
		AsyncLocalValueChangedArgs_1__ctor_mCD46AE17C8F65750A0FCD16854B467184DBB7517((&L_10), L_7, L_8, L_9, NULL);
		NullCheck(L_6);
		Action_1_Invoke_m15B09A14760255FA046745C030377D21CE4BE793_inline(L_6, L_10, NULL);
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
// Method Definition Index: 4432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1__ctor_m4EBB4D0249B7ABD002E3C59CF86A70EB59838D85_fshared (AsyncLocal_1_t6FE3AE7F9BEDEDFAF5962FF8DBC977B4D007C150* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 4433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_get_Value_mC9B5CC8D84B3E701C4C093D9C8BEAE254EC5BDD2_fshared (AsyncLocal_1_t6FE3AE7F9BEDEDFAF5962FF8DBC977B4D007C150* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	memset(V_1, 0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = ExecutionContext_GetLocalValue_mD7817BA06511586607DB09BC0B147294D11961ED((RuntimeObject*)__this, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		return;
	}

IL_0011:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		il2cpp_codegen_memcpy(L_5, V_1, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		return;
	}
}
// Method Definition Index: 4434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_set_Value_m53DABBFFE8E46AD6BDFB2724AB2A465FB7A8F6C7_fshared (AsyncLocal_1_t6FE3AE7F9BEDEDFAF5962FF8DBC977B4D007C150* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_value : &___0_value), SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_0);
		Action_1_t0D3FDEB853658AAA91C8797C0476DDF845D5BBFF* L_2 = __this->___m_valueChangedHandler;
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_SetLocalValue_m47C23A6C729166E0F87ED79D268F7043AD58E1A5((RuntimeObject*)__this, L_1, (bool)((!(((RuntimeObject*)(Action_1_t0D3FDEB853658AAA91C8797C0476DDF845D5BBFF*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		return;
	}
}
// Method Definition Index: 4435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_System_Threading_IAsyncLocal_OnValueChanged_m920A4EAD693C48D35985DBECCD3F4A764D1DB633_fshared (AsyncLocal_1_t6FE3AE7F9BEDEDFAF5962FF8DBC977B4D007C150* __this, RuntimeObject* ___0_previousValueObj, RuntimeObject* ___1_currentValueObj, bool ___2_contextChanged, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_AsyncLocalValueChangedArgs_1_t0361F7CFF09592504B84AB98E4932FC5CFC8B27F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	const Il2CppFullySharedGenericAny L_7 = L_2;
	const Il2CppFullySharedGenericAny L_9 = L_2;
	const Il2CppFullySharedGenericAny L_11 = L_2;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	const AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429 L_16 = alloca(SizeOf_AsyncLocalValueChangedArgs_1_t0361F7CFF09592504B84AB98E4932FC5CFC8B27F);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	memset(V_0, 0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	memset(V_1, 0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	memset(V_2, 0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	memset(G_B3_0, 0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	memset(G_B6_0, 0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	{
		RuntimeObject* L_0 = ___0_previousValueObj;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_previousValueObj;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_2);
		il2cpp_codegen_memcpy(G_B3_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)), SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		goto IL_0014;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		il2cpp_codegen_memcpy(L_4, V_2, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		il2cpp_codegen_memcpy(G_B3_0, L_4, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	}

IL_0014:
	{
		il2cpp_codegen_memcpy(V_0, G_B3_0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		RuntimeObject* L_5 = ___1_currentValueObj;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_6 = ___1_currentValueObj;
		void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_7);
		il2cpp_codegen_memcpy(G_B6_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)), SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		goto IL_0029;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		il2cpp_codegen_memcpy(G_B6_0, L_9, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
	}

IL_0029:
	{
		il2cpp_codegen_memcpy(V_1, G_B6_0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		Action_1_t0D3FDEB853658AAA91C8797C0476DDF845D5BBFF* L_10 = __this->___m_valueChangedHandler;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9);
		bool L_13 = ___2_contextChanged;
		memset(L_16, 0, SizeOf_AsyncLocalValueChangedArgs_1_t0361F7CFF09592504B84AB98E4932FC5CFC8B27F);
		AsyncLocalValueChangedArgs_1__ctor_m8FC80AC8E561902AB0B4888598E9F43818996132((AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429*)L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? il2cpp_codegen_memcpy(L_14, L_11, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? il2cpp_codegen_memcpy(L_15, L_12, SizeOf_T_tE5302C7BFDB4A0C369DEA342735B8918D6A1ABD9): *(void**)L_12), L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		NullCheck(L_10);
		InvokerActionInvoker1< AsyncLocalValueChangedArgs_1_t7A62C5604064A762FE6998F0A39E23222FFE8429 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), L_10, L_16);
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
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskMethodBuilder_1_get_Task_m7240951B6E9A5DB275CDFCA78339FFEE26BA8802 (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* V_0 = NULL;
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_2 = (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m6FD25DABCE184917175389E391C873409261DDB0(L_2, NULL);
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0582B44433D671C064F3AE9A809A3EA5FE256781 (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* V_0 = NULL;
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_2 = ___0_result;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m77E79732C249B6B4254DF543FA0A2FAE26803011(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335(0, L_6, 1, NULL);
	}

IL_002b:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_8, NULL);
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_10 = V_0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m0E1289A1CCF695E50715221524D7B407E43BE28C(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 8661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m42172F6932E531FBEEFE4AED72241320EF927434 (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* ___0_completedTask, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_2 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_m0582B44433D671C064F3AE9A809A3EA5FE256781(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 8662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m65D6A428A99A2074CE9E23A65EFE474879ADC095 (AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m7240951B6E9A5DB275CDFCA78339FFEE26BA8802(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck(L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D(L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck(L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771(L_10, L_12, L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 8663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* AsyncTaskMethodBuilder_1_GetTaskForResult_m77E79732C249B6B4254DF543FA0A2FAE26803011 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = V_0;
		if (!L_0.___hasValue)
		{
			goto IL_024b;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		goto IL_0092;
	}

IL_0092:
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		goto IL_00e8;
	}

IL_00e8:
	{
		goto IL_0113;
	}

IL_0113:
	{
		goto IL_013e;
	}

IL_013e:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_0194;
	}

IL_0194:
	{
		goto IL_01bf;
	}

IL_01bf:
	{
		goto IL_01e7;
	}

IL_01e7:
	{
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0259;
	}

IL_024b:
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1 = ___0_result;
		if (L_1.___hasValue)
		{
			goto IL_0259;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_2 = ((AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask;
		return L_2;
	}

IL_0259:
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_3 = ___0_result;
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_4 = (Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_mF447742220AD60B921E950DB392B44F553021674(L_4, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 8664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m9F1ED1ED56BA508292AC9D988C357DE7E23F1E2A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t73C2C5C7202C39C9ED1CE9CD750B63BD7B0705D0* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_m96AB4AB175E7A53B8211E82B7CC642AD7E340637(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		((AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t0F76E779969EE3E617B35882CAB293B65403E2F3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskMethodBuilder_1_get_Task_mC10888726AB1CF669A543F39EC82C1B8B296C524 (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* V_0 = NULL;
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_2 = (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_mD3FC7E2EF363236809F13343A64FC880CA6C74FA(L_2, NULL);
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m4A9FF4B718DBEE05F481602FC54B269D0A99F2FD (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* V_0 = NULL;
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_2 = ___0_result;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m6B3189831D5E29F5299A08939FE67EE7D6A55CF6(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335(0, L_6, 1, NULL);
	}

IL_002b:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_8, NULL);
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_10 = V_0;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m45CC6CDCCB981248C56909C9D64A2995260A2621(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 8661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m6746E4B742BF588934A5B6DEC219B8620E218FC7 (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* ___0_completedTask, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC));
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_2 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_m4A9FF4B718DBEE05F481602FC54B269D0A99F2FD(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 8662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m20A87382A7B6D6EFFFCABB906FA5E385D976715E (AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mC10888726AB1CF669A543F39EC82C1B8B296C524(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck(L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D(L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck(L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771(L_10, L_12, L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 8663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* AsyncTaskMethodBuilder_1_GetTaskForResult_m6B3189831D5E29F5299A08939FE67EE7D6A55CF6 (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC));
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = V_0;
		if (!L_0.___hasValue)
		{
			goto IL_024b;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		goto IL_0092;
	}

IL_0092:
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		goto IL_00e8;
	}

IL_00e8:
	{
		goto IL_0113;
	}

IL_0113:
	{
		goto IL_013e;
	}

IL_013e:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_0194;
	}

IL_0194:
	{
		goto IL_01bf;
	}

IL_01bf:
	{
		goto IL_01e7;
	}

IL_01e7:
	{
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0259;
	}

IL_024b:
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_1 = ___0_result;
		if (L_1.___hasValue)
		{
			goto IL_0259;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_2 = ((AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask;
		return L_2;
	}

IL_0259:
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_3 = ___0_result;
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_4 = (Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m8D3E36AB4BDE6C83EAEBA04A2495EDF3D5F17E7E(L_4, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 8664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m852330017C3E169A88626F9AB245E4B7658319BC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC));
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisNullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_m5C538BE589257259BE446E11D4BF68C8B5C2B2E9(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		((AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_tD13C30CCEA06DAAC3D725FDE727D31CE7D60BC5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskMethodBuilder_1_get_Task_mFF107A582F8CB464DC795B93946486F5CB72C967 (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* V_0 = NULL;
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_2 = (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_mC8EFB6F199A7B074BA039A2B4CEB2DAA776F959D(L_2, NULL);
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m354CAA69E85D02ECDA58F4E3ED331615B9B286D9 (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* V_0 = NULL;
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_2 = ___0_result;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m56752E94BB4DD52A5AEAC4F698DFEEDF9275A857(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335(0, L_6, 1, NULL);
	}

IL_002b:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_8, NULL);
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_10 = V_0;
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m7BBE50D093A6F0F6CD80D0AEF961E9B1F489EB15(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 8661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0A2FD7A765CABE5B08E6F7C5B44B0D346063B6FE (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* ___0_completedTask, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B));
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_2 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_m354CAA69E85D02ECDA58F4E3ED331615B9B286D9(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 8662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mEA9A1250CD59EB926FE49E9557A3680DF0FE336D (AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mFF107A582F8CB464DC795B93946486F5CB72C967(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck(L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D(L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck(L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771(L_10, L_12, L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 8663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* AsyncTaskMethodBuilder_1_GetTaskForResult_m56752E94BB4DD52A5AEAC4F698DFEEDF9275A857 (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B));
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_0 = V_0;
		if (!L_0.___hasValue)
		{
			goto IL_024b;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		goto IL_0092;
	}

IL_0092:
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		goto IL_00e8;
	}

IL_00e8:
	{
		goto IL_0113;
	}

IL_0113:
	{
		goto IL_013e;
	}

IL_013e:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_0194;
	}

IL_0194:
	{
		goto IL_01bf;
	}

IL_01bf:
	{
		goto IL_01e7;
	}

IL_01e7:
	{
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0259;
	}

IL_024b:
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_1 = ___0_result;
		if (L_1.___hasValue)
		{
			goto IL_0259;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_2 = ((AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask;
		return L_2;
	}

IL_0259:
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_3 = ___0_result;
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_4 = (Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_mAC82BD4DDEA1A5100605394F9936B0F565FCC507(L_4, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 8664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m9CD0C555C5DBC1E5F246FA9E155AA4504259A644 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B));
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_0 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tEFEAE70575CF6F04BF8FB37590483461AC941964* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisNullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_m5C1E3DE59946A59843B982943FCCD902F176696E(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		((AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_tAA005815DC520CE8A2C1F518268AC0B4735B7EB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskMethodBuilder_1_get_Task_m1BFEC2D85643659CCFCB0055986B849F09DB6DE2 (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* V_0 = NULL;
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_2 = (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m2A24686E3CD6ADE147BFEB3CD25DDEB30D830AE5(L_2, NULL);
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m8FD5A31BDA892931A44F70190116C626F5FE76CF (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* V_0 = NULL;
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_2 = ___0_result;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m7C0AB57139BF368AC6D19E94BA17FAF38EE26F37(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335(0, L_6, 1, NULL);
	}

IL_002b:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_8, NULL);
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_10 = V_0;
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_mECC96B0C1F0FF06B9F41396F42346083FBF52CA7(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 8661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mE337A2D1B8EBE2EA7BEC9B0C7771E9C57BE37356 (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* ___0_completedTask, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_2 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_m8FD5A31BDA892931A44F70190116C626F5FE76CF(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 8662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB6B23BD3B309A05B4215C83F5C5AB68AEBDD470D (AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m1BFEC2D85643659CCFCB0055986B849F09DB6DE2(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck(L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D(L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck(L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771(L_10, L_12, L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 8663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* AsyncTaskMethodBuilder_1_GetTaskForResult_m7C0AB57139BF368AC6D19E94BA17FAF38EE26F37 (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_0 = V_0;
		if (!L_0.___hasValue)
		{
			goto IL_024b;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		goto IL_0092;
	}

IL_0092:
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		goto IL_00e8;
	}

IL_00e8:
	{
		goto IL_0113;
	}

IL_0113:
	{
		goto IL_013e;
	}

IL_013e:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_0194;
	}

IL_0194:
	{
		goto IL_01bf;
	}

IL_01bf:
	{
		goto IL_01e7;
	}

IL_01e7:
	{
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0259;
	}

IL_024b:
	{
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_1 = ___0_result;
		if (L_1.___hasValue)
		{
			goto IL_0259;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_2 = ((AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask;
		return L_2;
	}

IL_0259:
	{
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_3 = ___0_result;
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_4 = (Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m4BFE73FA4ECA4AE630CE7CBD188EAC1FE9722429(L_4, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 8664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_mEE5230B5E85B93D681701B322AFA72E844783C44 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_0 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t1253923251256D5BDFC2FDA8EFF422DBBAB7C239* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisNullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_m4C2678F8646CE15535AA9FF141054C5D350E6E84(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		((AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t217E99BB21C2C44C75A9042892F2D37033643B36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskMethodBuilder_1_get_Task_m7164E00326DC7BC82FE12A781478471DD7A1CE69 (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* V_0 = NULL;
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_2 = (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m345E75D3154D6F145F3BC063812295BC72297854(L_2, NULL);
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m8B35722630A089A6AE51C45F0B6A16B21AE914A0 (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* V_0 = NULL;
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_2 = ___0_result;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m20835BD24CC7D28A02C3240F74B31E4DB2D2EE6B(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335(0, L_6, 1, NULL);
	}

IL_002b:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_8, NULL);
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_10 = V_0;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m63A166803A98E96536A3D21D7E9E8F8FFF5761D0(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 8661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m431A98AD6F85C66715CA4EC9A884D3486625CAC3 (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* ___0_completedTask, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_2 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_m8B35722630A089A6AE51C45F0B6A16B21AE914A0(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 8662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB2E9A1B7DBB59C420CDB96A04A128F745DE63AB4 (AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m7164E00326DC7BC82FE12A781478471DD7A1CE69(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck(L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D(L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck(L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771(L_10, L_12, L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 8663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* AsyncTaskMethodBuilder_1_GetTaskForResult_m20835BD24CC7D28A02C3240F74B31E4DB2D2EE6B (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = V_0;
		if (!L_0.___hasValue)
		{
			goto IL_024b;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		goto IL_0092;
	}

IL_0092:
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		goto IL_00e8;
	}

IL_00e8:
	{
		goto IL_0113;
	}

IL_0113:
	{
		goto IL_013e;
	}

IL_013e:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_0194;
	}

IL_0194:
	{
		goto IL_01bf;
	}

IL_01bf:
	{
		goto IL_01e7;
	}

IL_01e7:
	{
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0259;
	}

IL_024b:
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_1 = ___0_result;
		if (L_1.___hasValue)
		{
			goto IL_0259;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_2 = ((AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask;
		return L_2;
	}

IL_0259:
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_3 = ___0_result;
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_4 = (Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_mC20EE5CCB1CCB1C6150DA69D0756E83E1547BE6A(L_4, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 8664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_mE460D335DF4586B53AB88A77C6FF674A823F3FC7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_mD2FD1BA37CD7BC9F997D797EF6CBD0208F55D7E2(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		((AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t5019936B22640F9C2547CBE357F45D942841FAC7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskMethodBuilder_1_get_Task_mB36BC37F05CC1BD3EDB9EC66B9BBEA7DE33F3D03 (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* V_0 = NULL;
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_2 = (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m9AD5FE1A0F48B1C1AD8614F87739B31DD3DE3568(L_2, NULL);
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m7814370659E8E3550E3A679C1F2F516592198487 (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* V_0 = NULL;
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = ___0_result;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m81DB6DAED4F1821904FA836D73BB5CE8FBE778EE(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335(0, L_6, 1, NULL);
	}

IL_002b:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_8, NULL);
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_10 = V_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m48D840CA62136D390874D338ED6E57849E33490B(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 8661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m628CA4F28FE2878774E97C22597DDFC877801B1D (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* ___0_completedTask, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_m7814370659E8E3550E3A679C1F2F516592198487(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 8662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m76968B53E22BA2AD3C6102934BDC2C9013F74A95 (AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mB36BC37F05CC1BD3EDB9EC66B9BBEA7DE33F3D03(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck(L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D(L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck(L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771(L_10, L_12, L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 8663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* AsyncTaskMethodBuilder_1_GetTaskForResult_m81DB6DAED4F1821904FA836D73BB5CE8FBE778EE (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = V_0;
		if (!L_0.___hasValue)
		{
			goto IL_024b;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		goto IL_0092;
	}

IL_0092:
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		goto IL_00e8;
	}

IL_00e8:
	{
		goto IL_0113;
	}

IL_0113:
	{
		goto IL_013e;
	}

IL_013e:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_0194;
	}

IL_0194:
	{
		goto IL_01bf;
	}

IL_01bf:
	{
		goto IL_01e7;
	}

IL_01e7:
	{
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0259;
	}

IL_024b:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_1 = ___0_result;
		if (L_1.___hasValue)
		{
			goto IL_0259;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_2 = ((AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask;
		return L_2;
	}

IL_0259:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3 = ___0_result;
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_4 = (Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m0A2664C4950556338199629BD2C98586D70A0813(L_4, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 8664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_mAAD51742E2597409FFC57166E486D2DA186186B9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m443D01DF96CD3252CAFF048A991441D94DE3B66B(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		((AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t7BA09CA1BB279AA706D98A618EE11038FD1985F7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskMethodBuilder_1_get_Task_m48238D6774C93E57C332776A6554A23FDB5F96DA_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* V_0 = NULL;
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_2 = (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_mB69E08DDFCF368BC5ACC43CC245DF9583AB4E038(L_2, NULL);
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m359B80F1DDD3F620C7468C447D5348089529F181_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* V_0 = NULL;
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_2 = ___0_result;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m67F6A4AD611FF3FB5A9FF21B8F6AF483DAC09C6C(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335(0, L_6, 1, NULL);
	}

IL_002b:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_10 = V_0;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_mB50D5AA503E72529C566F4EE0137B963F3FE5673(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 8661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mABA76C3ED04D3C65BAA79DDCE103FAB05EC40C33_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* ___0_completedTask, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9));
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_2 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_m359B80F1DDD3F620C7468C447D5348089529F181(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 8662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m0FA6E3BCDEFBE9E3ED255A939D64874D3F875C1F_gshared (AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m48238D6774C93E57C332776A6554A23FDB5F96DA(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 8663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* AsyncTaskMethodBuilder_1_GetTaskForResult_m67F6A4AD611FF3FB5A9FF21B8F6AF483DAC09C6C_gshared (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B5_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9));
	}
	{
		bool L_1 = (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_2 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_3 = L_2;
		bool L_4;
		il2cpp_codegen_box_unbox((&L_3), (&L_4), sizeof(bool), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___FalseTask;
		G_B5_0 = L_5;
		goto IL_0047;
	}

IL_0042:
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___TrueTask;
		G_B5_0 = L_6;
	}

IL_0047:
	{
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_7;
		L_7 = JitHelpers_UnsafeCast_TisTask_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F_mE080E821ED209DAF60F6AB8C9A449191B4F9C6CC(G_B5_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_7;
	}

IL_004d:
	{
		bool L_8 = (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_9 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_10 = L_9;
		int32_t L_11;
		il2cpp_codegen_box_unbox((&L_10), (&L_11), sizeof(int32_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0259;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(-1))))
		{
			goto IL_0259;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* L_14 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___Int32Tasks;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, (-1)));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_18;
		L_18 = JitHelpers_UnsafeCast_TisTask_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F_mE080E821ED209DAF60F6AB8C9A449191B4F9C6CC(L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_18;
	}

IL_0092:
	{
		bool L_19 = (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_19)
		{
			goto IL_00bd;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_20 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_21 = L_20;
		uint32_t L_22;
		il2cpp_codegen_box_unbox((&L_21), (&L_22), sizeof(uint32_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		if (!L_22)
		{
			goto IL_0245;
		}
	}

IL_00bd:
	{
		bool L_23 = (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_23)
		{
			goto IL_00e8;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_24 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_25 = L_24;
		uint8_t L_26;
		il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(uint8_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		if (!L_26)
		{
			goto IL_0245;
		}
	}

IL_00e8:
	{
		bool L_27 = (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_27)
		{
			goto IL_0113;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_28 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_29 = L_28;
		int8_t L_30;
		il2cpp_codegen_box_unbox((&L_29), (&L_30), sizeof(int8_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		if (!L_30)
		{
			goto IL_0245;
		}
	}

IL_0113:
	{
		bool L_31 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_31)
		{
			goto IL_013e;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_32 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_33 = L_32;
		Il2CppChar L_34;
		il2cpp_codegen_box_unbox((&L_33), (&L_34), sizeof(Il2CppChar), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		if (!L_34)
		{
			goto IL_0245;
		}
	}

IL_013e:
	{
		bool L_35 = (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_35)
		{
			goto IL_0169;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_36 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_37 = L_36;
		int64_t L_38;
		il2cpp_codegen_box_unbox((&L_37), (&L_38), sizeof(int64_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		if (!L_38)
		{
			goto IL_0245;
		}
	}

IL_0169:
	{
		bool L_39 = (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_39)
		{
			goto IL_0194;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_40 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_41 = L_40;
		uint64_t L_42;
		il2cpp_codegen_box_unbox((&L_41), (&L_42), sizeof(uint64_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		if (!L_42)
		{
			goto IL_0245;
		}
	}

IL_0194:
	{
		bool L_43 = (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_43)
		{
			goto IL_01bf;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_44 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_45 = L_44;
		int16_t L_46;
		il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int16_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		if (!L_46)
		{
			goto IL_0245;
		}
	}

IL_01bf:
	{
		bool L_47 = (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_47)
		{
			goto IL_01e7;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_48 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_49 = L_48;
		uint16_t L_50;
		il2cpp_codegen_box_unbox((&L_49), (&L_50), sizeof(uint16_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		if (!L_50)
		{
			goto IL_0245;
		}
	}

IL_01e7:
	{
		bool L_51 = (IntPtr_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_51)
		{
			goto IL_0216;
		}
	}
	{
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_53 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_54 = L_53;
		intptr_t L_55;
		il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(intptr_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), IntPtr_t_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_52, L_55, NULL);
		if (L_56)
		{
			goto IL_0245;
		}
	}

IL_0216:
	{
		bool L_57 = (UIntPtr_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_57)
		{
			goto IL_0259;
		}
	}
	{
		uintptr_t L_58 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_59 = ___0_result;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_60 = L_59;
		uintptr_t L_61;
		il2cpp_codegen_box_unbox((&L_60), (&L_61), sizeof(uintptr_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UIntPtr_t_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB(L_58, L_61, NULL);
		if (!L_62)
		{
			goto IL_0259;
		}
	}

IL_0245:
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_63 = ((AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask;
		return L_63;
	}

IL_0259:
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_64 = ___0_result;
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_65 = (Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m4D4BD509ECDCE011E9B576253B3A653E552612B9(L_65, L_64, NULL);
		return L_65;
	}
}
// Method Definition Index: 8664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m641764735B59508622049C9E3730F078E19C5CCD_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9));
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_0 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t5A4A0C8C2E5E21299BF54C56FB728D197E04F04F* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_m3753A58FAA7436486AA441B6A740C0FB1F81DADA(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		((AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_tEDB7F832B77528794D46C5D9242C15BEAE319797_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
// Method Definition Index: 8660
// Method Definition Index: 8661
// Method Definition Index: 8662
// Method Definition Index: 8663
// Method Definition Index: 8664
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
// Method Definition Index: 8660
// Method Definition Index: 8661
// Method Definition Index: 8662
// Method Definition Index: 8663
// Method Definition Index: 8664
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
// Method Definition Index: 8660
// Method Definition Index: 8661
// Method Definition Index: 8662
// Method Definition Index: 8663
// Method Definition Index: 8664
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
// Method Definition Index: 8660
// Method Definition Index: 8661
// Method Definition Index: 8662
// Method Definition Index: 8663
// Method Definition Index: 8664
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
// Method Definition Index: 8660
// Method Definition Index: 8661
// Method Definition Index: 8662
// Method Definition Index: 8663
// Method Definition Index: 8664
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
// Method Definition Index: 8660
// Method Definition Index: 8661
// Method Definition Index: 8662
// Method Definition Index: 8663
// Method Definition Index: 8664
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
// Method Definition Index: 8660
// Method Definition Index: 8661
// Method Definition Index: 8662
// Method Definition Index: 8663
// Method Definition Index: 8664
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
// Method Definition Index: 8660
// Method Definition Index: 8661
// Method Definition Index: 8662
// Method Definition Index: 8663
// Method Definition Index: 8664
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
// Method Definition Index: 8660
// Method Definition Index: 8661
// Method Definition Index: 8662
// Method Definition Index: 8663
// Method Definition Index: 8664
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskMethodBuilder_1_get_Task_m49E13587633B83D706E7F85D3122B6583813C2D9_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* V_0 = NULL;
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_2 = (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m9AF80B7E21D4365B610C21031E29FCB83CD32D27(L_2, NULL);
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mD18342A940803A50A2B8530196601B5A54707F8D_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* V_0 = NULL;
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_2 = ___0_result;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_mE32CD0E7E25478FB00E104356F76E6629CA92A38(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335(0, L_6, 1, NULL);
	}

IL_002b:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_10 = V_0;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m0CB92709B2014A703FB57915E6ECB17C24789664(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 8661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mCCDB51B3AF567DC9F791B29E74A11E1B7CE99D99_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* ___0_completedTask, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387));
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_2 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_mD18342A940803A50A2B8530196601B5A54707F8D(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 8662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m8553CC1B427969FE40F44B34DB84F9C76785B4B6_gshared (AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m49E13587633B83D706E7F85D3122B6583813C2D9(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 8663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* AsyncTaskMethodBuilder_1_GetTaskForResult_mE32CD0E7E25478FB00E104356F76E6629CA92A38_gshared (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B5_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387));
	}
	{
		bool L_1 = (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_2 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_3 = L_2;
		bool L_4;
		il2cpp_codegen_box_unbox((&L_3), (&L_4), sizeof(bool), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___FalseTask;
		G_B5_0 = L_5;
		goto IL_0047;
	}

IL_0042:
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___TrueTask;
		G_B5_0 = L_6;
	}

IL_0047:
	{
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_7;
		L_7 = JitHelpers_UnsafeCast_TisTask_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7_m5961D8081C19D6877260F9C7EFFF6C6EBF9365D3(G_B5_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_7;
	}

IL_004d:
	{
		bool L_8 = (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_9 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_10 = L_9;
		int32_t L_11;
		il2cpp_codegen_box_unbox((&L_10), (&L_11), sizeof(int32_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0259;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(-1))))
		{
			goto IL_0259;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* L_14 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___Int32Tasks;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, (-1)));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_18;
		L_18 = JitHelpers_UnsafeCast_TisTask_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7_m5961D8081C19D6877260F9C7EFFF6C6EBF9365D3(L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_18;
	}

IL_0092:
	{
		bool L_19 = (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_19)
		{
			goto IL_00bd;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_20 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_21 = L_20;
		uint32_t L_22;
		il2cpp_codegen_box_unbox((&L_21), (&L_22), sizeof(uint32_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		if (!L_22)
		{
			goto IL_0245;
		}
	}

IL_00bd:
	{
		bool L_23 = (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_23)
		{
			goto IL_00e8;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_24 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_25 = L_24;
		uint8_t L_26;
		il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(uint8_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		if (!L_26)
		{
			goto IL_0245;
		}
	}

IL_00e8:
	{
		bool L_27 = (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_27)
		{
			goto IL_0113;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_28 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_29 = L_28;
		int8_t L_30;
		il2cpp_codegen_box_unbox((&L_29), (&L_30), sizeof(int8_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		if (!L_30)
		{
			goto IL_0245;
		}
	}

IL_0113:
	{
		bool L_31 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_31)
		{
			goto IL_013e;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_32 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_33 = L_32;
		Il2CppChar L_34;
		il2cpp_codegen_box_unbox((&L_33), (&L_34), sizeof(Il2CppChar), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		if (!L_34)
		{
			goto IL_0245;
		}
	}

IL_013e:
	{
		bool L_35 = (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_35)
		{
			goto IL_0169;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_36 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_37 = L_36;
		int64_t L_38;
		il2cpp_codegen_box_unbox((&L_37), (&L_38), sizeof(int64_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		if (!L_38)
		{
			goto IL_0245;
		}
	}

IL_0169:
	{
		bool L_39 = (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_39)
		{
			goto IL_0194;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_40 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_41 = L_40;
		uint64_t L_42;
		il2cpp_codegen_box_unbox((&L_41), (&L_42), sizeof(uint64_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		if (!L_42)
		{
			goto IL_0245;
		}
	}

IL_0194:
	{
		bool L_43 = (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_43)
		{
			goto IL_01bf;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_44 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_45 = L_44;
		int16_t L_46;
		il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int16_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		if (!L_46)
		{
			goto IL_0245;
		}
	}

IL_01bf:
	{
		bool L_47 = (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_47)
		{
			goto IL_01e7;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_48 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_49 = L_48;
		uint16_t L_50;
		il2cpp_codegen_box_unbox((&L_49), (&L_50), sizeof(uint16_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		if (!L_50)
		{
			goto IL_0245;
		}
	}

IL_01e7:
	{
		bool L_51 = (IntPtr_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_51)
		{
			goto IL_0216;
		}
	}
	{
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_53 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_54 = L_53;
		intptr_t L_55;
		il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(intptr_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), IntPtr_t_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_52, L_55, NULL);
		if (L_56)
		{
			goto IL_0245;
		}
	}

IL_0216:
	{
		bool L_57 = (UIntPtr_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_57)
		{
			goto IL_0259;
		}
	}
	{
		uintptr_t L_58 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_59 = ___0_result;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_60 = L_59;
		uintptr_t L_61;
		il2cpp_codegen_box_unbox((&L_60), (&L_61), sizeof(uintptr_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UIntPtr_t_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB(L_58, L_61, NULL);
		if (!L_62)
		{
			goto IL_0259;
		}
	}

IL_0245:
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_63 = ((AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask;
		return L_63;
	}

IL_0259:
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_64 = ___0_result;
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_65 = (Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m541BFC0D49AFB557E47F03FEE5C368C138FA8128(L_65, L_64, NULL);
		return L_65;
	}
}
// Method Definition Index: 8664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m2C34B8688B86D6F7E76D15906BF8153781622677_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387));
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_0 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tC2901C0CC779C6F2699B5D6D7D81D35E186BADA7* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mA8F3E545AE2A2D8B0D14213741CF6F3FCAC71F0F(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		((AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t5793AAFE9E201E8F7D025AF32FE77FFEE62EDD9A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
// Method Definition Index: 8660
// Method Definition Index: 8661
// Method Definition Index: 8662
// Method Definition Index: 8663
// Method Definition Index: 8664
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskMethodBuilder_1_get_Task_m92E592769E741DEDCDD787CC7ADBD08C06A32314_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* V_0 = NULL;
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_2 = (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m75C1D611CBE6A149C79A322EA8F1CF2E65865149(L_2, NULL);
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mA36BEF799A8E58526F3FC16F10E1FA407B903FE4_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* V_0 = NULL;
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_2 = ___0_result;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m067DB75F372431CFB5C8A8F9427357714414B5BF(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335(0, L_6, 1, NULL);
	}

IL_002b:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_10 = V_0;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m9203F629B87AA23B46F58CBDDBAD8CD60184C8B9(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 8661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m508B0A955AAB580845391FC5F547916629D25057_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* ___0_completedTask, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8));
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_2 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_mA36BEF799A8E58526F3FC16F10E1FA407B903FE4(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 8662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m7B12174F42A526861DF8EF8CB8F21EB99A529266_gshared (AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m92E592769E741DEDCDD787CC7ADBD08C06A32314(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 8663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* AsyncTaskMethodBuilder_1_GetTaskForResult_m067DB75F372431CFB5C8A8F9427357714414B5BF_gshared (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B5_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8));
	}
	{
		bool L_1 = (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_2 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_3 = L_2;
		bool L_4;
		il2cpp_codegen_box_unbox((&L_3), (&L_4), sizeof(bool), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___FalseTask;
		G_B5_0 = L_5;
		goto IL_0047;
	}

IL_0042:
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___TrueTask;
		G_B5_0 = L_6;
	}

IL_0047:
	{
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_7;
		L_7 = JitHelpers_UnsafeCast_TisTask_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C_m9166DCF087B082FD222A55A6B16A55E31E5C8259(G_B5_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_7;
	}

IL_004d:
	{
		bool L_8 = (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_9 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_10 = L_9;
		int32_t L_11;
		il2cpp_codegen_box_unbox((&L_10), (&L_11), sizeof(int32_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0259;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(-1))))
		{
			goto IL_0259;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* L_14 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___Int32Tasks;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, (-1)));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_18;
		L_18 = JitHelpers_UnsafeCast_TisTask_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C_m9166DCF087B082FD222A55A6B16A55E31E5C8259(L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_18;
	}

IL_0092:
	{
		bool L_19 = (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_19)
		{
			goto IL_00bd;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_20 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_21 = L_20;
		uint32_t L_22;
		il2cpp_codegen_box_unbox((&L_21), (&L_22), sizeof(uint32_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		if (!L_22)
		{
			goto IL_0245;
		}
	}

IL_00bd:
	{
		bool L_23 = (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_23)
		{
			goto IL_00e8;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_24 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_25 = L_24;
		uint8_t L_26;
		il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(uint8_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		if (!L_26)
		{
			goto IL_0245;
		}
	}

IL_00e8:
	{
		bool L_27 = (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_27)
		{
			goto IL_0113;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_28 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_29 = L_28;
		int8_t L_30;
		il2cpp_codegen_box_unbox((&L_29), (&L_30), sizeof(int8_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		if (!L_30)
		{
			goto IL_0245;
		}
	}

IL_0113:
	{
		bool L_31 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_31)
		{
			goto IL_013e;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_32 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_33 = L_32;
		Il2CppChar L_34;
		il2cpp_codegen_box_unbox((&L_33), (&L_34), sizeof(Il2CppChar), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		if (!L_34)
		{
			goto IL_0245;
		}
	}

IL_013e:
	{
		bool L_35 = (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_35)
		{
			goto IL_0169;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_36 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_37 = L_36;
		int64_t L_38;
		il2cpp_codegen_box_unbox((&L_37), (&L_38), sizeof(int64_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		if (!L_38)
		{
			goto IL_0245;
		}
	}

IL_0169:
	{
		bool L_39 = (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_39)
		{
			goto IL_0194;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_40 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_41 = L_40;
		uint64_t L_42;
		il2cpp_codegen_box_unbox((&L_41), (&L_42), sizeof(uint64_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		if (!L_42)
		{
			goto IL_0245;
		}
	}

IL_0194:
	{
		bool L_43 = (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_43)
		{
			goto IL_01bf;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_44 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_45 = L_44;
		int16_t L_46;
		il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int16_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		if (!L_46)
		{
			goto IL_0245;
		}
	}

IL_01bf:
	{
		bool L_47 = (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_47)
		{
			goto IL_01e7;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_48 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_49 = L_48;
		uint16_t L_50;
		il2cpp_codegen_box_unbox((&L_49), (&L_50), sizeof(uint16_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		if (!L_50)
		{
			goto IL_0245;
		}
	}

IL_01e7:
	{
		bool L_51 = (IntPtr_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_51)
		{
			goto IL_0216;
		}
	}
	{
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_53 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_54 = L_53;
		intptr_t L_55;
		il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(intptr_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), IntPtr_t_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_52, L_55, NULL);
		if (L_56)
		{
			goto IL_0245;
		}
	}

IL_0216:
	{
		bool L_57 = (UIntPtr_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_57)
		{
			goto IL_0259;
		}
	}
	{
		uintptr_t L_58 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_59 = ___0_result;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_60 = L_59;
		uintptr_t L_61;
		il2cpp_codegen_box_unbox((&L_60), (&L_61), sizeof(uintptr_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UIntPtr_t_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB(L_58, L_61, NULL);
		if (!L_62)
		{
			goto IL_0259;
		}
	}

IL_0245:
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_63 = ((AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask;
		return L_63;
	}

IL_0259:
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_64 = ___0_result;
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_65 = (Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m19D57D02F2C0DEE7393502186931AB78CEF41EEE(L_65, L_64, NULL);
		return L_65;
	}
}
// Method Definition Index: 8664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_mAED34C8868DFBAC35AA8773A6D8B7EAA1A14AEC5_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8));
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_0 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t7C772CFE8B9A09D7EFF0EFB7A644BE1F3EE74B4C* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mC640EA46869E11911ABB7A864919549B88CFF94C(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		((AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t19D4D087A3B5EF8127A4313680ABCDEF4E95D13B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
// Method Definition Index: 8660
// Method Definition Index: 8661
// Method Definition Index: 8662
// Method Definition Index: 8663
// Method Definition Index: 8664
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskMethodBuilder_1_get_Task_m39CA24472D2EEFF162623CFA59CE7431A2715B56_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* V_0 = NULL;
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_2 = (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m2D1462857395F1C85B4A7E79CDD63B5BB391A0FC(L_2, NULL);
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mBE3A4804C5B8834205E6DB359356A74C4CE559D7_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* V_0 = NULL;
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_2 = ___0_result;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_mF084BE519715FD8045AB1BC65E80A349906F2073(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335(0, L_6, 1, NULL);
	}

IL_002b:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_10 = V_0;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m2B77B5733D9DF23D82119B8392391F2E530C1435(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 8661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mAE09C9555C653EBF9DD13CFBFBAEAAA356E2AD0D_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* ___0_completedTask, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D));
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_2 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_mBE3A4804C5B8834205E6DB359356A74C4CE559D7(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 8662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m366B07CBB616AF29432B456A6D01739F0872D48C_gshared (AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m39CA24472D2EEFF162623CFA59CE7431A2715B56(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 8663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* AsyncTaskMethodBuilder_1_GetTaskForResult_mF084BE519715FD8045AB1BC65E80A349906F2073_gshared (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B5_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D));
	}
	{
		bool L_1 = (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_2 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_3 = L_2;
		bool L_4;
		il2cpp_codegen_box_unbox((&L_3), (&L_4), sizeof(bool), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___FalseTask;
		G_B5_0 = L_5;
		goto IL_0047;
	}

IL_0042:
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___TrueTask;
		G_B5_0 = L_6;
	}

IL_0047:
	{
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_7;
		L_7 = JitHelpers_UnsafeCast_TisTask_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4_mCF03DE27861770061661F941FD86938EB0EAB19B(G_B5_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_7;
	}

IL_004d:
	{
		bool L_8 = (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_9 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_10 = L_9;
		int32_t L_11;
		il2cpp_codegen_box_unbox((&L_10), (&L_11), sizeof(int32_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0259;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(-1))))
		{
			goto IL_0259;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* L_14 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___Int32Tasks;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, (-1)));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_18;
		L_18 = JitHelpers_UnsafeCast_TisTask_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4_mCF03DE27861770061661F941FD86938EB0EAB19B(L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_18;
	}

IL_0092:
	{
		bool L_19 = (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_19)
		{
			goto IL_00bd;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_20 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_21 = L_20;
		uint32_t L_22;
		il2cpp_codegen_box_unbox((&L_21), (&L_22), sizeof(uint32_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		if (!L_22)
		{
			goto IL_0245;
		}
	}

IL_00bd:
	{
		bool L_23 = (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_23)
		{
			goto IL_00e8;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_24 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_25 = L_24;
		uint8_t L_26;
		il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(uint8_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		if (!L_26)
		{
			goto IL_0245;
		}
	}

IL_00e8:
	{
		bool L_27 = (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_27)
		{
			goto IL_0113;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_28 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_29 = L_28;
		int8_t L_30;
		il2cpp_codegen_box_unbox((&L_29), (&L_30), sizeof(int8_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		if (!L_30)
		{
			goto IL_0245;
		}
	}

IL_0113:
	{
		bool L_31 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_31)
		{
			goto IL_013e;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_32 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_33 = L_32;
		Il2CppChar L_34;
		il2cpp_codegen_box_unbox((&L_33), (&L_34), sizeof(Il2CppChar), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		if (!L_34)
		{
			goto IL_0245;
		}
	}

IL_013e:
	{
		bool L_35 = (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_35)
		{
			goto IL_0169;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_36 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_37 = L_36;
		int64_t L_38;
		il2cpp_codegen_box_unbox((&L_37), (&L_38), sizeof(int64_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		if (!L_38)
		{
			goto IL_0245;
		}
	}

IL_0169:
	{
		bool L_39 = (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_39)
		{
			goto IL_0194;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_40 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_41 = L_40;
		uint64_t L_42;
		il2cpp_codegen_box_unbox((&L_41), (&L_42), sizeof(uint64_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		if (!L_42)
		{
			goto IL_0245;
		}
	}

IL_0194:
	{
		bool L_43 = (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_43)
		{
			goto IL_01bf;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_44 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_45 = L_44;
		int16_t L_46;
		il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int16_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		if (!L_46)
		{
			goto IL_0245;
		}
	}

IL_01bf:
	{
		bool L_47 = (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_47)
		{
			goto IL_01e7;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_48 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_49 = L_48;
		uint16_t L_50;
		il2cpp_codegen_box_unbox((&L_49), (&L_50), sizeof(uint16_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		if (!L_50)
		{
			goto IL_0245;
		}
	}

IL_01e7:
	{
		bool L_51 = (IntPtr_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_51)
		{
			goto IL_0216;
		}
	}
	{
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_53 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_54 = L_53;
		intptr_t L_55;
		il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(intptr_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), IntPtr_t_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_52, L_55, NULL);
		if (L_56)
		{
			goto IL_0245;
		}
	}

IL_0216:
	{
		bool L_57 = (UIntPtr_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_57)
		{
			goto IL_0259;
		}
	}
	{
		uintptr_t L_58 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_59 = ___0_result;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_60 = L_59;
		uintptr_t L_61;
		il2cpp_codegen_box_unbox((&L_60), (&L_61), sizeof(uintptr_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UIntPtr_t_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB(L_58, L_61, NULL);
		if (!L_62)
		{
			goto IL_0259;
		}
	}

IL_0245:
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_63 = ((AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask;
		return L_63;
	}

IL_0259:
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_64 = ___0_result;
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_65 = (Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m2A47910E1599CEE2DB645BACAB80F9248911C45F(L_65, L_64, NULL);
		return L_65;
	}
}
// Method Definition Index: 8664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m64380F6FC62F0F63DE32EED1A47036BBCA1BA08E_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D));
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_0 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t53888F559D8BCBDAA71C97CA0F262D2AE090FCE4* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_m49ACC1E311C97A79F7CCC1D8DB7BBDB1142D37ED(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		((AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t06B279D6C204D3E16E7D810C4A2C409DB7CD37E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* AsyncTaskMethodBuilder_1_get_Task_mC63E58760F7595F4A540A440F1CDAB2CA6B212EA (AsyncTaskMethodBuilder_1_tBE311BD19322318D8D9F706B0B90F611E00DAF88* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* V_0 = NULL;
	{
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_2 = (Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m55B3BCD0614CBEE114033B791BDFE5DF7B169063(L_2, NULL);
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m386BC536DBFC3113B45C3168B2E76F60074A71FB (AsyncTaskMethodBuilder_1_tBE311BD19322318D8D9F706B0B90F611E00DAF88* __this, VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* V_0 = NULL;
	{
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA L_2 = ___0_result;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_mC76781448C23EA08E3EE37F20247AFD99A869798(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335(0, L_6, 1, NULL);
	}

IL_002b:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_8, NULL);
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_10 = V_0;
		VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m51BE38E64CCD1B4F9A0BEC04EF05C8D4E071B6BD(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 8661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m697BEFED7966363FED7820632EFEDED9D2574BE4 (AsyncTaskMethodBuilder_1_tBE311BD19322318D8D9F706B0B90F611E00DAF88* __this, Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* ___0_completedTask, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA));
		VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA L_2 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_m386BC536DBFC3113B45C3168B2E76F60074A71FB(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 8662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m76D2123E9C4432E3D7B8931DBEBE8EEBC9C51DF2 (AsyncTaskMethodBuilder_1_tBE311BD19322318D8D9F706B0B90F611E00DAF88* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mC63E58760F7595F4A540A440F1CDAB2CA6B212EA(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck(L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D(L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck(L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771(L_10, L_12, L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 8663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* AsyncTaskMethodBuilder_1_GetTaskForResult_mC76781448C23EA08E3EE37F20247AFD99A869798 (VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA));
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		goto IL_0092;
	}

IL_0092:
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		goto IL_00e8;
	}

IL_00e8:
	{
		goto IL_0113;
	}

IL_0113:
	{
		goto IL_013e;
	}

IL_013e:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_0194;
	}

IL_0194:
	{
		goto IL_01bf;
	}

IL_01bf:
	{
		goto IL_01e7;
	}

IL_01e7:
	{
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0259;
	}

IL_0259:
	{
		VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA L_1 = ___0_result;
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_2 = (Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_mB4766E73551B923B9A2E4FEB6D557326E6A81055(L_2, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 8664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m93E4F0126D48EFA3E631670C27D7C40255191491 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA));
		VRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA L_0 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t539480DB6EE23EDCD5C24DC2F9E80759C086C027* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisVRequestResponse_1_t7674C0DFF7E84D2F5AC62190FACB6FB2D40DBAAA_m1BD09383B66AD091B6BAF54B1577D80111472486(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		((AsyncTaskMethodBuilder_1_tBE311BD19322318D8D9F706B0B90F611E00DAF88_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_tBE311BD19322318D8D9F706B0B90F611E00DAF88_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* AsyncTaskMethodBuilder_1_get_Task_m89FA5D9935912E607C0B108A35E43597ADA04064_gshared (AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* V_0 = NULL;
	{
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_2 = (Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m3BBE27E03E9B9A65448D90B4567A451A196F16B4(L_2, NULL);
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m62AA35EDA8AF8F6A30858A818177900F98830EFF_gshared (AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC* __this, VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* V_0 = NULL;
	{
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_2 = ___0_result;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m45B66FEF05C9ED7403B1D96ABD6E3F6301419965(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335(0, L_6, 1, NULL);
	}

IL_002b:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_10 = V_0;
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m4DA267D25DABBEA111AF6FC7A0977417845EAB3A(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 8661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m2AB5AF88BFCD133BF82012494F031EECFC895C47_gshared (AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC* __this, Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* ___0_completedTask, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2));
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_2 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_m62AA35EDA8AF8F6A30858A818177900F98830EFF(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 8662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m6ACC0F837EC806C5156200831FDF9031D96F60A8_gshared (AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m89FA5D9935912E607C0B108A35E43597ADA04064(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 8663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* AsyncTaskMethodBuilder_1_GetTaskForResult_m45B66FEF05C9ED7403B1D96ABD6E3F6301419965_gshared (VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B5_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2));
	}
	{
		bool L_1 = (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_2 = ___0_result;
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_3 = L_2;
		bool L_4;
		il2cpp_codegen_box_unbox((&L_3), (&L_4), sizeof(bool), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___FalseTask;
		G_B5_0 = L_5;
		goto IL_0047;
	}

IL_0042:
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___TrueTask;
		G_B5_0 = L_6;
	}

IL_0047:
	{
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_7;
		L_7 = JitHelpers_UnsafeCast_TisTask_1_tCADA413A1E83F90F8C592932F204F3E304E5E394_m4D4C5C5CC07E9C358D0B482238B9F27A392B89E1(G_B5_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_7;
	}

IL_004d:
	{
		bool L_8 = (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_9 = ___0_result;
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_10 = L_9;
		int32_t L_11;
		il2cpp_codegen_box_unbox((&L_10), (&L_11), sizeof(int32_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0259;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(-1))))
		{
			goto IL_0259;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* L_14 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___Int32Tasks;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, (-1)));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_18;
		L_18 = JitHelpers_UnsafeCast_TisTask_1_tCADA413A1E83F90F8C592932F204F3E304E5E394_m4D4C5C5CC07E9C358D0B482238B9F27A392B89E1(L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_18;
	}

IL_0092:
	{
		bool L_19 = (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_19)
		{
			goto IL_00bd;
		}
	}
	{
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_20 = ___0_result;
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_21 = L_20;
		uint32_t L_22;
		il2cpp_codegen_box_unbox((&L_21), (&L_22), sizeof(uint32_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		if (!L_22)
		{
			goto IL_0245;
		}
	}

IL_00bd:
	{
		bool L_23 = (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_23)
		{
			goto IL_00e8;
		}
	}
	{
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_24 = ___0_result;
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_25 = L_24;
		uint8_t L_26;
		il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(uint8_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		if (!L_26)
		{
			goto IL_0245;
		}
	}

IL_00e8:
	{
		bool L_27 = (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_27)
		{
			goto IL_0113;
		}
	}
	{
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_28 = ___0_result;
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_29 = L_28;
		int8_t L_30;
		il2cpp_codegen_box_unbox((&L_29), (&L_30), sizeof(int8_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		if (!L_30)
		{
			goto IL_0245;
		}
	}

IL_0113:
	{
		bool L_31 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_31)
		{
			goto IL_013e;
		}
	}
	{
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_32 = ___0_result;
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_33 = L_32;
		Il2CppChar L_34;
		il2cpp_codegen_box_unbox((&L_33), (&L_34), sizeof(Il2CppChar), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		if (!L_34)
		{
			goto IL_0245;
		}
	}

IL_013e:
	{
		bool L_35 = (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_35)
		{
			goto IL_0169;
		}
	}
	{
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_36 = ___0_result;
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_37 = L_36;
		int64_t L_38;
		il2cpp_codegen_box_unbox((&L_37), (&L_38), sizeof(int64_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		if (!L_38)
		{
			goto IL_0245;
		}
	}

IL_0169:
	{
		bool L_39 = (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_39)
		{
			goto IL_0194;
		}
	}
	{
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_40 = ___0_result;
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_41 = L_40;
		uint64_t L_42;
		il2cpp_codegen_box_unbox((&L_41), (&L_42), sizeof(uint64_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		if (!L_42)
		{
			goto IL_0245;
		}
	}

IL_0194:
	{
		bool L_43 = (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_43)
		{
			goto IL_01bf;
		}
	}
	{
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_44 = ___0_result;
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_45 = L_44;
		int16_t L_46;
		il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int16_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		if (!L_46)
		{
			goto IL_0245;
		}
	}

IL_01bf:
	{
		bool L_47 = (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_47)
		{
			goto IL_01e7;
		}
	}
	{
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_48 = ___0_result;
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_49 = L_48;
		uint16_t L_50;
		il2cpp_codegen_box_unbox((&L_49), (&L_50), sizeof(uint16_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		if (!L_50)
		{
			goto IL_0245;
		}
	}

IL_01e7:
	{
		bool L_51 = (IntPtr_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_51)
		{
			goto IL_0216;
		}
	}
	{
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_53 = ___0_result;
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_54 = L_53;
		intptr_t L_55;
		il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(intptr_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), IntPtr_t_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_52, L_55, NULL);
		if (L_56)
		{
			goto IL_0245;
		}
	}

IL_0216:
	{
		bool L_57 = (UIntPtr_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_57)
		{
			goto IL_0259;
		}
	}
	{
		uintptr_t L_58 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_59 = ___0_result;
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_60 = L_59;
		uintptr_t L_61;
		il2cpp_codegen_box_unbox((&L_60), (&L_61), sizeof(uintptr_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UIntPtr_t_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB(L_58, L_61, NULL);
		if (!L_62)
		{
			goto IL_0259;
		}
	}

IL_0245:
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_63 = ((AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask;
		return L_63;
	}

IL_0259:
	{
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_64 = ___0_result;
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_65 = (Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m60404CECCE3BD95F7376A606FC30A4ED02F3AC7D(L_65, L_64, NULL);
		return L_65;
	}
}
// Method Definition Index: 8664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m9C7344D0832AB65B3BE4B45DE73E4EFD92157FDF_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2));
		VRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2 L_0 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tCADA413A1E83F90F8C592932F204F3E304E5E394* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisVRequestResponse_1_t2EF66E20D319186D068809417DF2C72704068DF2_m401D33FD896AE2D1DFFC582A7041A73695E18DAF(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		((AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_tDDA73898D4A1F49F284BA18C349DD5DE7FF4F7CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskMethodBuilder_1_get_Task_mE609D90E26A71ADDE2ADBB19849044C7CA4C4D4B_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* V_0 = NULL;
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_2 = (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m773E32A0278D4184509216516F51E633D556249D(L_2, NULL);
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mAE4006FB62DEEE49C59A099D0AF0262DC87FD274_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* V_0 = NULL;
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_2 = ___0_result;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_m46974E7C50DB99B6F03020A87DB2DEDF4334862A(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335(0, L_6, 1, NULL);
	}

IL_002b:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_10 = V_0;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m35667C7E8DFA2602F26A7302980F2450EDBD28FA(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 8661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3A9C5949460ED87484B817BE59DFCB8F122C31B2_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* ___0_completedTask, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F));
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_2 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_mAE4006FB62DEEE49C59A099D0AF0262DC87FD274(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 8662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m877EAFFD76B7C235F9DCBE854DC10E9D71F691CE_gshared (AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mE609D90E26A71ADDE2ADBB19849044C7CA4C4D4B(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 8663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* AsyncTaskMethodBuilder_1_GetTaskForResult_m46974E7C50DB99B6F03020A87DB2DEDF4334862A_gshared (ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B5_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F));
	}
	{
		bool L_1 = (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_2 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_3 = L_2;
		bool L_4;
		il2cpp_codegen_box_unbox((&L_3), (&L_4), sizeof(bool), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___FalseTask;
		G_B5_0 = L_5;
		goto IL_0047;
	}

IL_0042:
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___TrueTask;
		G_B5_0 = L_6;
	}

IL_0047:
	{
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_7;
		L_7 = JitHelpers_UnsafeCast_TisTask_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1_m7286BF58224B81BDD4C8B670A0756D3D47C9EB85(G_B5_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_7;
	}

IL_004d:
	{
		bool L_8 = (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_9 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_10 = L_9;
		int32_t L_11;
		il2cpp_codegen_box_unbox((&L_10), (&L_11), sizeof(int32_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0259;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(-1))))
		{
			goto IL_0259;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* L_14 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___Int32Tasks;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, (-1)));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_18;
		L_18 = JitHelpers_UnsafeCast_TisTask_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1_m7286BF58224B81BDD4C8B670A0756D3D47C9EB85(L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_18;
	}

IL_0092:
	{
		bool L_19 = (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_19)
		{
			goto IL_00bd;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_20 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_21 = L_20;
		uint32_t L_22;
		il2cpp_codegen_box_unbox((&L_21), (&L_22), sizeof(uint32_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		if (!L_22)
		{
			goto IL_0245;
		}
	}

IL_00bd:
	{
		bool L_23 = (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_23)
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_24 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_25 = L_24;
		uint8_t L_26;
		il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(uint8_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		if (!L_26)
		{
			goto IL_0245;
		}
	}

IL_00e8:
	{
		bool L_27 = (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_27)
		{
			goto IL_0113;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_28 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_29 = L_28;
		int8_t L_30;
		il2cpp_codegen_box_unbox((&L_29), (&L_30), sizeof(int8_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		if (!L_30)
		{
			goto IL_0245;
		}
	}

IL_0113:
	{
		bool L_31 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_31)
		{
			goto IL_013e;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_32 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_33 = L_32;
		Il2CppChar L_34;
		il2cpp_codegen_box_unbox((&L_33), (&L_34), sizeof(Il2CppChar), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		if (!L_34)
		{
			goto IL_0245;
		}
	}

IL_013e:
	{
		bool L_35 = (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_35)
		{
			goto IL_0169;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_36 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_37 = L_36;
		int64_t L_38;
		il2cpp_codegen_box_unbox((&L_37), (&L_38), sizeof(int64_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		if (!L_38)
		{
			goto IL_0245;
		}
	}

IL_0169:
	{
		bool L_39 = (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_39)
		{
			goto IL_0194;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_40 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_41 = L_40;
		uint64_t L_42;
		il2cpp_codegen_box_unbox((&L_41), (&L_42), sizeof(uint64_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		if (!L_42)
		{
			goto IL_0245;
		}
	}

IL_0194:
	{
		bool L_43 = (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_43)
		{
			goto IL_01bf;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_44 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_45 = L_44;
		int16_t L_46;
		il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int16_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		if (!L_46)
		{
			goto IL_0245;
		}
	}

IL_01bf:
	{
		bool L_47 = (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_47)
		{
			goto IL_01e7;
		}
	}
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_48 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_49 = L_48;
		uint16_t L_50;
		il2cpp_codegen_box_unbox((&L_49), (&L_50), sizeof(uint16_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		if (!L_50)
		{
			goto IL_0245;
		}
	}

IL_01e7:
	{
		bool L_51 = (IntPtr_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_51)
		{
			goto IL_0216;
		}
	}
	{
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_53 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_54 = L_53;
		intptr_t L_55;
		il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(intptr_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), IntPtr_t_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_52, L_55, NULL);
		if (L_56)
		{
			goto IL_0245;
		}
	}

IL_0216:
	{
		bool L_57 = (UIntPtr_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_57)
		{
			goto IL_0259;
		}
	}
	{
		uintptr_t L_58 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_59 = ___0_result;
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_60 = L_59;
		uintptr_t L_61;
		il2cpp_codegen_box_unbox((&L_60), (&L_61), sizeof(uintptr_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UIntPtr_t_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB(L_58, L_61, NULL);
		if (!L_62)
		{
			goto IL_0259;
		}
	}

IL_0245:
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_63 = ((AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask;
		return L_63;
	}

IL_0259:
	{
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_64 = ___0_result;
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_65 = (Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m850623421A0EDC334FF9766142F6A0EB81E94F31(L_65, L_64, NULL);
		return L_65;
	}
}
// Method Definition Index: 8664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m76F9917F167E1B5DCAC3C6A29C2E1359F003A40A_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F));
		ValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F L_0 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t533A02624750BD9B1E9115C70FA4526E8F5103D1* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisValueTuple_2_tA1F57D1BF4EF05B528C30090544203C0BD92787F_m50D5F3901C4DD732985EF18C8178CF77A93AB0F6(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		((AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t212334E1518335339518448F317FEC5798B9F09F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask), (void*)L_1);
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
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
// Method Definition Index: 8660
// Method Definition Index: 8661
// Method Definition Index: 8662
// Method Definition Index: 8663
// Method Definition Index: 8664
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8654
// Method Definition Index: 8656
// Method Definition Index: 8659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* AsyncTaskMethodBuilder_1_get_Task_mDBE81F42AD4393A66CC4DB4863199628F00287C1_gshared (AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* V_0 = NULL;
	{
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_2 = (Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_m77A01D2C65CD6690668562EFFAB7A37C41A3235D(L_2, NULL);
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_3 = L_2;
		V_0 = L_3;
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
	}

IL_0017:
	{
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m5A41D891270278B3916431CB436C140145ADC5BB_gshared (AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* V_0 = NULL;
	{
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_0 = __this->___m_task;
		V_0 = L_0;
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_2 = ___0_result;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_3;
		L_3 = AsyncTaskMethodBuilder_1_GetTaskForResult_mDA7886360E9B059F5D70D923ACD6BB7056232D55(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_task = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_3);
		return;
	}

IL_0017:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_5 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5);
		int32_t L_6;
		L_6 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335(0, L_6, 1, NULL);
	}

IL_002b:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___s_asyncDebuggingEnabled;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_8 = V_0;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8);
		int32_t L_9;
		L_9 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_8, NULL);
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(L_9, NULL);
	}

IL_003d:
	{
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_10 = V_0;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_11 = ___0_result;
		NullCheck(L_10);
		bool L_12;
		L_12 = Task_1_TrySetResult_m3E9263D31F070E985E55BE9C9BDD539433CE9499(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 8661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m47327642F769C22C86AFA74F0BB99FCF55C649A8_gshared (AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084* __this, Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* ___0_completedTask, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_0 = __this->___m_task;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_1 = ___0_completedTask;
		__this->___m_task = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_1);
		return;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A));
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_2 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_m5A41D891270278B3916431CB436C140145ADC5BB(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return;
	}
}
// Method Definition Index: 8662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB8FCD819FCDADB384CE6B0C32386AFF172C93685_gshared (AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* V_0 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_1 = NULL;
	bool G_B7_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_2 = __this->___m_task;
		V_0 = L_2;
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mDBE81F42AD4393A66CC4DB4863199628F00287C1(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_0 = L_4;
	}

IL_001f:
	{
		Exception_t* L_5 = ___0_exception;
		V_1 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_5, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_1;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_7 = V_0;
		Exception_t* L_8 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7);
		bool L_9;
		L_9 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_003f;
	}

IL_0032:
	{
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_10 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_11 = V_1;
		NullCheck(L_11);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12;
		L_12 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_11, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_13 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10);
		bool L_14;
		L_14 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_10, L_12, L_13, NULL);
		G_B7_0 = L_14;
	}

IL_003f:
	{
		if (G_B7_0)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D0DFF194F98B55D55753ECEBC2376F98EEEC60C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 8663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* AsyncTaskMethodBuilder_1_GetTaskForResult_mDA7886360E9B059F5D70D923ACD6BB7056232D55_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit);
	//<source_info:<no-source>:1>
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B5_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A));
	}
	{
		bool L_1 = (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_2 = ___0_result;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_3 = L_2;
		bool L_4;
		il2cpp_codegen_box_unbox((&L_3), (&L_4), sizeof(bool), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___FalseTask;
		G_B5_0 = L_5;
		goto IL_0047;
	}

IL_0042:
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___TrueTask;
		G_B5_0 = L_6;
	}

IL_0047:
	{
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_7;
		L_7 = JitHelpers_UnsafeCast_TisTask_1_t60702DD15F7E8DA26F8418312C251A9303E5309A_m687D72D7896B552F94F2DB4E931073357D9309D1(G_B5_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_7;
	}

IL_004d:
	{
		bool L_8 = (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_9 = ___0_result;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_10 = L_9;
		int32_t L_11;
		il2cpp_codegen_box_unbox((&L_10), (&L_11), sizeof(int32_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0259;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(-1))))
		{
			goto IL_0259;
		}
	}
	{
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* L_14 = ((AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields*)il2cpp_codegen_static_fields_for(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var))->___Int32Tasks;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, (-1)));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_18;
		L_18 = JitHelpers_UnsafeCast_TisTask_1_t60702DD15F7E8DA26F8418312C251A9303E5309A_m687D72D7896B552F94F2DB4E931073357D9309D1(L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_18;
	}

IL_0092:
	{
		bool L_19 = (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_19)
		{
			goto IL_00bd;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_20 = ___0_result;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_21 = L_20;
		uint32_t L_22;
		il2cpp_codegen_box_unbox((&L_21), (&L_22), sizeof(uint32_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		if (!L_22)
		{
			goto IL_0245;
		}
	}

IL_00bd:
	{
		bool L_23 = (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_23)
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_24 = ___0_result;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_25 = L_24;
		uint8_t L_26;
		il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(uint8_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		if (!L_26)
		{
			goto IL_0245;
		}
	}

IL_00e8:
	{
		bool L_27 = (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_27)
		{
			goto IL_0113;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_28 = ___0_result;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_29 = L_28;
		int8_t L_30;
		il2cpp_codegen_box_unbox((&L_29), (&L_30), sizeof(int8_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		if (!L_30)
		{
			goto IL_0245;
		}
	}

IL_0113:
	{
		bool L_31 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_31)
		{
			goto IL_013e;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_32 = ___0_result;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_33 = L_32;
		Il2CppChar L_34;
		il2cpp_codegen_box_unbox((&L_33), (&L_34), sizeof(Il2CppChar), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		if (!L_34)
		{
			goto IL_0245;
		}
	}

IL_013e:
	{
		bool L_35 = (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_35)
		{
			goto IL_0169;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_36 = ___0_result;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_37 = L_36;
		int64_t L_38;
		il2cpp_codegen_box_unbox((&L_37), (&L_38), sizeof(int64_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		if (!L_38)
		{
			goto IL_0245;
		}
	}

IL_0169:
	{
		bool L_39 = (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_39)
		{
			goto IL_0194;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_40 = ___0_result;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_41 = L_40;
		uint64_t L_42;
		il2cpp_codegen_box_unbox((&L_41), (&L_42), sizeof(uint64_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		if (!L_42)
		{
			goto IL_0245;
		}
	}

IL_0194:
	{
		bool L_43 = (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_43)
		{
			goto IL_01bf;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_44 = ___0_result;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_45 = L_44;
		int16_t L_46;
		il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int16_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		if (!L_46)
		{
			goto IL_0245;
		}
	}

IL_01bf:
	{
		bool L_47 = (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_47)
		{
			goto IL_01e7;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_48 = ___0_result;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_49 = L_48;
		uint16_t L_50;
		il2cpp_codegen_box_unbox((&L_49), (&L_50), sizeof(uint16_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		if (!L_50)
		{
			goto IL_0245;
		}
	}

IL_01e7:
	{
		bool L_51 = (IntPtr_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_51)
		{
			goto IL_0216;
		}
	}
	{
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_53 = ___0_result;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_54 = L_53;
		intptr_t L_55;
		il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(intptr_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), IntPtr_t_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_52, L_55, NULL);
		if (L_56)
		{
			goto IL_0245;
		}
	}

IL_0216:
	{
		bool L_57 = (UIntPtr_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_57)
		{
			goto IL_0259;
		}
	}
	{
		uintptr_t L_58 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_59 = ___0_result;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_60 = L_59;
		uintptr_t L_61;
		il2cpp_codegen_box_unbox((&L_60), (&L_61), sizeof(uintptr_t), il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), UIntPtr_t_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB(L_58, L_61, NULL);
		if (!L_62)
		{
			goto IL_0259;
		}
	}

IL_0245:
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t9020572610E5159A6FA31E419610F06289E2D6A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_63 = ((AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask;
		return L_63;
	}

IL_0259:
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_64 = ___0_result;
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_65 = (Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Task_1__ctor_mFBD6B2A766CBD705A5B785A55CF20350ADDA7041(L_65, L_64, NULL);
		return L_65;
	}
}
// Method Definition Index: 8664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1__cctor_m606FCD3566F6707D76C72DCC0DCADF257A8A684C_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A));
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = V_0;
		CHECKED_LOCAL_INIT(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticInit,(AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_1_t60702DD15F7E8DA26F8418312C251A9303E5309A* L_1;
		L_1 = AsyncTaskCache_CreateCacheableTask_TisValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A_m065F3734C0CFD641D98D9FE1D2F018A142787A30(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		((AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncTaskMethodBuilder_1_t33BDE80600FFA9E52ECD3924825BFF6FE477F084_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_defaultResultTask), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 2333
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->____cancellationToken;
		return L_0;
	}
}
// Method Definition Index: 3991
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 57724
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 57823
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
// Method Definition Index: 57824
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
// Method Definition Index: 886
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBCE58B67D7100D1DFF3F431F7DF460E9C688745B_inline (Action_1_t69E611F01CC2051A51509BEA84FA829EA4D7C643* __this, AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30 ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, AsyncLocalValueChangedArgs_1_t162DBFD4DFE11C6E436BC98C963BC7F202AA6A30, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 886
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m15B09A14760255FA046745C030377D21CE4BE793_gshared_inline (Action_1_tB137F0A79CAAF9953E6A15AB8139E511ACF2041D* __this, AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95 ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, AsyncLocalValueChangedArgs_1_t34A7AA595B4FEF027D916046211DE5820EC48E95, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
