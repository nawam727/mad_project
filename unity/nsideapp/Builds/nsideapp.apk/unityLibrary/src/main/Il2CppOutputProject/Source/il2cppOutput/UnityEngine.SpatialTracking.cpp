#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>
struct List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose[]
struct TrackedPoseU5BU5D_tD561812F1AD65D310EE302DABA5337DA0C6CB5CD;
// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData[]
struct PoseDataU5BU5D_t2C3BAD03F54ECC8DA545558F23FC7A58A33BD566;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD;
// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
struct TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_SpatialTracking[];
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedPose_t42F18C811DFF8DB05CD5711439B2FD640800563D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2C8BB561E77F4491856EDA21B73347023391A8B0;
IL2CPP_EXTERN_C String_t* _stringLiteral6A11DF976BD5EBFB477A52077A195879735F1FA0;
IL2CPP_EXTERN_C String_t* _stringLiteral874BE1B2177F8C02B786BA933E78AD9FE1D377DD;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321;
IL2CPP_EXTERN_C String_t* _stringLiteral8EE78D2535F543B0B3532765572FC019F362EBEC;
IL2CPP_EXTERN_C String_t* _stringLiteral960416C64D6FEDF29B47FEF63B743ADBF6A3ACF5;
IL2CPP_EXTERN_C String_t* _stringLiteral98018BE8EB53CB8EC9307D4EEAAA001D606E788C;
IL2CPP_EXTERN_C String_t* _stringLiteralE5E47A84BACC0A71E6C87A5ABF7CCC8D26BDE8D3;
IL2CPP_EXTERN_C String_t* _stringLiteralF86B5632D37D8A2636B0D34CA903B4B3375A0ACA;
IL2CPP_EXTERN_C const RuntimeMethod* BasePoseProvider_GetPoseFromProvider_m815E60EB1A0C2D449B60F60DDD0D49DCF7E68A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasePoseProvider_TryGetPoseFromProvider_m6961C33D08BB411C9E425EDE5813480319F9BFB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasePoseProvider__ctor_mB1BA00DFB674FA54CD28933D4335F6162B378020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD2B38B0B3FE969FAAA5D602B5FF1348E665E27CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7364BB9E8616142394DCFC0A6217004595008D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD8E218B8766DD801CC5B221926CE287ADBE84E32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDF7E8067319DC279AB51D7B638AE2AFC554838FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m106DB0BABC9DAF77E6EF512EC1804D2A9F2AC526_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7531720607E082DFD1BDAEBC0CF0C8A890C361FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mABC9A4CBF2AF4A0BFD791A6A90058196B57080DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDAE09B42049983EFF5F565C2A54C0541A9EC97A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PoseDataSource_GetDataFromSource_mD37A9CC706B99D7A2535DEA7CB0D40F7F47B277A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PoseDataSource_GetNodePoseData_m07EE5781C7E0EB625084A340D115C34C47B07B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PoseDataSource_TryGetDataFromSource_m9CCF52B621C860AB223A2F1B621C99E0106455F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PoseDataSource__cctor_m2CA606CD693A292EED74511BED8CEC06870BA3F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriverDataDescription__cctor_mB66097427DE427D6DAC5B5A68CC2D35E7526BE27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriverDataDescription__ctor_m76D45B5826854354DF5D5F3962767B0ED49FD5E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_Awake_m1939FF8E60FD6C4D91FFCDFE3B861F83BB6C7EEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_CacheLocalPosition_m8D577E735DA73CDEB6CCAD152E457B141CB7A7D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_FixedUpdate_m43910F40F01F60740C97F82D3157AFAE3587551A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_GetPoseData_m3B8070CB063DE4D7A901AD9715E0016B68AADE6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_HasStereoCamera_mE463A159FA7B7116C667A01B6197B44B340823CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_OnBeforeRender_m81B27C3A2FE49926AF76BB1E3332D35C313D2438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_OnDestroy_m34A5CEA220217311DF4076BFA69F1013D0F2DAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_OnDisable_mC6EB0D19C5ECC17A8F17DB478C978CAE0280790F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_OnEnable_m36C815D001B992B28CD69CA2F282EC7660C8E9F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_PerformUpdate_m7ECADDEEA9C6EC284D0EB169605B6BCA34449D97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_ResetToCachedLocalPosition_m7FD46724D2BF37DFD65CEFB2DBD1A6F03BD3A90D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_SetLocalTransform_m470407210CD80790C2887973D09AFE97454CC2DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_SetPoseSource_m34F8A63205A899E7AE5CAFE116177BB64AC00C13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_TransformPoseByOriginIfNeeded_mA8C3ADCF55349F26E6AC90CC2488217ECC49F1B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_Update_mA2D898B30A3072B68ED650C68DDF8A8461E04CCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver__ctor_mCB5636C22D685907A7D30BEA4FF3D5BD2FE5D3F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_get_UseRelativeTransform_m364C0EC379CBD6898EA09712A3245B3D9E69114B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_get_deviceType_m17B7178484ECE7F92482DE4C601BBBD70246B743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_get_originPose_mBE222A120504DAAF230CE41A3A8BAB847FE28D08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_get_poseProviderComponent_m4EEE14236F73AF01BA4FCE900DE6198BA5B71124_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_get_poseSource_m9170B150EF9457C39E316C1FE4C94691ECA92106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_get_trackingType_m33BB19AE09F28F85E9E61022132218F6EB73C3B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_get_updateType_m89CCB2F9300BF6F6BA265B5120E03680FBFCF506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_set_UseRelativeTransform_mCFB5B8BCF840C51BD0AA29F4F8CE255A4284BD90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_set_deviceType_m8928B93C062C7E11D74488DF75E7E0B975FE2B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_set_originPose_m2C46FCA44C17A58EF0A9F1479F64D612B8BD3612_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_set_poseProviderComponent_mE69DED5BA85FA1712F75CCD9217223FA1A0F35EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_set_poseSource_mEAA5E3640295ACF067287B196FDDCFD69120CC68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_set_trackingType_mF91C94B07D1761078015D0F74B5ACC663C5932F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPoseDriver_set_updateType_m361300C65C0F5FA68728B8C18096573EBBFBA254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DeviceType_t3E6CDAE1A1FFB926CE669804AB68B37543C355FF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PoseDataFlags_t14515D7FE9A92D92E97F929BFAC7313461E21FDC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TrackedPose_t42F18C811DFF8DB05CD5711439B2FD640800563D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TrackingType_tF09F0AB2ECF334DF710845E1312D3016C2C6E4BF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UpdateType_t476438CFAC2D6E29D1C7DD5661F1B2D1832E6099_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE620D0C9807BB8D2761A3B43573BAE685D37E3FB 
{
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ____items_1;
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

// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TrackedPoseU5BU5D_tD561812F1AD65D310EE302DABA5337DA0C6CB5CD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>
struct List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PoseDataU5BU5D_t2C3BAD03F54ECC8DA545558F23FC7A58A33BD566* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.SpatialTracking.PoseDataSource
struct PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
struct TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF  : public RuntimeObject
{
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

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A 
{
	// System.Collections.Generic.List`1<System.String> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::PoseNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::Poses
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_pinvoke
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
};
// Native definition for COM marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_com
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// UnityEngine.XR.XRNodeState
struct XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A 
{
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>
struct Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ____current_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_OriginPose_10;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TrackedPoseU5BU5D_tD561812F1AD65D310EE302DABA5337DA0C6CB5CD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>

// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>
struct List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PoseDataU5BU5D_t2C3BAD03F54ECC8DA545558F23FC7A58A33BD566* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>

// UnityEngine.SpatialTracking.PoseDataSource
struct PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.SpatialTracking.PoseDataSource::nodeStates
	List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* ___nodeStates_0;
};

// UnityEngine.SpatialTracking.PoseDataSource

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
struct TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::DeviceData
	List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D* ___DeviceData_0;
};

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.XR.XRNodeState

// UnityEngine.XR.XRNodeState

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.Experimental.XR.Interaction.BasePoseProvider

// UnityEngine.Experimental.XR.Interaction.BasePoseProvider

// UnityEngine.SpatialTracking.TrackedPoseDriver

// UnityEngine.SpatialTracking.TrackedPoseDriver
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
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


// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::.ctor()
inline void List_1__ctor_m7364BB9E8616142394DCFC0A6217004595008D93 (List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::.ctor()
inline void List_1__ctor_mDF7E8067319DC279AB51D7B638AE2AFC554838FA (List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::Add(T)
inline void List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_inline (List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::Add(T)
inline void List_1_Add_mD2B38B0B3FE969FAAA5D602B5FF1348E665E27CE_inline (List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D* __this, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Void UnityEngine.XR.InputTracking::GetNodeStates(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_GetNodeStates_mA2E8D154A47C817ED74AD42F6B38A9C906A57A67 (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* ___0_nodeStates, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::GetEnumerator()
inline Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9 (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* __this, const RuntimeMethod* method)
{
	Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::Dispose()
inline void Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392 (Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::get_Current()
inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_inline (Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD* __this, const RuntimeMethod* method)
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::get_nodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRNodeState_get_nodeType_mFC49286B25FF7732CE6CAF231A1DE5C083C13932 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRNodeState::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetPosition_mC17C5DFEEA4062A6D91D7E252DD108829AC4E0A6 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRNodeState::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetRotation_mA7F9597BE3AFE747BF2F95BF491779520FEF7301 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_rotation, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::MoveNext()
inline bool Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32 (Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::GetDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_GetDataFromSource_mD37A9CC706B99D7A2535DEA7CB0D40F7F47B277A (int32_t ___0_poseSource, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_resultPose, const RuntimeMethod* method) ;
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::GetNodePoseData(UnityEngine.XR.XRNode,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_GetNodePoseData_m07EE5781C7E0EB625084A340D115C34C47B07B8E (int32_t ___0_node, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_resultPose, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
inline void List_1__ctor_mD8E218B8766DD801CC5B221926CE287ADBE84E32 (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Count()
inline int32_t List_1_get_Count_m106DB0BABC9DAF77E6EF512EC1804D2A9F2AC526_inline (List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Item(System.Int32)
inline PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A List_1_get_Item_mABC9A4CBF2AF4A0BFD791A6A90058196B57080DC (List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mDAE09B42049983EFF5F565C2A54C0541A9EC97A9 (List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_deviceType(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_deviceType_m8928B93C062C7E11D74488DF75E7E0B975FE2B8B (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseSource_mEAA5E3640295ACF067287B196FDDCFD69120CC68 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Count()
inline int32_t List_1_get_Count_m7531720607E082DFD1BDAEBC0CF0C8A890C361FD_inline (List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::CacheLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_CacheLocalPosition_m8D577E735DA73CDEB6CCAD152E457B141CB7A7D5 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_mEE8925294C807AD08FA0FF35D4C663E098510394 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::ResetToCachedLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_ResetToCachedLocalPosition_m7FD46724D2BF37DFD65CEFB2DBD1A6F03BD3A90D (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_m9F54448ED4059A26C9972E5C9ED2F6DCD58B4E24 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::GetTransformedBy(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_GetTransformedBy_m8B18A1ED205791F95CDC1D1F2A08A42D6DA02CBF (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_lhs, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.Camera::get_stereoEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_stereoEnabled_m33F6247051D68E8FFEF9C0EC34C6F4B4B53FC8AF (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.TrackedPoseDriver::GetPoseData(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_GetPoseData_m3B8070CB063DE4D7A901AD9715E0016B68AADE6C (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, int32_t ___0_device, int32_t ___1_poseSource, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_resultPose, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::TransformPoseByOriginIfNeeded(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackedPoseDriver_TransformPoseByOriginIfNeeded_mA8C3ADCF55349F26E6AC90CC2488217ECC49F1B2 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriverDataDescription__ctor_m76D45B5826854354DF5D5F3962767B0ED49FD5E7 (TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriverDataDescription__ctor_m76D45B5826854354DF5D5F3962767B0ED49FD5E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriverDataDescription__ctor_m76D45B5826854354DF5D5F3962767B0ED49FD5E7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriverDataDescription__cctor_mB66097427DE427D6DAC5B5A68CC2D35E7526BE27 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD2B38B0B3FE969FAAA5D602B5FF1348E665E27CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7364BB9E8616142394DCFC0A6217004595008D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDF7E8067319DC279AB51D7B638AE2AFC554838FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriverDataDescription__cctor_mB66097427DE427D6DAC5B5A68CC2D35E7526BE27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C8BB561E77F4491856EDA21B73347023391A8B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral874BE1B2177F8C02B786BA933E78AD9FE1D377DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EE78D2535F543B0B3532765572FC019F362EBEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960416C64D6FEDF29B47FEF63B743ADBF6A3ACF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98018BE8EB53CB8EC9307D4EEAAA001D606E788C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5E47A84BACC0A71E6C87A5ABF7CCC8D26BDE8D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF86B5632D37D8A2636B0D34CA903B4B3375A0ACA);
		s_Il2CppMethodInitialized = true;
	}
	PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriverDataDescription__cctor_mB66097427DE427D6DAC5B5A68CC2D35E7526BE27_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 1));
	{
		// internal static List<PoseData> DeviceData = new List<PoseData>
		// {
		//     // Generic XR Device
		//     new PoseData
		//     {
		//         PoseNames = new List<string>
		//         {
		//             "Left Eye", "Right Eye", "Center Eye - HMD Reference", "Head", "Color Camera"
		//         },
		//         Poses = new List<TrackedPoseDriver.TrackedPose>
		//         {
		//             TrackedPoseDriver.TrackedPose.LeftEye,
		//             TrackedPoseDriver.TrackedPose.RightEye,
		//             TrackedPoseDriver.TrackedPose.Center,
		//             TrackedPoseDriver.TrackedPose.Head,
		//             TrackedPoseDriver.TrackedPose.ColorCamera
		//         }
		//     },
		//     // generic controller
		//     new PoseData
		//     {
		//         PoseNames = new List<string>
		//         {
		//             "Left Controller", "Right Controller"
		//         },
		//         Poses = new List<TrackedPoseDriver.TrackedPose>
		//         {
		//             TrackedPoseDriver.TrackedPose.LeftPose,
		//             TrackedPoseDriver.TrackedPose.RightPose
		//         }
		//     },
		//     // generic remote
		//     new PoseData
		//     {
		//         PoseNames = new List<string>
		//         {
		//             "Device Pose"
		//         },
		//         Poses = new List<TrackedPoseDriver.TrackedPose>
		//         {
		//             TrackedPoseDriver.TrackedPose.RemotePose,
		//         }
		//     },
		// };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 2));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 3));
		List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D* L_0 = (List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D*)il2cpp_codegen_object_new(List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7364BB9E8616142394DCFC0A6217004595008D93(L_0, List_1__ctor_m7364BB9E8616142394DCFC0A6217004595008D93_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 3));
		List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D* L_1 = L_0;
		il2cpp_codegen_initobj((&V_0), sizeof(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 4));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 4));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 5));
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, _stringLiteralE5E47A84BACC0A71E6C87A5ABF7CCC8D26BDE8D3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 5));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = L_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 6));
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, _stringLiteral8EE78D2535F543B0B3532765572FC019F362EBEC, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 6));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = L_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 7));
		NullCheck(L_5);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, _stringLiteralF86B5632D37D8A2636B0D34CA903B4B3375A0ACA, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 7));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = L_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 8));
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, _stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 8));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = L_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 9));
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, _stringLiteral2C8BB561E77F4491856EDA21B73347023391A8B0, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 9));
		(&V_0)->___PoseNames_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___PoseNames_0), (void*)L_7);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 10));
		List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* L_8 = (List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53*)il2cpp_codegen_object_new(List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_mDF7E8067319DC279AB51D7B638AE2AFC554838FA(L_8, List_1__ctor_mDF7E8067319DC279AB51D7B638AE2AFC554838FA_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 10));
		List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* L_9 = L_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 11));
		NullCheck(L_9);
		List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_inline(L_9, 0, List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 11));
		List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* L_10 = L_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 12));
		NullCheck(L_10);
		List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_inline(L_10, 1, List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 12));
		List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* L_11 = L_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 13));
		NullCheck(L_11);
		List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_inline(L_11, 2, List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 13));
		List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* L_12 = L_11;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 14));
		NullCheck(L_12);
		List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_inline(L_12, 3, List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 14));
		List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* L_13 = L_12;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 15));
		NullCheck(L_13);
		List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_inline(L_13, 6, List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 15));
		(&V_0)->___Poses_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Poses_1), (void*)L_13);
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 16));
		NullCheck(L_1);
		List_1_Add_mD2B38B0B3FE969FAAA5D602B5FF1348E665E27CE_inline(L_1, L_14, List_1_Add_mD2B38B0B3FE969FAAA5D602B5FF1348E665E27CE_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 16));
		List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D* L_15 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 17));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_16, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 17));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = L_16;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 18));
		NullCheck(L_17);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_17, _stringLiteral874BE1B2177F8C02B786BA933E78AD9FE1D377DD, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 18));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = L_17;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 19));
		NullCheck(L_18);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_18, _stringLiteral98018BE8EB53CB8EC9307D4EEAAA001D606E788C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 19));
		(&V_0)->___PoseNames_0 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___PoseNames_0), (void*)L_18);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 20));
		List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* L_19 = (List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53*)il2cpp_codegen_object_new(List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		List_1__ctor_mDF7E8067319DC279AB51D7B638AE2AFC554838FA(L_19, List_1__ctor_mDF7E8067319DC279AB51D7B638AE2AFC554838FA_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 20));
		List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* L_20 = L_19;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 21));
		NullCheck(L_20);
		List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_inline(L_20, 4, List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 21));
		List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* L_21 = L_20;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 22));
		NullCheck(L_21);
		List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_inline(L_21, 5, List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 22));
		(&V_0)->___Poses_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Poses_1), (void*)L_21);
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_22 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 23));
		NullCheck(L_15);
		List_1_Add_mD2B38B0B3FE969FAAA5D602B5FF1348E665E27CE_inline(L_15, L_22, List_1_Add_mD2B38B0B3FE969FAAA5D602B5FF1348E665E27CE_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 23));
		List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D* L_23 = L_15;
		il2cpp_codegen_initobj((&V_0), sizeof(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 24));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_24, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 24));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = L_24;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 25));
		NullCheck(L_25);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_25, _stringLiteral960416C64D6FEDF29B47FEF63B743ADBF6A3ACF5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 25));
		(&V_0)->___PoseNames_0 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___PoseNames_0), (void*)L_25);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 26));
		List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* L_26 = (List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53*)il2cpp_codegen_object_new(List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		List_1__ctor_mDF7E8067319DC279AB51D7B638AE2AFC554838FA(L_26, List_1__ctor_mDF7E8067319DC279AB51D7B638AE2AFC554838FA_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 26));
		List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* L_27 = L_26;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 27));
		NullCheck(L_27);
		List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_inline(L_27, ((int32_t)10), List_1_Add_m9E5274A097D0F40EF475F4F72158E6DD633AC02B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 27));
		(&V_0)->___Poses_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Poses_1), (void*)L_27);
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_28 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 28));
		NullCheck(L_23);
		List_1_Add_mD2B38B0B3FE969FAAA5D602B5FF1348E665E27CE_inline(L_23, L_28, List_1_Add_mD2B38B0B3FE969FAAA5D602B5FF1348E665E27CE_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 28));
		((TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_il2cpp_TypeInfo_var))->___DeviceData_0 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_il2cpp_TypeInfo_var))->___DeviceData_0), (void*)L_23);
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
// Conversion methods for marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
IL2CPP_EXTERN_C void PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshal_pinvoke(const PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A& unmarshaled, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL);
}
IL2CPP_EXTERN_C void PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshal_pinvoke_back(const PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_pinvoke& marshaled, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A& unmarshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
IL2CPP_EXTERN_C void PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshal_pinvoke_cleanup(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
IL2CPP_EXTERN_C void PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshal_com(const PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A& unmarshaled, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_com& marshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL);
}
IL2CPP_EXTERN_C void PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshal_com_back(const PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_com& marshaled, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A& unmarshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
IL2CPP_EXTERN_C void PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshal_com_cleanup(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_com& marshaled)
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
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::GetNodePoseData(UnityEngine.XR.XRNode,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_GetNodePoseData_m07EE5781C7E0EB625084A340D115C34C47B07B8E (int32_t ___0_node, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_resultPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseDataFlags_t14515D7FE9A92D92E97F929BFAC7313461E21FDC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseDataSource_GetNodePoseData_m07EE5781C7E0EB625084A340D115C34C47B07B8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_node), (&___1_resultPose));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PoseDataSource_GetNodePoseData_m07EE5781C7E0EB625084A340D115C34C47B07B8E_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 29));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 30));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 31));
		// PoseDataFlags retData = PoseDataFlags.NoData;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 32));
		V_0 = 0;
		// XR.InputTracking.GetNodeStates(nodeStates);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 33));
		il2cpp_codegen_runtime_class_init_inline(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* L_0 = ((PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var))->___nodeStates_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 34));
		InputTracking_GetNodeStates_mA2E8D154A47C817ED74AD42F6B38A9C906A57A67(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 34));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 35));
		// foreach (XR.XRNodeState nodeState in nodeStates)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 36));
		List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* L_1 = ((PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var))->___nodeStates_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 37));
		NullCheck(L_1);
		Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD L_2;
		L_2 = List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9(L_1, List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 37));
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 62));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 63));
				Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392((&V_1), Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 63));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 38));
				goto IL_006c_1;
			}

IL_001c_1:
			{
				// foreach (XR.XRNodeState nodeState in nodeStates)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 39));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 40));
				XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_3;
				L_3 = Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_inline((&V_1), Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 40));
				V_2 = L_3;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 41));
				// if (nodeState.nodeType == node)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 42));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 43));
				int32_t L_4;
				L_4 = XRNodeState_get_nodeType_mFC49286B25FF7732CE6CAF231A1DE5C083C13932((&V_2), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 43));
				int32_t L_5 = ___0_node;
				V_3 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 44));
				bool L_6 = V_3;
				if (!L_6)
				{
					goto IL_006b_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 45));
				// if (nodeState.TryGetPosition(out resultPose.position))
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 46));
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___1_resultPose;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&L_7->___position_0);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 47));
				bool L_9;
				L_9 = XRNodeState_TryGetPosition_mC17C5DFEEA4062A6D91D7E252DD108829AC4E0A6((&V_2), L_8, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 47));
				V_4 = L_9;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 48));
				bool L_10 = V_4;
				if (!L_10)
				{
					goto IL_004d_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 49));
				// retData |= PoseDataFlags.Position;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 50));
				int32_t L_11 = V_0;
				V_0 = ((int32_t)((int32_t)L_11|1));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 51));
			}

IL_004d_1:
			{
				// if (nodeState.TryGetRotation(out resultPose.rotation))
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 52));
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = ___1_resultPose;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_13 = (&L_12->___rotation_1);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 53));
				bool L_14;
				L_14 = XRNodeState_TryGetRotation_mA7F9597BE3AFE747BF2F95BF491779520FEF7301((&V_2), L_13, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 53));
				V_5 = L_14;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 54));
				bool L_15 = V_5;
				if (!L_15)
				{
					goto IL_0066_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 55));
				// retData |= PoseDataFlags.Rotation;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 56));
				int32_t L_16 = V_0;
				V_0 = ((int32_t)((int32_t)L_16|2));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 57));
			}

IL_0066_1:
			{
				// return retData;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 58));
				int32_t L_17 = V_0;
				V_6 = L_17;
				goto IL_0096;
			}

IL_006b_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 59));
			}

IL_006c_1:
			{
				// foreach (XR.XRNodeState nodeState in nodeStates)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 60));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 61));
				bool L_18;
				L_18 = Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32((&V_1), Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 61));
				if (L_18)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0086;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		// resultPose = Pose.identity;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 64));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_19 = ___1_resultPose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 65));
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20;
		L_20 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 65));
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_19 = L_20;
		// return retData;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 66));
		int32_t L_21 = V_0;
		V_6 = L_21;
		goto IL_0096;
	}

IL_0096:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 67));
		int32_t L_22 = V_6;
		return L_22;
	}
}
// System.Boolean UnityEngine.SpatialTracking.PoseDataSource::TryGetDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseDataSource_TryGetDataFromSource_m9CCF52B621C860AB223A2F1B621C99E0106455F1 (int32_t ___0_poseSource, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_resultPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseDataSource_TryGetDataFromSource_m9CCF52B621C860AB223A2F1B621C99E0106455F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_poseSource), (&___1_resultPose));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PoseDataSource_TryGetDataFromSource_m9CCF52B621C860AB223A2F1B621C99E0106455F1_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 68));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 69));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 70));
		// return GetDataFromSource(poseSource, out resultPose) == (PoseDataFlags.Position | PoseDataFlags.Rotation);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 71));
		int32_t L_0 = ___0_poseSource;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___1_resultPose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 72));
		il2cpp_codegen_runtime_class_init_inline(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = PoseDataSource_GetDataFromSource_mD37A9CC706B99D7A2535DEA7CB0D40F7F47B277A(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 72));
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 73));
		bool L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::GetDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_GetDataFromSource_mD37A9CC706B99D7A2535DEA7CB0D40F7F47B277A (int32_t ___0_poseSource, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_resultPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseDataFlags_t14515D7FE9A92D92E97F929BFAC7313461E21FDC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseDataSource_GetDataFromSource_mD37A9CC706B99D7A2535DEA7CB0D40F7F47B277A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPose_t42F18C811DFF8DB05CD5711439B2FD640800563D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPose_t42F18C811DFF8DB05CD5711439B2FD640800563D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A11DF976BD5EBFB477A52077A195879735F1FA0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_poseSource), (&___1_resultPose));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PoseDataSource_GetDataFromSource_mD37A9CC706B99D7A2535DEA7CB0D40F7F47B277A_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 74));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 75));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 76));
		// switch (poseSource)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 77));
		int32_t L_0 = ___0_poseSource;
		V_1 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 78));
		int32_t L_1 = V_1;
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 79));
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0060;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0084;
			}
			case 3:
			{
				goto IL_0078;
			}
			case 4:
			{
				goto IL_0090;
			}
			case 5:
			{
				goto IL_009c;
			}
			case 6:
			{
				goto IL_00a8;
			}
			case 7:
			{
				goto IL_00b4;
			}
			case 8:
			{
				goto IL_00b4;
			}
			case 9:
			{
				goto IL_00b4;
			}
			case 10:
			{
				goto IL_0039;
			}
		}
	}
	{
		goto IL_00b4;
	}

IL_0039:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 80));
		// PoseDataFlags retFlags = GetNodePoseData(XR.XRNode.RightHand, out resultPose);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 81));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = ___1_resultPose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 82));
		il2cpp_codegen_runtime_class_init_inline(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = PoseDataSource_GetNodePoseData_m07EE5781C7E0EB625084A340D115C34C47B07B8E(5, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 82));
		V_2 = L_4;
		// if (retFlags == PoseDataFlags.NoData)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 83));
		int32_t L_5 = V_2;
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 84));
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// return GetNodePoseData(XR.XRNode.LeftHand, out resultPose);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 85));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___1_resultPose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 86));
		il2cpp_codegen_runtime_class_init_inline(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = PoseDataSource_GetNodePoseData_m07EE5781C7E0EB625084A340D115C34C47B07B8E(4, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 86));
		V_4 = L_8;
		goto IL_00e8;
	}

IL_0058:
	{
		// return retFlags;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 87));
		int32_t L_9 = V_2;
		V_4 = L_9;
		goto IL_00e8;
	}

IL_0060:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 88));
		// return GetNodePoseData(XR.XRNode.LeftEye, out resultPose);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 89));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_10 = ___1_resultPose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 90));
		il2cpp_codegen_runtime_class_init_inline(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = PoseDataSource_GetNodePoseData_m07EE5781C7E0EB625084A340D115C34C47B07B8E(0, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 90));
		V_4 = L_11;
		goto IL_00e8;
	}

IL_006c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 91));
		// return GetNodePoseData(XR.XRNode.RightEye, out resultPose);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 92));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = ___1_resultPose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 93));
		il2cpp_codegen_runtime_class_init_inline(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = PoseDataSource_GetNodePoseData_m07EE5781C7E0EB625084A340D115C34C47B07B8E(1, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 93));
		V_4 = L_13;
		goto IL_00e8;
	}

IL_0078:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 94));
		// return GetNodePoseData(XR.XRNode.Head, out resultPose);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 95));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_14 = ___1_resultPose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 96));
		il2cpp_codegen_runtime_class_init_inline(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = PoseDataSource_GetNodePoseData_m07EE5781C7E0EB625084A340D115C34C47B07B8E(3, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 96));
		V_4 = L_15;
		goto IL_00e8;
	}

IL_0084:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 97));
		// return GetNodePoseData(XR.XRNode.CenterEye, out resultPose);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 98));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_16 = ___1_resultPose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 99));
		il2cpp_codegen_runtime_class_init_inline(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = PoseDataSource_GetNodePoseData_m07EE5781C7E0EB625084A340D115C34C47B07B8E(2, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 99));
		V_4 = L_17;
		goto IL_00e8;
	}

IL_0090:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 100));
		// return GetNodePoseData(XR.XRNode.LeftHand, out resultPose);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 101));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_18 = ___1_resultPose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 102));
		il2cpp_codegen_runtime_class_init_inline(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = PoseDataSource_GetNodePoseData_m07EE5781C7E0EB625084A340D115C34C47B07B8E(4, L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 102));
		V_4 = L_19;
		goto IL_00e8;
	}

IL_009c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 103));
		// return GetNodePoseData(XR.XRNode.RightHand, out resultPose);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 104));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_20 = ___1_resultPose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 105));
		il2cpp_codegen_runtime_class_init_inline(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		int32_t L_21;
		L_21 = PoseDataSource_GetNodePoseData_m07EE5781C7E0EB625084A340D115C34C47B07B8E(5, L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 105));
		V_4 = L_21;
		goto IL_00e8;
	}

IL_00a8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 106));
		// return GetNodePoseData(XR.XRNode.CenterEye, out resultPose);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 107));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_22 = ___1_resultPose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 108));
		il2cpp_codegen_runtime_class_init_inline(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = PoseDataSource_GetNodePoseData_m07EE5781C7E0EB625084A340D115C34C47B07B8E(2, L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 108));
		V_4 = L_23;
		goto IL_00e8;
	}

IL_00b4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 109));
		// Debug.LogWarningFormat("Unable to retrieve pose data for poseSource: {0}", poseSource.ToString());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 110));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_24;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 111));
		Il2CppFakeBox<int32_t> L_26(TrackedPose_t42F18C811DFF8DB05CD5711439B2FD640800563D_il2cpp_TypeInfo_var, (&___0_poseSource));
		String_t* L_27;
		L_27 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_26), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 111));
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_27);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 112));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteral6A11DF976BD5EBFB477A52077A195879735F1FA0, L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 112));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 113));
		goto IL_00d8;
	}

IL_00d8:
	{
		// resultPose = Pose.identity;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 114));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_28 = ___1_resultPose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 115));
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_29;
		L_29 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 115));
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_28 = L_29;
		// return PoseDataFlags.NoData;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 116));
		V_4 = 0;
		goto IL_00e8;
	}

IL_00e8:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 117));
		int32_t L_30 = V_4;
		return L_30;
	}
}
// System.Void UnityEngine.SpatialTracking.PoseDataSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseDataSource__cctor_m2CA606CD693A292EED74511BED8CEC06870BA3F3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD8E218B8766DD801CC5B221926CE287ADBE84E32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseDataSource__cctor_m2CA606CD693A292EED74511BED8CEC06870BA3F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PoseDataSource__cctor_m2CA606CD693A292EED74511BED8CEC06870BA3F3_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 118));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 119));
	{
		// static internal List<XR.XRNodeState> nodeStates = new List<XR.XRNodeState>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 120));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 121));
		List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* L_0 = (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87*)il2cpp_codegen_object_new(List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD8E218B8766DD801CC5B221926CE287ADBE84E32(L_0, List_1__ctor_mD8E218B8766DD801CC5B221926CE287ADBE84E32_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 121));
		((PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var))->___nodeStates_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var))->___nodeStates_0), (void*)L_0);
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
// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::get_deviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_deviceType_m17B7178484ECE7F92482DE4C601BBBD70246B743 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceType_t3E6CDAE1A1FFB926CE669804AB68B37543C355FF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_get_deviceType_m17B7178484ECE7F92482DE4C601BBBD70246B743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_get_deviceType_m17B7178484ECE7F92482DE4C601BBBD70246B743_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 122));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 123));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 124));
		// get { return m_Device; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 125));
		int32_t L_0 = __this->___m_Device_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Device; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 126));
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_deviceType(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_deviceType_m8928B93C062C7E11D74488DF75E7E0B975FE2B8B (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_set_deviceType_m8928B93C062C7E11D74488DF75E7E0B975FE2B8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_set_deviceType_m8928B93C062C7E11D74488DF75E7E0B975FE2B8B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 127));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 128));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 129));
		// internal set { m_Device = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 130));
		int32_t L_0 = ___0_value;
		__this->___m_Device_4 = L_0;
		// internal set { m_Device = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 131));
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::get_poseSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_poseSource_m9170B150EF9457C39E316C1FE4C94691ECA92106 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_get_poseSource_m9170B150EF9457C39E316C1FE4C94691ECA92106_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPose_t42F18C811DFF8DB05CD5711439B2FD640800563D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_get_poseSource_m9170B150EF9457C39E316C1FE4C94691ECA92106_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 132));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 133));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 134));
		// get { return m_PoseSource; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 135));
		int32_t L_0 = __this->___m_PoseSource_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_PoseSource; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 136));
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseSource_mEAA5E3640295ACF067287B196FDDCFD69120CC68 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_set_poseSource_mEAA5E3640295ACF067287B196FDDCFD69120CC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_set_poseSource_mEAA5E3640295ACF067287B196FDDCFD69120CC68_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 137));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 138));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 139));
		// internal set { m_PoseSource = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 140));
		int32_t L_0 = ___0_value;
		__this->___m_PoseSource_5 = L_0;
		// internal set { m_PoseSource = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 141));
		return;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::SetPoseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackedPoseDriver_SetPoseSource_m34F8A63205A899E7AE5CAFE116177BB64AC00C13 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, int32_t ___0_deviceType, int32_t ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m106DB0BABC9DAF77E6EF512EC1804D2A9F2AC526_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7531720607E082DFD1BDAEBC0CF0C8A890C361FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mABC9A4CBF2AF4A0BFD791A6A90058196B57080DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDAE09B42049983EFF5F565C2A54C0541A9EC97A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_SetPoseSource_m34F8A63205A899E7AE5CAFE116177BB64AC00C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_deviceType), (&___1_pose));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_SetPoseSource_m34F8A63205A899E7AE5CAFE116177BB64AC00C13_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 142));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 143));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 144));
		// if ((int)deviceType < TrackedPoseDriverDataDescription.DeviceData.Count)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 145));
		int32_t L_0 = ___0_deviceType;
		il2cpp_codegen_runtime_class_init_inline(TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_il2cpp_TypeInfo_var);
		List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D* L_1 = ((TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_il2cpp_TypeInfo_var))->___DeviceData_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 146));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m106DB0BABC9DAF77E6EF512EC1804D2A9F2AC526_inline(L_1, List_1_get_Count_m106DB0BABC9DAF77E6EF512EC1804D2A9F2AC526_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 146));
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 147));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0067;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 148));
		// TrackedPoseDriverDataDescription.PoseData val = TrackedPoseDriverDataDescription.DeviceData[(int)deviceType];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 149));
		il2cpp_codegen_runtime_class_init_inline(TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_il2cpp_TypeInfo_var);
		List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D* L_4 = ((TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_il2cpp_TypeInfo_var))->___DeviceData_0;
		int32_t L_5 = ___0_deviceType;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 150));
		NullCheck(L_4);
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_6;
		L_6 = List_1_get_Item_mABC9A4CBF2AF4A0BFD791A6A90058196B57080DC(L_4, L_5, List_1_get_Item_mABC9A4CBF2AF4A0BFD791A6A90058196B57080DC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 150));
		V_1 = L_6;
		// for (int i = 0; i < val.Poses.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 151));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 152));
		goto IL_0052;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 153));
		// if (val.Poses[i] == pose)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 154));
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_7 = V_1;
		List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* L_8 = L_7.___Poses_1;
		int32_t L_9 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 155));
		NullCheck(L_8);
		int32_t L_10;
		L_10 = List_1_get_Item_mDAE09B42049983EFF5F565C2A54C0541A9EC97A9(L_8, L_9, List_1_get_Item_mDAE09B42049983EFF5F565C2A54C0541A9EC97A9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 155));
		int32_t L_11 = ___1_pose;
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 156));
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 157));
		// this.deviceType = deviceType;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 158));
		int32_t L_13 = ___0_deviceType;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 159));
		TrackedPoseDriver_set_deviceType_m8928B93C062C7E11D74488DF75E7E0B975FE2B8B(__this, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 159));
		// poseSource = pose;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 160));
		int32_t L_14 = ___1_pose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 161));
		TrackedPoseDriver_set_poseSource_mEAA5E3640295ACF067287B196FDDCFD69120CC68(__this, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 161));
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 162));
		V_4 = (bool)1;
		goto IL_006c;
	}

IL_004d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 163));
		// for (int i = 0; i < val.Poses.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 164));
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0052:
	{
		// for (int i = 0; i < val.Poses.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 165));
		int32_t L_16 = V_2;
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_17 = V_1;
		List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* L_18 = L_17.___Poses_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 166));
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m7531720607E082DFD1BDAEBC0CF0C8A890C361FD_inline(L_18, List_1_get_Count_m7531720607E082DFD1BDAEBC0CF0C8A890C361FD_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 166));
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)L_19))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 167));
		bool L_20 = V_5;
		if (L_20)
		{
			goto IL_0023;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 168));
	}

IL_0067:
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 169));
		V_4 = (bool)0;
		goto IL_006c;
	}

IL_006c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 170));
		bool L_21 = V_4;
		return L_21;
	}
}
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::get_poseProviderComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* TrackedPoseDriver_get_poseProviderComponent_m4EEE14236F73AF01BA4FCE900DE6198BA5B71124 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_get_poseProviderComponent_m4EEE14236F73AF01BA4FCE900DE6198BA5B71124_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_get_poseProviderComponent_m4EEE14236F73AF01BA4FCE900DE6198BA5B71124_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 171));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 172));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 173));
		// get { return m_PoseProviderComponent; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 174));
		BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* L_0 = __this->___m_PoseProviderComponent_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_PoseProviderComponent; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 175));
		BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseProviderComponent(UnityEngine.Experimental.XR.Interaction.BasePoseProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseProviderComponent_mE69DED5BA85FA1712F75CCD9217223FA1A0F35EA (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_set_poseProviderComponent_mE69DED5BA85FA1712F75CCD9217223FA1A0F35EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_set_poseProviderComponent_mE69DED5BA85FA1712F75CCD9217223FA1A0F35EA_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 176));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 177));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 178));
		// set { m_PoseProviderComponent = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 179));
		BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* L_0 = ___0_value;
		__this->___m_PoseProviderComponent_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PoseProviderComponent_6), (void*)L_0);
		// set { m_PoseProviderComponent = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 180));
		return;
	}
}
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.TrackedPoseDriver::GetPoseData(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_GetPoseData_m3B8070CB063DE4D7A901AD9715E0016B68AADE6C (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, int32_t ___0_device, int32_t ___1_poseSource, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_resultPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseDataFlags_t14515D7FE9A92D92E97F929BFAC7313461E21FDC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_GetPoseData_m3B8070CB063DE4D7A901AD9715E0016B68AADE6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_device), (&___1_poseSource), (&___2_resultPose));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_GetPoseData_m3B8070CB063DE4D7A901AD9715E0016B68AADE6C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 181));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 182));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 183));
		// return m_PoseProviderComponent != null
		//     ? m_PoseProviderComponent.GetPoseFromProvider(out resultPose)
		//     : PoseDataSource.GetDataFromSource(poseSource, out resultPose);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 184));
		BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* L_0 = __this->___m_PoseProviderComponent_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 185));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 185));
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = ___1_poseSource;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = ___2_resultPose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 186));
		il2cpp_codegen_runtime_class_init_inline(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = PoseDataSource_GetDataFromSource_mD37A9CC706B99D7A2535DEA7CB0D40F7F47B277A(L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 186));
		G_B3_0 = L_4;
		goto IL_0024;
	}

IL_0018:
	{
		BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* L_5 = __this->___m_PoseProviderComponent_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = ___2_resultPose;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 187));
		NullCheck(L_5);
		int32_t L_7;
		L_7 = VirtualFuncInvoker1< int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(4 /* UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.Experimental.XR.Interaction.BasePoseProvider::GetPoseFromProvider(UnityEngine.Pose&) */, L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 187));
		G_B3_0 = L_7;
	}

IL_0024:
	{
		V_0 = G_B3_0;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 188));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::get_trackingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_trackingType_m33BB19AE09F28F85E9E61022132218F6EB73C3B3 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_get_trackingType_m33BB19AE09F28F85E9E61022132218F6EB73C3B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingType_tF09F0AB2ECF334DF710845E1312D3016C2C6E4BF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_get_trackingType_m33BB19AE09F28F85E9E61022132218F6EB73C3B3_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 189));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 190));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 191));
		// get { return m_TrackingType; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 192));
		int32_t L_0 = __this->___m_TrackingType_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_TrackingType; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 193));
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_trackingType(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_trackingType_mF91C94B07D1761078015D0F74B5ACC663C5932F9 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_set_trackingType_mF91C94B07D1761078015D0F74B5ACC663C5932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_set_trackingType_mF91C94B07D1761078015D0F74B5ACC663C5932F9_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 194));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 195));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 196));
		// set { m_TrackingType = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 197));
		int32_t L_0 = ___0_value;
		__this->___m_TrackingType_7 = L_0;
		// set { m_TrackingType = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 198));
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::get_updateType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_updateType_m89CCB2F9300BF6F6BA265B5120E03680FBFCF506 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_get_updateType_m89CCB2F9300BF6F6BA265B5120E03680FBFCF506_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateType_t476438CFAC2D6E29D1C7DD5661F1B2D1832E6099_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_get_updateType_m89CCB2F9300BF6F6BA265B5120E03680FBFCF506_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 199));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 200));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 201));
		// get { return m_UpdateType; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 202));
		int32_t L_0 = __this->___m_UpdateType_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_UpdateType; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 203));
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_updateType(UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_updateType_m361300C65C0F5FA68728B8C18096573EBBFBA254 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_set_updateType_m361300C65C0F5FA68728B8C18096573EBBFBA254_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_set_updateType_m361300C65C0F5FA68728B8C18096573EBBFBA254_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 204));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 205));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 206));
		// set { m_UpdateType = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 207));
		int32_t L_0 = ___0_value;
		__this->___m_UpdateType_8 = L_0;
		// set { m_UpdateType = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 208));
		return;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::get_UseRelativeTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackedPoseDriver_get_UseRelativeTransform_m364C0EC379CBD6898EA09712A3245B3D9E69114B (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_get_UseRelativeTransform_m364C0EC379CBD6898EA09712A3245B3D9E69114B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_get_UseRelativeTransform_m364C0EC379CBD6898EA09712A3245B3D9E69114B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 209));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 210));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 211));
		// get { return m_UseRelativeTransform; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 212));
		bool L_0 = __this->___m_UseRelativeTransform_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_UseRelativeTransform; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 213));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_UseRelativeTransform(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_UseRelativeTransform_mCFB5B8BCF840C51BD0AA29F4F8CE255A4284BD90 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_set_UseRelativeTransform_mCFB5B8BCF840C51BD0AA29F4F8CE255A4284BD90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_set_UseRelativeTransform_mCFB5B8BCF840C51BD0AA29F4F8CE255A4284BD90_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 214));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 215));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 216));
		// set { m_UseRelativeTransform = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 217));
		bool L_0 = ___0_value;
		__this->___m_UseRelativeTransform_9 = L_0;
		// set { m_UseRelativeTransform = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 218));
		return;
	}
}
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::get_originPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackedPoseDriver_get_originPose_mBE222A120504DAAF230CE41A3A8BAB847FE28D08 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_get_originPose_mBE222A120504DAAF230CE41A3A8BAB847FE28D08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_get_originPose_mBE222A120504DAAF230CE41A3A8BAB847FE28D08_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 219));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 220));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 221));
		// get { return m_OriginPose; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 222));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_OriginPose_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_OriginPose; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 223));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_originPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_originPose_m2C46FCA44C17A58EF0A9F1479F64D612B8BD3612 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_set_originPose_m2C46FCA44C17A58EF0A9F1479F64D612B8BD3612_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_set_originPose_m2C46FCA44C17A58EF0A9F1479F64D612B8BD3612_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 224));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 225));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 226));
		// set { m_OriginPose = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 227));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___m_OriginPose_10 = L_0;
		// set { m_OriginPose = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 228));
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::CacheLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_CacheLocalPosition_m8D577E735DA73CDEB6CCAD152E457B141CB7A7D5 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_CacheLocalPosition_m8D577E735DA73CDEB6CCAD152E457B141CB7A7D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_CacheLocalPosition_m8D577E735DA73CDEB6CCAD152E457B141CB7A7D5_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 229));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 230));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 231));
		// m_OriginPose.position = transform.localPosition;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 232));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = (&__this->___m_OriginPose_10);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 233));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 233));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 234));
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 234));
		L_0->___position_0 = L_2;
		// m_OriginPose.rotation = transform.localRotation;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 235));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = (&__this->___m_OriginPose_10);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 236));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 236));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 237));
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 237));
		L_3->___rotation_1 = L_5;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 238));
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::ResetToCachedLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_ResetToCachedLocalPosition_m7FD46724D2BF37DFD65CEFB2DBD1A6F03BD3A90D (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_ResetToCachedLocalPosition_m7FD46724D2BF37DFD65CEFB2DBD1A6F03BD3A90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_ResetToCachedLocalPosition_m7FD46724D2BF37DFD65CEFB2DBD1A6F03BD3A90D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 239));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 240));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 241));
		// SetLocalTransform(m_OriginPose.position, m_OriginPose.rotation, PoseDataFlags.Position | PoseDataFlags.Rotation);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 242));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = (&__this->___m_OriginPose_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = (&__this->___m_OriginPose_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2->___rotation_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 243));
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, int32_t >::Invoke(11 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.SpatialTracking.PoseDataFlags) */, __this, L_1, L_3, 3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 243));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 244));
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_Awake_m1939FF8E60FD6C4D91FFCDFE3B861F83BB6C7EEE (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_Awake_m1939FF8E60FD6C4D91FFCDFE3B861F83BB6C7EEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_Awake_m1939FF8E60FD6C4D91FFCDFE3B861F83BB6C7EEE_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 245));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 246));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 247));
		// CacheLocalPosition();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 248));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 249));
		TrackedPoseDriver_CacheLocalPosition_m8D577E735DA73CDEB6CCAD152E457B141CB7A7D5(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 249));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 250));
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnDestroy_m34A5CEA220217311DF4076BFA69F1013D0F2DAAA (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_OnDestroy_m34A5CEA220217311DF4076BFA69F1013D0F2DAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_OnDestroy_m34A5CEA220217311DF4076BFA69F1013D0F2DAAA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 251));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 252));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 253));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 254));
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnEnable_m36C815D001B992B28CD69CA2F282EC7660C8E9F7 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_OnEnable_m36C815D001B992B28CD69CA2F282EC7660C8E9F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_OnEnable_m36C815D001B992B28CD69CA2F282EC7660C8E9F7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 255));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 256));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 257));
		// Application.onBeforeRender += OnBeforeRender;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 258));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 259));
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 10)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 259));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 260));
		Application_add_onBeforeRender_mEE8925294C807AD08FA0FF35D4C663E098510394(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 260));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 261));
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnDisable_mC6EB0D19C5ECC17A8F17DB478C978CAE0280790F (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_OnDisable_mC6EB0D19C5ECC17A8F17DB478C978CAE0280790F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_OnDisable_mC6EB0D19C5ECC17A8F17DB478C978CAE0280790F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 262));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 263));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 264));
		// ResetToCachedLocalPosition();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 265));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 266));
		TrackedPoseDriver_ResetToCachedLocalPosition_m7FD46724D2BF37DFD65CEFB2DBD1A6F03BD3A90D(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 266));
		// Application.onBeforeRender -= OnBeforeRender;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 267));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 268));
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 10)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 268));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 269));
		Application_remove_onBeforeRender_m9F54448ED4059A26C9972E5C9ED2F6DCD58B4E24(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 269));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 270));
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_FixedUpdate_m43910F40F01F60740C97F82D3157AFAE3587551A (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_FixedUpdate_m43910F40F01F60740C97F82D3157AFAE3587551A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_FixedUpdate_m43910F40F01F60740C97F82D3157AFAE3587551A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 271));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 272));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 273));
		// if (m_UpdateType == UpdateType.Update ||
		//     m_UpdateType == UpdateType.UpdateAndBeforeRender)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 274));
		int32_t L_0 = __this->___m_UpdateType_8;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___m_UpdateType_8;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 275));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 276));
		// PerformUpdate();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 277));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 278));
		VirtualActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 278));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 279));
	}

IL_0023:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 280));
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_Update_mA2D898B30A3072B68ED650C68DDF8A8461E04CCA (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_Update_mA2D898B30A3072B68ED650C68DDF8A8461E04CCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_Update_mA2D898B30A3072B68ED650C68DDF8A8461E04CCA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 281));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 282));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 283));
		// if (m_UpdateType == UpdateType.Update ||
		//     m_UpdateType == UpdateType.UpdateAndBeforeRender)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 284));
		int32_t L_0 = __this->___m_UpdateType_8;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___m_UpdateType_8;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 285));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 286));
		// PerformUpdate();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 287));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 288));
		VirtualActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 288));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 289));
	}

IL_0023:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 290));
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnBeforeRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnBeforeRender_m81B27C3A2FE49926AF76BB1E3332D35C313D2438 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_OnBeforeRender_m81B27C3A2FE49926AF76BB1E3332D35C313D2438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_OnBeforeRender_m81B27C3A2FE49926AF76BB1E3332D35C313D2438_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 291));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 292));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 293));
		// if (m_UpdateType == UpdateType.BeforeRender ||
		//     m_UpdateType == UpdateType.UpdateAndBeforeRender)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 294));
		int32_t L_0 = __this->___m_UpdateType_8;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___m_UpdateType_8;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 295));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 296));
		// PerformUpdate();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 297));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 298));
		VirtualActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 298));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 299));
	}

IL_0023:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 300));
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.SpatialTracking.PoseDataFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_SetLocalTransform_m470407210CD80790C2887973D09AFE97454CC2DF (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_newPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_newRotation, int32_t ___2_poseFlags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_SetLocalTransform_m470407210CD80790C2887973D09AFE97454CC2DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_newPosition), (&___1_newRotation), (&___2_poseFlags));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_SetLocalTransform_m470407210CD80790C2887973D09AFE97454CC2DF_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 301));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 302));
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 303));
		// if ((m_TrackingType == TrackingType.RotationAndPosition ||
		//     m_TrackingType == TrackingType.RotationOnly) &&
		//     (poseFlags & PoseDataFlags.Rotation) > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 304));
		int32_t L_0 = __this->___m_TrackingType_7;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->___m_TrackingType_7;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0012:
	{
		int32_t L_2 = ___2_poseFlags;
		G_B4_0 = ((((int32_t)((int32_t)((int32_t)L_2&2))) > ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B4_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 305));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 306));
		// transform.localRotation = newRotation;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 307));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 308));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 308));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___1_newRotation;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 309));
		NullCheck(L_4);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 309));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 310));
	}

IL_002e:
	{
		// if ((m_TrackingType == TrackingType.RotationAndPosition ||
		//     m_TrackingType == TrackingType.PositionOnly) &&
		//     (poseFlags & PoseDataFlags.Position) > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 311));
		int32_t L_6 = __this->___m_TrackingType_7;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->___m_TrackingType_7;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0047;
		}
	}

IL_003f:
	{
		int32_t L_8 = ___2_poseFlags;
		G_B10_0 = ((((int32_t)((int32_t)((int32_t)L_8&1))) > ((int32_t)0))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B10_0 = 0;
	}

IL_0048:
	{
		V_1 = (bool)G_B10_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 312));
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 313));
		// transform.localPosition = newPosition;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 314));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 315));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 315));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___0_newPosition;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 316));
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 316));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 317));
	}

IL_005b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 318));
		return;
	}
}
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::TransformPoseByOriginIfNeeded(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackedPoseDriver_TransformPoseByOriginIfNeeded_mA8C3ADCF55349F26E6AC90CC2488217ECC49F1B2 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_TransformPoseByOriginIfNeeded_mA8C3ADCF55349F26E6AC90CC2488217ECC49F1B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_pose));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_TransformPoseByOriginIfNeeded_mA8C3ADCF55349F26E6AC90CC2488217ECC49F1B2_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 319));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 320));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 321));
		// if (m_UseRelativeTransform)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 322));
		bool L_0 = __this->___m_UseRelativeTransform_9;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 323));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 324));
		// return pose.GetTransformedBy(m_OriginPose);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 325));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = __this->___m_OriginPose_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 326));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = Pose_GetTransformedBy_m8B18A1ED205791F95CDC1D1F2A08A42D6DA02CBF((&___0_pose), L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 326));
		V_1 = L_3;
		goto IL_0021;
	}

IL_001c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 327));
		// return pose;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 328));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = ___0_pose;
		V_1 = L_4;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 329));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = V_1;
		return L_5;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::HasStereoCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackedPoseDriver_HasStereoCamera_mE463A159FA7B7116C667A01B6197B44B340823CE (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_HasStereoCamera_mE463A159FA7B7116C667A01B6197B44B340823CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_HasStereoCamera_mE463A159FA7B7116C667A01B6197B44B340823CE_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 330));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 331));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 332));
		// Camera camera = GetComponent<Camera>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 333));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 334));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 334));
		V_0 = L_0;
		// return camera != null && camera.stereoEnabled;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 335));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 336));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 336));
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 337));
		NullCheck(L_3);
		bool L_4;
		L_4 = Camera_get_stereoEnabled_m33F6247051D68E8FFEF9C0EC34C6F4B4B53FC8AF(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 337));
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 338));
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_PerformUpdate_m7ECADDEEA9C6EC284D0EB169605B6BCA34449D97 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseDataFlags_t14515D7FE9A92D92E97F929BFAC7313461E21FDC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_PerformUpdate_m7ECADDEEA9C6EC284D0EB169605B6BCA34449D97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver_PerformUpdate_m7ECADDEEA9C6EC284D0EB169605B6BCA34449D97_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 339));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 340));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 341));
		// if (!enabled)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 342));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 343));
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 343));
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 344));
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 345));
		goto IL_004e;
	}

IL_0010:
	{
		// PoseDataFlags poseFlags = GetPoseData(m_Device, m_PoseSource, out currentPose);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 346));
		int32_t L_2 = __this->___m_Device_4;
		int32_t L_3 = __this->___m_PoseSource_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 347));
		int32_t L_4;
		L_4 = TrackedPoseDriver_GetPoseData_m3B8070CB063DE4D7A901AD9715E0016B68AADE6C(__this, L_2, L_3, (&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 347));
		V_1 = L_4;
		// if (poseFlags != PoseDataFlags.NoData)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 348));
		int32_t L_5 = V_1;
		V_3 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 349));
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 350));
		// Pose localPose = TransformPoseByOriginIfNeeded(currentPose);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 351));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 352));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8;
		L_8 = TrackedPoseDriver_TransformPoseByOriginIfNeeded_mA8C3ADCF55349F26E6AC90CC2488217ECC49F1B2(__this, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 352));
		V_4 = L_8;
		// SetLocalTransform(localPose.position, localPose.rotation, poseFlags);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 353));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = L_11.___rotation_1;
		int32_t L_13 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 354));
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, int32_t >::Invoke(11 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.SpatialTracking.PoseDataFlags) */, __this, L_10, L_12, L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 354));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 355));
	}

IL_004e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 356));
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver__ctor_mCB5636C22D685907A7D30BEA4FF3D5BD2FE5D3F0 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver__ctor_mCB5636C22D685907A7D30BEA4FF3D5BD2FE5D3F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TrackedPoseDriver__ctor_mCB5636C22D685907A7D30BEA4FF3D5BD2FE5D3F0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 357));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 358));
	{
		// TrackedPose m_PoseSource = TrackedPoseDriver.TrackedPose.Center;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 359));
		__this->___m_PoseSource_5 = 2;
		// UpdateType m_UpdateType = UpdateType.UpdateAndBeforeRender;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 360));
		__this->___m_UpdateType_8 = 0;
		// bool m_UseRelativeTransform = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 361));
		__this->___m_UseRelativeTransform_9 = (bool)0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 362));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 362));
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
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.Experimental.XR.Interaction.BasePoseProvider::GetPoseFromProvider(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BasePoseProvider_GetPoseFromProvider_m815E60EB1A0C2D449B60F60DDD0D49DCF7E68A69 (BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasePoseProvider_GetPoseFromProvider_m815E60EB1A0C2D449B60F60DDD0D49DCF7E68A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseDataFlags_t14515D7FE9A92D92E97F929BFAC7313461E21FDC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_output));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BasePoseProvider_GetPoseFromProvider_m815E60EB1A0C2D449B60F60DDD0D49DCF7E68A69_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 363));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 364));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 365));
		// if (TryGetPoseFromProvider(out output))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 366));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_output;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 367));
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(5 /* System.Boolean UnityEngine.Experimental.XR.Interaction.BasePoseProvider::TryGetPoseFromProvider(UnityEngine.Pose&) */, __this, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 367));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 368));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 369));
		// return PoseDataFlags.Position | PoseDataFlags.Rotation;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 370));
		V_1 = 3;
		goto IL_0015;
	}

IL_0011:
	{
		// return PoseDataFlags.NoData;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 371));
		V_1 = 0;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 372));
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.Experimental.XR.Interaction.BasePoseProvider::TryGetPoseFromProvider(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BasePoseProvider_TryGetPoseFromProvider_m6961C33D08BB411C9E425EDE5813480319F9BFB0 (BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasePoseProvider_TryGetPoseFromProvider_m6961C33D08BB411C9E425EDE5813480319F9BFB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_output));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BasePoseProvider_TryGetPoseFromProvider_m6961C33D08BB411C9E425EDE5813480319F9BFB0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 373));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 374));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 375));
		// output = Pose.identity;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 376));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_output;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 377));
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 377));
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 378));
		V_0 = (bool)0;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SpatialTracking + 379));
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Experimental.XR.Interaction.BasePoseProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePoseProvider__ctor_mB1BA00DFB674FA54CD28933D4335F6162B378020 (BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasePoseProvider__ctor_mB1BA00DFB674FA54CD28933D4335F6162B378020_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BasePoseProvider__ctor_mB1BA00DFB674FA54CD28933D4335F6162B378020_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
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
