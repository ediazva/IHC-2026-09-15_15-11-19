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

struct Action_2_t51E776B19889F54C4563EFCA9FDFEF4DFE749E4C;
struct Action_2_t53AA40360DDB151AE9E6933A1F6E258903C5BD42;
struct Action_2_tA532F7C1E8AB35167568DC3B0B1B607F0E34A273;
struct Action_2_t78A13A37D807DA14C50558DE22554BDC58A90028;
struct Action_2_t3E1FDE6357E99412633F66633B2C1F49CA973AAA;
struct Action_2_t85E4D6806C5E4845769D3CDC1CFC95CC8562370D;
struct Action_2_t02865CCA7CB9B81C3E3DEFACEE60DAA4822D369A;
struct Action_2_t0A0368E2267C9BB4CF0A40C9AB0C7306D5D9CF1C;
struct Action_2_t97598B59F72CB8C70551E2E7E741AEDDFE6B4B65;
struct Action_2_t7D4F2BBCCDA74D4AC83805662258EA3D5DBC9716;
struct Action_2_t8C5BCB6DFD45421FB6BF6564B24E26E78F703210;
struct Action_2_t3C2FD524CED774DFD192C2121C35FB8034C4E4CF;
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
struct Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC;
struct Dictionary_2_t78682AB7E4D7EF27960F9D3DEA75B1B752C9B9CA;
struct Dictionary_2_t3D61F3C6314B396E1252276C5242F7F6E3B0A820;
struct Dictionary_2_tBFED0BAAE99BA21C1A1F85C8EC447102D2BEC75D;
struct Dictionary_2_tFC33AED7C70246B9F3A2863877F3DBED4621B9A0;
struct Dictionary_2_t07293EB199E89308371B85D2D76648E5DCFDDE5E;
struct Dictionary_2_tEBA3536DFA9BAB6E557B9B1BA96507B1F7F9A3F8;
struct Dictionary_2_t56B5C5AFC704CD07585B86FAD4BF28C5D0D3BEDC;
struct Dictionary_2_t47F7569EF6ACF53F054A513156CB8D3A7C3A2C64;
struct Dictionary_2_t69CB03D0D5430ACF83CFAABB98D8989CDFC675BF;
struct Dictionary_2_tEAF5C1C5800CA8739721A8D02ED25F988D26CE9D;
struct Dictionary_2_t1A4A2342084D531FE94A210D83EFB34F3F722AB1;
struct Dictionary_2_tB18ABE217F71D79CC3F6914E60108C9DB88533F8;
struct Dictionary_2_tA95BA0FDD7F662E07CE9CEAC6309D99896FBDAFD;
struct Dictionary_2_t40E00C7968484A24FC0C6EA319105BF0BBB1C5D8;
struct Dictionary_2_t599399EEF6D4A0BA898FB1BE70E141DE265A260C;
struct Dictionary_2_t2240EA70CB22C3FBB0F0205E4EDC23936F665B51;
struct Dictionary_2_t3A4900DEB8BEC487A28DF13A024214D7FD1F14E6;
struct Dictionary_2_t558E75B00EAE06A542164FB8689E141291319268;
struct Dictionary_2_tE22BED043BB30D0D60743980566721F90177F78E;
struct Dictionary_2_t15B3373A7FAF540484B4BA2DC98558F69AA8C8AA;
struct Dictionary_2_t76A3BED16803C544E5EC86A30D0B90B8F976E3B1;
struct Dictionary_2_tB8DF11A5A693EFABEC1DD0923842E432691DED5F;
struct Dictionary_2_t8A505527321B8021556F6758F89A212D74530B8D;
struct Dictionary_2_tC27CEAC1868016E12980B2B1934B00C0EF87B3F2;
struct Dictionary_2_tF701FF6181DF4EAC5A0E924C85FDA310778CA788;
struct Dictionary_2_tECEFA12444072B7EEBDF40AF0B53BEC6F0CE3861;
struct Dictionary_2_tDB1CE933E91CB1A1E70178F12AEFFBF0F482ED02;
struct Dictionary_2_t6A4751DC5E7CA38BF764EC64CCEAD0282E2CBBEF;
struct Dictionary_2_t94B0CA3FD23CABE9CE9412B531E11B20933FB2C0;
struct Dictionary_2_tB66E81B1D7137A4D6EF42CCE302070600CDC670E;
struct Dictionary_2_t5177696117A79A2D5779ECB7FD2AC63BFDAED0C3;
struct Dictionary_2_t70242BDE1FDB354FEB8D863AF3B1BF2D17AEA3C2;
struct Dictionary_2_t85EE40BAE8C95B8F23972D3FA92D6798C0B91666;
struct Dictionary_2_t499544DBA47E410DB0608E32FDA7D075220E5F73;
struct Dictionary_2_t69E5D1F983EFDF86E3B410C3C780476082BB07A8;
struct Dictionary_2_t38FA9501968458BAED7CADEFFCF49C95FC136138;
struct Dictionary_2_t1941D53B6C2D09A6BF3CC162BCFE42F7163AB937;
struct Dictionary_2_t9C2E4757F3F81A8C8C7EE942D896FEA71985ECB1;
struct Dictionary_2_tB479E966A60E9F46A18BB8BE9BB693571A93E8A5;
struct Dictionary_2_t7A57A615B2828533A5A4B7123C6F60CC79EA1452;
struct Dictionary_2_t8DE0DD6D6DBAD09EF1A3408AB1C1C357BF2D4D70;
struct Dictionary_2_tE0C9E4F524674C95AEEE4607587F6171438601D5;
struct Dictionary_2_t9D79DC58198A9120F8D4D8ED812F27889CDBD8EA;
struct Dictionary_2_tC4497EBA3F72AFAE0C7832B8C58E006D78E806F1;
struct Dictionary_2_t815DFE26F8535D05FEC532036354DB6DC8B70375;
struct Dictionary_2_tA954CD372840515107D63925699ACA22AF8733F6;
struct Dictionary_2_tD17B56AB61B73C4509B19FC3C92E97E22826E9A2;
struct Dictionary_2_tCDA5AEDEA5B2E4898A574E2A05A9CF8EA375F813;
struct Dictionary_2_t4EEB32BED32F5C81E062F4D5B1DB59EBA6F3142D;
struct Dictionary_2_t11734BDB084B9B3CF7FF66FF72AA2F3FBD7396D6;
struct Dictionary_2_t41DB6D70B3317671E6BF537D4AD34342BE6285F1;
struct Dictionary_2_tC276BEC138AEE0D3EE2577F08F3E865C1262BB66;
struct Dictionary_2_t8307FC0C8B01BB4366B660C9E32F4A07F61CBBFB;
struct Dictionary_2_t8DB9E1CC9276451734ED91BDB415C2C56357BA7C;
struct Dictionary_2_t42D9773D04BD2A35DD343BA5E6B6E9D152A8FDB0;
struct Dictionary_2_t05D7CDBF9637AF1A0E82218EB3E706E8BD067759;
struct Dictionary_2_tACDA8A8895C1F7AD540D97B4E686400215D6050A;
struct Dictionary_2_t84B82385DD78BB06C5D02127E87FF85129353ACF;
struct Dictionary_2_tBC171FFCB293CBAE5949F447DAC38E20AA7676F9;
struct Dictionary_2_t21E4675DEA0A2AB064944069E4886A8D1A0C5497;
struct Dictionary_2_t089F00842B1CF2970B82225E22A3CDA2C46642A5;
struct Dictionary_2_t6D41BD5F1AC7C2B3352D018272300955549382DE;
struct Dictionary_2_tADAA8EB6141D537CB447844F210934A3D04A0D8E;
struct Dictionary_2_t6DFB9BCAC0C5F1B163C740BBB8EF7038A715B186;
struct Dictionary_2_t6A5055AAB407A11CE4E89FEA7734602C04EED667;
struct Dictionary_2_tDE0ACCF144F921EF67AE21C66F108C40228194CC;
struct Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8;
struct Dictionary_2_t3D3B4A03A26C20738E0A30F0C6D66BEFD8054920;
struct Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4;
struct Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0;
struct Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9;
struct Dictionary_2_t22753D90D3ABB2A75BA83D7FA451051F53F75798;
struct Dictionary_2_tDA11C273BCD8AB261D27CE7BE2E17A0BFE1B6DD3;
struct Dictionary_2_t08F268FC378959FEFD117B2B273AAB4E66029724;
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
struct Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53;
struct Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C;
struct DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467;
struct DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D;
struct DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0;
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4;
struct HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828;
struct HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
struct HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
struct Stack_1_t0CA5713F7DD620D4C839FC6F19CEA972026B8212;
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IRenderGraphResourceU5BU5D_tF72B9471181CD494E8F4A0274F40A7A037FF44C7;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021;
struct IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35;
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540;
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
struct RenderGraphResourcesData_t4E1A864AD7A36EC74B28D89C86E3A4D0997958CF;
struct ResourceCallback_tAD2AFD87AC5F4806D2DE0A543648F1FA25E52356;
struct ResourceCreateCallback_t801515B956F3C21C25B4DD6A4E4E01BBCF12E657;
struct Container_tC37DC3F487EACD6965331243CDFEF748D8F5A05F;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5;
IL2CPP_EXTERN_C String_t* _stringLiteral509C34C49C5DC337A113CD180F48B978CB164358;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467  : public RuntimeObject
{
	IRenderGraphResourceU5BU5D_tF72B9471181CD494E8F4A0274F40A7A037FF44C7* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
};
struct DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
};
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};
struct IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021  : public RuntimeObject
{
	bool ___imported;
	bool ___shared;
	bool ___sharedExplicitRelease;
	bool ___requestFallBack;
	uint32_t ___writeCount;
	uint32_t ___readCount;
	int32_t ___cachedHash;
	int32_t ___transientPassIndex;
	int32_t ___sharedResourceLastFrameUsed;
	bool ___isBackBuffer;
};
struct IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35  : public RuntimeObject
{
	bool ___U3CIntraFrameMemoryAliasingU3Ek__BackingField;
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
struct MarshalledUnityObject_tA225A4A0AE6E49830C3C0142B2984549E0786A28  : public RuntimeObject
{
};
struct RenderGraphResourcesData_t4E1A864AD7A36EC74B28D89C86E3A4D0997958CF  : public RuntimeObject
{
	DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* ___resourceArray;
	int32_t ___sharedResourcesCount;
	IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* ___pool;
	ResourceCreateCallback_t801515B956F3C21C25B4DD6A4E4E01BBCF12E657* ___createResourceCallback;
	ResourceCallback_tAD2AFD87AC5F4806D2DE0A543648F1FA25E52356* ___releaseResourceCallback;
};
struct Container_tC37DC3F487EACD6965331243CDFEF748D8F5A05F  : public RuntimeObject
{
	ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ___m_Instance;
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___m_Users;
};
struct PrimitivesConverters_t4AC0AF040C8B4B0C9C0C9A0A6F806521CFD84F27  : public RuntimeObject
{
};
typedef Il2CppFullySharedGenericStruct OVRResult_1_t19B05D5EAE86471F75E754DBB66D91A0AC4EA100;
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
typedef Il2CppFullySharedGenericStruct OVRResult_2_t703F3E540EFCF488BA8D725E23CE75221F41E842;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
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
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body;
};
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 
{
	int32_t ___m_Index1;
	uint16_t ___m_World0;
	uint16_t ___m_Generation;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
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
struct ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 
{
	int32_t ___m_IndexId;
	uint16_t ___m_WorldId;
	uint16_t ___m_Padding;
	int32_t ___m_GenerationId;
};
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables;
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame;
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars;
};
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A 
{
	intptr_t ____value;
};
struct ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 
{
	intptr_t ____value;
};
struct ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 
{
	intptr_t ____value;
};
struct ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 
{
	intptr_t ____value;
};
struct ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 
{
	intptr_t ____value;
};
struct ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF 
{
	intptr_t ____value;
};
struct ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 
{
	intptr_t ____value;
};
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};
struct OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 
{
	bool ____initialized;
	Guid_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRTask_1_t89F0C4998FE0B9C74A8E2D39234BD07414352CD8 
{
	Guid_t ____id;
};
struct OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 
{
	Guid_t ____id;
};
struct OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 
{
	Guid_t ____id;
};
struct OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 
{
	Guid_t ____id;
};
struct OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF 
{
	Guid_t ____id;
};
struct OVRTask_1_t94F4E2567FE384DE19D2440AEC8B36FE2B3E8A05 
{
	Guid_t ____id;
};
struct OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 
{
	Guid_t ____id;
};
struct OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F 
{
	Guid_t ____id;
};
struct OVRTask_1_t574D93A662594FDA565B4ADE2EA77FB85FBEE5F9 
{
	Guid_t ____id;
};
struct OVRTask_1_t717CF2DDBE10620FB65377357B229F5037811A6C 
{
	Guid_t ____id;
};
struct OVRTask_1_t94B6938A40625ACBF60BCC7DCC0FD4A87D1F33A9 
{
	Guid_t ____id;
};
struct OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 
{
	Guid_t ____id;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
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
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
	Guid_t ___U3CUuidU3Ek__BackingField;
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
struct PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction;
};
struct PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct Result_t65718B00CEF7A5D1E84402EA2DDCF5BF3D3E6797 
{
	int32_t ___value__;
};
struct TransformWriteMode_tAC88F83F00B2B74873BDD3631AC07283279591D4 
{
	int32_t ___value__;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 
{
	ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 
{
	ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 
{
	ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B 
{
	ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 
{
	ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 
{
	ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 ____pointer;
	int32_t ____length;
};
struct Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 
{
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A ____pointer;
	int32_t ____length;
};
struct PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 ___rotation;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F 
{
	int32_t ____synchronousResult;
	Guid_t ____taskId;
};
struct ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
};
struct ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
};
struct JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A 
{
	PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884 ___m_Joint;
	intptr_t ___m_UserData;
};
struct TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_TriggerShape;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_VisitorShape;
};
struct TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_TriggerShape;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_VisitorShape;
};
struct PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D 
{
	intptr_t ___m_Buffer;
	int32_t ___m_Size;
	int32_t ___m_Allocator;
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_TransformWriteMode;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_PhysicsTransform;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_TransformId;
	int32_t ___m_TransformDepth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearVelocity;
	float ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PositionFrom;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RotationFrom;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6 
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	bool ___m_FellAsleep;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_pinvoke
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_FellAsleep;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_com
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_FellAsleep;
};
struct ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC 
{
	ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291 ___m_BeginEvent;
};
struct ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A 
{
	ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002 ___m_EndEvent;
};
struct JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF 
{
	JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A ___m_JointThresholdEvent;
};
struct TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576 
{
	TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9 ___m_BeginEvent;
};
struct TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A 
{
	TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04 ___m_EndEvent;
};
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84 
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6 ___m_BodyUpdateEvent;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_marshaled_pinvoke
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_pinvoke ___m_BodyUpdateEvent;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_marshaled_com
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_com ___m_BodyUpdateEvent;
};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	RuntimeObject* ___Property;
};
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache;
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories;
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable;
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
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct OVRTask_1_t89F0C4998FE0B9C74A8E2D39234BD07414352CD8_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t4EEB32BED32F5C81E062F4D5B1DB59EBA6F3142D* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t42D9773D04BD2A35DD343BA5E6B6E9D152A8FDB0* ___Sources;
	Dictionary_2_t78682AB7E4D7EF27960F9D3DEA75B1B752C9B9CA* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_tA95BA0FDD7F662E07CE9CEAC6309D99896FBDAFD* ___ContinueWithInvokers;
	Dictionary_2_tF701FF6181DF4EAC5A0E924C85FDA310778CA788* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t1941D53B6C2D09A6BF3CC162BCFE42F7163AB937* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t51E776B19889F54C4563EFCA9FDFEF4DFE749E4C* ____onCombinedTaskCompleted;
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
struct OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t41DB6D70B3317671E6BF537D4AD34342BE6285F1* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_tACDA8A8895C1F7AD540D97B4E686400215D6050A* ___Sources;
	Dictionary_2_tBFED0BAAE99BA21C1A1F85C8EC447102D2BEC75D* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t599399EEF6D4A0BA898FB1BE70E141DE265A260C* ___ContinueWithInvokers;
	Dictionary_2_tDB1CE933E91CB1A1E70178F12AEFFBF0F482ED02* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_tB479E966A60E9F46A18BB8BE9BB693571A93E8A5* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_tA532F7C1E8AB35167568DC3B0B1B607F0E34A273* ____onCombinedTaskCompleted;
};
struct OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_tC276BEC138AEE0D3EE2577F08F3E865C1262BB66* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t84B82385DD78BB06C5D02127E87FF85129353ACF* ___Sources;
	Dictionary_2_tFC33AED7C70246B9F3A2863877F3DBED4621B9A0* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t2240EA70CB22C3FBB0F0205E4EDC23936F665B51* ___ContinueWithInvokers;
	Dictionary_2_t6A4751DC5E7CA38BF764EC64CCEAD0282E2CBBEF* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t7A57A615B2828533A5A4B7123C6F60CC79EA1452* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t78A13A37D807DA14C50558DE22554BDC58A90028* ____onCombinedTaskCompleted;
};
struct OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t8307FC0C8B01BB4366B660C9E32F4A07F61CBBFB* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_tBC171FFCB293CBAE5949F447DAC38E20AA7676F9* ___Sources;
	Dictionary_2_t07293EB199E89308371B85D2D76648E5DCFDDE5E* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t3A4900DEB8BEC487A28DF13A024214D7FD1F14E6* ___ContinueWithInvokers;
	Dictionary_2_t94B0CA3FD23CABE9CE9412B531E11B20933FB2C0* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t8DE0DD6D6DBAD09EF1A3408AB1C1C357BF2D4D70* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t3E1FDE6357E99412633F66633B2C1F49CA973AAA* ____onCombinedTaskCompleted;
};
struct OVRTask_1_t94F4E2567FE384DE19D2440AEC8B36FE2B3E8A05_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t8DB9E1CC9276451734ED91BDB415C2C56357BA7C* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t21E4675DEA0A2AB064944069E4886A8D1A0C5497* ___Sources;
	Dictionary_2_tEBA3536DFA9BAB6E557B9B1BA96507B1F7F9A3F8* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t558E75B00EAE06A542164FB8689E141291319268* ___ContinueWithInvokers;
	Dictionary_2_tB66E81B1D7137A4D6EF42CCE302070600CDC670E* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_tE0C9E4F524674C95AEEE4607587F6171438601D5* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t85E4D6806C5E4845769D3CDC1CFC95CC8562370D* ____onCombinedTaskCompleted;
};
struct OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t3D3B4A03A26C20738E0A30F0C6D66BEFD8054920* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t089F00842B1CF2970B82225E22A3CDA2C46642A5* ___Sources;
	Dictionary_2_t56B5C5AFC704CD07585B86FAD4BF28C5D0D3BEDC* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_tE22BED043BB30D0D60743980566721F90177F78E* ___ContinueWithInvokers;
	Dictionary_2_t5177696117A79A2D5779ECB7FD2AC63BFDAED0C3* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t9D79DC58198A9120F8D4D8ED812F27889CDBD8EA* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t02865CCA7CB9B81C3E3DEFACEE60DAA4822D369A* ____onCombinedTaskCompleted;
};
struct OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t6D41BD5F1AC7C2B3352D018272300955549382DE* ___Sources;
	Dictionary_2_t47F7569EF6ACF53F054A513156CB8D3A7C3A2C64* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t15B3373A7FAF540484B4BA2DC98558F69AA8C8AA* ___ContinueWithInvokers;
	Dictionary_2_t70242BDE1FDB354FEB8D863AF3B1BF2D17AEA3C2* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_tC4497EBA3F72AFAE0C7832B8C58E006D78E806F1* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t0A0368E2267C9BB4CF0A40C9AB0C7306D5D9CF1C* ____onCombinedTaskCompleted;
};
struct OVRTask_1_t574D93A662594FDA565B4ADE2EA77FB85FBEE5F9_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_tADAA8EB6141D537CB447844F210934A3D04A0D8E* ___Sources;
	Dictionary_2_t69CB03D0D5430ACF83CFAABB98D8989CDFC675BF* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t76A3BED16803C544E5EC86A30D0B90B8F976E3B1* ___ContinueWithInvokers;
	Dictionary_2_t85EE40BAE8C95B8F23972D3FA92D6798C0B91666* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t815DFE26F8535D05FEC532036354DB6DC8B70375* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t97598B59F72CB8C70551E2E7E741AEDDFE6B4B65* ____onCombinedTaskCompleted;
};
struct OVRTask_1_t717CF2DDBE10620FB65377357B229F5037811A6C_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t22753D90D3ABB2A75BA83D7FA451051F53F75798* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t6DFB9BCAC0C5F1B163C740BBB8EF7038A715B186* ___Sources;
	Dictionary_2_tEAF5C1C5800CA8739721A8D02ED25F988D26CE9D* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_tB8DF11A5A693EFABEC1DD0923842E432691DED5F* ___ContinueWithInvokers;
	Dictionary_2_t499544DBA47E410DB0608E32FDA7D075220E5F73* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_tA954CD372840515107D63925699ACA22AF8733F6* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t7D4F2BBCCDA74D4AC83805662258EA3D5DBC9716* ____onCombinedTaskCompleted;
};
struct OVRTask_1_t94B6938A40625ACBF60BCC7DCC0FD4A87D1F33A9_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_tDA11C273BCD8AB261D27CE7BE2E17A0BFE1B6DD3* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t6A5055AAB407A11CE4E89FEA7734602C04EED667* ___Sources;
	Dictionary_2_t1A4A2342084D531FE94A210D83EFB34F3F722AB1* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t8A505527321B8021556F6758F89A212D74530B8D* ___ContinueWithInvokers;
	Dictionary_2_t69E5D1F983EFDF86E3B410C3C780476082BB07A8* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_tD17B56AB61B73C4509B19FC3C92E97E22826E9A2* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t8C5BCB6DFD45421FB6BF6564B24E26E78F703210* ____onCombinedTaskCompleted;
};
struct OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t08F268FC378959FEFD117B2B273AAB4E66029724* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_tDE0ACCF144F921EF67AE21C66F108C40228194CC* ___Sources;
	Dictionary_2_tB18ABE217F71D79CC3F6914E60108C9DB88533F8* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_tC27CEAC1868016E12980B2B1934B00C0EF87B3F2* ___ContinueWithInvokers;
	Dictionary_2_t38FA9501968458BAED7CADEFFCF49C95FC136138* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_tCDA5AEDEA5B2E4898A574E2A05A9CF8EA375F813* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t3C2FD524CED774DFD192C2121C35FB8034C4E4CF* ____onCombinedTaskCompleted;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_StaticFields
{
	Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C* ____deferredTasks;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___Null;
	Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53* ____typeMap;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
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
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticFields
{
	ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* ___Pool;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t* UnsafeUtility_As_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m2334C2170CD4B1666E45E7F5943115FAAADBDD14_gshared_inline (int32_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_CastResult_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m89CD7C03A591BC38328607C2C5C442AA729EDD5E_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 OVRResult_1_FromFailure_m55A4704320CB4DDB0266916771BB59AEB4998FDF_gshared (int32_t ___0_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 Builder_ToTask_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_mEAA4189A959FC65A30EACA64C1562AF640C7463F_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_failureValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 Builder_ToTask_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m86D2081D283943875E094C270B3E7AD243EC3937_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, int32_t ___0_failureValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 OVRResult_2_FromFailure_mEA7E4B18A5948F3A930D8CDEE63AFB653E052994_gshared (int32_t ___0_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 Builder_ToTask_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mEF1973BA896FE8FBEE690CA9BEE7936C901D6A63_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_failureValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 OVRResult_2_FromFailure_m641BBDC7DEB05B239934C56DF07CC9052F827C90_gshared (int32_t ___0_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 Builder_ToTask_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_m4264D01314DF07F326C0E802FB124F8E38D6D6B5_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_failureValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D OVRResult_2_FromFailure_m8CB4C2CFACD1D670ECDAE27767D1DB194FB83F9B_gshared (int32_t ___0_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF Builder_ToTask_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_m720B8944C7143E75A13C9222EB9456585C29B7A4_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_failureValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 OVRTask_FromResult_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_m4EBC681DB4F477FEC908ADFD295639EE359A33FC_gshared (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 OVRTask_FromGuid_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_mA496B42FA4068564CA2D5D192B33E4D87CA12A89_gshared (Guid_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 OVRTask_FromResult_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mAFC16B54BDF2970F53B3B284399ADBE4C1544360_gshared (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 OVRTask_FromGuid_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_m345D1543F53496B74468121E7DCB2CE1F38398EE_gshared (Guid_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 OVRTask_FromResult_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mD0AA56288A50561469751D25FD956BF6B7EF9DB8_gshared (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 OVRTask_FromGuid_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mA958E5B32CCBD2237D2FD9AE6FE34C3AD083970C_gshared (Guid_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF OVRTask_FromResult_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_mE1BA57FE7A639E6AB4DA3304F43BEC19110B9178_gshared (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF OVRTask_FromGuid_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_mB313516F865A16703862BEF204B9BEA08784EBA4_gshared (Guid_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 OVRTask_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA8BCDD3EF6E2CAB6F5DDEB087F558B23A216FF81 (bool ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 OVRTask_FromGuid_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC4A9DC5278F79283BE155F4ECB159F6319270944 (Guid_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F OVRTask_FromResult_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m2327B3462F3AE24CF8E1B96BC49D7FFC17FC07E2 (OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F OVRTask_FromGuid_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_mB7374BA4B2B97D1A96100EB3E6EA972B76EE7F5A (Guid_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t574D93A662594FDA565B4ADE2EA77FB85FBEE5F9 OVRTask_FromResult_TisIl2CppSharedGenericObject_m72EFE0AD89F119B18C6E08C2066B3955003B2041_gshared (Il2CppSharedGenericObject* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t574D93A662594FDA565B4ADE2EA77FB85FBEE5F9 OVRTask_FromGuid_TisIl2CppSharedGenericObject_m249E5F10337F5B59BAEC64D6B3D030443D02952F_gshared (Guid_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 OVRTask_FromResult_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m4FF462331F1E15F614810E57ACA88F6F0EE9384B_gshared (int32_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 OVRTask_FromGuid_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mC6D231F38DA11FB128F0016FE8E8962F95CD19B7_gshared (Guid_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0823862A6DDE661D7383395095FB6E793F8C2162_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mDE9210C5D1711198B54F42F2F335C67755011949_gshared (Stack_1_t0CA5713F7DD620D4C839FC6F19CEA972026B8212* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Stack_1_Pop_m3DE7C3332F22E12FFDFE78B3A71F698D96DD2374_gshared (Stack_1_t0CA5713F7DD620D4C839FC6F19CEA972026B8212* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_fshared_inline (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m97E71E435F74A3E3C7E1BC6E733A0AFB9816550D_gshared (DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject** DynamicArray_1_get_Item_mA2D6D01C2851B649C10AAB4D7F0EB01F2E0596EE_gshared (DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ScriptableObject_CreateInstance_TisIl2CppSharedGenericObject_mCBB59C30398DB494162F775DCD530D192A8D0A27_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool* UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline (bool* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A (double* ___0_source, bool* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline (uint8_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC (double* ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t* UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline (int16_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B (double* ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline int32_t* UnsafeUtility_As_TisResult_t65718B00CEF7A5D1E84402EA2DDCF5BF3D3E6797_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCA686CBFF95B9899000A3C4012224ED8842972AB_inline (int32_t* ___0_from, const RuntimeMethod* method)
{
	return ((  int32_t* (*) (int32_t*, const RuntimeMethod*))UnsafeUtility_As_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m2334C2170CD4B1666E45E7F5943115FAAADBDD14_gshared_inline)(___0_from, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68 (int32_t ___0_result, const RuntimeMethod* method) ;
inline int32_t Builder_CastResult_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m89CD7C03A591BC38328607C2C5C442AA729EDD5E (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F*, const RuntimeMethod*))Builder_CastResult_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m89CD7C03A591BC38328607C2C5C442AA729EDD5E_gshared)(__this, method);
}
inline OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 OVRResult_1_FromFailure_m55A4704320CB4DDB0266916771BB59AEB4998FDF (int32_t ___0_status, const RuntimeMethod* method)
{
	return ((  OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 (*) (int32_t, const RuntimeMethod*))OVRResult_1_FromFailure_m55A4704320CB4DDB0266916771BB59AEB4998FDF_gshared)(___0_status, method);
}
inline OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 Builder_ToTask_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_mEAA4189A959FC65A30EACA64C1562AF640C7463F (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_failureValue, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 (*) (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F*, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, const RuntimeMethod*))Builder_ToTask_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_mEAA4189A959FC65A30EACA64C1562AF640C7463F_gshared)(__this, ___0_failureValue, method);
}
inline OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 Builder_ToTask_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m86D2081D283943875E094C270B3E7AD243EC3937 (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, int32_t ___0_failureValue, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 (*) (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F*, int32_t, const RuntimeMethod*))Builder_ToTask_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m86D2081D283943875E094C270B3E7AD243EC3937_gshared)(__this, ___0_failureValue, method);
}
inline OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 OVRResult_2_FromFailure_mEA7E4B18A5948F3A930D8CDEE63AFB653E052994 (int32_t ___0_status, const RuntimeMethod* method)
{
	return ((  OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 (*) (int32_t, const RuntimeMethod*))OVRResult_2_FromFailure_mEA7E4B18A5948F3A930D8CDEE63AFB653E052994_gshared)(___0_status, method);
}
inline OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 Builder_ToTask_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mEF1973BA896FE8FBEE690CA9BEE7936C901D6A63 (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_failureValue, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 (*) (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F*, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387, const RuntimeMethod*))Builder_ToTask_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mEF1973BA896FE8FBEE690CA9BEE7936C901D6A63_gshared)(__this, ___0_failureValue, method);
}
inline OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 OVRResult_2_FromFailure_m641BBDC7DEB05B239934C56DF07CC9052F827C90 (int32_t ___0_status, const RuntimeMethod* method)
{
	return ((  OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 (*) (int32_t, const RuntimeMethod*))OVRResult_2_FromFailure_m641BBDC7DEB05B239934C56DF07CC9052F827C90_gshared)(___0_status, method);
}
inline OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 Builder_ToTask_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_m4264D01314DF07F326C0E802FB124F8E38D6D6B5 (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_failureValue, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 (*) (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F*, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8, const RuntimeMethod*))Builder_ToTask_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_m4264D01314DF07F326C0E802FB124F8E38D6D6B5_gshared)(__this, ___0_failureValue, method);
}
inline OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D OVRResult_2_FromFailure_m8CB4C2CFACD1D670ECDAE27767D1DB194FB83F9B (int32_t ___0_status, const RuntimeMethod* method)
{
	return ((  OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D (*) (int32_t, const RuntimeMethod*))OVRResult_2_FromFailure_m8CB4C2CFACD1D670ECDAE27767D1DB194FB83F9B_gshared)(___0_status, method);
}
inline OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF Builder_ToTask_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_m720B8944C7143E75A13C9222EB9456585C29B7A4 (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_failureValue, const RuntimeMethod* method)
{
	return ((  OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF (*) (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F*, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D, const RuntimeMethod*))Builder_ToTask_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_m720B8944C7143E75A13C9222EB9456585C29B7A4_gshared)(__this, ___0_failureValue, method);
}
inline OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 OVRTask_FromResult_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_m4EBC681DB4F477FEC908ADFD295639EE359A33FC (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 (*) (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, const RuntimeMethod*))OVRTask_FromResult_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_m4EBC681DB4F477FEC908ADFD295639EE359A33FC_gshared)(___0_result, method);
}
inline OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 OVRTask_FromGuid_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_mA496B42FA4068564CA2D5D192B33E4D87CA12A89 (Guid_t ___0_id, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 (*) (Guid_t, const RuntimeMethod*))OVRTask_FromGuid_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_mA496B42FA4068564CA2D5D192B33E4D87CA12A89_gshared)(___0_id, method);
}
inline OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 OVRTask_FromResult_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mAFC16B54BDF2970F53B3B284399ADBE4C1544360 (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 (*) (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387, const RuntimeMethod*))OVRTask_FromResult_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mAFC16B54BDF2970F53B3B284399ADBE4C1544360_gshared)(___0_result, method);
}
inline OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 OVRTask_FromGuid_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_m345D1543F53496B74468121E7DCB2CE1F38398EE (Guid_t ___0_id, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 (*) (Guid_t, const RuntimeMethod*))OVRTask_FromGuid_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_m345D1543F53496B74468121E7DCB2CE1F38398EE_gshared)(___0_id, method);
}
inline OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 OVRTask_FromResult_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mD0AA56288A50561469751D25FD956BF6B7EF9DB8 (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 (*) (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8, const RuntimeMethod*))OVRTask_FromResult_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mD0AA56288A50561469751D25FD956BF6B7EF9DB8_gshared)(___0_result, method);
}
inline OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 OVRTask_FromGuid_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mA958E5B32CCBD2237D2FD9AE6FE34C3AD083970C (Guid_t ___0_id, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 (*) (Guid_t, const RuntimeMethod*))OVRTask_FromGuid_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mA958E5B32CCBD2237D2FD9AE6FE34C3AD083970C_gshared)(___0_id, method);
}
inline OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF OVRTask_FromResult_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_mE1BA57FE7A639E6AB4DA3304F43BEC19110B9178 (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method)
{
	return ((  OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF (*) (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D, const RuntimeMethod*))OVRTask_FromResult_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_mE1BA57FE7A639E6AB4DA3304F43BEC19110B9178_gshared)(___0_result, method);
}
inline OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF OVRTask_FromGuid_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_mB313516F865A16703862BEF204B9BEA08784EBA4 (Guid_t ___0_id, const RuntimeMethod* method)
{
	return ((  OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF (*) (Guid_t, const RuntimeMethod*))OVRTask_FromGuid_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_mB313516F865A16703862BEF204B9BEA08784EBA4_gshared)(___0_id, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 OVRTask_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA8BCDD3EF6E2CAB6F5DDEB087F558B23A216FF81 (bool ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 OVRTask_FromGuid_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC4A9DC5278F79283BE155F4ECB159F6319270944 (Guid_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F OVRTask_FromResult_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m2327B3462F3AE24CF8E1B96BC49D7FFC17FC07E2 (OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F OVRTask_FromGuid_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_mB7374BA4B2B97D1A96100EB3E6EA972B76EE7F5A (Guid_t ___0_id, const RuntimeMethod* method) ;
inline OVRTask_1_t574D93A662594FDA565B4ADE2EA77FB85FBEE5F9 OVRTask_FromResult_TisIl2CppSharedGenericObject_m72EFE0AD89F119B18C6E08C2066B3955003B2041 (Il2CppSharedGenericObject* ___0_result, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t574D93A662594FDA565B4ADE2EA77FB85FBEE5F9 (*) (Il2CppSharedGenericObject*, const RuntimeMethod*))OVRTask_FromResult_TisIl2CppSharedGenericObject_m72EFE0AD89F119B18C6E08C2066B3955003B2041_gshared)(___0_result, method);
}
inline OVRTask_1_t574D93A662594FDA565B4ADE2EA77FB85FBEE5F9 OVRTask_FromGuid_TisIl2CppSharedGenericObject_m249E5F10337F5B59BAEC64D6B3D030443D02952F (Guid_t ___0_id, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t574D93A662594FDA565B4ADE2EA77FB85FBEE5F9 (*) (Guid_t, const RuntimeMethod*))OVRTask_FromGuid_TisIl2CppSharedGenericObject_m249E5F10337F5B59BAEC64D6B3D030443D02952F_gshared)(___0_id, method);
}
inline OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 OVRTask_FromResult_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m4FF462331F1E15F614810E57ACA88F6F0EE9384B (int32_t ___0_result, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 (*) (int32_t, const RuntimeMethod*))OVRTask_FromResult_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m4FF462331F1E15F614810E57ACA88F6F0EE9384B_gshared)(___0_result, method);
}
inline OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 OVRTask_FromGuid_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mC6D231F38DA11FB128F0016FE8E8962F95CD19B7 (Guid_t ___0_id, const RuntimeMethod* method)
{
	return ((  OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 (*) (Guid_t, const RuntimeMethod*))OVRTask_FromGuid_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mC6D231F38DA11FB128F0016FE8E8962F95CD19B7_gshared)(___0_id, method);
}
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Il2CppSharedGenericObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline)(___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m0823862A6DDE661D7383395095FB6E793F8C2162_gshared)(__this, method);
}
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1_gshared)(__this, ___0_item, method);
}
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))Stack_1_Push_mDE9210C5D1711198B54F42F2F335C67755011949_gshared)(__this, ___0_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t068F5201D923072F46716204841D21328FE6218D* (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, const RuntimeMethod*))Stack_1_Pop_m3DE7C3332F22E12FFDFE78B3A71F698D96DD2374_gshared)(__this, method);
}
inline int32_t DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_inline (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467*, const RuntimeMethod*))DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_fshared_inline)(__this, method);
}
inline void DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Resize_m97E71E435F74A3E3C7E1BC6E733A0AFB9816550D_gshared)(__this, ___0_newSize, ___1_keepContent, method);
}
inline IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869 (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** (*) (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467*, int32_t, const RuntimeMethod*))DynamicArray_1_get_Item_mA2D6D01C2851B649C10AAB4D7F0EB01F2E0596EE_gshared)(__this, ___0_index, method);
}
inline Il2CppSharedGenericObject* Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3 (const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (const RuntimeMethod*))Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3_gshared)(method);
}
inline bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* ScriptableObject_CreateInstance_TisIl2CppSharedGenericObject_mCBB59C30398DB494162F775DCD530D192A8D0A27 (const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisIl2CppSharedGenericObject_mCBB59C30398DB494162F775DCD530D192A8D0A27_gshared)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
inline NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline void ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline)(__this, ___0_pointer, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
inline void Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_fshared_inline)(__this, ___0_pointer, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool* UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline (bool* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352 (String_t* ___0_value, bool* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018 (String_t* ___0_s, double* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A (double* ___0_source, bool* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline (uint8_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_TryParse_mB1716E3B6714F20DF6C1FEDDC4A76AA78D5EA87B (String_t* ___0_s, uint8_t* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC (double* ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t* UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline (int16_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int16_TryParse_m7190AF18437CE1B43990B99E5D992E31485E77AE (String_t* ___0_s, int16_t* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B (double* ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
inline int32_t* UnsafeUtilityInternal_As_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m85C6A70D7AE09A2B410228609F2E8D80F1D71BD6_inline (int32_t* ___0_from, const RuntimeMethod* method)
{
	return ((  int32_t* (*) (int32_t*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline bool* UnsafeUtilityInternal_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3D9B5B2C16912294630A6DAD8928B960B7544E6_inline (bool* ___0_from, const RuntimeMethod* method)
{
	return ((  bool* (*) (bool*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
inline uint8_t* UnsafeUtilityInternal_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5A66C1A526E263EC6778FF3879A6E62C618542C4_inline (uint8_t* ___0_from, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (uint8_t*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
inline int16_t* UnsafeUtilityInternal_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mD165D6F44825CD0E42C9C1F6248DB1E67976F9C2_inline (int16_t* ___0_from, const RuntimeMethod* method)
{
	return ((  int16_t* (*) (int16_t*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtilityInternal_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD43127D5F7AA6EB4B52E5C30BA53F29843E9E9A2_inline (intptr_t* ___0_from, const RuntimeMethod* method)
{
	return ((  GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* (*) (intptr_t*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
// Method Definition Index: 35760
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_CastResult_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m89CD7C03A591BC38328607C2C5C442AA729EDD5E_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(125, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_12);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral509C34C49C5DC337A113CD180F48B978CB164358)), NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_15 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0053:
	{
		int32_t L_16 = __this->____synchronousResult;
		V_1 = L_16;
		int32_t* L_17;
		L_17 = UnsafeUtility_As_TisResult_t65718B00CEF7A5D1E84402EA2DDCF5BF3D3E6797_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCA686CBFF95B9899000A3C4012224ED8842972AB_inline((&V_1), NULL);
		int32_t L_18 = (*(int32_t*)L_17);
		return L_18;
	}
}
// Method Definition Index: 35760
// Method Definition Index: 35760
// Method Definition Index: 35760
// Method Definition Index: 35760
// Method Definition Index: 35760
// Method Definition Index: 35760
// Method Definition Index: 35760
// Method Definition Index: 35758
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t89F0C4998FE0B9C74A8E2D39234BD07414352CD8 Builder_ToResultTask_TisIl2CppFullySharedGenericStruct_m15BD1FD5B38AC8AFD0C49BB26165AC269EF8F710_fshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_OVRResult_1_tDE347C512B6534E163E42FF5AAC187A7B5D0FD1C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	const uint32_t SizeOf_TStatus_t3F831363240EE7D324EA3CCF7DB68D4BF4EED0D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TStatus_t3F831363240EE7D324EA3CCF7DB68D4BF4EED0D0);
	const OVRResult_1_t19B05D5EAE86471F75E754DBB66D91A0AC4EA100 L_3 = alloca(SizeOf_OVRResult_1_tDE347C512B6534E163E42FF5AAC187A7B5D0FD1C);
	const OVRResult_1_t19B05D5EAE86471F75E754DBB66D91A0AC4EA100 L_4 = L_3;
	//<source_info:<no-source>:1>
	OVRResult_1_t19B05D5EAE86471F75E754DBB66D91A0AC4EA100 V_0 = alloca(SizeOf_OVRResult_1_tDE347C512B6534E163E42FF5AAC187A7B5D0FD1C);
	memset(V_0, 0, SizeOf_OVRResult_1_tDE347C512B6534E163E42FF5AAC187A7B5D0FD1C);
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B2_0 = NULL;
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B1_0 = NULL;
	OVRResult_1_t19B05D5EAE86471F75E754DBB66D91A0AC4EA100 G_B3_0 = alloca(SizeOf_OVRResult_1_tDE347C512B6534E163E42FF5AAC187A7B5D0FD1C);
	memset(G_B3_0, 0, SizeOf_OVRResult_1_tDE347C512B6534E163E42FF5AAC187A7B5D0FD1C);
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B3_1 = NULL;
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_001b;
		}
		G_B1_0 = __this;
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, OVRResult_1_t19B05D5EAE86471F75E754DBB66D91A0AC4EA100* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, (OVRResult_1_t19B05D5EAE86471F75E754DBB66D91A0AC4EA100*)L_3);
		il2cpp_codegen_memcpy(G_B3_0, L_3, SizeOf_OVRResult_1_tDE347C512B6534E163E42FF5AAC187A7B5D0FD1C);
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001b:
	{
		il2cpp_codegen_initobj((OVRResult_1_t19B05D5EAE86471F75E754DBB66D91A0AC4EA100*)V_0, SizeOf_OVRResult_1_tDE347C512B6534E163E42FF5AAC187A7B5D0FD1C);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_OVRResult_1_tDE347C512B6534E163E42FF5AAC187A7B5D0FD1C);
		il2cpp_codegen_memcpy(G_B3_0, L_4, SizeOf_OVRResult_1_tDE347C512B6534E163E42FF5AAC187A7B5D0FD1C);
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		OVRTask_1_t89F0C4998FE0B9C74A8E2D39234BD07414352CD8 L_5;
		L_5 = InvokerFuncInvoker1< OVRTask_1_t89F0C4998FE0B9C74A8E2D39234BD07414352CD8, OVRResult_1_t19B05D5EAE86471F75E754DBB66D91A0AC4EA100 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), G_B3_1, G_B3_0);
		return L_5;
	}
}
// Method Definition Index: 35758
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 Builder_ToResultTask_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m9DC8761ADB2854ED92456751A4B113CDEAB542AD_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	//<source_info:<no-source>:1>
	OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B2_0 = NULL;
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B1_0 = NULL;
	OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B3_1 = NULL;
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_001b;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_2;
		L_2 = Builder_CastResult_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m89CD7C03A591BC38328607C2C5C442AA729EDD5E(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_3;
		L_3 = OVRResult_1_FromFailure_m55A4704320CB4DDB0266916771BB59AEB4998FDF(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9));
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_4 = V_0;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_5;
		L_5 = Builder_ToTask_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_mEAA4189A959FC65A30EACA64C1562AF640C7463F(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_5;
	}
}
// Method Definition Index: 35758
// Method Definition Index: 35758
// Method Definition Index: 35758
// Method Definition Index: 35758
// Method Definition Index: 35758
// Method Definition Index: 35756
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t717CF2DDBE10620FB65377357B229F5037811A6C Builder_ToTask_TisIl2CppFullySharedGenericStruct_m57FEF5155B388438A9DA1F458FFA0F4670A215F2_fshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TStatus_tC17E1F3A464ABEB12CD402EEBF78CFA8DCB28F20 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TStatus_tC17E1F3A464ABEB12CD402EEBF78CFA8DCB28F20);
	//<source_info:<no-source>:1>
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, (Il2CppFullySharedGenericStruct*)L_0);
		OVRTask_1_t717CF2DDBE10620FB65377357B229F5037811A6C L_1;
		L_1 = InvokerFuncInvoker1< OVRTask_1_t717CF2DDBE10620FB65377357B229F5037811A6C, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_0);
		return L_1;
	}
}
// Method Definition Index: 35756
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 Builder_ToTask_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mF0640ED02744603A2DA0C59DE9980372ABC3868F_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = Builder_CastResult_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m89CD7C03A591BC38328607C2C5C442AA729EDD5E(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 L_1;
		L_1 = Builder_ToTask_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m86D2081D283943875E094C270B3E7AD243EC3937(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
// Method Definition Index: 35756
// Method Definition Index: 35759
// Method Definition Index: 35759
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 Builder_ToTask_TisGuid_t_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m7403C5400C433BB37C011B1524897F24EAC66713_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	//<source_info:<no-source>:1>
	OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B2_0 = NULL;
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B1_0 = NULL;
	OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B3_1 = NULL;
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_001b;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_2;
		L_2 = Builder_CastResult_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m89CD7C03A591BC38328607C2C5C442AA729EDD5E(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_3;
		L_3 = OVRResult_2_FromFailure_mEA7E4B18A5948F3A930D8CDEE63AFB653E052994(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387));
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_4 = V_0;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 L_5;
		L_5 = Builder_ToTask_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mEF1973BA896FE8FBEE690CA9BEE7936C901D6A63(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_5;
	}
}
// Method Definition Index: 35759
// Method Definition Index: 35759
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 Builder_ToTask_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mB3721F0CDBA9695C59F327AEF1AFF7A407ED06E1_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	//<source_info:<no-source>:1>
	OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B2_0 = NULL;
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B1_0 = NULL;
	OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B3_1 = NULL;
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_001b;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_2;
		L_2 = Builder_CastResult_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m89CD7C03A591BC38328607C2C5C442AA729EDD5E(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_3;
		L_3 = OVRResult_2_FromFailure_m641BBDC7DEB05B239934C56DF07CC9052F827C90(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8));
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_4 = V_0;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 L_5;
		L_5 = Builder_ToTask_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_m4264D01314DF07F326C0E802FB124F8E38D6D6B5(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_5;
	}
}
// Method Definition Index: 35759
// Method Definition Index: 35759
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF Builder_ToTask_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m418CEBCF838825D3DDA3AA36BBB8BF3652A58DD9_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	//<source_info:<no-source>:1>
	OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B2_0 = NULL;
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B1_0 = NULL;
	OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B3_1 = NULL;
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_001b;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_2;
		L_2 = Builder_CastResult_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m89CD7C03A591BC38328607C2C5C442AA729EDD5E(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_3;
		L_3 = OVRResult_2_FromFailure_m8CB4C2CFACD1D670ECDAE27767D1DB194FB83F9B(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D));
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_4 = V_0;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF L_5;
		L_5 = Builder_ToTask_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_m720B8944C7143E75A13C9222EB9456585C29B7A4(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_5;
	}
}
// Method Definition Index: 35759
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t94F4E2567FE384DE19D2440AEC8B36FE2B3E8A05 Builder_ToTask_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericStruct_m7278CD66ED2CAC2E843B397190202E059DA16FB2_fshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_OVRResult_2_t8C85054373BE7AE4F2428610774F41E89713C27B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	const uint32_t SizeOf_TStatus_t1F47F568E5538E4AC106766A29E4497F164FB604 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TStatus_t1F47F568E5538E4AC106766A29E4497F164FB604);
	const OVRResult_2_t703F3E540EFCF488BA8D725E23CE75221F41E842 L_3 = alloca(SizeOf_OVRResult_2_t8C85054373BE7AE4F2428610774F41E89713C27B);
	const OVRResult_2_t703F3E540EFCF488BA8D725E23CE75221F41E842 L_4 = L_3;
	//<source_info:<no-source>:1>
	OVRResult_2_t703F3E540EFCF488BA8D725E23CE75221F41E842 V_0 = alloca(SizeOf_OVRResult_2_t8C85054373BE7AE4F2428610774F41E89713C27B);
	memset(V_0, 0, SizeOf_OVRResult_2_t8C85054373BE7AE4F2428610774F41E89713C27B);
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B2_0 = NULL;
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B1_0 = NULL;
	OVRResult_2_t703F3E540EFCF488BA8D725E23CE75221F41E842 G_B3_0 = alloca(SizeOf_OVRResult_2_t8C85054373BE7AE4F2428610774F41E89713C27B);
	memset(G_B3_0, 0, SizeOf_OVRResult_2_t8C85054373BE7AE4F2428610774F41E89713C27B);
	Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* G_B3_1 = NULL;
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_001b;
		}
		G_B1_0 = __this;
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, OVRResult_2_t703F3E540EFCF488BA8D725E23CE75221F41E842* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, (OVRResult_2_t703F3E540EFCF488BA8D725E23CE75221F41E842*)L_3);
		il2cpp_codegen_memcpy(G_B3_0, L_3, SizeOf_OVRResult_2_t8C85054373BE7AE4F2428610774F41E89713C27B);
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001b:
	{
		il2cpp_codegen_initobj((OVRResult_2_t703F3E540EFCF488BA8D725E23CE75221F41E842*)V_0, SizeOf_OVRResult_2_t8C85054373BE7AE4F2428610774F41E89713C27B);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_OVRResult_2_t8C85054373BE7AE4F2428610774F41E89713C27B);
		il2cpp_codegen_memcpy(G_B3_0, L_4, SizeOf_OVRResult_2_t8C85054373BE7AE4F2428610774F41E89713C27B);
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		OVRTask_1_t94F4E2567FE384DE19D2440AEC8B36FE2B3E8A05 L_5;
		L_5 = InvokerFuncInvoker1< OVRTask_1_t94F4E2567FE384DE19D2440AEC8B36FE2B3E8A05, OVRResult_2_t703F3E540EFCF488BA8D725E23CE75221F41E842 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), G_B3_1, G_B3_0);
		return L_5;
	}
}
// Method Definition Index: 35757
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 Builder_ToTask_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_mEAA4189A959FC65A30EACA64C1562AF640C7463F_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_failureValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_2 = ___0_failureValue;
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_3;
		L_3 = OVRTask_FromResult_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_m4EBC681DB4F477FEC908ADFD295639EE359A33FC(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}

IL_0014:
	{
		Guid_t L_4 = __this->____taskId;
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_5;
		L_5 = OVRTask_FromGuid_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_mA496B42FA4068564CA2D5D192B33E4D87CA12A89(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// Method Definition Index: 35757
// Method Definition Index: 35757
// Method Definition Index: 35757
// Method Definition Index: 35757
// Method Definition Index: 35757
// Method Definition Index: 35757
// Method Definition Index: 35757
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 Builder_ToTask_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mEF1973BA896FE8FBEE690CA9BEE7936C901D6A63_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_failureValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_2 = ___0_failureValue;
		OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 L_3;
		L_3 = OVRTask_FromResult_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_mAFC16B54BDF2970F53B3B284399ADBE4C1544360(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}

IL_0014:
	{
		Guid_t L_4 = __this->____taskId;
		OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 L_5;
		L_5 = OVRTask_FromGuid_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_m345D1543F53496B74468121E7DCB2CE1F38398EE(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// Method Definition Index: 35757
// Method Definition Index: 35757
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 Builder_ToTask_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_m4264D01314DF07F326C0E802FB124F8E38D6D6B5_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_failureValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_2 = ___0_failureValue;
		OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 L_3;
		L_3 = OVRTask_FromResult_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mD0AA56288A50561469751D25FD956BF6B7EF9DB8(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}

IL_0014:
	{
		Guid_t L_4 = __this->____taskId;
		OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 L_5;
		L_5 = OVRTask_FromGuid_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mA958E5B32CCBD2237D2FD9AE6FE34C3AD083970C(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// Method Definition Index: 35757
// Method Definition Index: 35757
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF Builder_ToTask_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_m720B8944C7143E75A13C9222EB9456585C29B7A4_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_failureValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_2 = ___0_failureValue;
		OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF L_3;
		L_3 = OVRTask_FromResult_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_mE1BA57FE7A639E6AB4DA3304F43BEC19110B9178(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}

IL_0014:
	{
		Guid_t L_4 = __this->____taskId;
		OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF L_5;
		L_5 = OVRTask_FromGuid_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_mB313516F865A16703862BEF204B9BEA08784EBA4(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// Method Definition Index: 35757
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 Builder_ToTask_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDD166D9D8DBCE9F2CF90442C9E4F182B16D807D6 (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, bool ___0_failureValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		bool L_2 = ___0_failureValue;
		OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 L_3;
		L_3 = OVRTask_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA8BCDD3EF6E2CAB6F5DDEB087F558B23A216FF81(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}

IL_0014:
	{
		Guid_t L_4 = __this->____taskId;
		OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 L_5;
		L_5 = OVRTask_FromGuid_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC4A9DC5278F79283BE155F4ECB159F6319270944(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// Method Definition Index: 35757
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F Builder_ToTask_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m7EDBD23D02B36C2DF67B966AF64B1AA1498E617A (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___0_failureValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_2 = ___0_failureValue;
		OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F L_3;
		L_3 = OVRTask_FromResult_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m2327B3462F3AE24CF8E1B96BC49D7FFC17FC07E2(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}

IL_0014:
	{
		Guid_t L_4 = __this->____taskId;
		OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F L_5;
		L_5 = OVRTask_FromGuid_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_mB7374BA4B2B97D1A96100EB3E6EA972B76EE7F5A(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// Method Definition Index: 35757
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t574D93A662594FDA565B4ADE2EA77FB85FBEE5F9 Builder_ToTask_TisIl2CppSharedGenericObject_m25AB3B0FAA3209324DE9BBCCD4AC6699214096D0_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, Il2CppSharedGenericObject* ___0_failureValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		Il2CppSharedGenericObject* L_2 = ___0_failureValue;
		OVRTask_1_t574D93A662594FDA565B4ADE2EA77FB85FBEE5F9 L_3;
		L_3 = OVRTask_FromResult_TisIl2CppSharedGenericObject_m72EFE0AD89F119B18C6E08C2066B3955003B2041(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}

IL_0014:
	{
		Guid_t L_4 = __this->____taskId;
		OVRTask_1_t574D93A662594FDA565B4ADE2EA77FB85FBEE5F9 L_5;
		L_5 = OVRTask_FromGuid_TisIl2CppSharedGenericObject_m249E5F10337F5B59BAEC64D6B3D030443D02952F(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// Method Definition Index: 35757
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t94B6938A40625ACBF60BCC7DCC0FD4A87D1F33A9 Builder_ToTask_TisIl2CppFullySharedGenericAny_mCDA1BD16C7F2F2D5121A4680485E23654A869CCE_fshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, Il2CppFullySharedGenericAny ___0_failureValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	const uint32_t SizeOf_TResult_t158407E8D555C1D78743BBE802CE41F2421C944C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_t158407E8D555C1D78743BBE802CE41F2421C944C);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_failureValue : &___0_failureValue), SizeOf_TResult_t158407E8D555C1D78743BBE802CE41F2421C944C);
		OVRTask_1_t94B6938A40625ACBF60BCC7DCC0FD4A87D1F33A9 L_3;
		L_3 = InvokerFuncInvoker1< OVRTask_1_t94B6938A40625ACBF60BCC7DCC0FD4A87D1F33A9, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_2: *(void**)L_2));
		return L_3;
	}

IL_0014:
	{
		Guid_t L_4 = __this->____taskId;
		OVRTask_1_t94B6938A40625ACBF60BCC7DCC0FD4A87D1F33A9 L_5;
		L_5 = ((  OVRTask_1_t94B6938A40625ACBF60BCC7DCC0FD4A87D1F33A9 (*) (Guid_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// Method Definition Index: 35757
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 Builder_ToTask_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m86D2081D283943875E094C270B3E7AD243EC3937_gshared (Builder_t758062D9CC784CBF04C042FE28B3FB695182BB4F* __this, int32_t ___0_failureValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____synchronousResult;
		CHECKED_LOCAL_INIT(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_StaticInit,(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___0_failureValue;
		OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 L_3;
		L_3 = OVRTask_FromResult_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m4FF462331F1E15F614810E57ACA88F6F0EE9384B(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}

IL_0014:
	{
		Guid_t L_4 = __this->____taskId;
		OVRTask_1_t49C867310154D0780C99F3DC22F32F9CC4AF53A3 L_5;
		L_5 = OVRTask_FromGuid_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mC6D231F38DA11FB128F0016FE8E8962F95CD19B7(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// Method Definition Index: 35757
// Method Definition Index: 35757
// Method Definition Index: 61458
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Il2CppSharedGenericObject* L_1 = ___0_obj;
		intptr_t L_2;
		L_2 = MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 61459
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
// Method Definition Index: 61461
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MarshalledUnityObject_Unmarshal_TisIl2CppSharedGenericObject_mDFF812844C3A315BA334E9FD102E4EE28E2847B1_gshared (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		intptr_t L_0 = ___0_gcHandlePtr;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_1;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_gcHandlePtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline(L_3, NULL);
		V_0 = L_4;
		RuntimeObject* L_5;
		L_5 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
// Method Definition Index: 124000
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPropertyVisitor_VisitPath_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m48D5F231D141FE04D8C4AA045C484BDF9928EBC0_fshared (GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_0 = ___0_property;
		__this->___Property = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Property), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 95374
// Method Definition Index: 95374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisIl2CppFullySharedGenericAny_m0060183C8192066670005792D19D2EC19C50DBB7_fshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = __this->____shadowedVars;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4, __this, L_16);
		V_0 = L_17;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = __this->____shadowedVars;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
// Method Definition Index: 57160
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderGraphResourcesData_AddNewRenderGraphResource_TisIl2CppSharedGenericObject_mBB87A5C94B2E32833D752DA290821E94102810F7_gshared (RenderGraphResourcesData_t4E1A864AD7A36EC74B28D89C86E3A4D0997958CF* __this, Il2CppSharedGenericObject** ___0_outRes, bool ___1_pooledResource, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	{
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_0 = __this->___resourceArray;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_inline(L_0, NULL);
		V_0 = L_1;
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_2 = __this->___resourceArray;
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_3 = __this->___resourceArray;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_inline(L_3, NULL);
		NullCheck(L_2);
		DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B(L_2, ((int32_t)il2cpp_codegen_add(L_4, 1)), (bool)1, DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B_RuntimeMethod_var);
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_5 = __this->___resourceArray;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** L_7;
		L_7 = DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869(L_5, L_6, NULL);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021* L_8 = il2cpp_codegen_ldind<IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021*, IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021*>(L_7);
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_9 = __this->___resourceArray;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** L_11;
		L_11 = DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869(L_9, L_10, NULL);
		Il2CppSharedGenericObject* L_12;
		L_12 = Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3(il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_11, (RuntimeObject*)L_12);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_12);
	}

IL_004b:
	{
		Il2CppSharedGenericObject** L_13 = ___0_outRes;
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_14 = __this->___resourceArray;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** L_16;
		L_16 = DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869(L_14, L_15, NULL);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021* L_17 = il2cpp_codegen_ldind<IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021*, IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021*>(L_16);
		*(Il2CppSharedGenericObject**)L_13 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_13, (void*)((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppSharedGenericObject** L_18 = ___0_outRes;
		Il2CppSharedGenericObject* L_19 = (*(Il2CppSharedGenericObject**)L_18);
		bool L_20 = ___1_pooledResource;
		if (L_20)
		{
			G_B4_0 = ((RuntimeObject*)(L_19));
			goto IL_0079;
		}
		G_B3_0 = ((RuntimeObject*)(L_19));
	}
	{
		G_B5_0 = ((IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_007f;
	}

IL_0079:
	{
		IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* L_21 = __this->___pool;
		G_B5_0 = L_21;
		G_B5_1 = G_B4_0;
	}

IL_007f:
	{
		NullCheck((IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021*)G_B5_1);
		VirtualActionInvoker1< IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* >::Invoke(4, (IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021*)G_B5_1, G_B5_0);
		int32_t L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 25163
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* Container_GetInstance_TisIl2CppSharedGenericObject_mBA9CFA88CC10BE88582373B12CF4B63DF9D7C42E_gshared (Container_tC37DC3F487EACD6965331243CDFEF748D8F5A05F* __this, RuntimeObject* ___0_user, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0 = __this->___m_Users;
		RuntimeObject* L_1 = ___0_user;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B(L_0, L_1, HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_3 = __this->___m_Instance;
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Il2CppSharedGenericObject* L_5;
		L_5 = ScriptableObject_CreateInstance_TisIl2CppSharedGenericObject_mCBB59C30398DB494162F775DCD530D192A8D0A27(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___m_Instance = (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Instance), (void*)(ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A*)L_5);
	}

IL_002b:
	{
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_6 = __this->___m_Instance;
		return L_6;
	}
}
// Method Definition Index: 124942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1_fshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6;
		L_6 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 124942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86));
		NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 124942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68));
		NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 124942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602));
		NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 124942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF));
		NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 124942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683));
		NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 124942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8));
		NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 124942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D));
		NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 124944
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF_fshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
// Method Definition Index: 124944
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_inline((&L_3), L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 124944
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_inline((&L_3), L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 124944
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_inline((&L_3), L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 124944
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_inline((&L_3), L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 124944
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_inline((&L_3), L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 124944
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_inline((&L_3), L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 124943
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C_fshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
// Method Definition Index: 124943
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_inline((&L_3), L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 124352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9027343AE2D5E12E783D960A500BBA8FE5195BBC (bool* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		bool* L_0 = ___0_source;
		bool* L_1;
		L_1 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline(L_0, NULL);
		bool L_2 = (*(bool*)L_1);
		return L_2;
	}
}
// Method Definition Index: 124353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m149761E33DBB5938797158CD2267777889249D20 (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint8_t>(L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
// Method Definition Index: 124354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DF4ED5D8E7966448749B0EF4789CF9D28790956 (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		Il2CppChar* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint16_t>(((uint16_t*)L_0));
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
// Method Definition Index: 124355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC66F7E13FEF3C2A3380BBC07D08F03A8782D33CB (double* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		double* L_0 = ___0_source;
		double L_1 = il2cpp_codegen_ldind<double, double>(L_0);
		V_0 = (bool)((((int32_t)((((double)L_1) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
// Method Definition Index: 124356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m89D52A31D7F2F05F0D17A850C58C0C5F8E030B6B (int16_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		int16_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int16_t>(L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
// Method Definition Index: 124357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m25B619AFC89D9688CFC7B2569ED069D7C20C2994 (int32_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
// Method Definition Index: 124358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAC18983A5F1A6A7A790401C2B2FD83531E72EBF6 (int64_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		int64_t* L_0 = ___0_source;
		int64_t L_1 = il2cpp_codegen_ldind<int64_t, int64_t>(L_0);
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool)((!(((uint64_t)L_1) <= ((uint64_t)L_2)))? 1 : 0);
		bool* L_3;
		L_3 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_4 = (*(bool*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m09B0F2B814F11B8AE2E0C98B2DFC66B096AED85F (int8_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		int8_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int8_t>(L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
// Method Definition Index: 124360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m036744F72FE967803E4F56F626BD5921C272FE91 (float* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		float* L_0 = ___0_source;
		float L_1 = il2cpp_codegen_ldind<float, float>(L_0);
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
// Method Definition Index: 124361
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m12F65C97A5D3B2BEDA547C8B1D5B8507A2FB1A2E (String_t** ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticInit);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	double V_5 = 0.0;
	uint8_t V_6 = 0x0;
	Il2CppChar V_7 = 0x0;
	double V_8 = 0.0;
	int16_t V_9 = 0;
	double V_10 = 0.0;
	int16_t V_11 = 0;
	int32_t V_12 = 0;
	double V_13 = 0.0;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	double V_16 = 0.0;
	int64_t V_17 = 0;
	int8_t V_18 = 0x0;
	double V_19 = 0.0;
	int8_t V_20 = 0x0;
	float V_21 = 0.0f;
	double V_22 = 0.0;
	float V_23 = 0.0f;
	uint16_t V_24 = 0;
	double V_25 = 0.0;
	uint16_t V_26 = 0;
	uint32_t V_27 = 0;
	double V_28 = 0.0;
	uint32_t V_29 = 0;
	uint64_t V_30 = 0;
	double V_31 = 0.0;
	uint64_t V_32 = 0;
	{
	}
	{
		String_t** L_0 = ___0_source;
		String_t* L_1 = il2cpp_codegen_ldind<String_t*, String_t*>(L_0);
		CHECKED_LOCAL_INIT(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticInit,(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352(L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		bool* L_3;
		L_3 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_4 = (*(bool*)L_3);
		return L_4;
	}

IL_0033:
	{
		String_t** L_5 = ___0_source;
		String_t* L_6 = il2cpp_codegen_ldind<String_t*, String_t*>(L_5);
		bool L_7;
		L_7 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_6, (&V_1), NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		bool L_8;
		L_8 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A((&V_1), (&V_2), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0053;
		}
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(bool));
		bool L_9 = V_3;
		return L_9;
	}

IL_0053:
	{
		bool* L_10;
		L_10 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_2), NULL);
		bool L_11 = (*(bool*)L_10);
		return L_11;
	}
}
// Method Definition Index: 124362
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m37E4ADE675B732C53AA44A131ECDDDB9117C2FEF (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		uint16_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint16_t>(L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
// Method Definition Index: 124363
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C45A7B312AAB20E4018482DD63528AE0FA8AD7F (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		uint32_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint32_t>(L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
// Method Definition Index: 124364
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA24D1584B8259D1400DB72B059F6E272F648CD46 (uint64_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	{
	}
	{
		uint64_t* L_0 = ___0_source;
		int64_t L_1 = il2cpp_codegen_ldind<int64_t, int64_t>(((int64_t*)L_0));
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool)((!(((uint64_t)L_1) <= ((uint64_t)L_2)))? 1 : 0);
		bool* L_3;
		L_3 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_4 = (*(bool*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1D9F1B7A5D81F7D975583BEDDD47FB3FF700DB66 (bool* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0027;
	}

IL_0027:
	{
	}
	{
		bool* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0),NULL));
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_0), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF5EB901165BBA1DD14FB0BA192EDCEEAB74270AA (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		uint8_t* L_0 = ___0_source;
		uint8_t* L_1;
		L_1 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline(L_0, NULL);
		uint8_t L_2 = (*(uint8_t*)L_1);
		return L_2;
	}
}
// Method Definition Index: 124354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m32C9CA058130C3CD23CF459833CA0B683CB2CA25 (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		Il2CppChar* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint16_t>(((uint16_t*)L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE3256829F19143C84DDFB7DE5E99CADED21B525F (double* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0039;
	}

IL_0039:
	{
	}
	{
		double* L_0 = ___0_source;
		double L_1 = il2cpp_codegen_ldind<double, double>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,double,double,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEBDD863AA99BCA43774A0D46CFD65779C2371387 (int16_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		int16_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int16_t>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m99856D60B28AB7F7BB78FB2CC353B0449B439D26 (int32_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB68AB17BB4FA9B0767863E482CD15EFB7471C208 (int64_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002f;
	}

IL_002f:
	{
	}
	{
		int64_t* L_0 = ___0_source;
		int64_t L_1 = il2cpp_codegen_ldind<int64_t, int64_t>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m28268368C65727EB799EFC8BA63007367C1CA714 (int8_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		int8_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int8_t>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF577073B6AEC787E4E861B6BB90E3007081CE686 (float* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_0035;
	}

IL_0035:
	{
	}
	{
		float* L_0 = ___0_source;
		float L_1 = il2cpp_codegen_ldind<float, float>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,float,float,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124361
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9B13901D54CB804F0D654765920805B858783F96 (String_t** ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	double V_5 = 0.0;
	uint8_t V_6 = 0x0;
	Il2CppChar V_7 = 0x0;
	double V_8 = 0.0;
	int16_t V_9 = 0;
	double V_10 = 0.0;
	int16_t V_11 = 0;
	int32_t V_12 = 0;
	double V_13 = 0.0;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	double V_16 = 0.0;
	int64_t V_17 = 0;
	int8_t V_18 = 0x0;
	double V_19 = 0.0;
	int8_t V_20 = 0x0;
	float V_21 = 0.0f;
	double V_22 = 0.0;
	float V_23 = 0.0f;
	uint16_t V_24 = 0;
	double V_25 = 0.0;
	uint16_t V_26 = 0;
	uint32_t V_27 = 0;
	double V_28 = 0.0;
	uint32_t V_29 = 0;
	uint64_t V_30 = 0;
	double V_31 = 0.0;
	uint64_t V_32 = 0;
	{
		goto IL_0060;
	}

IL_0060:
	{
	}
	{
		String_t** L_0 = ___0_source;
		String_t* L_1 = il2cpp_codegen_ldind<String_t*, String_t*>(L_0);
		bool L_2;
		L_2 = Byte_TryParse_mB1716E3B6714F20DF6C1FEDDC4A76AA78D5EA87B(L_1, (&V_4), NULL);
		if (!L_2)
		{
			goto IL_0093;
		}
	}
	{
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_4), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}

IL_0093:
	{
		String_t** L_5 = ___0_source;
		String_t* L_6 = il2cpp_codegen_ldind<String_t*, String_t*>(L_5);
		bool L_7;
		L_7 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_6, (&V_5), NULL);
		if (!L_7)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_8;
		L_8 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC((&V_5), (&V_6), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_00b3;
		}
	}

IL_00a9:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(uint8_t));
		uint8_t L_9 = V_3;
		return L_9;
	}

IL_00b3:
	{
		uint8_t* L_10;
		L_10 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_6), NULL);
		uint8_t L_11 = (*(uint8_t*)L_10);
		return L_11;
	}
}
// Method Definition Index: 124362
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF91E40B8997E8935DD25485CAA881E55AEC97A1 (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		uint16_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint16_t>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124363
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC7AB336EA1F27C4E4B76DF6C6CA656D88C1FAFDC (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		uint32_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint32_t>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124364
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB41620C809A0702F408476A836BD8B081C5F5F76 (uint64_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	{
		goto IL_002f;
	}

IL_002f:
	{
	}
	{
		uint64_t* L_0 = ___0_source;
		int64_t L_1 = il2cpp_codegen_ldind<int64_t, int64_t>(((int64_t*)L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m6E60594E5DEC517F2531110144CDFDEDF3B46D44 (bool* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_0056;
	}

IL_0056:
	{
		goto IL_0085;
	}

IL_0085:
	{
		goto IL_00c6;
	}

IL_00c6:
	{
	}
	{
		bool* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_0));
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0),NULL));
		V_3 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_3), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m36404D92937D0B2561E062BBE4E25C940050A1A1 (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_0055;
	}

IL_0055:
	{
		goto IL_0080;
	}

IL_0080:
	{
		goto IL_00ac;
	}

IL_00ac:
	{
	}
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint8_t>(L_0);
		V_3 = (int16_t)L_1;
		int16_t* L_2;
		L_2 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_3), NULL);
		int16_t L_3 = (*(int16_t*)L_2);
		return L_3;
	}
}
// Method Definition Index: 124354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC89F76CF2D698A8804F5D0C32B85D4416489CBC6 (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0081;
	}

IL_0081:
	{
		goto IL_00ad;
	}

IL_00ad:
	{
	}
	{
		Il2CppChar* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint16_t>(((uint16_t*)L_0));
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_3 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_3), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m61F002EF5AA8EEF49CA1792FB9A9B872483BB11A (double* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0039;
	}

IL_0039:
	{
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_0091;
	}

IL_0091:
	{
		goto IL_00b8;
	}

IL_00b8:
	{
	}
	{
		double* L_0 = ___0_source;
		double L_1 = il2cpp_codegen_ldind<double, double>(L_0);
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,double,double,false,false>(L_1,NULL));
		V_3 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_3), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m357408DC24E9B4D52D25E4FC9C357B90C9561CEA (int16_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0086;
	}

IL_0086:
	{
		goto IL_00b2;
	}

IL_00b2:
	{
	}
	{
		int16_t* L_0 = ___0_source;
		int16_t* L_1;
		L_1 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline(L_0, NULL);
		int16_t L_2 = (*(int16_t*)L_1);
		return L_2;
	}
}
// Method Definition Index: 124357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m2D87E1001C55934B1C40EED8283546AABC8CE415 (int32_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0086;
	}

IL_0086:
	{
		goto IL_00b2;
	}

IL_00b2:
	{
	}
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_4 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_4), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m735A2CBCC13B3AA11C78900371EF6E39BDF35391 (int64_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002f;
	}

IL_002f:
	{
		goto IL_005b;
	}

IL_005b:
	{
		goto IL_0087;
	}

IL_0087:
	{
		goto IL_00b3;
	}

IL_00b3:
	{
	}
	{
		int64_t* L_0 = ___0_source;
		int64_t L_1 = il2cpp_codegen_ldind<int64_t, int64_t>(L_0);
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int64_t,int64_t,false,false>(L_1,NULL));
		V_4 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_4), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m7AF0B381F56CC5465F2216F7940A389B17F1BE44 (int8_t* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0086;
	}

IL_0086:
	{
		goto IL_00b2;
	}

IL_00b2:
	{
	}
	{
		int8_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int8_t>(L_0);
		V_4 = (int16_t)L_1;
		int16_t* L_2;
		L_2 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_4), NULL);
		int16_t L_3 = (*(int16_t*)L_2);
		return L_3;
	}
}
// Method Definition Index: 124360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mD7B3BE426F3B3B3CDACACFF64F5A589D860AA9A5 (float* ___0_source, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_0035;
	}

IL_0035:
	{
		goto IL_0061;
	}

IL_0061:
	{
		goto IL_008d;
	}

IL_008d:
	{
		goto IL_00b9;
	}

IL_00b9:
	{
	}
	{
		float* L_0 = ___0_source;
		float L_1 = il2cpp_codegen_ldind<float, float>(L_0);
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,float,float,false,false>(L_1,NULL));
		V_4 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_4), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
// Method Definition Index: 124361
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m23024E942AA8C622D5DAE15C237F39DFED1C9EB1 (String_t** ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	int16_t V_3 = 0;
	uint8_t V_4 = 0x0;
	double V_5 = 0.0;
	uint8_t V_6 = 0x0;
	Il2CppChar V_7 = 0x0;
	double V_8 = 0.0;
	int16_t V_9 = 0;
	double V_10 = 0.0;
	int16_t V_11 = 0;
	int32_t V_12 = 0;
	double V_13 = 0.0;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	double V_16 = 0.0;
	int64_t V_17 = 0;
	int8_t V_18 = 0x0;
	double V_19 = 0.0;
	int8_t V_20 = 0x0;
	float V_21 = 0.0f;
	double V_22 = 0.0;
	float V_23 = 0.0f;
	uint16_t V_24 = 0;
	double V_25 = 0.0;
	uint16_t V_26 = 0;
	uint32_t V_27 = 0;
	double V_28 = 0.0;
	uint32_t V_29 = 0;
	uint64_t V_30 = 0;
	double V_31 = 0.0;
	uint64_t V_32 = 0;
	{
		goto IL_0060;
	}

IL_0060:
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		goto IL_00fe;
	}

IL_00fe:
	{
		goto IL_013b;
	}

IL_013b:
	{
	}
	{
		String_t** L_0 = ___0_source;
		String_t* L_1 = il2cpp_codegen_ldind<String_t*, String_t*>(L_0);
		bool L_2;
		L_2 = Int16_TryParse_m7190AF18437CE1B43990B99E5D992E31485E77AE(L_1, (&V_9), NULL);
		if (!L_2)
		{
			goto IL_016e;
		}
	}
	{
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_9), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}

IL_016e:
	{
		String_t** L_5 = ___0_source;
		String_t* L_6 = il2cpp_codegen_ldind<String_t*, String_t*>(L_5);
		bool L_7;
		L_7 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_6, (&V_10), NULL);
		if (!L_7)
		{
			goto IL_0184;
		}
	}
	{
		bool L_8;
		L_8 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B((&V_10), (&V_11), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_018e;
		}
	}

IL_0184:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(int16_t));
		int16_t L_9 = V_3;
		return L_9;
	}

IL_018e:
	{
		int16_t* L_10;
		L_10 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_11), NULL);
		int16_t L_11 = (*(int16_t*)L_10);
		return L_11;
	}
}
// Method Definition Index: 3989
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 61462
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0;
		L_0 = UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline((&___0_gcHandle), NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1 = (*(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)L_0);
		return L_1;
	}
}
// Method Definition Index: 8422
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var)));
	}

IL_0013:
	{
		intptr_t L_2 = __this->___handle;
		bool L_3;
		L_3 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		intptr_t L_4 = __this->___handle;
		RuntimeObject* L_5;
		L_5 = GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline(L_4, NULL);
		return L_5;
	}

IL_002c:
	{
		intptr_t L_6 = __this->___handle;
		RuntimeObject* L_7;
		L_7 = GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794(L_6, NULL);
		return L_7;
	}
}
// Method Definition Index: 93602
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body;
		return L_0;
	}
}
// Method Definition Index: 3986
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
// Method Definition Index: 57868
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t* UnsafeUtility_As_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m2334C2170CD4B1666E45E7F5943115FAAADBDD14_gshared_inline (int32_t* ___0_from, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t* L_0 = ___0_from;
		int32_t* L_1;
		L_1 = UnsafeUtilityInternal_As_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m85C6A70D7AE09A2B410228609F2E8D80F1D71BD6_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 61459
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
// Method Definition Index: 53655
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_fshared_inline (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 2400
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_2;
		L_2 = il2cpp_unsafe_as_ref<BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84>((uint8_t*)L_1);
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC>((uint8_t*)L_1);
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A>((uint8_t*)L_1);
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_2;
		L_2 = il2cpp_unsafe_as_ref<JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF>((uint8_t*)L_1);
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576>((uint8_t*)L_1);
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A>((uint8_t*)L_1);
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2494
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2494
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_2;
		L_2 = il2cpp_unsafe_as_ref<TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7>((uint8_t*)L_1);
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 57868
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool* UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline (bool* ___0_from, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool* L_0 = ___0_from;
		bool* L_1;
		L_1 = UnsafeUtilityInternal_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3D9B5B2C16912294630A6DAD8928B960B7544E6_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 57868
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline (uint8_t* ___0_from, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t* L_0 = ___0_from;
		uint8_t* L_1;
		L_1 = UnsafeUtilityInternal_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5A66C1A526E263EC6778FF3879A6E62C618542C4_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 57868
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t* UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline (int16_t* ___0_from, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t* L_0 = ___0_from;
		int16_t* L_1;
		L_1 = UnsafeUtilityInternal_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mD165D6F44825CD0E42C9C1F6248DB1E67976F9C2_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 8418
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
// Method Definition Index: 8421
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_handle;
		intptr_t L_1 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(1,NULL));
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((intptr_t)((intptr_t)(L_0&L_1))) == ((intptr_t)L_2))? 1 : 0);
	}
}
// Method Definition Index: 8419
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = il2cpp_codegen_ldind<RuntimeObject*, RuntimeObject*>(L_2);
		return L_3;
	}
}
// Method Definition Index: 57868
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t* L_0 = ___0_from;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_1;
		L_1 = UnsafeUtilityInternal_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD43127D5F7AA6EB4B52E5C30BA53F29843E9E9A2_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 133264
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
// Method Definition Index: 3990
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
