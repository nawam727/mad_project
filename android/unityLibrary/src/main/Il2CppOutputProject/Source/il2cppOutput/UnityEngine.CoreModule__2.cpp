#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
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

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t91E36549D76184780FD8995722CD4A87A2650C23;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1EC718175613632CD4775345600304230E9A83DF;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_tF8AC2AD8CB819841C1BA6BCAF4C2733CCD50296F;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// UnityEngine.Events.PersistentCall
struct PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C RuntimeClass* InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase_AddCall_mA78C058ED530789A28F42347B653190FEC84DBBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase_FindMethod_mE417FEA28EC49921FA28EBDAB1214B0E6EC7E91B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase_PrepareInvoke_m4D04FA5D7025C093047DCD3DFEEFB9DF48764FC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase_RebuildPersistentCallsIfNeeded_m981B8A6658A88F620345D2C7F4ADCD0D788B0266_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase_RemoveListener_mFF8F8FAD5F18BA872C3CE005DC134B6828E1AD3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase_ToString_mE86F29D699C7537CACCAF3945F797EE659CE6522_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m835BA25C9F342C93FB9DF774C0894A82C4F049CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_mC47C72ED57A467E299925019E7DB9645D0F631F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase__ctor_mB1F958EAC1A7C4B31253F2E1FED173A628725DEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_FindMethod_Impl_m62E3D2795BACFF1BA2ED6A431ABD5FB2C7D3D681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_GetDelegate_m6665C6282D3668BC57F2702FD0C3B108F4CFD226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_GetDelegate_mBD5D37CFB826CB3329477A509A62BF7CE26A9EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_t91E36549D76184780FD8995722CD4A87A2650C23_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MethodInfo_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PersistentListenerMode_tED3A88CB6606D75AC71FAAF3571F9B875B981B52_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Type_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F;;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t91E36549D76184780FD8995722CD4A87A2650C23  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_tF8AC2AD8CB819841C1BA6BCAF4C2733CCD50296F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D  : public RuntimeObject
{
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;
};

// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// UnityEngine.Events.PersistentCall
struct PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF  : public RuntimeObject
{
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_TargetAssemblyTypeName
	String_t* ___m_TargetAssemblyTypeName_1;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_2;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_3;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* ___m_Arguments_4;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_5;
};

// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t1EC718175613632CD4775345600304230E9A83DF* ___m_Calls_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.PlayerLoop.EarlyUpdate
struct EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B 
{
	union
	{
		struct
		{
		};
		uint8_t EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate
struct FixedUpdate_tCF8FD444F9ACA24B19A6697CB873E558CC06A2D1 
{
	union
	{
		struct
		{
		};
		uint8_t FixedUpdate_tCF8FD444F9ACA24B19A6697CB873E558CC06A2D1__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization
struct Initialization_tDAACE77B534B3BDAC1A482FEA5917F2AB58A1016 
{
	union
	{
		struct
		{
		};
		uint8_t Initialization_tDAACE77B534B3BDAC1A482FEA5917F2AB58A1016__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Events.InvokableCall
struct InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122  : public BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339
{
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___Delegate_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef_0;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef_0;
};

// UnityEngine.PlayerLoop.PostLateUpdate
struct PostLateUpdate_t8D100B8147895DB5492ABDC2ABF8ACACA3EA1256 
{
	union
	{
		struct
		{
		};
		uint8_t PostLateUpdate_t8D100B8147895DB5492ABDC2ABF8ACACA3EA1256__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate
struct PreLateUpdate_t2DCE1BE25ACE7BC92CEE04C59E9F2F68A9C78FE6 
{
	union
	{
		struct
		{
		};
		uint8_t PreLateUpdate_t2DCE1BE25ACE7BC92CEE04C59E9F2F68A9C78FE6__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate
struct PreUpdate_tD3D2902387A8CA02CEED9FD2BFE8435ED80A51ED 
{
	union
	{
		struct
		{
		};
		uint8_t PreUpdate_tD3D2902387A8CA02CEED9FD2BFE8435ED80A51ED__padding[1];
	};
};

// UnityEngine.PlayerLoop.TimeUpdate
struct TimeUpdate_t81E3446F4486BC0736BFE3CBAE8FFA6848583E51 
{
	union
	{
		struct
		{
		};
		uint8_t TimeUpdate_t81E3446F4486BC0736BFE3CBAE8FFA6848583E51__padding[1];
	};
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.PlayerLoop.Update
struct Update_tFCBD46F301DE58EC1756B662441FF6E0F6733A89 
{
	union
	{
		struct
		{
		};
		uint8_t Update_tFCBD46F301DE58EC1756B662441FF6E0F6733A89__padding[1];
	};
};

// System.Void
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

// UnityEngine.PlayerLoop.EarlyUpdate/ARCoreUpdate
struct ARCoreUpdate_t0870925EB7DB96EFA85333F36698760A8861C270 
{
	union
	{
		struct
		{
		};
		uint8_t ARCoreUpdate_t0870925EB7DB96EFA85333F36698760A8861C270__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/AnalyticsCoreStatsUpdate
struct AnalyticsCoreStatsUpdate_t0AC27EABB00A0681E6915B93878E94FAE8DD9C1E 
{
	union
	{
		struct
		{
		};
		uint8_t AnalyticsCoreStatsUpdate_t0AC27EABB00A0681E6915B93878E94FAE8DD9C1E__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ClearIntermediateRenderers
struct ClearIntermediateRenderers_t3870E195EEF160DB91F9F67A109DFCE8EB630FB5 
{
	union
	{
		struct
		{
		};
		uint8_t ClearIntermediateRenderers_t3870E195EEF160DB91F9F67A109DFCE8EB630FB5__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ClearLines
struct ClearLines_tCA55FECEBB3CB979817F2331F7DE68FB037CFFCA 
{
	union
	{
		struct
		{
		};
		uint8_t ClearLines_tCA55FECEBB3CB979817F2331F7DE68FB037CFFCA__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/DeliverIosPlatformEvents
struct DeliverIosPlatformEvents_t1F56F9C02CC5108CCBFD4B87570C7DDB9E15FD6A 
{
	union
	{
		struct
		{
		};
		uint8_t DeliverIosPlatformEvents_t1F56F9C02CC5108CCBFD4B87570C7DDB9E15FD6A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/DispatchEventQueueEvents
struct DispatchEventQueueEvents_t6A8B38D90EFC8731159C218D19FC8739A0ED7232 
{
	union
	{
		struct
		{
		};
		uint8_t DispatchEventQueueEvents_t6A8B38D90EFC8731159C218D19FC8739A0ED7232__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ExecuteMainThreadJobs
struct ExecuteMainThreadJobs_t2AF302649970650DD66001B9F9DB0DA2F46E17C3 
{
	union
	{
		struct
		{
		};
		uint8_t ExecuteMainThreadJobs_t2AF302649970650DD66001B9F9DB0DA2F46E17C3__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/GpuTimestamp
struct GpuTimestamp_t5B6C8013AEC6F086F0366993EB0153A6E1C11A35 
{
	union
	{
		struct
		{
		};
		uint8_t GpuTimestamp_t5B6C8013AEC6F086F0366993EB0153A6E1C11A35__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PerformanceAnalyticsUpdate
struct PerformanceAnalyticsUpdate_t8B6378DF3D9F24091428D1F944CA9867C30BE4C2 
{
	union
	{
		struct
		{
		};
		uint8_t PerformanceAnalyticsUpdate_t8B6378DF3D9F24091428D1F944CA9867C30BE4C2__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PhysicsResetInterpolatedTransformPosition
struct PhysicsResetInterpolatedTransformPosition_t1048CAAC4D8DBC7AA534BFE62473D2D12C4E6D1F 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsResetInterpolatedTransformPosition_t1048CAAC4D8DBC7AA534BFE62473D2D12C4E6D1F__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PlayerCleanupCachedData
struct PlayerCleanupCachedData_t03AAFC538395693086152E6BF5AFAAFF0F9444DB 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerCleanupCachedData_t03AAFC538395693086152E6BF5AFAAFF0F9444DB__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PollHtcsPlayerConnection
struct PollHtcsPlayerConnection_t2498151E6AFBCC1C68848C08C8540E8F741EF209 
{
	union
	{
		struct
		{
		};
		uint8_t PollHtcsPlayerConnection_t2498151E6AFBCC1C68848C08C8540E8F741EF209__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PollPlayerConnection
struct PollPlayerConnection_tA188E9A07C41BA07CE3C73E2D45608F7D551057A 
{
	union
	{
		struct
		{
		};
		uint8_t PollPlayerConnection_tA188E9A07C41BA07CE3C73E2D45608F7D551057A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PresentBeforeUpdate
struct PresentBeforeUpdate_t9B96C36B1A049894E20D367554C2D00F54EE3A52 
{
	union
	{
		struct
		{
		};
		uint8_t PresentBeforeUpdate_t9B96C36B1A049894E20D367554C2D00F54EE3A52__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessMouseInWindow
struct ProcessMouseInWindow_t7759A2277757FE54B719695E47C7AC5E9A920112 
{
	union
	{
		struct
		{
		};
		uint8_t ProcessMouseInWindow_t7759A2277757FE54B719695E47C7AC5E9A920112__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessRemoteInput
struct ProcessRemoteInput_t268646D8132AA773DC3D8AEDCE53F0DC2FE88996 
{
	union
	{
		struct
		{
		};
		uint8_t ProcessRemoteInput_t268646D8132AA773DC3D8AEDCE53F0DC2FE88996__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/RendererNotifyInvisible
struct RendererNotifyInvisible_tC43ACAF01E9D5C34252E8B4B99A05EB2ACA191FE 
{
	union
	{
		struct
		{
		};
		uint8_t RendererNotifyInvisible_tC43ACAF01E9D5C34252E8B4B99A05EB2ACA191FE__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ResetFrameStatsAfterPresent
struct ResetFrameStatsAfterPresent_t511B4B8D887E68EB91B888E92C2D8258CB5BAAA2 
{
	union
	{
		struct
		{
		};
		uint8_t ResetFrameStatsAfterPresent_t511B4B8D887E68EB91B888E92C2D8258CB5BAAA2__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ScriptRunDelayedStartupFrame
struct ScriptRunDelayedStartupFrame_t437517E506EB51DF22436E8A2D517D627D9D1A35 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedStartupFrame_t437517E506EB51DF22436E8A2D517D627D9D1A35__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/SpriteAtlasManagerUpdate
struct SpriteAtlasManagerUpdate_t23345CA37B85F095F76F78D51130AA713DF706AB 
{
	union
	{
		struct
		{
		};
		uint8_t SpriteAtlasManagerUpdate_t23345CA37B85F095F76F78D51130AA713DF706AB__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/TangoUpdate
struct TangoUpdate_t0773D7F4190273AC99FEAD6DB5AB43C671AA56D2 
{
	union
	{
		struct
		{
		};
		uint8_t TangoUpdate_t0773D7F4190273AC99FEAD6DB5AB43C671AA56D2__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UnityWebRequestUpdate
struct UnityWebRequestUpdate_tD66FF44EB2E15D5F3F34D6E016FE11ABFE364E7D 
{
	union
	{
		struct
		{
		};
		uint8_t UnityWebRequestUpdate_tD66FF44EB2E15D5F3F34D6E016FE11ABFE364E7D__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateAsyncReadbackManager
struct UpdateAsyncReadbackManager_t438EC08527D0B0543D920C30750BCD94A690126A 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAsyncReadbackManager_t438EC08527D0B0543D920C30750BCD94A690126A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateCanvasRectTransform
struct UpdateCanvasRectTransform_t41CECA98EFF313B8463EEFF63BFB15DF0513A428 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_t41CECA98EFF313B8463EEFF63BFB15DF0513A428__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateInputManager
struct UpdateInputManager_tBC43869EB39DE6B92FBA117E2EA22B4DCD788F2A 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateInputManager_tBC43869EB39DE6B92FBA117E2EA22B4DCD788F2A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateKinect
struct UpdateKinect_tDDC4C28D19025796CB94F9DE552BA9C0ADEDCE45 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateKinect_tDDC4C28D19025796CB94F9DE552BA9C0ADEDCE45__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateMainGameViewRect
struct UpdateMainGameViewRect_tE725390DFE266FA0F34148D2184B9CCE9A7C46C6 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateMainGameViewRect_tE725390DFE266FA0F34148D2184B9CCE9A7C46C6__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdatePreloading
struct UpdatePreloading_t45C914112124AD6E405EE2B11DA76D265C20F77F 
{
	union
	{
		struct
		{
		};
		uint8_t UpdatePreloading_t45C914112124AD6E405EE2B11DA76D265C20F77F__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateStreamingManager
struct UpdateStreamingManager_tC612A33DB9BEFE10B1970D4A655B2F9EAF407D42 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateStreamingManager_tC612A33DB9BEFE10B1970D4A655B2F9EAF407D42__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateTextureStreamingManager
struct UpdateTextureStreamingManager_t0E74B3EDF837DFE1179C4CDB979B969DC58E3A2F 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateTextureStreamingManager_t0E74B3EDF837DFE1179C4CDB979B969DC58E3A2F__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/XRUpdate
struct XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9 
{
	union
	{
		struct
		{
		};
		uint8_t XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/AudioFixedUpdate
struct AudioFixedUpdate_tFF50E2AD8BE118EE03F1E31B5B5BDFB91D0418F2 
{
	union
	{
		struct
		{
		};
		uint8_t AudioFixedUpdate_tFF50E2AD8BE118EE03F1E31B5B5BDFB91D0418F2__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/ClearLines
struct ClearLines_tCAF10AEE1122923282F5586C7ED0CFE4FCB6D0E3 
{
	union
	{
		struct
		{
		};
		uint8_t ClearLines_tCAF10AEE1122923282F5586C7ED0CFE4FCB6D0E3__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedSampleTime
struct DirectorFixedSampleTime_tE4F7C94C031FD40BBBF938DE47BD701409110219 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedSampleTime_tE4F7C94C031FD40BBBF938DE47BD701409110219__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdate
struct DirectorFixedUpdate_t010D8D27494573A4CCD9A3F65EB96DBD0F0AC9D9 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdate_t010D8D27494573A4CCD9A3F65EB96DBD0F0AC9D9__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdatePostPhysics
struct DirectorFixedUpdatePostPhysics_tB860502DD096EC153005619C9607049E7DEF408A 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdatePostPhysics_tB860502DD096EC153005619C9607049E7DEF408A__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/LegacyFixedAnimationUpdate
struct LegacyFixedAnimationUpdate_t2F56DD05BE773AF12B8024A86FBB03175BD99C6D 
{
	union
	{
		struct
		{
		};
		uint8_t LegacyFixedAnimationUpdate_t2F56DD05BE773AF12B8024A86FBB03175BD99C6D__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/NewInputFixedUpdate
struct NewInputFixedUpdate_tDD791A781B81753165645E5A6B24C54524BAB373 
{
	union
	{
		struct
		{
		};
		uint8_t NewInputFixedUpdate_tDD791A781B81753165645E5A6B24C54524BAB373__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/Physics2DFixedUpdate
struct Physics2DFixedUpdate_t1A722B7DD754C177785AB6A4948CC9DD8B4E13C5 
{
	union
	{
		struct
		{
		};
		uint8_t Physics2DFixedUpdate_t1A722B7DD754C177785AB6A4948CC9DD8B4E13C5__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsClothFixedUpdate
struct PhysicsClothFixedUpdate_tC2A56A2FB665B621E7D60D0691150D01C669362B 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsClothFixedUpdate_tC2A56A2FB665B621E7D60D0691150D01C669362B__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsFixedUpdate
struct PhysicsFixedUpdate_tF76C7633EB2FC69A88CE7DE7B95C98FA3E4641E6 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsFixedUpdate_tF76C7633EB2FC69A88CE7DE7B95C98FA3E4641E6__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunBehaviourFixedUpdate
struct ScriptRunBehaviourFixedUpdate_tC21CDED0EB965CC4170728A1428C331E9FC0D04D 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourFixedUpdate_tC21CDED0EB965CC4170728A1428C331E9FC0D04D__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunDelayedFixedFrameRate
struct ScriptRunDelayedFixedFrameRate_t8A96D1EF94E7948A73808C8D8B264CD001C901BB 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedFixedFrameRate_t8A96D1EF94E7948A73808C8D8B264CD001C901BB__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/XRFixedUpdate
struct XRFixedUpdate_tA04D874E51DDD5CEA43B0052193F17C7F5FFB006 
{
	union
	{
		struct
		{
		};
		uint8_t XRFixedUpdate_tA04D874E51DDD5CEA43B0052193F17C7F5FFB006__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/AsyncUploadTimeSlicedUpdate
struct AsyncUploadTimeSlicedUpdate_t5EBE201AE7C230BDE8B8F4EB414DB244DCC386B6 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncUploadTimeSlicedUpdate_t5EBE201AE7C230BDE8B8F4EB414DB244DCC386B6__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/DirectorSampleTime
struct DirectorSampleTime_t36E04867AC7305A062E990E2F8E30ED8652883A0 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorSampleTime_t36E04867AC7305A062E990E2F8E30ED8652883A0__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/ProfilerStartFrame
struct ProfilerStartFrame_t80452E048B09F684583B024353CEF1C50B650E43 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilerStartFrame_t80452E048B09F684583B024353CEF1C50B650E43__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/SynchronizeInputs
struct SynchronizeInputs_tDEECB3386F5E73129815BA3BFA47F033D31CC9EF 
{
	union
	{
		struct
		{
		};
		uint8_t SynchronizeInputs_tDEECB3386F5E73129815BA3BFA47F033D31CC9EF__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/SynchronizeState
struct SynchronizeState_t46EEC7F26CE1203D756418F000A011081D74923A 
{
	union
	{
		struct
		{
		};
		uint8_t SynchronizeState_t46EEC7F26CE1203D756418F000A011081D74923A__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/UpdateCameraMotionVectors
struct UpdateCameraMotionVectors_t67A02B2283F2C5C3FC6E456F46AB5E6BE4126391 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCameraMotionVectors_t67A02B2283F2C5C3FC6E456F46AB5E6BE4126391__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/XREarlyUpdate
struct XREarlyUpdate_t2FE37D888210382039DD766A0911539EBB10D015 
{
	union
	{
		struct
		{
		};
		uint8_t XREarlyUpdate_t2FE37D888210382039DD766A0911539EBB10D015__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/BatchModeUpdate
struct BatchModeUpdate_t686C5FBF3907281713E45590481A06FCF403325D 
{
	union
	{
		struct
		{
		};
		uint8_t BatchModeUpdate_t686C5FBF3907281713E45590481A06FCF403325D__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ClearImmediateRenderers
struct ClearImmediateRenderers_tD5807343A690F45CD8EAAE07F9224F80986F17EB 
{
	union
	{
		struct
		{
		};
		uint8_t ClearImmediateRenderers_tD5807343A690F45CD8EAAE07F9224F80986F17EB__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorLateUpdate
struct DirectorLateUpdate_t6D55F5058BD025D280245CBD42C162C483E1D512 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorLateUpdate_t6D55F5058BD025D280245CBD42C162C483E1D512__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorRenderImage
struct DirectorRenderImage_t8250BBB821B976257F3EAEC1448C3991AFF63C1B 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorRenderImage_t8250BBB821B976257F3EAEC1448C3991AFF63C1B__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate
struct EndGraphicsJobsAfterScriptLateUpdate_tEE7D7895D684058F163063191B2D2874BE7FA562 
{
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptLateUpdate_tEE7D7895D684058F163063191B2D2874BE7FA562__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/EnlightenRuntimeUpdate
struct EnlightenRuntimeUpdate_tF0560FB54CCF2F4A32DA721EBA26E848DF5D76E3 
{
	union
	{
		struct
		{
		};
		uint8_t EnlightenRuntimeUpdate_tF0560FB54CCF2F4A32DA721EBA26E848DF5D76E3__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ExecuteGameCenterCallbacks
struct ExecuteGameCenterCallbacks_tCD187757744592AED2400D913D99DD4180E48857 
{
	union
	{
		struct
		{
		};
		uint8_t ExecuteGameCenterCallbacks_tCD187757744592AED2400D913D99DD4180E48857__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/FinishFrameRendering
struct FinishFrameRendering_tEAE352E2A0817EF409C36B50BC74A0AE91403039 
{
	union
	{
		struct
		{
		};
		uint8_t FinishFrameRendering_tEAE352E2A0817EF409C36B50BC74A0AE91403039__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/GUIClearEvents
struct GUIClearEvents_tAD3C9126D5AB5761F35668BB8D192901D0654FD2 
{
	union
	{
		struct
		{
		};
		uint8_t GUIClearEvents_tAD3C9126D5AB5761F35668BB8D192901D0654FD2__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/GraphicsWarmupPreloadedShaders
struct GraphicsWarmupPreloadedShaders_tF4CA3BFEDAEFF58490F38AD9FC40668CFCE3EA3D 
{
	union
	{
		struct
		{
		};
		uint8_t GraphicsWarmupPreloadedShaders_tF4CA3BFEDAEFF58490F38AD9FC40668CFCE3EA3D__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/InputEndFrame
struct InputEndFrame_t42B7FD0989A122BDDE757062094FBD3AAF900B33 
{
	union
	{
		struct
		{
		};
		uint8_t InputEndFrame_t42B7FD0989A122BDDE757062094FBD3AAF900B33__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/MemoryFrameMaintenance
struct MemoryFrameMaintenance_t0E4EADC6A05D1699FDC722959D64FB3F30DD6E90 
{
	union
	{
		struct
		{
		};
		uint8_t MemoryFrameMaintenance_t0E4EADC6A05D1699FDC722959D64FB3F30DD6E90__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ParticleSystemEndUpdateAll
struct ParticleSystemEndUpdateAll_tA5B846F08C725EB3642F2F9C30B721F335C96410 
{
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemEndUpdateAll_tA5B846F08C725EB3642F2F9C30B721F335C96410__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothBeginUpdate
struct PhysicsSkinnedClothBeginUpdate_t7594D90D7261A07D1753941535C489D7CF38E696 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothBeginUpdate_t7594D90D7261A07D1753941535C489D7CF38E696__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothFinishUpdate
struct PhysicsSkinnedClothFinishUpdate_tF276BC670113332DE88FD62F6139F1126AA23C75 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothFinishUpdate_tF276BC670113332DE88FD62F6139F1126AA23C75__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerEmitCanvasGeometry
struct PlayerEmitCanvasGeometry_t5C1E32B15900188F564F4E318B352EEDF3910375 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerEmitCanvasGeometry_t5C1E32B15900188F564F4E318B352EEDF3910375__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameComplete
struct PlayerSendFrameComplete_tBACAC212A197B5446CB6F593799C7695BB24EC05 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameComplete_tBACAC212A197B5446CB6F593799C7695BB24EC05__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFramePostPresent
struct PlayerSendFramePostPresent_t84861404A02490869D3F46F7F2C0A17290545EC1 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFramePostPresent_t84861404A02490869D3F46F7F2C0A17290545EC1__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameStarted
struct PlayerSendFrameStarted_t4DDB339CF02291AAF8CB8FBBF4011458A485FD94 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameStarted_t4DDB339CF02291AAF8CB8FBBF4011458A485FD94__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerUpdateCanvases
struct PlayerUpdateCanvases_t14545D10F675BACF66AD183C46A48D9242713404 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerUpdateCanvases_t14545D10F675BACF66AD183C46A48D9242713404__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PresentAfterDraw
struct PresentAfterDraw_t9C61FF8A9FE7A311D239FD7FC1E4F7E24B6549ED 
{
	union
	{
		struct
		{
		};
		uint8_t PresentAfterDraw_t9C61FF8A9FE7A311D239FD7FC1E4F7E24B6549ED__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ProcessWebSendMessages
struct ProcessWebSendMessages_tC8FFF5536FFB6F2AFFA10F33E65A5077DBF5B930 
{
	union
	{
		struct
		{
		};
		uint8_t ProcessWebSendMessages_tC8FFF5536FFB6F2AFFA10F33E65A5077DBF5B930__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerEndFrame
struct ProfilerEndFrame_t2A94DA438D46971D71B8288F52C4FFF2F02A2E33 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilerEndFrame_t2A94DA438D46971D71B8288F52C4FFF2F02A2E33__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerSynchronizeStats
struct ProfilerSynchronizeStats_tD6DE0BB1F779FBFFB312E5BCC793E40219F28C06 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilerSynchronizeStats_tD6DE0BB1F779FBFFB312E5BCC793E40219F28C06__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ResetInputAxis
struct ResetInputAxis_tEB27E7DE3846A88D2D4E021C916D8D6D88EFE413 
{
	union
	{
		struct
		{
		};
		uint8_t ResetInputAxis_tEB27E7DE3846A88D2D4E021C916D8D6D88EFE413__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ScriptRunDelayedDynamicFrameRate
struct ScriptRunDelayedDynamicFrameRate_t7071432D555EBFC8DD4E534B45F4EDF27E080F13 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t7071432D555EBFC8DD4E534B45F4EDF27E080F13__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ShaderHandleErrors
struct ShaderHandleErrors_tF94E0D773C1DB05AF604B2DE50724E860E1AF013 
{
	union
	{
		struct
		{
		};
		uint8_t ShaderHandleErrors_tF94E0D773C1DB05AF604B2DE50724E860E1AF013__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/SortingGroupsUpdate
struct SortingGroupsUpdate_tB67116E697EFCB74353FE78178E7B77CFF508A07 
{
	union
	{
		struct
		{
		};
		uint8_t SortingGroupsUpdate_tB67116E697EFCB74353FE78178E7B77CFF508A07__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ThreadedLoadingDebug
struct ThreadedLoadingDebug_tDB72068BDFB2257670DA53B21B3D09F760DAFF6A 
{
	union
	{
		struct
		{
		};
		uint8_t ThreadedLoadingDebug_tDB72068BDFB2257670DA53B21B3D09F760DAFF6A__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/TriggerEndOfFrameCallbacks
struct TriggerEndOfFrameCallbacks_tBA66DD23D1D0C1E192F89C2F300BAD5F92C93F1B 
{
	union
	{
		struct
		{
		};
		uint8_t TriggerEndOfFrameCallbacks_tBA66DD23D1D0C1E192F89C2F300BAD5F92C93F1B__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllRenderers
struct UpdateAllRenderers_tDFCEDEFC02C1B3B96770B06559B45FADA50445BC 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAllRenderers_tDFCEDEFC02C1B3B96770B06559B45FADA50445BC__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllSkinnedMeshes
struct UpdateAllSkinnedMeshes_t9015D4D4B19DE28DD05617E082E2B8304DC5E942 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAllSkinnedMeshes_t9015D4D4B19DE28DD05617E082E2B8304DC5E942__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAudio
struct UpdateAudio_t1EE346D361B4338A8CFA185A4705AEFDAEE801AE 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAudio_t1EE346D361B4338A8CFA185A4705AEFDAEE801AE__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCanvasRectTransform
struct UpdateCanvasRectTransform_t43DD3FE6666F14E5619AA847D7FC83A31B4AB2DF 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_t43DD3FE6666F14E5619AA847D7FC83A31B4AB2DF__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCaptureScreenshot
struct UpdateCaptureScreenshot_tAF9CC0F6E0462EAB2BEF9EE8BA1DAC7D5BABA360 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCaptureScreenshot_tAF9CC0F6E0462EAB2BEF9EE8BA1DAC7D5BABA360__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCustomRenderTextures
struct UpdateCustomRenderTextures_tDCCB1380EB126CE1146781F90D4DC397502707EA 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCustomRenderTextures_tDCCB1380EB126CE1146781F90D4DC397502707EA__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateLightProbeProxyVolumes
struct UpdateLightProbeProxyVolumes_t7E61DB4527509062E7DE783C2E8292C5CC822B56 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateLightProbeProxyVolumes_t7E61DB4527509062E7DE783C2E8292C5CC822B56__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateRectTransform
struct UpdateRectTransform_tFB89399C3715A7AE18439EDA43A8A246A70307C4 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateRectTransform_tFB89399C3715A7AE18439EDA43A8A246A70307C4__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateResolution
struct UpdateResolution_t6B90CB8B3407D59509AC4D0477435FD44682D4ED 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateResolution_t6B90CB8B3407D59509AC4D0477435FD44682D4ED__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateSubstance
struct UpdateSubstance_tB7ADB49C519BBE5D1B5DA7F6BA7177DE1FC1217A 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateSubstance_tB7ADB49C519BBE5D1B5DA7F6BA7177DE1FC1217A__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideo
struct UpdateVideo_tB21C695C93D9ECA1F8821B359B71C03EABD0E1EF 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_tB21C695C93D9ECA1F8821B359B71C03EABD0E1EF__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideoTextures
struct UpdateVideoTextures_t41EC68C3F07C66A6A9F8ADF81EC4622B680CAA7E 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateVideoTextures_t41EC68C3F07C66A6A9F8ADF81EC4622B680CAA7E__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/VFXUpdate
struct VFXUpdate_t816F9323A8CB3A06A0D9D213B1277904CD457252 
{
	union
	{
		struct
		{
		};
		uint8_t VFXUpdate_t816F9323A8CB3A06A0D9D213B1277904CD457252__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostLateUpdate
struct XRPostLateUpdate_t1EE8EAA2697F9C758F0C8C1974C59EE578EFC15F 
{
	union
	{
		struct
		{
		};
		uint8_t XRPostLateUpdate_t1EE8EAA2697F9C758F0C8C1974C59EE578EFC15F__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostPresent
struct XRPostPresent_tFF910652581DF94C8DF5BAE50633725ED22E1354 
{
	union
	{
		struct
		{
		};
		uint8_t XRPostPresent_tFF910652581DF94C8DF5BAE50633725ED22E1354__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/XRPreEndFrame
struct XRPreEndFrame_t78A1DA8FD45515933040E2B7B9CBB384967C46BF 
{
	union
	{
		struct
		{
		};
		uint8_t XRPreEndFrame_t78A1DA8FD45515933040E2B7B9CBB384967C46BF__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/AIUpdatePostScript
struct AIUpdatePostScript_t87451CCD704E89EC1C2BA0D35B3AEAA8563A33E6 
{
	union
	{
		struct
		{
		};
		uint8_t AIUpdatePostScript_t87451CCD704E89EC1C2BA0D35B3AEAA8563A33E6__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/ConstraintManagerUpdate
struct ConstraintManagerUpdate_tBB12AC594CE163F658DBBACC3853C383E1A05213 
{
	union
	{
		struct
		{
		};
		uint8_t ConstraintManagerUpdate_tBB12AC594CE163F658DBBACC3853C383E1A05213__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorDeferredEvaluate
struct DirectorDeferredEvaluate_t851C593FE275B53D22C79C8435BEB4891252F799 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorDeferredEvaluate_t851C593FE275B53D22C79C8435BEB4891252F799__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationBegin
struct DirectorUpdateAnimationBegin_t81C50CAC81BD6EC4D9648822E86BF29A47936FEC 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationBegin_t81C50CAC81BD6EC4D9648822E86BF29A47936FEC__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationEnd
struct DirectorUpdateAnimationEnd_tD58A96B3539A4F3A050B5116895857DFADB1609E 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationEnd_tD58A96B3539A4F3A050B5116895857DFADB1609E__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/EndGraphicsJobsAfterScriptUpdate
struct EndGraphicsJobsAfterScriptUpdate_t31BA589CB2526B56986A3C5D9ED15FB859CA806C 
{
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptUpdate_t31BA589CB2526B56986A3C5D9ED15FB859CA806C__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/LegacyAnimationUpdate
struct LegacyAnimationUpdate_tCA1859B18933D179724E4EF67D3AD39AA70F9137 
{
	union
	{
		struct
		{
		};
		uint8_t LegacyAnimationUpdate_tCA1859B18933D179724E4EF67D3AD39AA70F9137__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/ParticleSystemBeginUpdateAll
struct ParticleSystemBeginUpdateAll_t1CC03454030208134371D7310A6983F583139D3B 
{
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemBeginUpdateAll_t1CC03454030208134371D7310A6983F583139D3B__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/Physics2DLateUpdate
struct Physics2DLateUpdate_t8BCE5DD17E6F2423EEE2089613AFACB04D822381 
{
	union
	{
		struct
		{
		};
		uint8_t Physics2DLateUpdate_t8BCE5DD17E6F2423EEE2089613AFACB04D822381__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/ScriptRunBehaviourLateUpdate
struct ScriptRunBehaviourLateUpdate_t4FB72F632A4C0FD8A88708419FF10E910797D3A7 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourLateUpdate_t4FB72F632A4C0FD8A88708419FF10E910797D3A7__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UIElementsUpdatePanels
struct UIElementsUpdatePanels_t999A37AEB53E4F09E8193455832E7FE029299AA5 
{
	union
	{
		struct
		{
		};
		uint8_t UIElementsUpdatePanels_t999A37AEB53E4F09E8193455832E7FE029299AA5__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UNetUpdate
struct UNetUpdate_tD789F426DEFBE083132EC295CFFA8C8A63BFA8E8 
{
	union
	{
		struct
		{
		};
		uint8_t UNetUpdate_tD789F426DEFBE083132EC295CFFA8C8A63BFA8E8__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateMasterServerInterface
struct UpdateMasterServerInterface_t5C89D280B0E06D2E5EE43DA200DB08F067CD8FEB 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateMasterServerInterface_t5C89D280B0E06D2E5EE43DA200DB08F067CD8FEB__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateNetworkManager
struct UpdateNetworkManager_t32CBEA7AF5C6FB8F34C8F8AD050FB631C685DD31 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateNetworkManager_t32CBEA7AF5C6FB8F34C8F8AD050FB631C685DD31__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/AIUpdate
struct AIUpdate_tA35AAF6E952364E15D0F164538EFB865E0B8DD35 
{
	union
	{
		struct
		{
		};
		uint8_t AIUpdate_tA35AAF6E952364E15D0F164538EFB865E0B8DD35__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/CheckTexFieldInput
struct CheckTexFieldInput_t82562A2FF4A6A96115095A22DE49B2C8C85592D0 
{
	union
	{
		struct
		{
		};
		uint8_t CheckTexFieldInput_t82562A2FF4A6A96115095A22DE49B2C8C85592D0__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/IMGUISendQueuedEvents
struct IMGUISendQueuedEvents_tCB68831D0D320C78C24F1D76D2FE2EE3461FDE0C 
{
	union
	{
		struct
		{
		};
		uint8_t IMGUISendQueuedEvents_tCB68831D0D320C78C24F1D76D2FE2EE3461FDE0C__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/NewInputUpdate
struct NewInputUpdate_t1564F13F15C464D3B914A6E9C043C6F2D93B9A9C 
{
	union
	{
		struct
		{
		};
		uint8_t NewInputUpdate_t1564F13F15C464D3B914A6E9C043C6F2D93B9A9C__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/Physics2DUpdate
struct Physics2DUpdate_t895E178622EB6CCC7BE36D01F8FED69820B4CED7 
{
	union
	{
		struct
		{
		};
		uint8_t Physics2DUpdate_t895E178622EB6CCC7BE36D01F8FED69820B4CED7__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/PhysicsUpdate
struct PhysicsUpdate_t5EA12922A6C5349E4F5B1F6EE3F67D90A92532A6 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsUpdate_t5EA12922A6C5349E4F5B1F6EE3F67D90A92532A6__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/SendMouseEvents
struct SendMouseEvents_t0D410EA28E53BEAFCDB37F8E58A46485D16B86F5 
{
	union
	{
		struct
		{
		};
		uint8_t SendMouseEvents_t0D410EA28E53BEAFCDB37F8E58A46485D16B86F5__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/UpdateVideo
struct UpdateVideo_tFC4416C8B8E1232540E981586130B2D7B1D9AFE3 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_tFC4416C8B8E1232540E981586130B2D7B1D9AFE3__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/WindUpdate
struct WindUpdate_t62BB75F87B0E35ADAE8ED7A801F6EB044D22143B 
{
	union
	{
		struct
		{
		};
		uint8_t WindUpdate_t62BB75F87B0E35ADAE8ED7A801F6EB044D22143B__padding[1];
	};
};

// UnityEngine.PlayerLoop.TimeUpdate/WaitForLastPresentationAndUpdateTime
struct WaitForLastPresentationAndUpdateTime_tF885D5810C1C4B2AA28DBCC6CB6003E51792F51C 
{
	union
	{
		struct
		{
		};
		uint8_t WaitForLastPresentationAndUpdateTime_tF885D5810C1C4B2AA28DBCC6CB6003E51792F51C__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/DirectorUpdate
struct DirectorUpdate_t766FFE1AA1ADCA88ABEDAEFEF5A9B46DFE782E7D 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdate_t766FFE1AA1ADCA88ABEDAEFEF5A9B46DFE782E7D__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/ScriptRunBehaviourUpdate
struct ScriptRunBehaviourUpdate_tC1140F6DB2F045EB25C6B8E5C46DBE91A1CDBBC1 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourUpdate_tC1140F6DB2F045EB25C6B8E5C46DBE91A1CDBBC1__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedDynamicFrameRate
struct ScriptRunDelayedDynamicFrameRate_t6806DDF61653702F6F87D55ED9330215CD5BF033 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t6806DDF61653702F6F87D55ED9330215CD5BF033__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedTasks
struct ScriptRunDelayedTasks_t836195796CF358BFA2A1A24B90C69DB7F95EEC80 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedTasks_t836195796CF358BFA2A1A24B90C69DB7F95EEC80__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F 
{
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t* ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};

// UnityEngine.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 
{
	// System.Type UnityEngine.LowLevel.PlayerLoopSystemInternal::type
	Type_t* ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystemInternal::updateDelegate
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate_1;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystemInternal::updateFunction
	intptr_t ___updateFunction_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystemInternal::loopConditionFunction
	intptr_t ___loopConditionFunction_3;
	// System.Int32 UnityEngine.LowLevel.PlayerLoopSystemInternal::numSubSystems
	int32_t ___numSubSystems_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke
{
	Type_t* ___type_0;
	Il2CppMethodPointer ___updateDelegate_1;
	intptr_t ___updateFunction_2;
	intptr_t ___loopConditionFunction_3;
	int32_t ___numSubSystems_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com
{
	Type_t* ___type_0;
	Il2CppMethodPointer ___updateDelegate_1;
	intptr_t ___updateFunction_2;
	intptr_t ___loopConditionFunction_3;
	int32_t ___numSubSystems_4;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4  : public MulticastDelegate_t
{
};

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t91E36549D76184780FD8995722CD4A87A2650C23_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BaseInvokableCallU5BU5D_tF8AC2AD8CB819841C1BA6BCAF4C2733CCD50296F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.Events.ArgumentCache

// UnityEngine.Events.ArgumentCache

// UnityEngine.Events.BaseInvokableCall

// UnityEngine.Events.BaseInvokableCall

// System.Reflection.Binder

// System.Reflection.Binder

// UnityEngine.Events.InvokableCallList

// UnityEngine.Events.InvokableCallList

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

// UnityEngine.Events.PersistentCall

// UnityEngine.Events.PersistentCall

// UnityEngine.Events.PersistentCallGroup

// UnityEngine.Events.PersistentCallGroup

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.PlayerLoop.EarlyUpdate

// UnityEngine.PlayerLoop.EarlyUpdate

// UnityEngine.PlayerLoop.FixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate

// UnityEngine.PlayerLoop.Initialization

// UnityEngine.PlayerLoop.Initialization

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Events.InvokableCall

// UnityEngine.Events.InvokableCall

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Reflection.ParameterModifier

// System.Reflection.ParameterModifier

// UnityEngine.PlayerLoop.PostLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate

// UnityEngine.PlayerLoop.PreUpdate

// UnityEngine.PlayerLoop.PreUpdate

// UnityEngine.PlayerLoop.TimeUpdate

// UnityEngine.PlayerLoop.TimeUpdate

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.PlayerLoop.Update

// UnityEngine.PlayerLoop.Update

// System.Void

// System.Void

// UnityEngine.PlayerLoop.EarlyUpdate/ARCoreUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/ARCoreUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/AnalyticsCoreStatsUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/AnalyticsCoreStatsUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/ClearIntermediateRenderers

// UnityEngine.PlayerLoop.EarlyUpdate/ClearIntermediateRenderers

// UnityEngine.PlayerLoop.EarlyUpdate/ClearLines

// UnityEngine.PlayerLoop.EarlyUpdate/ClearLines

// UnityEngine.PlayerLoop.EarlyUpdate/DeliverIosPlatformEvents

// UnityEngine.PlayerLoop.EarlyUpdate/DeliverIosPlatformEvents

// UnityEngine.PlayerLoop.EarlyUpdate/DispatchEventQueueEvents

// UnityEngine.PlayerLoop.EarlyUpdate/DispatchEventQueueEvents

// UnityEngine.PlayerLoop.EarlyUpdate/ExecuteMainThreadJobs

// UnityEngine.PlayerLoop.EarlyUpdate/ExecuteMainThreadJobs

// UnityEngine.PlayerLoop.EarlyUpdate/GpuTimestamp

// UnityEngine.PlayerLoop.EarlyUpdate/GpuTimestamp

// UnityEngine.PlayerLoop.EarlyUpdate/PerformanceAnalyticsUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/PerformanceAnalyticsUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/PhysicsResetInterpolatedTransformPosition

// UnityEngine.PlayerLoop.EarlyUpdate/PhysicsResetInterpolatedTransformPosition

// UnityEngine.PlayerLoop.EarlyUpdate/PlayerCleanupCachedData

// UnityEngine.PlayerLoop.EarlyUpdate/PlayerCleanupCachedData

// UnityEngine.PlayerLoop.EarlyUpdate/PollHtcsPlayerConnection

// UnityEngine.PlayerLoop.EarlyUpdate/PollHtcsPlayerConnection

// UnityEngine.PlayerLoop.EarlyUpdate/PollPlayerConnection

// UnityEngine.PlayerLoop.EarlyUpdate/PollPlayerConnection

// UnityEngine.PlayerLoop.EarlyUpdate/PresentBeforeUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/PresentBeforeUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessMouseInWindow

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessMouseInWindow

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessRemoteInput

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessRemoteInput

// UnityEngine.PlayerLoop.EarlyUpdate/RendererNotifyInvisible

// UnityEngine.PlayerLoop.EarlyUpdate/RendererNotifyInvisible

// UnityEngine.PlayerLoop.EarlyUpdate/ResetFrameStatsAfterPresent

// UnityEngine.PlayerLoop.EarlyUpdate/ResetFrameStatsAfterPresent

// UnityEngine.PlayerLoop.EarlyUpdate/ScriptRunDelayedStartupFrame

// UnityEngine.PlayerLoop.EarlyUpdate/ScriptRunDelayedStartupFrame

// UnityEngine.PlayerLoop.EarlyUpdate/SpriteAtlasManagerUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/SpriteAtlasManagerUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/TangoUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/TangoUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/UnityWebRequestUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/UnityWebRequestUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateAsyncReadbackManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateAsyncReadbackManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateCanvasRectTransform

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateCanvasRectTransform

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateInputManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateInputManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateKinect

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateKinect

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateMainGameViewRect

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateMainGameViewRect

// UnityEngine.PlayerLoop.EarlyUpdate/UpdatePreloading

// UnityEngine.PlayerLoop.EarlyUpdate/UpdatePreloading

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateStreamingManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateStreamingManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateTextureStreamingManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateTextureStreamingManager

// UnityEngine.PlayerLoop.EarlyUpdate/XRUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/XRUpdate

// UnityEngine.PlayerLoop.FixedUpdate/AudioFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/AudioFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/ClearLines

// UnityEngine.PlayerLoop.FixedUpdate/ClearLines

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedSampleTime

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedSampleTime

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdatePostPhysics

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdatePostPhysics

// UnityEngine.PlayerLoop.FixedUpdate/LegacyFixedAnimationUpdate

// UnityEngine.PlayerLoop.FixedUpdate/LegacyFixedAnimationUpdate

// UnityEngine.PlayerLoop.FixedUpdate/NewInputFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/NewInputFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/Physics2DFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/Physics2DFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsClothFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsClothFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunBehaviourFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunBehaviourFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunDelayedFixedFrameRate

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunDelayedFixedFrameRate

// UnityEngine.PlayerLoop.FixedUpdate/XRFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/XRFixedUpdate

// UnityEngine.PlayerLoop.Initialization/AsyncUploadTimeSlicedUpdate

// UnityEngine.PlayerLoop.Initialization/AsyncUploadTimeSlicedUpdate

// UnityEngine.PlayerLoop.Initialization/DirectorSampleTime

// UnityEngine.PlayerLoop.Initialization/DirectorSampleTime

// UnityEngine.PlayerLoop.Initialization/ProfilerStartFrame

// UnityEngine.PlayerLoop.Initialization/ProfilerStartFrame

// UnityEngine.PlayerLoop.Initialization/SynchronizeInputs

// UnityEngine.PlayerLoop.Initialization/SynchronizeInputs

// UnityEngine.PlayerLoop.Initialization/SynchronizeState

// UnityEngine.PlayerLoop.Initialization/SynchronizeState

// UnityEngine.PlayerLoop.Initialization/UpdateCameraMotionVectors

// UnityEngine.PlayerLoop.Initialization/UpdateCameraMotionVectors

// UnityEngine.PlayerLoop.Initialization/XREarlyUpdate

// UnityEngine.PlayerLoop.Initialization/XREarlyUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/BatchModeUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/BatchModeUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/ClearImmediateRenderers

// UnityEngine.PlayerLoop.PostLateUpdate/ClearImmediateRenderers

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorRenderImage

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorRenderImage

// UnityEngine.PlayerLoop.PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/EnlightenRuntimeUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/EnlightenRuntimeUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/ExecuteGameCenterCallbacks

// UnityEngine.PlayerLoop.PostLateUpdate/ExecuteGameCenterCallbacks

// UnityEngine.PlayerLoop.PostLateUpdate/FinishFrameRendering

// UnityEngine.PlayerLoop.PostLateUpdate/FinishFrameRendering

// UnityEngine.PlayerLoop.PostLateUpdate/GUIClearEvents

// UnityEngine.PlayerLoop.PostLateUpdate/GUIClearEvents

// UnityEngine.PlayerLoop.PostLateUpdate/GraphicsWarmupPreloadedShaders

// UnityEngine.PlayerLoop.PostLateUpdate/GraphicsWarmupPreloadedShaders

// UnityEngine.PlayerLoop.PostLateUpdate/InputEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/InputEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/MemoryFrameMaintenance

// UnityEngine.PlayerLoop.PostLateUpdate/MemoryFrameMaintenance

// UnityEngine.PlayerLoop.PostLateUpdate/ParticleSystemEndUpdateAll

// UnityEngine.PlayerLoop.PostLateUpdate/ParticleSystemEndUpdateAll

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothBeginUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothBeginUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothFinishUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothFinishUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerEmitCanvasGeometry

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerEmitCanvasGeometry

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameComplete

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameComplete

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFramePostPresent

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFramePostPresent

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameStarted

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameStarted

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerUpdateCanvases

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerUpdateCanvases

// UnityEngine.PlayerLoop.PostLateUpdate/PresentAfterDraw

// UnityEngine.PlayerLoop.PostLateUpdate/PresentAfterDraw

// UnityEngine.PlayerLoop.PostLateUpdate/ProcessWebSendMessages

// UnityEngine.PlayerLoop.PostLateUpdate/ProcessWebSendMessages

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerSynchronizeStats

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerSynchronizeStats

// UnityEngine.PlayerLoop.PostLateUpdate/ResetInputAxis

// UnityEngine.PlayerLoop.PostLateUpdate/ResetInputAxis

// UnityEngine.PlayerLoop.PostLateUpdate/ScriptRunDelayedDynamicFrameRate

// UnityEngine.PlayerLoop.PostLateUpdate/ScriptRunDelayedDynamicFrameRate

// UnityEngine.PlayerLoop.PostLateUpdate/ShaderHandleErrors

// UnityEngine.PlayerLoop.PostLateUpdate/ShaderHandleErrors

// UnityEngine.PlayerLoop.PostLateUpdate/SortingGroupsUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/SortingGroupsUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/ThreadedLoadingDebug

// UnityEngine.PlayerLoop.PostLateUpdate/ThreadedLoadingDebug

// UnityEngine.PlayerLoop.PostLateUpdate/TriggerEndOfFrameCallbacks

// UnityEngine.PlayerLoop.PostLateUpdate/TriggerEndOfFrameCallbacks

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllRenderers

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllRenderers

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllSkinnedMeshes

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllSkinnedMeshes

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAudio

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAudio

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCanvasRectTransform

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCanvasRectTransform

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCaptureScreenshot

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCaptureScreenshot

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCustomRenderTextures

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCustomRenderTextures

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateLightProbeProxyVolumes

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateLightProbeProxyVolumes

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateRectTransform

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateRectTransform

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateResolution

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateResolution

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateSubstance

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateSubstance

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideo

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideo

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideoTextures

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideoTextures

// UnityEngine.PlayerLoop.PostLateUpdate/VFXUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/VFXUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostPresent

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostPresent

// UnityEngine.PlayerLoop.PostLateUpdate/XRPreEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/XRPreEndFrame

// UnityEngine.PlayerLoop.PreLateUpdate/AIUpdatePostScript

// UnityEngine.PlayerLoop.PreLateUpdate/AIUpdatePostScript

// UnityEngine.PlayerLoop.PreLateUpdate/ConstraintManagerUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/ConstraintManagerUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorDeferredEvaluate

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorDeferredEvaluate

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationBegin

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationBegin

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationEnd

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationEnd

// UnityEngine.PlayerLoop.PreLateUpdate/EndGraphicsJobsAfterScriptUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/EndGraphicsJobsAfterScriptUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/LegacyAnimationUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/LegacyAnimationUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/ParticleSystemBeginUpdateAll

// UnityEngine.PlayerLoop.PreLateUpdate/ParticleSystemBeginUpdateAll

// UnityEngine.PlayerLoop.PreLateUpdate/Physics2DLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/Physics2DLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/ScriptRunBehaviourLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/ScriptRunBehaviourLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/UIElementsUpdatePanels

// UnityEngine.PlayerLoop.PreLateUpdate/UIElementsUpdatePanels

// UnityEngine.PlayerLoop.PreLateUpdate/UNetUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/UNetUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateMasterServerInterface

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateMasterServerInterface

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateNetworkManager

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateNetworkManager

// UnityEngine.PlayerLoop.PreUpdate/AIUpdate

// UnityEngine.PlayerLoop.PreUpdate/AIUpdate

// UnityEngine.PlayerLoop.PreUpdate/CheckTexFieldInput

// UnityEngine.PlayerLoop.PreUpdate/CheckTexFieldInput

// UnityEngine.PlayerLoop.PreUpdate/IMGUISendQueuedEvents

// UnityEngine.PlayerLoop.PreUpdate/IMGUISendQueuedEvents

// UnityEngine.PlayerLoop.PreUpdate/NewInputUpdate

// UnityEngine.PlayerLoop.PreUpdate/NewInputUpdate

// UnityEngine.PlayerLoop.PreUpdate/Physics2DUpdate

// UnityEngine.PlayerLoop.PreUpdate/Physics2DUpdate

// UnityEngine.PlayerLoop.PreUpdate/PhysicsUpdate

// UnityEngine.PlayerLoop.PreUpdate/PhysicsUpdate

// UnityEngine.PlayerLoop.PreUpdate/SendMouseEvents

// UnityEngine.PlayerLoop.PreUpdate/SendMouseEvents

// UnityEngine.PlayerLoop.PreUpdate/UpdateVideo

// UnityEngine.PlayerLoop.PreUpdate/UpdateVideo

// UnityEngine.PlayerLoop.PreUpdate/WindUpdate

// UnityEngine.PlayerLoop.PreUpdate/WindUpdate

// UnityEngine.PlayerLoop.TimeUpdate/WaitForLastPresentationAndUpdateTime

// UnityEngine.PlayerLoop.TimeUpdate/WaitForLastPresentationAndUpdateTime

// UnityEngine.PlayerLoop.Update/DirectorUpdate

// UnityEngine.PlayerLoop.Update/DirectorUpdate

// UnityEngine.PlayerLoop.Update/ScriptRunBehaviourUpdate

// UnityEngine.PlayerLoop.Update/ScriptRunBehaviourUpdate

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedDynamicFrameRate

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedDynamicFrameRate

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedTasks

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedTasks

// System.Delegate

// System.Delegate

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.LowLevel.PlayerLoopSystem

// UnityEngine.LowLevel.PlayerLoopSystem

// UnityEngine.LowLevel.PlayerLoopSystemInternal

// UnityEngine.LowLevel.PlayerLoopSystemInternal

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 m_Items[1];

	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
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
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F m_Items[1];

	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled);

// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList__ctor_mE70F25915B775E7258A12670B76C7F7B3C36BF1A (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCallGroup__ctor_m1B17318026E3D419B2C194F66882E3BED6C4200A (PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* PersistentCall_get_arguments_mA3B29A1F4E7328523674ADC6FC0C7332BA053410 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m85640B88D8DA790019005A4ADD948E036ED79694 (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* PersistentCall_get_target_mA12C3C9A21F6F5335761CB0EB3C7C965D8C393AE (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String UnityEngine.Events.PersistentCall::get_targetAssemblyTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PersistentCall_get_targetAssemblyTypeName_m303DE56BDE5CD469D0210E1EA73F54B4C88228BE (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PersistentCall_get_methodName_mFD7F88289C9EF5DE6D7EFD3FEF1A5C640CBAF088 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PersistentCall_get_mode_m3FFA4D4FC3DA0C38106323CD33ABBFA53ED01928 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Type,UnityEngine.Events.PersistentListenerMode,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_FindMethod_mE417FEA28EC49921FA28EBDAB1214B0E6EC7E91B (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, String_t* ___0_name, Type_t* ___1_listenerType, int32_t ___2_mode, Type_t* ___3_argumentType, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD (Type_t* ___0_objectType, String_t* ___1_functionName, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___2_argumentTypes, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_ClearPersistent_m9A776CBBC13667875F1765B32B469BC12AFD4192 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCallGroup_Initialize_m937649041F14D0D20F959B07BA099246EC32BCCB (PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* __this, InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___0_invokableList, UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* ___1_unityEventBase, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_AddListener_m279B8BAED30DA27C305ADDF241F05CD2BC59625A (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_RemoveListener_m5C78FE9ECE5990F29636216E879139D5863F36C8 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, RuntimeObject* ___0_targetObj, MethodInfo_t* ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RebuildPersistentCallsIfNeeded_m981B8A6658A88F620345D2C7F4ADCD0D788B0266 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t91E36549D76184780FD8995722CD4A87A2650C23* InvokableCallList_PrepareInvoke_m0CF5EBCDF4913AFC13CBE09F6CFB687D0F771301 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) ;
// System.String System.Object::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562 (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___2_binder, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___3_types, ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364* ___4_modifiers, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_mB1F958EAC1A7C4B31253F2E1FED173A628725DEC (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* UnityEvent_GetDelegate_mBD5D37CFB826CB3329477A509A62BF7CE26A9EF8 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_action, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mA78C058ED530789A28F42347B653190FEC84DBBC (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall__ctor_mF3F94B432C977EE2DE7834EC2936E90D271C0464 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, RuntimeObject* ___0_target, MethodInfo_t* ___1_theFunction, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall__ctor_m4FA1428E3A33219B2C8C5C571A705AC6B862FA70 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_action, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t91E36549D76184780FD8995722CD4A87A2650C23* UnityEventBase_PrepareInvoke_m4D04FA5D7025C093047DCD3DFEEFB9DF48764FC2 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279 (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m6F4828FD2B3E3BBB7AA6EECC2C37FB08538363F4 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_inline (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.String UnityEngine.LowLevel.PlayerLoopSystem::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0 (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_mB1F958EAC1A7C4B31253F2E1FED173A628725DEC (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase__ctor_mB1F958EAC1A7C4B31253F2E1FED173A628725DEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEventBase__ctor_mB1F958EAC1A7C4B31253F2E1FED173A628725DEC_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12684));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12685));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12686));
		__this->___m_CallsDirty_2 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12687));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12688));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12688));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12689));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12690));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12691));
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382*)il2cpp_codegen_object_new(InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InvokableCallList__ctor_mE70F25915B775E7258A12670B76C7F7B3C36BF1A(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12691));
		__this->___m_Calls_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Calls_0), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12692));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12693));
		PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* L_1 = (PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25*)il2cpp_codegen_object_new(PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PersistentCallGroup__ctor_m1B17318026E3D419B2C194F66882E3BED6C4200A(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12693));
		__this->___m_PersistentCalls_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PersistentCalls_1), (void*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12694));
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_mC47C72ED57A467E299925019E7DB9645D0F631F9 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_mC47C72ED57A467E299925019E7DB9645D0F631F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_mC47C72ED57A467E299925019E7DB9645D0F631F9_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12695));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12696));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12697));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12698));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12699));
		UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12699));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12700));
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m835BA25C9F342C93FB9DF774C0894A82C4F049CB (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m835BA25C9F342C93FB9DF774C0894A82C4F049CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m835BA25C9F342C93FB9DF774C0894A82C4F049CB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12701));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12702));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12703));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12704));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12705));
		UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12705));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12706));
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* ___0_call, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	MethodInfo_t* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_call));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12707));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12708));
	Type_t* G_B3_0 = NULL;
	Type_t* G_B2_0 = NULL;
	Type_t* G_B7_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12709));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12710));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12711));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12711));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12712));
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_2 = ___0_call;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12713));
		NullCheck(L_2);
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_3;
		L_3 = PersistentCall_get_arguments_mA3B29A1F4E7328523674ADC6FC0C7332BA053410(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12713));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12714));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m85640B88D8DA790019005A4ADD948E036ED79694(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12714));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12715));
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12715));
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12716));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12717));
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_7 = ___0_call;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12718));
		NullCheck(L_7);
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_8;
		L_8 = PersistentCall_get_arguments_mA3B29A1F4E7328523674ADC6FC0C7332BA053410(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12718));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12719));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m85640B88D8DA790019005A4ADD948E036ED79694(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12719));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12720));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = il2cpp_codegen_get_type(L_9, (bool)0, Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var, UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12720));
		Type_t* L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_0042;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12721));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12721));
		G_B3_0 = L_13;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12722));
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_14 = ___0_call;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12723));
		NullCheck(L_14);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_15;
		L_15 = PersistentCall_get_target_mA12C3C9A21F6F5335761CB0EB3C7C965D8C393AE(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12723));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12724));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12724));
		if (L_16)
		{
			goto IL_005f;
		}
	}
	{
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_17 = ___0_call;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12725));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = PersistentCall_get_targetAssemblyTypeName_m303DE56BDE5CD469D0210E1EA73F54B4C88228BE(L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12725));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12726));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = il2cpp_codegen_get_type(L_18, (bool)0, Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var, UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12726));
		G_B7_0 = L_19;
		goto IL_006a;
	}

IL_005f:
	{
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_20 = ___0_call;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12727));
		NullCheck(L_20);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_21;
		L_21 = PersistentCall_get_target_mA12C3C9A21F6F5335761CB0EB3C7C965D8C393AE(L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12727));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12728));
		NullCheck(L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12728));
		G_B7_0 = L_22;
	}

IL_006a:
	{
		V_1 = G_B7_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12729));
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_23 = ___0_call;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12730));
		NullCheck(L_23);
		String_t* L_24;
		L_24 = PersistentCall_get_methodName_mFD7F88289C9EF5DE6D7EFD3FEF1A5C640CBAF088(L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12730));
		Type_t* L_25 = V_1;
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_26 = ___0_call;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12731));
		NullCheck(L_26);
		int32_t L_27;
		L_27 = PersistentCall_get_mode_m3FFA4D4FC3DA0C38106323CD33ABBFA53ED01928(L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12731));
		Type_t* L_28 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12732));
		MethodInfo_t* L_29;
		L_29 = UnityEventBase_FindMethod_mE417FEA28EC49921FA28EBDAB1214B0E6EC7E91B(__this, L_24, L_25, L_27, L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12732));
		V_3 = L_29;
		goto IL_0082;
	}

IL_0082:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12733));
		MethodInfo_t* L_30 = V_3;
		return L_30;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Type,UnityEngine.Events.PersistentListenerMode,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_FindMethod_mE417FEA28EC49921FA28EBDAB1214B0E6EC7E91B (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, String_t* ___0_name, Type_t* ___1_listenerType, int32_t ___2_mode, Type_t* ___3_argumentType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentListenerMode_tED3A88CB6606D75AC71FAAF3571F9B875B981B52_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_FindMethod_mE417FEA28EC49921FA28EBDAB1214B0E6EC7E91B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MethodInfo_t* V_2 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_name), (&___1_listenerType), (&___2_mode), (&___3_argumentType));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEventBase_FindMethod_mE417FEA28EC49921FA28EBDAB1214B0E6EC7E91B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12734));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12735));
	Type_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B10_2 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B10_3 = NULL;
	String_t* G_B10_4 = NULL;
	Type_t* G_B10_5 = NULL;
	Type_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B9_2 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B9_3 = NULL;
	String_t* G_B9_4 = NULL;
	Type_t* G_B9_5 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12736));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12737));
		int32_t L_0 = ___2_mode;
		V_1 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12738));
		int32_t L_1 = V_1;
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12739));
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_00c1;
			}
			case 3:
			{
				goto IL_006a;
			}
			case 4:
			{
				goto IL_004d;
			}
			case 5:
			{
				goto IL_00a4;
			}
			case 6:
			{
				goto IL_0087;
			}
		}
	}
	{
		goto IL_00e4;
	}

IL_002c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12740));
		String_t* L_3 = ___0_name;
		Type_t* L_4 = ___1_listenerType;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12741));
		MethodInfo_t* L_5;
		L_5 = VirtualFuncInvoker2< MethodInfo_t*, String_t*, Type_t* >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Type) */, __this, L_3, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12741));
		V_2 = L_5;
		goto IL_00e8;
	}

IL_003a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12742));
		Type_t* L_6 = ___1_listenerType;
		String_t* L_7 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12743));
		MethodInfo_t* L_9;
		L_9 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_6, L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12743));
		V_2 = L_9;
		goto IL_00e8;
	}

IL_004d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12744));
		Type_t* L_10 = ___1_listenerType;
		String_t* L_11 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12745));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12745));
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_15);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12746));
		MethodInfo_t* L_16;
		L_16 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_10, L_11, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12746));
		V_2 = L_16;
		goto IL_00e8;
	}

IL_006a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12747));
		Type_t* L_17 = ___1_listenerType;
		String_t* L_18 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20 = L_19;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12748));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12748));
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_22);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12749));
		MethodInfo_t* L_23;
		L_23 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_17, L_18, L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12749));
		V_2 = L_23;
		goto IL_00e8;
	}

IL_0087:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12750));
		Type_t* L_24 = ___1_listenerType;
		String_t* L_25 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_26 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_27 = L_26;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12751));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12751));
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_29);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12752));
		MethodInfo_t* L_30;
		L_30 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_24, L_25, L_27, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12752));
		V_2 = L_30;
		goto IL_00e8;
	}

IL_00a4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12753));
		Type_t* L_31 = ___1_listenerType;
		String_t* L_32 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_33 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_34 = L_33;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12754));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12754));
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_36);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12755));
		MethodInfo_t* L_37;
		L_37 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_31, L_32, L_34, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12755));
		V_2 = L_37;
		goto IL_00e8;
	}

IL_00c1:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12756));
		Type_t* L_38 = ___1_listenerType;
		String_t* L_39 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_41 = L_40;
		Type_t* L_42 = ___3_argumentType;
		Type_t* L_43 = L_42;
		G_B9_0 = L_43;
		G_B9_1 = 0;
		G_B9_2 = L_41;
		G_B9_3 = L_41;
		G_B9_4 = L_39;
		G_B9_5 = L_38;
		if (L_43)
		{
			G_B10_0 = L_43;
			G_B10_1 = 0;
			G_B10_2 = L_41;
			G_B10_3 = L_41;
			G_B10_4 = L_39;
			G_B10_5 = L_38;
			goto IL_00db;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12757));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12757));
		G_B10_0 = L_45;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00db:
	{
		NullCheck(G_B10_2);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		(G_B10_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_1), (Type_t*)G_B10_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12758));
		MethodInfo_t* L_46;
		L_46 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(G_B10_5, G_B10_4, G_B10_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12758));
		V_2 = L_46;
		goto IL_00e8;
	}

IL_00e4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12759));
		V_2 = (MethodInfo_t*)NULL;
		goto IL_00e8;
	}

IL_00e8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12760));
		MethodInfo_t* L_47 = V_2;
		return L_47;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12761));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12762));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12763));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12764));
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = __this->___m_Calls_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12765));
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m9A776CBBC13667875F1765B32B469BC12AFD4192(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12765));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12766));
		__this->___m_CallsDirty_2 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12767));
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RebuildPersistentCallsIfNeeded_m981B8A6658A88F620345D2C7F4ADCD0D788B0266 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_RebuildPersistentCallsIfNeeded_m981B8A6658A88F620345D2C7F4ADCD0D788B0266_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEventBase_RebuildPersistentCallsIfNeeded_m981B8A6658A88F620345D2C7F4ADCD0D788B0266_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12768));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12769));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12770));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12771));
		bool L_0 = __this->___m_CallsDirty_2;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12772));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12773));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12774));
		PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* L_2 = __this->___m_PersistentCalls_1;
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_3 = __this->___m_Calls_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12775));
		NullCheck(L_2);
		PersistentCallGroup_Initialize_m937649041F14D0D20F959B07BA099246EC32BCCB(L_2, L_3, __this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12775));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12776));
		__this->___m_CallsDirty_2 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12777));
	}

IL_0027:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12778));
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mA78C058ED530789A28F42347B653190FEC84DBBC (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_AddCall_mA78C058ED530789A28F42347B653190FEC84DBBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_call));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEventBase_AddCall_mA78C058ED530789A28F42347B653190FEC84DBBC_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12779));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12780));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12781));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12782));
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = __this->___m_Calls_0;
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_1 = ___0_call;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12783));
		NullCheck(L_0);
		InvokableCallList_AddListener_m279B8BAED30DA27C305ADDF241F05CD2BC59625A(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12783));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12784));
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_mFF8F8FAD5F18BA872C3CE005DC134B6828E1AD3B (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, RuntimeObject* ___0_targetObj, MethodInfo_t* ___1_method, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_RemoveListener_mFF8F8FAD5F18BA872C3CE005DC134B6828E1AD3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_targetObj), (&___1_method));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEventBase_RemoveListener_mFF8F8FAD5F18BA872C3CE005DC134B6828E1AD3B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12785));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12786));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12787));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12788));
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = __this->___m_Calls_0;
		RuntimeObject* L_1 = ___0_targetObj;
		MethodInfo_t* L_2 = ___1_method;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12789));
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m5C78FE9ECE5990F29636216E879139D5863F36C8(L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12789));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12790));
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t91E36549D76184780FD8995722CD4A87A2650C23* UnityEventBase_PrepareInvoke_m4D04FA5D7025C093047DCD3DFEEFB9DF48764FC2 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t91E36549D76184780FD8995722CD4A87A2650C23_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_PrepareInvoke_m4D04FA5D7025C093047DCD3DFEEFB9DF48764FC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEventBase_PrepareInvoke_m4D04FA5D7025C093047DCD3DFEEFB9DF48764FC2_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12791));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12792));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12793));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12794));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12795));
		UnityEventBase_RebuildPersistentCallsIfNeeded_m981B8A6658A88F620345D2C7F4ADCD0D788B0266(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12795));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12796));
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = __this->___m_Calls_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12797));
		NullCheck(L_0);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_1;
		L_1 = InvokableCallList_PrepareInvoke_m0CF5EBCDF4913AFC13CBE09F6CFB687D0F771301(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12797));
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12798));
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityEventBase_ToString_mE86F29D699C7537CACCAF3945F797EE659CE6522 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_ToString_mE86F29D699C7537CACCAF3945F797EE659CE6522_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEventBase_ToString_mE86F29D699C7537CACCAF3945F797EE659CE6522_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12799));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12800));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12801));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12802));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12803));
		String_t* L_0;
		L_0 = Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12803));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12804));
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12804));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12805));
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12805));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12806));
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12806));
		V_0 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12807));
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD (Type_t* ___0_objectType, String_t* ___1_functionName, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___2_argumentTypes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	bool V_1 = false;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_5 = NULL;
	int32_t V_6 = 0;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* V_7 = NULL;
	Type_t* V_8 = NULL;
	Type_t* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	MethodInfo_t* V_12 = NULL;
	bool V_13 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_objectType), (&___1_functionName), (&___2_argumentTypes));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3), (&V_4), (&V_7), (&V_8), (&V_9));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12808));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12809));
	int32_t G_B14_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12810));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12811));
		goto IL_0091;
	}

IL_0006:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12812));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12813));
		Type_t* L_0 = ___0_objectType;
		String_t* L_1 = ___1_functionName;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ___2_argumentTypes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12814));
		NullCheck(L_0);
		MethodInfo_t* L_3;
		L_3 = Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562(L_0, L_1, ((int32_t)60), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, L_2, (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12814));
		V_0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12815));
		MethodInfo_t* L_4 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(MethodInfo_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12816));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0088;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12817));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12818));
		MethodInfo_t* L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12819));
		NullCheck(L_6);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_7;
		L_7 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12819));
		V_2 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12820));
		V_3 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12821));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12822));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12823));
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_8 = V_2;
		V_5 = L_8;
		V_6 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12824));
		goto IL_0073;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12825));
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_9 = V_5;
		int32_t L_10 = V_6;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_7 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12826));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12827));
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = ___2_argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Type_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_8 = L_16;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12828));
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_17 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12829));
		NullCheck(L_17);
		Type_t* L_18;
		L_18 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_17);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12829));
		V_9 = L_18;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12830));
		Type_t* L_19 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12831));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12831));
		Type_t* L_21 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12832));
		NullCheck(L_21);
		bool L_22;
		L_22 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12832));
		V_3 = (bool)((((int32_t)L_20) == ((int32_t)L_22))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12833));
		bool L_23 = V_3;
		V_10 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12834));
		bool L_24 = V_10;
		if (!L_24)
		{
			goto IL_0066;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12835));
		goto IL_007b;
	}

IL_0066:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12836));
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12837));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12838));
		int32_t L_26 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0073:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12839));
		int32_t L_27 = V_6;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_28 = V_5;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0032;
		}
	}

IL_007b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12840));
		bool L_29 = V_3;
		V_11 = L_29;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12841));
		bool L_30 = V_11;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12842));
		MethodInfo_t* L_31 = V_0;
		V_12 = L_31;
		goto IL_00b3;
	}

IL_0087:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12843));
	}

IL_0088:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12844));
		Type_t* L_32 = ___0_objectType;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12845));
		NullCheck(L_32);
		Type_t* L_33;
		L_33 = VirtualFuncInvoker0< Type_t* >::Invoke(112 /* System.Type System.Type::get_BaseType() */, L_32);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12845));
		___0_objectType = L_33;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12846));
	}

IL_0091:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12847));
		Type_t* L_34 = ___0_objectType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12848));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12848));
		if ((((RuntimeObject*)(Type_t*)L_34) == ((RuntimeObject*)(Type_t*)L_36)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t* L_37 = ___0_objectType;
		G_B14_0 = ((!(((RuntimeObject*)(Type_t*)L_37) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B14_0 = 0;
	}

IL_00a5:
	{
		V_13 = (bool)G_B14_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12849));
		bool L_38 = V_13;
		if (L_38)
		{
			goto IL_0006;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12850));
		V_12 = (MethodInfo_t*)NULL;
		goto IL_00b3;
	}

IL_00b3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12851));
		MethodInfo_t* L_39 = V_12;
		return L_39;
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
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_Multicast(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* currentDelegate = reinterpret_cast<UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenInst(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStatic(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStaticInvoker(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_ClosedStaticInvoker(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_Multicast;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12999));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13000));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13001));
		__this->___m_InvokeArray_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InvokeArray_3), (void*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13002));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13003));
		UnityEventBase__ctor_mB1F958EAC1A7C4B31253F2E1FED173A628725DEC(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13003));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13004));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13005));
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_call));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13006));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13007));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13008));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13009));
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = ___0_call;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13010));
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_1;
		L_1 = UnityEvent_GetDelegate_mBD5D37CFB826CB3329477A509A62BF7CE26A9EF8(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13010));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13011));
		UnityEventBase_AddCall_mA78C058ED530789A28F42347B653190FEC84DBBC(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13011));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13012));
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEvent_FindMethod_Impl_m62E3D2795BACFF1BA2ED6A431ABD5FB2C7D3D681 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, String_t* ___0_name, Type_t* ___1_targetObjType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_FindMethod_Impl_m62E3D2795BACFF1BA2ED6A431ABD5FB2C7D3D681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_name), (&___1_targetObjType));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEvent_FindMethod_Impl_m62E3D2795BACFF1BA2ED6A431ABD5FB2C7D3D681_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13013));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13014));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13015));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13016));
		Type_t* L_0 = ___1_targetObjType;
		String_t* L_1 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13017));
		MethodInfo_t* L_3;
		L_3 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13017));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13018));
		MethodInfo_t* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* UnityEvent_GetDelegate_m6665C6282D3668BC57F2702FD0C3B108F4CFD226 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, RuntimeObject* ___0_target, MethodInfo_t* ___1_theFunction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_GetDelegate_m6665C6282D3668BC57F2702FD0C3B108F4CFD226_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_target), (&___1_theFunction));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEvent_GetDelegate_m6665C6282D3668BC57F2702FD0C3B108F4CFD226_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13019));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13020));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13021));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13022));
		RuntimeObject* L_0 = ___0_target;
		MethodInfo_t* L_1 = ___1_theFunction;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13023));
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_2 = (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)il2cpp_codegen_object_new(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvokableCall__ctor_mF3F94B432C977EE2DE7834EC2936E90D271C0464(L_2, L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13023));
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13024));
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* UnityEvent_GetDelegate_mBD5D37CFB826CB3329477A509A62BF7CE26A9EF8 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_GetDelegate_mBD5D37CFB826CB3329477A509A62BF7CE26A9EF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_action));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEvent_GetDelegate_mBD5D37CFB826CB3329477A509A62BF7CE26A9EF8_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13025));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13026));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13027));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13028));
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = ___0_action;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13029));
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_1 = (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)il2cpp_codegen_object_new(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InvokableCall__ctor_m4FA1428E3A33219B2C8C5C571A705AC6B862FA70(L_1, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13029));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13030));
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t91E36549D76184780FD8995722CD4A87A2650C23_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* V_2 = NULL;
	bool V_3 = false;
	InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_4), (&V_6));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13031));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13032));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13033));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13034));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13035));
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0;
		L_0 = UnityEventBase_PrepareInvoke_m4D04FA5D7025C093047DCD3DFEEFB9DF48764FC2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13035));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13036));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13037));
		goto IL_0089;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13038));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13039));
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_1 = V_0;
		int32_t L_2 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13040));
		NullCheck(L_1);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_3;
		L_3 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_1, L_2, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13040));
		V_2 = ((InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)IsInstClass((RuntimeObject*)L_3, InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13041));
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13042));
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13043));
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_6 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13044));
		NullCheck(L_6);
		InvokableCall_Invoke_m6F4828FD2B3E3BBB7AA6EECC2C37FB08538363F4(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13044));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13045));
		goto IL_0084;
	}

IL_002b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13046));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13047));
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_7 = V_0;
		int32_t L_8 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13048));
		NullCheck(L_7);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_9;
		L_9 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_7, L_8, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13048));
		V_4 = ((InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)IsInstClass((RuntimeObject*)L_9, InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13049));
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_10 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13050));
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13051));
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_12 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13052));
		NullCheck(L_12);
		InvokableCall_Invoke_m6F4828FD2B3E3BBB7AA6EECC2C37FB08538363F4(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13052));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13053));
		goto IL_0083;
	}

IL_004f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13054));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13055));
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_13 = V_0;
		int32_t L_14 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13056));
		NullCheck(L_13);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_15;
		L_15 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_13, L_14, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13056));
		V_6 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13057));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->___m_InvokeArray_3;
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_16) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13058));
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0074;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13059));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___m_InvokeArray_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InvokeArray_3), (void*)L_18);
	}

IL_0074:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13060));
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_19 = V_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = __this->___m_InvokeArray_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13061));
		NullCheck(L_19);
		VirtualActionInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_19, L_20);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13061));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13062));
	}

IL_0083:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13063));
	}

IL_0084:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13064));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13065));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0089:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13066));
		int32_t L_22 = V_1;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_23 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13067));
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_inline(L_23, List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13067));
		V_8 = (bool)((((int32_t)L_22) < ((int32_t)L_24))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13068));
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_000c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13069));
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
// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_back(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke& marshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_cleanup(PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_com(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_com_back(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com& marshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_com_cleanup(PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled)
{
}
// System.String UnityEngine.LowLevel.PlayerLoopSystem::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0 (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13070));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13071));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13072));
		Type_t* L_0 = __this->___type_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13073));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13073));
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_Multicast(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* currentDelegate = reinterpret_cast<UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenInst(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStatic(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStaticInvoker(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_ClosedStaticInvoker(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4 (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction__ctor_m0D1D766F22D02176396DA6745A60EA046EE8227B (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_Multicast;
}
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
