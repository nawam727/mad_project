﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Management.XRLoader>
struct IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Management.XRLoader>
struct IEqualityComparer_1_t571E8FA050B186FF0CD536E371CFDA929D9A83B3;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.ISubsystem>
struct KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7;
// System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType>
struct List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UnityEngine.ISubsystem>
struct ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UnityEngine.ISubsystem>[]
struct EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.XR.Management.XRLoader>[]
struct SlotU5BU5D_t2D176532F5C68819350B91F31B9933AE0C9EA72B;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Rendering.GraphicsDeviceType[]
struct GraphicsDeviceTypeU5BU5D_t4322565F239068C66BF47053B83BD6A9A9D16408;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Management.XRConfigurationDataAttribute
struct XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24
struct U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_XR_Management[];
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsDeviceType_t65150C9055D1BC1E377E894972629BF22BA2CBF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRManagementAnalytics_t9A6F8603FBB618B8FEC7A6BF3FD9615C61C1063F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral315B698B2842E2D68111639F66C762E9B89D07CD;
IL2CPP_EXTERN_C String_t* _stringLiteral382C2D644BFA222F1F3E9ECB531AE6F3D95044FF;
IL2CPP_EXTERN_C String_t* _stringLiteral46E098C88DA5E70C12C778EED75B14DE754DBDB6;
IL2CPP_EXTERN_C String_t* _stringLiteral6B8B436F01039B99374349DB664935E4E9FA600B;
IL2CPP_EXTERN_C String_t* _stringLiteral890B268A2AFBDA04F33348E7C0FF8600A336DABE;
IL2CPP_EXTERN_C String_t* _stringLiteral8A67FBC5ABA519008B443A3446FFD6458D968D4E;
IL2CPP_EXTERN_C String_t* _stringLiteralADC37DF0257D7B87C604A97F0803D0370B8FD8C6;
IL2CPP_EXTERN_C String_t* _stringLiteralAE0ABAD544C4FF6309990ACB67971500C1591984;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m64E5244EC38185D18BDBBD9843498A15D1FE8455_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCCAE8E8620E1F7596EBB9710A40F6D0D520EED0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m558B2F73F0E5D8B4B7247F8068645077549A3490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m08EA2E51B87E7E0DE5F72486EDCADC812011B8CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4D452A399E7790870BCDE47FD637EABEC40C4884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mF996FA749C02C7CE9989F2AB8A8D3F2DEAA2FECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mB5674CAFBC5EEF5CCCB52956A8F11D308F13D868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m25A9FEF01031CAB6CD40A1E9A04980FC5CF73D4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m979FD941B8820FF2363CA35F3B9F6ECF6C660237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m18DD7A4EBEE7EDA86FB5E31B652747FFFD02AD92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m20C41780B854256B07BFB12C68F18E85A9558B4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA43D4F851A025BB5362598C2A735F9C2495141BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m2D400B5F884E476831E32BD47C6A2E91E67E4462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m189B7D737C00C144F6DB563BE972679CFD0B82B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4479B2D3BCC34E9CCCA97A4FF0E662BBA3631028_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m54789A96B9085519EE4649A5AAA202B639232BAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m68F16ADD72EB9C53684357C73187FDE06A47AC36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m27C45E7556A637BBF6DF0336E42FBD483FA1AC67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2B9F59DF239BCCE4F6C768CBC1E33BF4DE128F6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeLoaderU3Ed__24_MoveNext_m0D3BCBEFAE33727F17874481BF551C2741132003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeLoaderU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4F6952CC23A00893DC2B18A638480696CEE3370C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeLoaderU3Ed__24_System_Collections_IEnumerator_Reset_m803D94C93BE413DFBA21C0FEFABA00DA3E3414C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeLoaderU3Ed__24_System_Collections_IEnumerator_get_Current_m92156199FCA3AAD568CA668A7A6CF7FB31B8A23C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeLoaderU3Ed__24_System_IDisposable_Dispose_mB850632340F899B06CCC956A3557DECF8BCC7AE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeLoaderU3Ed__24_U3CU3Em__Finally1_m6CCA9E68B1BF2344768A755069F9B9CD799E277C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeLoaderU3Ed__24__ctor_m55EFC72939B5E8ABAF9E70DD0878A80B0280C97A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRConfigurationDataAttribute__ctor_m644D2F677622C19F3AF0AF72BC355A73A274597D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRConfigurationDataAttribute__ctor_mC4325AA1EFFCBB1D2CC10B1F0BFDACCDE147A9C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRConfigurationDataAttribute_get_buildSettingsKey_m5458381526D6DEDA8A3DDC7375F24EE3A481CE37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRConfigurationDataAttribute_get_displayName_mE0BD51CF7824CBB1318708EAD9717F604BE14057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRConfigurationDataAttribute_set_buildSettingsKey_m6AFAEBF0A402551EC9A80324E5B64403065E75A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRConfigurationDataAttribute_set_displayName_m3AFFE133640E562156E3D20A81206FE9F62D12BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_AttemptInitializeXRSDKOnLoad_m1905ABBBDC0982AD1AF76D157881215BB66002B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_AttemptStartXRSDKOnBeforeSplashScreen_m186BDD078384E5494797E213BA9BEE337747DD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_Awake_mDB501D0A232DAB9D5E56F232CBB9FE5BFA8F5AE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_DeInitXRSDK_mF101D7A880E1DC4958ADA2388E7140F4DF7B7EDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_InitXRSDK_m29F5580C758C0F617E9A2588AA861DE49E4EC779_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_OnDestroy_mFEE1954662ED788B1A09309573EFA9DE210BEF96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_Quit_m1AAD46F067D518F864C13ABD5832559C39540A54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_StartXRSDK_mC2BAC4CF6D76CC4704B9DAC2601FCF8CDB9A9F12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_Start_m191BC7C4C042DB4599D74254F6E62F346F20BDAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_StopXRSDK_m1ABC0D7F3AB9422CAE5993A1641836CE0DC394A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings__cctor_mA1B586D9E9534249DACCFD9CEA23C69A433F1A44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings__ctor_m17F368F5DF52B3CF764C69C6A551DC983874CB59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_get_AssignedSettings_mBC55A93C750C07D07C3588D7238FAE6C0D8E005F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_get_InitManagerOnStart_mA117DE9A4754CC3BA0E7F99FB7A593FF5B5B482A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_set_Manager_m8BF44008AF9941A38529BF4E9DD291B519CD3310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_Deinitialize_m879052C82795CBA2443070F8206798BED6C0C5E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_Deinitialize_m001821A3F803AC067C6884A6BBD01DDE378DFAB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetSupportedGraphicsDeviceTypes_m92C8ECDE9FEF211C2B9EB9574B563EE805859753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_Initialize_mA506BDCDF97BA180CDC5BF1945E29CF3766CA859_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_Start_m8E73CE045F2B7D7BE46C5670C936880DDF380FD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_Stop_m398D1FFBE01D294AD5DFB6DB8D807C1DDEA91C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader__ctor_m466A0E280C64F30806342A9EEF55801FA88682CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagementAnalytics_Initialize_mA0727A2B768833A169E4FBC45B7F6F2A09FAEC78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_CheckGraphicsAPICompatibility_m63AE4A622C2B137618B747F25A7591CBD0B9496B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_InitializeLoaderSync_m5CE4139417252856F67537554BAD16798E5A8D6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_OnDestroy_m88AE1F5A6B819CF07D249F6A6D3A7809C4DBF9E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_OnDisable_m31F1208BDDBDC01D75AAC4063C0F8765269CA408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_Start_mBF2ADCCC6377C8A7DDA7C462313DAD00DC00382C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_TryAddLoader_m1CF7DEB07D6E67F3D788B41FE0404DAE19F38031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_TryRemoveLoader_m29479875EF3C4773D5D74661131A06C2E8736BB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_TrySetLoaders_mD2EAE278D90F867E6EA02A75D60F09FD1EE13C30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings__ctor_m516BC0C114BD8652EAE41D77BF961C5521520317_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_get_automaticLoading_mF28DC51D46409F4D75DCF53E38C8E6B28444B01A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_get_automaticRunning_mE6F4B5875CF9B098B0B20388E77B651EB633D166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_get_currentLoaders_m3A4FF4CA5168E58C4DAB89B33972C1EE83FF2237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_get_loaders_m485A1CD420B07D57B9E2856795BDB933389322D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_get_registeredLoaders_m9FDA9ABA6EE526EC99C892488869777BF13E4D1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_set_activeLoader_m85857974C574787278D7B4E861AD235F2D49726A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_set_automaticLoading_m8F328FA730A8DD8C62D9A8FA8569A2084D530E0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_set_automaticRunning_mAC78998A385194EBEBF00C7337FC018148A40729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRManagerSettings_set_currentLoaders_mBF7D7DE30A657C0B8A145FBE84104797D668454A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GraphicsDeviceType_t65150C9055D1BC1E377E894972629BF22BA2CBF5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tED13E80693DC18AC28D3739FC5814B426E416D78 
{
};

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t2D176532F5C68819350B91F31B9933AE0C9EA72B* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType>
struct List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GraphicsDeviceTypeU5BU5D_t4322565F239068C66BF47053B83BD6A9A9D16408* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
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

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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

// UnityEngine.XR.Management.XRManagementAnalytics
struct XRManagementAnalytics_t9A6F8603FBB618B8FEC7A6BF3FD9615C61C1063F  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader>
struct Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ____current_3;
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

// UnityEngine.XR.Management.XRConfigurationDataAttribute
struct XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String UnityEngine.XR.Management.XRConfigurationDataAttribute::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_0;
	// System.String UnityEngine.XR.Management.XRConfigurationDataAttribute::<buildSettingsKey>k__BackingField
	String_t* ___U3CbuildSettingsKeyU3Ek__BackingField_1;
};

// UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent
struct BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E 
{
	// System.String UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent::buildGuid
	String_t* ___buildGuid_0;
	// System.String UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent::buildTarget
	String_t* ___buildTarget_1;
	// System.String UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent::buildTargetGroup
	String_t* ___buildTargetGroup_2;
	// System.String[] UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent::assigned_loaders
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___assigned_loaders_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent
struct BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E_marshaled_pinvoke
{
	char* ___buildGuid_0;
	char* ___buildTarget_1;
	char* ___buildTargetGroup_2;
	char** ___assigned_loaders_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent
struct BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E_marshaled_com
{
	Il2CppChar* ___buildGuid_0;
	Il2CppChar* ___buildTarget_1;
	Il2CppChar* ___buildTargetGroup_2;
	Il2CppChar** ___assigned_loaders_3;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24
struct U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>4__this
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>s__1
	Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A ___U3CU3Es__1_3;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<loader>5__2
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CloaderU3E5__2_4;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC  : public XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>

// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>

// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>

// System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType>
struct List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GraphicsDeviceTypeU5BU5D_t4322565F239068C66BF47053B83BD6A9A9D16408* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType>

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Attribute

// System.Attribute

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.XR.Management.XRManagementAnalytics
struct XRManagementAnalytics_t9A6F8603FBB618B8FEC7A6BF3FD9615C61C1063F_StaticFields
{
	// System.Boolean UnityEngine.XR.Management.XRManagementAnalytics::s_Initialized
	bool ___s_Initialized_4;
};

// UnityEngine.XR.Management.XRManagementAnalytics

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader>

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

// System.Void

// System.Void

// UnityEngine.XR.Management.XRConfigurationDataAttribute

// UnityEngine.XR.Management.XRConfigurationDataAttribute

// UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent

// UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24

// UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.Action

// System.Action

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRGeneralSettings

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.XR.Management.XRLoaderHelper

// UnityEngine.XR.Management.XRLoaderHelper
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
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
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m6D40586EE21316C2647D81169AFFF9B4C7719F74_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mB8862677E04375531A30F3EC07AC2372FCE61F55_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRConfigurationDataAttribute::set_displayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRConfigurationDataAttribute_set_displayName_m3AFFE133640E562156E3D20A81206FE9F62D12BB_inline (XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRConfigurationDataAttribute::set_buildSettingsKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRConfigurationDataAttribute_set_buildSettingsKey_m6AFAEBF0A402551EC9A80324E5B64403065E75A0_inline (XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_quitting(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_quitting_m5767AC63F23ABFD5BC3D60710906643BA536CCC5 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRGeneralSettings::DeInitXRSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_DeInitXRSDK_mF101D7A880E1DC4958ADA2388E7140F4DF7B7EDC (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRGeneralSettings::StartXRSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_StartXRSDK_mC2BAC4CF6D76CC4704B9DAC2601FCF8CDB9A9F12 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::get_InitManagerOnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRGeneralSettings_get_InitManagerOnStart_mA117DE9A4754CC3BA0E7F99FB7A593FF5B5B482A (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRGeneralSettings::InitXRSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_InitXRSDK_m29F5580C758C0F617E9A2588AA861DE49E4EC779 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::set_automaticLoading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_set_automaticLoading_m8F328FA730A8DD8C62D9A8FA8569A2084D530E0E (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::set_automaticRunning(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_set_automaticRunning_mAC78998A385194EBEBF00C7337FC018148A40729 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::InitializeLoaderSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_InitializeLoaderSync_m5CE4139417252856F67537554BAD16798E5A8D6D (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StopSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType>::.ctor()
inline void List_1__ctor_m68F16ADD72EB9C53684357C73187FDE06A47AC36 (List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::Clear()
inline void Dictionary_2_Clear_m64E5244EC38185D18BDBBD9843498A15D1FE8455 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Boolean UnityEngine.XR.Management.XRLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoader_Deinitialize_m001821A3F803AC067C6884A6BBD01DDE378DFAB9 (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::.ctor()
inline void Dictionary_2__ctor_mCCAE8E8620E1F7596EBB9710A40F6D0D520EED0F (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoader__ctor_m466A0E280C64F30806342A9EEF55801FA88682CE (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_currentLoaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* XRManagerSettings_get_currentLoaders_m3A4FF4CA5168E58C4DAB89B33972C1EE83FF2237 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator()
inline Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A List_1_GetEnumerator_mA43D4F851A025BB5362598C2A735F9C2495141BF (List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* __this, const RuntimeMethod* method)
{
	Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader>::Dispose()
inline void Enumerator_Dispose_m558B2F73F0E5D8B4B7247F8068645077549A3490 (Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader>::get_Current()
inline XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* Enumerator_get_Current_m4D452A399E7790870BCDE47FD637EABEC40C4884_inline (Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A* __this, const RuntimeMethod* method)
{
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::CheckGraphicsAPICompatibility(UnityEngine.XR.Management.XRLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_CheckGraphicsAPICompatibility_m63AE4A622C2B137618B747F25A7591CBD0B9496B (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___0_loader, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::set_activeLoader(UnityEngine.XR.Management.XRLoader)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRManagerSettings_set_activeLoader_m85857974C574787278D7B4E861AD235F2D49726A_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader>::MoveNext()
inline bool Enumerator_MoveNext_m08EA2E51B87E7E0DE5F72486EDCADC812011B8CB (Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLoaderU3Ed__24__ctor_m55EFC72939B5E8ABAF9E70DD0878A80B0280C97A (U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>::Contains(T)
inline bool List_1_Contains_m18DD7A4EBEE7EDA86FB5E31B652747FFFD02AD92 (List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* __this, XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>::Contains(T)
inline bool HashSet_1_Contains_mF996FA749C02C7CE9989F2AB8A8D3F2DEAA2FECC (HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* __this, XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))HashSet_1_Contains_m6D40586EE21316C2647D81169AFFF9B4C7719F74_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>::get_Count()
inline int32_t List_1_get_Count_m27C45E7556A637BBF6DF0336E42FBD483FA1AC67_inline (List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>::Add(T)
inline void List_1_Add_m25A9FEF01031CAB6CD40A1E9A04980FC5CF73D4A_inline (List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* __this, XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>::Insert(System.Int32,T)
inline void List_1_Insert_m2D400B5F884E476831E32BD47C6A2E91E67E4462 (List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* __this, int32_t ___0_index, XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Insert_mB8862677E04375531A30F3EC07AC2372FCE61F55_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny)___1_item, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>::Remove(T)
inline bool List_1_Remove_m189B7D737C00C144F6DB563BE972679CFD0B82B1 (List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* __this, XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m4479B2D3BCC34E9CCCA97A4FF0E662BBA3631028 (List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___0_collection, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>::Clear()
inline void List_1_Clear_m979FD941B8820FF2363CA35F3B9F6ECF6C660237_inline (List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::TryAddLoader(UnityEngine.XR.Management.XRLoader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_TryAddLoader_m1CF7DEB07D6E67F3D788B41FE0404DAE19F38031 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___0_loader, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::set_currentLoaders(System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_set_currentLoaders_mBF7D7DE30A657C0B8A145FBE84104797D668454A (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType>::get_Count()
inline int32_t List_1_get_Count_m2B9F59DF239BCCE4F6C768CBC1E33BF4DE128F6C_inline (List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType>::Contains(T)
inline bool List_1_Contains_m20C41780B854256B07BFB12C68F18E85A9558B4E (List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_automaticLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_get_automaticLoading_mF28DC51D46409F4D75DCF53E38C8E6B28444B01A (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_automaticRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_get_automaticRunning_mE6F4B5875CF9B098B0B20388E77B651EB633D166 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>::.ctor()
inline void List_1__ctor_m54789A96B9085519EE4649A5AAA202B639232BAD (List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>::.ctor()
inline void HashSet_1__ctor_mB5674CAFBC5EEF5CCCB52956A8F11D308F13D868 (HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLoaderU3Ed__24_U3CU3Em__Finally1_m6CCA9E68B1BF2344768A755069F9B9CD799E277C (U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLoaderU3Ed__24_System_IDisposable_Dispose_mB850632340F899B06CCC956A3557DECF8BCC7AE8 (U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// System.String UnityEngine.XR.Management.XRConfigurationDataAttribute::get_displayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRConfigurationDataAttribute_get_displayName_mE0BD51CF7824CBB1318708EAD9717F604BE14057 (XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute_get_displayName_mE0BD51CF7824CBB1318708EAD9717F604BE14057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRConfigurationDataAttribute_get_displayName_mE0BD51CF7824CBB1318708EAD9717F604BE14057_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 1));
	{
		// public string displayName { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 2));
		String_t* L_0 = __this->___U3CdisplayNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Management.XRConfigurationDataAttribute::set_displayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRConfigurationDataAttribute_set_displayName_m3AFFE133640E562156E3D20A81206FE9F62D12BB (XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute_set_displayName_m3AFFE133640E562156E3D20A81206FE9F62D12BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRConfigurationDataAttribute_set_displayName_m3AFFE133640E562156E3D20A81206FE9F62D12BB_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 3));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 4));
	{
		// public string displayName { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 5));
		String_t* L_0 = ___0_value;
		__this->___U3CdisplayNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdisplayNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.XR.Management.XRConfigurationDataAttribute::get_buildSettingsKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRConfigurationDataAttribute_get_buildSettingsKey_m5458381526D6DEDA8A3DDC7375F24EE3A481CE37 (XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute_get_buildSettingsKey_m5458381526D6DEDA8A3DDC7375F24EE3A481CE37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRConfigurationDataAttribute_get_buildSettingsKey_m5458381526D6DEDA8A3DDC7375F24EE3A481CE37_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 6));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 7));
	{
		// public string buildSettingsKey { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 8));
		String_t* L_0 = __this->___U3CbuildSettingsKeyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Management.XRConfigurationDataAttribute::set_buildSettingsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRConfigurationDataAttribute_set_buildSettingsKey_m6AFAEBF0A402551EC9A80324E5B64403065E75A0 (XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute_set_buildSettingsKey_m6AFAEBF0A402551EC9A80324E5B64403065E75A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRConfigurationDataAttribute_set_buildSettingsKey_m6AFAEBF0A402551EC9A80324E5B64403065E75A0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 9));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 10));
	{
		// public string buildSettingsKey { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 11));
		String_t* L_0 = ___0_value;
		__this->___U3CbuildSettingsKeyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbuildSettingsKeyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRConfigurationDataAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRConfigurationDataAttribute__ctor_mC4325AA1EFFCBB1D2CC10B1F0BFDACCDE147A9C8 (XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute__ctor_mC4325AA1EFFCBB1D2CC10B1F0BFDACCDE147A9C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRConfigurationDataAttribute__ctor_mC4325AA1EFFCBB1D2CC10B1F0BFDACCDE147A9C8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 12));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 13));
	{
		// private XRConfigurationDataAttribute() {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 14));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 15));
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 16));
		// private XRConfigurationDataAttribute() {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 17));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRConfigurationDataAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRConfigurationDataAttribute__ctor_m644D2F677622C19F3AF0AF72BC355A73A274597D (XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2* __this, String_t* ___0_displayName, String_t* ___1_buildSettingsKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute__ctor_m644D2F677622C19F3AF0AF72BC355A73A274597D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_displayName), (&___1_buildSettingsKey));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRConfigurationDataAttribute__ctor_m644D2F677622C19F3AF0AF72BC355A73A274597D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 18));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 19));
	{
		// public XRConfigurationDataAttribute(string displayName, string buildSettingsKey)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 20));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 21));
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 21));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 22));
		// this.displayName = displayName;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 23));
		String_t* L_0 = ___0_displayName;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 24));
		XRConfigurationDataAttribute_set_displayName_m3AFFE133640E562156E3D20A81206FE9F62D12BB_inline(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 24));
		// this.buildSettingsKey = buildSettingsKey;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 25));
		String_t* L_1 = ___1_buildSettingsKey;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 26));
		XRConfigurationDataAttribute_set_buildSettingsKey_m6AFAEBF0A402551EC9A80324E5B64403065E75A0_inline(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 26));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 27));
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
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 28));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 29));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 30));
		// get { return m_LoaderManagerInstance; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 31));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_LoaderManagerInstance; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 32));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::set_Manager(UnityEngine.XR.Management.XRManagerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_set_Manager_m8BF44008AF9941A38529BF4E9DD291B519CD3310 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_set_Manager_m8BF44008AF9941A38529BF4E9DD291B519CD3310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_set_Manager_m8BF44008AF9941A38529BF4E9DD291B519CD3310_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 33));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 34));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 35));
		// set { m_LoaderManagerInstance = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 36));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = ___0_value;
		__this->___m_LoaderManagerInstance_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LoaderManagerInstance_6), (void*)L_0);
		// set { m_LoaderManagerInstance = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 37));
		return;
	}
}
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 38));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 39));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 40));
		// return s_RuntimeSettingsInstance;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 41));
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 42));
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_AssignedSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_AssignedSettings_mBC55A93C750C07D07C3588D7238FAE6C0D8E005F (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_get_AssignedSettings_mBC55A93C750C07D07C3588D7238FAE6C0D8E005F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_get_AssignedSettings_mBC55A93C750C07D07C3588D7238FAE6C0D8E005F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 43));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 44));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 45));
		// return m_LoaderManagerInstance;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 46));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 47));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::get_InitManagerOnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRGeneralSettings_get_InitManagerOnStart_mA117DE9A4754CC3BA0E7F99FB7A593FF5B5B482A (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_get_InitManagerOnStart_mA117DE9A4754CC3BA0E7F99FB7A593FF5B5B482A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_get_InitManagerOnStart_mA117DE9A4754CC3BA0E7F99FB7A593FF5B5B482A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 48));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 49));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 50));
		// return m_InitManagerOnStart;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 51));
		bool L_0 = __this->___m_InitManagerOnStart_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 52));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_Awake_mDB501D0A232DAB9D5E56F232CBB9FE5BFA8F5AE2 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_Awake_mDB501D0A232DAB9D5E56F232CBB9FE5BFA8F5AE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_Quit_m1AAD46F067D518F864C13ABD5832559C39540A54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADC37DF0257D7B87C604A97F0803D0370B8FD8C6);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_Awake_mDB501D0A232DAB9D5E56F232CBB9FE5BFA8F5AE2_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 53));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 54));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 55));
		// Debug.Log("XRGeneral Settings awakening...");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 56));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 57));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralADC37DF0257D7B87C604A97F0803D0370B8FD8C6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 57));
		// s_RuntimeSettingsInstance = this;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 58));
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5), (void*)__this);
		// Application.quitting += Quit;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 59));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 60));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, NULL, (intptr_t)((void*)XRGeneralSettings_Quit_m1AAD46F067D518F864C13ABD5832559C39540A54_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 60));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 61));
		Application_add_quitting_m5767AC63F23ABFD5BC3D60710906643BA536CCC5(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 61));
		// DontDestroyOnLoad(s_RuntimeSettingsInstance);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 62));
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_1 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 63));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 63));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 64));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_Quit_m1AAD46F067D518F864C13ABD5832559C39540A54 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_Quit_m1AAD46F067D518F864C13ABD5832559C39540A54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_Quit_m1AAD46F067D518F864C13ABD5832559C39540A54_RuntimeMethod_var, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 65));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 66));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 67));
		// XRGeneralSettings instance = XRGeneralSettings.Instance;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 68));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 69));
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 69));
		V_0 = L_0;
		// if (instance == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 70));
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 71));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 71));
		V_1 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 72));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 73));
		goto IL_001b;
	}

IL_0014:
	{
		// instance.DeInitXRSDK();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 74));
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 75));
		NullCheck(L_4);
		XRGeneralSettings_DeInitXRSDK_mF101D7A880E1DC4958ADA2388E7140F4DF7B7EDC(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 75));
	}

IL_001b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 76));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_Start_m191BC7C4C042DB4599D74254F6E62F346F20BDAB (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_Start_m191BC7C4C042DB4599D74254F6E62F346F20BDAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_Start_m191BC7C4C042DB4599D74254F6E62F346F20BDAB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 77));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 78));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 79));
		// StartXRSDK();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 80));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 81));
		XRGeneralSettings_StartXRSDK_mC2BAC4CF6D76CC4704B9DAC2601FCF8CDB9A9F12(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 81));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 82));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_OnDestroy_mFEE1954662ED788B1A09309573EFA9DE210BEF96 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_OnDestroy_mFEE1954662ED788B1A09309573EFA9DE210BEF96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_OnDestroy_mFEE1954662ED788B1A09309573EFA9DE210BEF96_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 83));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 84));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 85));
		// DeInitXRSDK();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 86));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 87));
		XRGeneralSettings_DeInitXRSDK_mF101D7A880E1DC4958ADA2388E7140F4DF7B7EDC(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 87));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 88));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::AttemptInitializeXRSDKOnLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_AttemptInitializeXRSDKOnLoad_m1905ABBBDC0982AD1AF76D157881215BB66002B7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_AttemptInitializeXRSDKOnLoad_m1905ABBBDC0982AD1AF76D157881215BB66002B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_AttemptInitializeXRSDKOnLoad_m1905ABBBDC0982AD1AF76D157881215BB66002B7_RuntimeMethod_var, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 89));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 90));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 91));
		// XRGeneralSettings instance = XRGeneralSettings.Instance;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 92));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 93));
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 93));
		V_0 = L_0;
		// if (instance == null || !instance.InitManagerOnStart)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 94));
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 95));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 95));
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 96));
		NullCheck(L_3);
		bool L_4;
		L_4 = XRGeneralSettings_get_InitManagerOnStart_mA117DE9A4754CC3BA0E7F99FB7A593FF5B5B482A(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 96));
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_1 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 97));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 98));
		goto IL_0029;
	}

IL_0022:
	{
		// instance.InitXRSDK();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 99));
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 100));
		NullCheck(L_6);
		XRGeneralSettings_InitXRSDK_m29F5580C758C0F617E9A2588AA861DE49E4EC779(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 100));
	}

IL_0029:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 101));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::AttemptStartXRSDKOnBeforeSplashScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_AttemptStartXRSDKOnBeforeSplashScreen_m186BDD078384E5494797E213BA9BEE337747DD3A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_AttemptStartXRSDKOnBeforeSplashScreen_m186BDD078384E5494797E213BA9BEE337747DD3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_AttemptStartXRSDKOnBeforeSplashScreen_m186BDD078384E5494797E213BA9BEE337747DD3A_RuntimeMethod_var, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 102));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 103));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 104));
		// XRGeneralSettings instance = XRGeneralSettings.Instance;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 105));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 106));
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 106));
		V_0 = L_0;
		// if (instance == null || !instance.InitManagerOnStart)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 107));
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 108));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 108));
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 109));
		NullCheck(L_3);
		bool L_4;
		L_4 = XRGeneralSettings_get_InitManagerOnStart_mA117DE9A4754CC3BA0E7F99FB7A593FF5B5B482A(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 109));
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_1 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 110));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 111));
		goto IL_0029;
	}

IL_0022:
	{
		// instance.StartXRSDK();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 112));
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 113));
		NullCheck(L_6);
		XRGeneralSettings_StartXRSDK_mC2BAC4CF6D76CC4704B9DAC2601FCF8CDB9A9F12(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 113));
	}

IL_0029:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 114));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::InitXRSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_InitXRSDK_m29F5580C758C0F617E9A2588AA861DE49E4EC779 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_InitXRSDK_m29F5580C758C0F617E9A2588AA861DE49E4EC779_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315B698B2842E2D68111639F66C762E9B89D07CD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_InitXRSDK_m29F5580C758C0F617E9A2588AA861DE49E4EC779_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 115));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 116));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 117));
		// if (XRGeneralSettings.Instance == null || XRGeneralSettings.Instance.m_LoaderManagerInstance == null || XRGeneralSettings.Instance.m_InitManagerOnStart == false)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 118));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 119));
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 119));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 120));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 120));
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 121));
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_2;
		L_2 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 121));
		NullCheck(L_2);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3 = L_2->___m_LoaderManagerInstance_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 122));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 122));
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 123));
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_5;
		L_5 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 123));
		NullCheck(L_5);
		bool L_6 = L_5->___m_InitManagerOnStart_7;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B4_0 = 1;
	}

IL_0030:
	{
		V_0 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 124));
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 125));
		goto IL_0091;
	}

IL_0036:
	{
		// m_XRManager = XRGeneralSettings.Instance.m_LoaderManagerInstance;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 126));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 127));
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_8;
		L_8 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 127));
		NullCheck(L_8);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_9 = L_8->___m_LoaderManagerInstance_6;
		__this->___m_XRManager_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_XRManager_8), (void*)L_9);
		// if (m_XRManager == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 128));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_10 = __this->___m_XRManager_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 129));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 129));
		V_1 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 130));
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0064;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 131));
		// Debug.LogError("Assigned GameObject for XR Management loading is invalid. No XR Providers will be automatically loaded.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 132));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 133));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral315B698B2842E2D68111639F66C762E9B89D07CD, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 133));
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 134));
		goto IL_0091;
	}

IL_0064:
	{
		// m_XRManager.automaticLoading = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 135));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_13 = __this->___m_XRManager_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 136));
		NullCheck(L_13);
		XRManagerSettings_set_automaticLoading_m8F328FA730A8DD8C62D9A8FA8569A2084D530E0E(L_13, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 136));
		// m_XRManager.automaticRunning = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 137));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_14 = __this->___m_XRManager_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 138));
		NullCheck(L_14);
		XRManagerSettings_set_automaticRunning_mAC78998A385194EBEBF00C7337FC018148A40729(L_14, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 138));
		// m_XRManager.InitializeLoaderSync();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 139));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_15 = __this->___m_XRManager_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 140));
		NullCheck(L_15);
		XRManagerSettings_InitializeLoaderSync_m5CE4139417252856F67537554BAD16798E5A8D6D(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 140));
		// m_ProviderIntialized = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 141));
		__this->___m_ProviderIntialized_9 = (bool)1;
	}

IL_0091:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 142));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::StartXRSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_StartXRSDK_mC2BAC4CF6D76CC4704B9DAC2601FCF8CDB9A9F12 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_StartXRSDK_mC2BAC4CF6D76CC4704B9DAC2601FCF8CDB9A9F12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_StartXRSDK_mC2BAC4CF6D76CC4704B9DAC2601FCF8CDB9A9F12_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 143));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 144));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 145));
		// if (m_XRManager != null && m_XRManager.activeLoader != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 146));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_XRManager_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 147));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 147));
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_2 = __this->___m_XRManager_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 148));
		NullCheck(L_2);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_3;
		L_3 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 148));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 149));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 149));
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 150));
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 151));
		// m_XRManager.StartSubsystems();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 152));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_6 = __this->___m_XRManager_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 153));
		NullCheck(L_6);
		XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 153));
		// m_ProviderStarted = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 154));
		__this->___m_ProviderStarted_10 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 155));
	}

IL_003c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 156));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::StopXRSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_StopXRSDK_m1ABC0D7F3AB9422CAE5993A1641836CE0DC394A2 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_StopXRSDK_m1ABC0D7F3AB9422CAE5993A1641836CE0DC394A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_StopXRSDK_m1ABC0D7F3AB9422CAE5993A1641836CE0DC394A2_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 157));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 158));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 159));
		// if (m_XRManager != null && m_XRManager.activeLoader != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 160));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_XRManager_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 161));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 161));
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_2 = __this->___m_XRManager_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 162));
		NullCheck(L_2);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_3;
		L_3 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 162));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 163));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 163));
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 164));
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 165));
		// m_XRManager.StopSubsystems();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 166));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_6 = __this->___m_XRManager_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 167));
		NullCheck(L_6);
		XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 167));
		// m_ProviderStarted = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 168));
		__this->___m_ProviderStarted_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 169));
	}

IL_003c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 170));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::DeInitXRSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_DeInitXRSDK_mF101D7A880E1DC4958ADA2388E7140F4DF7B7EDC (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_DeInitXRSDK_mF101D7A880E1DC4958ADA2388E7140F4DF7B7EDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings_DeInitXRSDK_mF101D7A880E1DC4958ADA2388E7140F4DF7B7EDC_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 171));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 172));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 173));
		// if (m_XRManager != null && m_XRManager.activeLoader != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 174));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_XRManager_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 175));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 175));
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_2 = __this->___m_XRManager_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 176));
		NullCheck(L_2);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_3;
		L_3 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 176));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 177));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 177));
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 178));
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 179));
		// m_XRManager.DeinitializeLoader();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 180));
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_6 = __this->___m_XRManager_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 181));
		NullCheck(L_6);
		XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 181));
		// m_XRManager = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 182));
		__this->___m_XRManager_8 = (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_XRManager_8), (void*)(XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52*)NULL);
		// m_ProviderIntialized = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 183));
		__this->___m_ProviderIntialized_9 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 184));
	}

IL_0043:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 185));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings__ctor_m17F368F5DF52B3CF764C69C6A551DC983874CB59 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings__ctor_m17F368F5DF52B3CF764C69C6A551DC983874CB59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings__ctor_m17F368F5DF52B3CF764C69C6A551DC983874CB59_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 186));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 187));
	{
		// internal XRManagerSettings m_LoaderManagerInstance = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 188));
		__this->___m_LoaderManagerInstance_6 = (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LoaderManagerInstance_6), (void*)(XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52*)NULL);
		// internal bool m_InitManagerOnStart = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 189));
		__this->___m_InitManagerOnStart_7 = (bool)1;
		// private XRManagerSettings m_XRManager = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 190));
		__this->___m_XRManager_8 = (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_XRManager_8), (void*)(XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52*)NULL);
		// private bool m_ProviderIntialized = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 191));
		__this->___m_ProviderIntialized_9 = (bool)0;
		// private bool m_ProviderStarted = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 192));
		__this->___m_ProviderStarted_10 = (bool)0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 193));
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 193));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings__cctor_mA1B586D9E9534249DACCFD9CEA23C69A433F1A44 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings__cctor_mA1B586D9E9534249DACCFD9CEA23C69A433F1A44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A67FBC5ABA519008B443A3446FFD6458D968D4E);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRGeneralSettings__cctor_mA1B586D9E9534249DACCFD9CEA23C69A433F1A44_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 194));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 195));
	{
		// public static string k_SettingsKey = "com.unity.xr.management.loader_settings";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 196));
		((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___k_SettingsKey_4 = _stringLiteral8A67FBC5ABA519008B443A3446FFD6458D968D4E;
		Il2CppCodeGenWriteBarrier((void**)(&((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___k_SettingsKey_4), (void*)_stringLiteral8A67FBC5ABA519008B443A3446FFD6458D968D4E);
		// internal static XRGeneralSettings s_RuntimeSettingsInstance = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 197));
		((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5 = (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5), (void*)(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE*)NULL);
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
// System.Boolean UnityEngine.XR.Management.XRLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoader_Initialize_mA506BDCDF97BA180CDC5BF1945E29CF3766CA859 (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_Initialize_mA506BDCDF97BA180CDC5BF1945E29CF3766CA859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRLoader_Initialize_mA506BDCDF97BA180CDC5BF1945E29CF3766CA859_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 198));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 199));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 200));
		// public virtual bool Initialize() { return true; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 201));
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public virtual bool Initialize() { return true; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 202));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.Management.XRLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoader_Start_m8E73CE045F2B7D7BE46C5670C936880DDF380FD1 (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_Start_m8E73CE045F2B7D7BE46C5670C936880DDF380FD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRLoader_Start_m8E73CE045F2B7D7BE46C5670C936880DDF380FD1_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 203));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 204));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 205));
		// public virtual bool Start() { return true; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 206));
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public virtual bool Start() { return true; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 207));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.Management.XRLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoader_Stop_m398D1FFBE01D294AD5DFB6DB8D807C1DDEA91C97 (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_Stop_m398D1FFBE01D294AD5DFB6DB8D807C1DDEA91C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRLoader_Stop_m398D1FFBE01D294AD5DFB6DB8D807C1DDEA91C97_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 208));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 209));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 210));
		// public virtual bool Stop() { return true; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 211));
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public virtual bool Stop() { return true; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 212));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.Management.XRLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoader_Deinitialize_m001821A3F803AC067C6884A6BBD01DDE378DFAB9 (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_Deinitialize_m001821A3F803AC067C6884A6BBD01DDE378DFAB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRLoader_Deinitialize_m001821A3F803AC067C6884A6BBD01DDE378DFAB9_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 213));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 214));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 215));
		// public virtual bool Deinitialize() { return true; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 216));
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public virtual bool Deinitialize() { return true; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 217));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType> UnityEngine.XR.Management.XRLoader::GetSupportedGraphicsDeviceTypes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894* XRLoader_GetSupportedGraphicsDeviceTypes_m92C8ECDE9FEF211C2B9EB9574B563EE805859753 (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* __this, bool ___0_buildingPlayer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m68F16ADD72EB9C53684357C73187FDE06A47AC36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetSupportedGraphicsDeviceTypes_m92C8ECDE9FEF211C2B9EB9574B563EE805859753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_buildingPlayer));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRLoader_GetSupportedGraphicsDeviceTypes_m92C8ECDE9FEF211C2B9EB9574B563EE805859753_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 218));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 219));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 220));
		// return new List<GraphicsDeviceType>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 221));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 222));
		List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894* L_0 = (List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894*)il2cpp_codegen_object_new(List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m68F16ADD72EB9C53684357C73187FDE06A47AC36(L_0, List_1__ctor_m68F16ADD72EB9C53684357C73187FDE06A47AC36_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 222));
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 223));
		List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.Management.XRLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoader__ctor_m466A0E280C64F30806342A9EEF55801FA88682CE (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader__ctor_m466A0E280C64F30806342A9EEF55801FA88682CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRLoader__ctor_m466A0E280C64F30806342A9EEF55801FA88682CE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Boolean UnityEngine.XR.Management.XRLoaderHelper::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoaderHelper_Deinitialize_m879052C82795CBA2443070F8206798BED6C0C5E7 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m64E5244EC38185D18BDBBD9843498A15D1FE8455_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_Deinitialize_m879052C82795CBA2443070F8206798BED6C0C5E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRLoaderHelper_Deinitialize_m879052C82795CBA2443070F8206798BED6C0C5E7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 327));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 328));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 329));
		// m_SubsystemInstanceMap.Clear();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 330));
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_0 = __this->___m_SubsystemInstanceMap_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 331));
		NullCheck(L_0);
		Dictionary_2_Clear_m64E5244EC38185D18BDBBD9843498A15D1FE8455(L_0, Dictionary_2_Clear_m64E5244EC38185D18BDBBD9843498A15D1FE8455_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 331));
		// return base.Deinitialize();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 332));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 333));
		bool L_1;
		L_1 = XRLoader_Deinitialize_m001821A3F803AC067C6884A6BBD01DDE378DFAB9(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 333));
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 334));
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCCAE8E8620E1F7596EBB9710A40F6D0D520EED0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 335));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 336));
	{
		// protected Dictionary<Type, ISubsystem> m_SubsystemInstanceMap = new Dictionary<Type, ISubsystem>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 337));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 338));
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_0 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)il2cpp_codegen_object_new(Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mCCAE8E8620E1F7596EBB9710A40F6D0D520EED0F(L_0, Dictionary_2__ctor_mCCAE8E8620E1F7596EBB9710A40F6D0D520EED0F_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 338));
		__this->___m_SubsystemInstanceMap_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SubsystemInstanceMap_4), (void*)L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 339));
		XRLoader__ctor_m466A0E280C64F30806342A9EEF55801FA88682CE(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 339));
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
// System.Boolean UnityEngine.XR.Management.XRManagementAnalytics::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagementAnalytics_Initialize_mA0727A2B768833A169E4FBC45B7F6F2A09FAEC78 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagementAnalytics_Initialize_mA0727A2B768833A169E4FBC45B7F6F2A09FAEC78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagementAnalytics_t9A6F8603FBB618B8FEC7A6BF3FD9615C61C1063F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagementAnalytics_Initialize_mA0727A2B768833A169E4FBC45B7F6F2A09FAEC78_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 340));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 341));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 342));
		// return s_Initialized;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 343));
		bool L_0 = ((XRManagementAnalytics_t9A6F8603FBB618B8FEC7A6BF3FD9615C61C1063F_StaticFields*)il2cpp_codegen_static_fields_for(XRManagementAnalytics_t9A6F8603FBB618B8FEC7A6BF3FD9615C61C1063F_il2cpp_TypeInfo_var))->___s_Initialized_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 344));
		bool L_1 = V_0;
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
// Conversion methods for marshalling of: UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent
IL2CPP_EXTERN_C void BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E_marshal_pinvoke(const BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E& unmarshaled, BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___assigned_loaders_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'assigned_loaders' of type 'BuildEvent'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___assigned_loaders_3Exception, NULL);
}
IL2CPP_EXTERN_C void BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E_marshal_pinvoke_back(const BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E_marshaled_pinvoke& marshaled, BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E& unmarshaled)
{
	Exception_t* ___assigned_loaders_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'assigned_loaders' of type 'BuildEvent'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___assigned_loaders_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent
IL2CPP_EXTERN_C void BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E_marshal_pinvoke_cleanup(BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent
IL2CPP_EXTERN_C void BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E_marshal_com(const BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E& unmarshaled, BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E_marshaled_com& marshaled)
{
	Exception_t* ___assigned_loaders_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'assigned_loaders' of type 'BuildEvent'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___assigned_loaders_3Exception, NULL);
}
IL2CPP_EXTERN_C void BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E_marshal_com_back(const BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E_marshaled_com& marshaled, BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E& unmarshaled)
{
	Exception_t* ___assigned_loaders_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'assigned_loaders' of type 'BuildEvent'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___assigned_loaders_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent
IL2CPP_EXTERN_C void BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E_marshal_com_cleanup(BuildEvent_tE21D64E5354C87B5E40D2D2648C677B96CCA811E_marshaled_com& marshaled)
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
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_automaticLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_get_automaticLoading_mF28DC51D46409F4D75DCF53E38C8E6B28444B01A (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_get_automaticLoading_mF28DC51D46409F4D75DCF53E38C8E6B28444B01A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_get_automaticLoading_mF28DC51D46409F4D75DCF53E38C8E6B28444B01A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 345));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 346));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 347));
		// get { return m_AutomaticLoading; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 348));
		bool L_0 = __this->___m_AutomaticLoading_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_AutomaticLoading; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 349));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::set_automaticLoading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_set_automaticLoading_m8F328FA730A8DD8C62D9A8FA8569A2084D530E0E (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_set_automaticLoading_m8F328FA730A8DD8C62D9A8FA8569A2084D530E0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_set_automaticLoading_m8F328FA730A8DD8C62D9A8FA8569A2084D530E0E_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 350));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 351));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 352));
		// set { m_AutomaticLoading = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 353));
		bool L_0 = ___0_value;
		__this->___m_AutomaticLoading_6 = L_0;
		// set { m_AutomaticLoading = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 354));
		return;
	}
}
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_automaticRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_get_automaticRunning_mE6F4B5875CF9B098B0B20388E77B651EB633D166 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_get_automaticRunning_mE6F4B5875CF9B098B0B20388E77B651EB633D166_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_get_automaticRunning_mE6F4B5875CF9B098B0B20388E77B651EB633D166_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 355));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 356));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 357));
		// get { return m_AutomaticRunning; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 358));
		bool L_0 = __this->___m_AutomaticRunning_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_AutomaticRunning; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 359));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::set_automaticRunning(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_set_automaticRunning_mAC78998A385194EBEBF00C7337FC018148A40729 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_set_automaticRunning_mAC78998A385194EBEBF00C7337FC018148A40729_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_set_automaticRunning_mAC78998A385194EBEBF00C7337FC018148A40729_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 360));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 361));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 362));
		// set { m_AutomaticRunning = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 363));
		bool L_0 = ___0_value;
		__this->___m_AutomaticRunning_7 = L_0;
		// set { m_AutomaticRunning = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 364));
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_loaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* XRManagerSettings_get_loaders_m485A1CD420B07D57B9E2856795BDB933389322D0 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_get_loaders_m485A1CD420B07D57B9E2856795BDB933389322D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_get_loaders_m485A1CD420B07D57B9E2856795BDB933389322D0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 365));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 366));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 367));
		// get { return m_Loaders; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 368));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Loaders; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 369));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 370));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 371));
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 372));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_isInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 373));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 374));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 375));
		// get { return m_InitializationComplete; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 376));
		bool L_0 = __this->___m_InitializationComplete_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_InitializationComplete; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 377));
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 378));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 379));
	{
		// public XRLoader activeLoader { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 380));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::set_activeLoader(UnityEngine.XR.Management.XRLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_set_activeLoader_m85857974C574787278D7B4E861AD235F2D49726A (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_set_activeLoader_m85857974C574787278D7B4E861AD235F2D49726A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_set_activeLoader_m85857974C574787278D7B4E861AD235F2D49726A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 381));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 382));
	{
		// public XRLoader activeLoader { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 383));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = ___0_value;
		__this->___U3CactiveLoaderU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CactiveLoaderU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::InitializeLoaderSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_InitializeLoaderSync_m5CE4139417252856F67537554BAD16798E5A8D6D (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m558B2F73F0E5D8B4B7247F8068645077549A3490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m08EA2E51B87E7E0DE5F72486EDCADC812011B8CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4D452A399E7790870BCDE47FD637EABEC40C4884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA43D4F851A025BB5362598C2A735F9C2495141BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_InitializeLoaderSync_m5CE4139417252856F67537554BAD16798E5A8D6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral890B268A2AFBDA04F33348E7C0FF8600A336DABE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_InitializeLoaderSync_m5CE4139417252856F67537554BAD16798E5A8D6D_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 390));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 391));
	int32_t G_B8_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 392));
		// if (activeLoader != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 393));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 394));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0;
		L_0 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 394));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 395));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 395));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 396));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 397));
		// Debug.LogWarning(
		//     "XR Management has already initialized an active loader in this scene." +
		//     " Please make sure to stop all subsystems and deinitialize the active loader before initializing a new one.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 398));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 399));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral890B268A2AFBDA04F33348E7C0FF8600A336DABE, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 399));
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 400));
		goto IL_0091;
	}

IL_001f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 401));
		// foreach (var loader in currentLoaders)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 402));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 403));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_3;
		L_3 = XRManagerSettings_get_currentLoaders_m3A4FF4CA5168E58C4DAB89B33972C1EE83FF2237(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 403));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 404));
		NullCheck(L_3);
		Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A L_4;
		L_4 = List_1_GetEnumerator_mA43D4F851A025BB5362598C2A735F9C2495141BF(L_3, List_1_GetEnumerator_mA43D4F851A025BB5362598C2A735F9C2495141BF_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 404));
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 426));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 427));
				Enumerator_Dispose_m558B2F73F0E5D8B4B7247F8068645077549A3490((&V_1), Enumerator_Dispose_m558B2F73F0E5D8B4B7247F8068645077549A3490_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 427));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 405));
				goto IL_006f_1;
			}

IL_002e_1:
			{
				// foreach (var loader in currentLoaders)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 406));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 407));
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_5;
				L_5 = Enumerator_get_Current_m4D452A399E7790870BCDE47FD637EABEC40C4884_inline((&V_1), Enumerator_get_Current_m4D452A399E7790870BCDE47FD637EABEC40C4884_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 407));
				V_2 = L_5;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 408));
				// if (loader != null)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 409));
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_6 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 410));
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_7;
				L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 410));
				V_3 = L_7;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 411));
				bool L_8 = V_3;
				if (!L_8)
				{
					goto IL_006e_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 412));
				// if (CheckGraphicsAPICompatibility(loader) && loader.Initialize())
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 413));
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_9 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 414));
				bool L_10;
				L_10 = XRManagerSettings_CheckGraphicsAPICompatibility_m63AE4A622C2B137618B747F25A7591CBD0B9496B(__this, L_9, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 414));
				if (!L_10)
				{
					goto IL_0054_1;
				}
			}
			{
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_11 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 415));
				NullCheck(L_11);
				bool L_12;
				L_12 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.XR.Management.XRLoader::Initialize() */, L_11);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 415));
				G_B8_0 = ((int32_t)(L_12));
				goto IL_0055_1;
			}

IL_0054_1:
			{
				G_B8_0 = 0;
			}

IL_0055_1:
			{
				V_4 = (bool)G_B8_0;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 416));
				bool L_13 = V_4;
				if (!L_13)
				{
					goto IL_006d_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 417));
				// activeLoader = loader;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 418));
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_14 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 419));
				XRManagerSettings_set_activeLoader_m85857974C574787278D7B4E861AD235F2D49726A_inline(__this, L_14, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 419));
				// m_InitializationComplete = true;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 420));
				__this->___m_InitializationComplete_4 = (bool)1;
				// return;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 421));
				goto IL_0091;
			}

IL_006d_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 422));
			}

IL_006e_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 423));
			}

IL_006f_1:
			{
				// foreach (var loader in currentLoaders)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 424));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 425));
				bool L_15;
				L_15 = Enumerator_MoveNext_m08EA2E51B87E7E0DE5F72486EDCADC812011B8CB((&V_1), Enumerator_MoveNext_m08EA2E51B87E7E0DE5F72486EDCADC812011B8CB_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 425));
				if (L_15)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_0089;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0089:
	{
		// activeLoader = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 428));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 429));
		XRManagerSettings_set_activeLoader_m85857974C574787278D7B4E861AD235F2D49726A_inline(__this, (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 429));
	}

IL_0091:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 430));
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.XR.Management.XRManagerSettings::InitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7* L_0 = (U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7*)il2cpp_codegen_object_new(U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeLoaderU3Ed__24__ctor_m55EFC72939B5E8ABAF9E70DD0878A80B0280C97A(L_0, 0, NULL);
		U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::TryAddLoader(UnityEngine.XR.Management.XRLoader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_TryAddLoader_m1CF7DEB07D6E67F3D788B41FE0404DAE19F38031 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___0_loader, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mF996FA749C02C7CE9989F2AB8A8D3F2DEAA2FECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m25A9FEF01031CAB6CD40A1E9A04980FC5CF73D4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m18DD7A4EBEE7EDA86FB5E31B652747FFFD02AD92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m2D400B5F884E476831E32BD47C6A2E91E67E4462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m27C45E7556A637BBF6DF0336E42FBD483FA1AC67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_TryAddLoader_m1CF7DEB07D6E67F3D788B41FE0404DAE19F38031_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_loader), (&___1_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_TryAddLoader_m1CF7DEB07D6E67F3D788B41FE0404DAE19F38031_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 431));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 432));
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 433));
		// if (loader == null || currentLoaders.Contains(loader))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 434));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = ___0_loader;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 435));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 435));
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 436));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_2;
		L_2 = XRManagerSettings_get_currentLoaders_m3A4FF4CA5168E58C4DAB89B33972C1EE83FF2237(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 436));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_3 = ___0_loader;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 437));
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Contains_m18DD7A4EBEE7EDA86FB5E31B652747FFFD02AD92(L_2, L_3, List_1_Contains_m18DD7A4EBEE7EDA86FB5E31B652747FFFD02AD92_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 437));
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 438));
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 439));
		V_1 = (bool)0;
		goto IL_0075;
	}

IL_0021:
	{
		// if (!m_RegisteredLoaders.Contains(loader))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 440));
		HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* L_6 = __this->___m_RegisteredLoaders_9;
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_7 = ___0_loader;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 441));
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Contains_mF996FA749C02C7CE9989F2AB8A8D3F2DEAA2FECC(L_6, L_7, HashSet_1_Contains_mF996FA749C02C7CE9989F2AB8A8D3F2DEAA2FECC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 441));
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 442));
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 443));
		V_1 = (bool)0;
		goto IL_0075;
	}

IL_0038:
	{
		// if (index < 0 || index >= currentLoaders.Count)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 444));
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 445));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_12;
		L_12 = XRManagerSettings_get_currentLoaders_m3A4FF4CA5168E58C4DAB89B33972C1EE83FF2237(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 445));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 446));
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m27C45E7556A637BBF6DF0336E42FBD483FA1AC67_inline(L_12, List_1_get_Count_m27C45E7556A637BBF6DF0336E42FBD483FA1AC67_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 446));
		G_B10_0 = ((((int32_t)((((int32_t)L_11) < ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B10_0 = 1;
	}

IL_0050:
	{
		V_3 = (bool)G_B10_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 447));
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0063;
		}
	}
	{
		// currentLoaders.Add(loader);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 448));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 449));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_15;
		L_15 = XRManagerSettings_get_currentLoaders_m3A4FF4CA5168E58C4DAB89B33972C1EE83FF2237(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 449));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_16 = ___0_loader;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 450));
		NullCheck(L_15);
		List_1_Add_m25A9FEF01031CAB6CD40A1E9A04980FC5CF73D4A_inline(L_15, L_16, List_1_Add_m25A9FEF01031CAB6CD40A1E9A04980FC5CF73D4A_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 450));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 451));
		goto IL_0071;
	}

IL_0063:
	{
		// currentLoaders.Insert(index, loader);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 452));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 453));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_17;
		L_17 = XRManagerSettings_get_currentLoaders_m3A4FF4CA5168E58C4DAB89B33972C1EE83FF2237(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 453));
		int32_t L_18 = ___1_index;
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_19 = ___0_loader;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 454));
		NullCheck(L_17);
		List_1_Insert_m2D400B5F884E476831E32BD47C6A2E91E67E4462(L_17, L_18, L_19, List_1_Insert_m2D400B5F884E476831E32BD47C6A2E91E67E4462_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 454));
	}

IL_0071:
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 455));
		V_1 = (bool)1;
		goto IL_0075;
	}

IL_0075:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 456));
		bool L_20 = V_1;
		return L_20;
	}
}
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::TryRemoveLoader(UnityEngine.XR.Management.XRLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_TryRemoveLoader_m29479875EF3C4773D5D74661131A06C2E8736BB0 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___0_loader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m18DD7A4EBEE7EDA86FB5E31B652747FFFD02AD92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m189B7D737C00C144F6DB563BE972679CFD0B82B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_TryRemoveLoader_m29479875EF3C4773D5D74661131A06C2E8736BB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_loader));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_TryRemoveLoader_m29479875EF3C4773D5D74661131A06C2E8736BB0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 457));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 458));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 459));
		// var removedLoader = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 460));
		V_0 = (bool)1;
		// if (currentLoaders.Contains(loader))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 461));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 462));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0;
		L_0 = XRManagerSettings_get_currentLoaders_m3A4FF4CA5168E58C4DAB89B33972C1EE83FF2237(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 462));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_1 = ___0_loader;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 463));
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m18DD7A4EBEE7EDA86FB5E31B652747FFFD02AD92(L_0, L_1, List_1_Contains_m18DD7A4EBEE7EDA86FB5E31B652747FFFD02AD92_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 463));
		V_1 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 464));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// removedLoader = currentLoaders.Remove(loader);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 465));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 466));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_4;
		L_4 = XRManagerSettings_get_currentLoaders_m3A4FF4CA5168E58C4DAB89B33972C1EE83FF2237(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 466));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_5 = ___0_loader;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 467));
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Remove_m189B7D737C00C144F6DB563BE972679CFD0B82B1(L_4, L_5, List_1_Remove_m189B7D737C00C144F6DB563BE972679CFD0B82B1_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 467));
		V_0 = L_6;
	}

IL_0020:
	{
		// return removedLoader;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 468));
		bool L_7 = V_0;
		V_2 = L_7;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 469));
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::TrySetLoaders(System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_TrySetLoaders_mD2EAE278D90F867E6EA02A75D60F09FD1EE13C30 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___0_reorderedLoaders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m558B2F73F0E5D8B4B7247F8068645077549A3490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m08EA2E51B87E7E0DE5F72486EDCADC812011B8CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4D452A399E7790870BCDE47FD637EABEC40C4884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m979FD941B8820FF2363CA35F3B9F6ECF6C660237_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA43D4F851A025BB5362598C2A735F9C2495141BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4479B2D3BCC34E9CCCA97A4FF0E662BBA3631028_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_TrySetLoaders_mD2EAE278D90F867E6EA02A75D60F09FD1EE13C30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* V_0 = NULL;
	Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_reorderedLoaders));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_TrySetLoaders_mD2EAE278D90F867E6EA02A75D60F09FD1EE13C30_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 470));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 471));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 472));
		// var originalLoaders = new List<XRLoader>(activeLoaders);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 473));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 474));
		RuntimeObject* L_0;
		L_0 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 474));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 475));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_1 = (List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822*)il2cpp_codegen_object_new(List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m4479B2D3BCC34E9CCCA97A4FF0E662BBA3631028(L_1, L_0, List_1__ctor_m4479B2D3BCC34E9CCCA97A4FF0E662BBA3631028_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 475));
		V_0 = L_1;
		// currentLoaders.Clear();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 476));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 477));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_2;
		L_2 = XRManagerSettings_get_currentLoaders_m3A4FF4CA5168E58C4DAB89B33972C1EE83FF2237(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 477));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 478));
		NullCheck(L_2);
		List_1_Clear_m979FD941B8820FF2363CA35F3B9F6ECF6C660237_inline(L_2, List_1_Clear_m979FD941B8820FF2363CA35F3B9F6ECF6C660237_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 478));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 479));
		// foreach (var loader in reorderedLoaders)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 480));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_3 = ___0_reorderedLoaders;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 481));
		NullCheck(L_3);
		Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A L_4;
		L_4 = List_1_GetEnumerator_mA43D4F851A025BB5362598C2A735F9C2495141BF(L_3, List_1_GetEnumerator_mA43D4F851A025BB5362598C2A735F9C2495141BF_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 481));
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 496));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 497));
				Enumerator_Dispose_m558B2F73F0E5D8B4B7247F8068645077549A3490((&V_1), Enumerator_Dispose_m558B2F73F0E5D8B4B7247F8068645077549A3490_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 497));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 482));
				goto IL_004a_1;
			}

IL_0023_1:
			{
				// foreach (var loader in reorderedLoaders)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 483));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 484));
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_5;
				L_5 = Enumerator_get_Current_m4D452A399E7790870BCDE47FD637EABEC40C4884_inline((&V_1), Enumerator_get_Current_m4D452A399E7790870BCDE47FD637EABEC40C4884_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 484));
				V_2 = L_5;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 485));
				// if (!TryAddLoader(loader))
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 486));
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_6 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 487));
				bool L_7;
				L_7 = XRManagerSettings_TryAddLoader_m1CF7DEB07D6E67F3D788B41FE0404DAE19F38031(__this, L_6, (-1), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 487));
				V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 488));
				bool L_8 = V_3;
				if (!L_8)
				{
					goto IL_0049_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 489));
				// currentLoaders = originalLoaders;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 490));
				List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_9 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 491));
				XRManagerSettings_set_currentLoaders_mBF7D7DE30A657C0B8A145FBE84104797D668454A(__this, L_9, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 491));
				// return false;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 492));
				V_4 = (bool)0;
				goto IL_0069;
			}

IL_0049_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 493));
			}

IL_004a_1:
			{
				// foreach (var loader in reorderedLoaders)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 494));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 495));
				bool L_10;
				L_10 = Enumerator_MoveNext_m08EA2E51B87E7E0DE5F72486EDCADC812011B8CB((&V_1), Enumerator_MoveNext_m08EA2E51B87E7E0DE5F72486EDCADC812011B8CB_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 495));
				if (L_10)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_0064;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 498));
		V_4 = (bool)1;
		goto IL_0069;
	}

IL_0069:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 499));
		bool L_11 = V_4;
		return L_11;
	}
}
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::CheckGraphicsAPICompatibility(UnityEngine.XR.Management.XRLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_CheckGraphicsAPICompatibility_m63AE4A622C2B137618B747F25A7591CBD0B9496B (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___0_loader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsDeviceType_t65150C9055D1BC1E377E894972629BF22BA2CBF5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsDeviceType_t65150C9055D1BC1E377E894972629BF22BA2CBF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m20C41780B854256B07BFB12C68F18E85A9558B4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2B9F59DF239BCCE4F6C768CBC1E33BF4DE128F6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_CheckGraphicsAPICompatibility_m63AE4A622C2B137618B747F25A7591CBD0B9496B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B8B436F01039B99374349DB664935E4E9FA600B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_loader));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_CheckGraphicsAPICompatibility_m63AE4A622C2B137618B747F25A7591CBD0B9496B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 500));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 501));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 502));
		// GraphicsDeviceType deviceType = SystemInfo.graphicsDeviceType;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 503));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 504));
		int32_t L_0;
		L_0 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 504));
		V_0 = L_0;
		// List<GraphicsDeviceType> supportedDeviceTypes = loader.GetSupportedGraphicsDeviceTypes(false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 505));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_1 = ___0_loader;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 506));
		NullCheck(L_1);
		List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894* L_2;
		L_2 = VirtualFuncInvoker1< List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894*, bool >::Invoke(9 /* System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType> UnityEngine.XR.Management.XRLoader::GetSupportedGraphicsDeviceTypes(System.Boolean) */, L_1, (bool)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 506));
		V_1 = L_2;
		// if (supportedDeviceTypes.Count > 0 && !supportedDeviceTypes.Contains(deviceType))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 507));
		List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894* L_3 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 508));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m2B9F59DF239BCCE4F6C768CBC1E33BF4DE128F6C_inline(L_3, List_1_get_Count_m2B9F59DF239BCCE4F6C768CBC1E33BF4DE128F6C_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 508));
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		List_1_tDF4AF78E7C25C69EFBD24C60518073B6B9CCC894* L_5 = V_1;
		int32_t L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 509));
		NullCheck(L_5);
		bool L_7;
		L_7 = List_1_Contains_m20C41780B854256B07BFB12C68F18E85A9558B4E(L_5, L_6, List_1_Contains_m20C41780B854256B07BFB12C68F18E85A9558B4E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 509));
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_2 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 510));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 511));
		// Debug.LogWarning(String.Format("The {0} does not support the initialized graphics device, {1}. Please change the preffered Graphics API in PlayerSettings. Attempting to start the next XR loader.", loader.name, deviceType.ToString()));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 512));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_9 = ___0_loader;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 513));
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 513));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 514));
		Il2CppFakeBox<int32_t> L_11(GraphicsDeviceType_t65150C9055D1BC1E377E894972629BF22BA2CBF5_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_12;
		L_12 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 514));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 515));
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral6B8B436F01039B99374349DB664935E4E9FA600B, L_10, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 515));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 516));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 516));
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 517));
		V_3 = (bool)0;
		goto IL_0055;
	}

IL_0051:
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 518));
		V_3 = (bool)1;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 519));
		bool L_14 = V_3;
		return L_14;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE0ABAD544C4FF6309990ACB67971500C1591984);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 520));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 521));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 522));
		// if (!m_InitializationComplete)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 523));
		bool L_0 = __this->___m_InitializationComplete_4;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 524));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 525));
		// Debug.LogWarning(
		//     "Call to StartSubsystems without an initialized manager." +
		//     "Please make sure wait for initialization to complete before calling this API.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 526));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 527));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralAE0ABAD544C4FF6309990ACB67971500C1591984, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 527));
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 528));
		goto IL_003a;
	}

IL_001c:
	{
		// if (activeLoader != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 529));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 530));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_2;
		L_2 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 530));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 531));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 531));
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 532));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 533));
		// activeLoader.Start();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 534));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 535));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_5;
		L_5 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 535));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 536));
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.XR.Management.XRLoader::Start() */, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 536));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 537));
	}

IL_003a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 538));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::StopSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46E098C88DA5E70C12C778EED75B14DE754DBDB6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 539));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 540));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 541));
		// if (!m_InitializationComplete)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 542));
		bool L_0 = __this->___m_InitializationComplete_4;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 543));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 544));
		// Debug.LogWarning(
		//     "Call to StopSubsystems without an initialized manager." +
		//     "Please make sure wait for initialization to complete before calling this API.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 545));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 546));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral46E098C88DA5E70C12C778EED75B14DE754DBDB6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 546));
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 547));
		goto IL_003a;
	}

IL_001c:
	{
		// if (activeLoader != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 548));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 549));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_2;
		L_2 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 549));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 550));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 550));
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 551));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 552));
		// activeLoader.Stop();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 553));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 554));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_5;
		L_5 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 554));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 555));
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.XR.Management.XRLoader::Stop() */, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 555));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 556));
	}

IL_003a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 557));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral382C2D644BFA222F1F3E9ECB531AE6F3D95044FF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 558));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 559));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 560));
		// if (!m_InitializationComplete)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 561));
		bool L_0 = __this->___m_InitializationComplete_4;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 562));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 563));
		// Debug.LogWarning(
		//     "Call to DeinitializeLoader without an initialized manager." +
		//     "Please make sure wait for initialization to complete before calling this API.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 564));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 565));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral382C2D644BFA222F1F3E9ECB531AE6F3D95044FF, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 565));
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 566));
		goto IL_0050;
	}

IL_001c:
	{
		// StopSubsystems();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 567));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 568));
		XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 568));
		// if (activeLoader != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 569));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 570));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_2;
		L_2 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 570));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 571));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 571));
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 572));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 573));
		// activeLoader.Deinitialize();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 574));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 575));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_5;
		L_5 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 575));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 576));
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.XR.Management.XRLoader::Deinitialize() */, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 576));
		// activeLoader = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 577));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 578));
		XRManagerSettings_set_activeLoader_m85857974C574787278D7B4E861AD235F2D49726A_inline(__this, (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 578));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 579));
	}

IL_0049:
	{
		// m_InitializationComplete = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 580));
		__this->___m_InitializationComplete_4 = (bool)0;
	}

IL_0050:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 581));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_Start_mBF2ADCCC6377C8A7DDA7C462313DAD00DC00382C (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_Start_mBF2ADCCC6377C8A7DDA7C462313DAD00DC00382C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_Start_mBF2ADCCC6377C8A7DDA7C462313DAD00DC00382C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 582));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 583));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 584));
		// if (automaticLoading && automaticRunning)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 585));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 586));
		bool L_0;
		L_0 = XRManagerSettings_get_automaticLoading_mF28DC51D46409F4D75DCF53E38C8E6B28444B01A(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 586));
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 587));
		bool L_1;
		L_1 = XRManagerSettings_get_automaticRunning_mE6F4B5875CF9B098B0B20388E77B651EB633D166(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 587));
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 588));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 589));
		// StartSubsystems();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 590));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 591));
		XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 591));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 592));
	}

IL_001f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 593));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_OnDisable_m31F1208BDDBDC01D75AAC4063C0F8765269CA408 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_OnDisable_m31F1208BDDBDC01D75AAC4063C0F8765269CA408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_OnDisable_m31F1208BDDBDC01D75AAC4063C0F8765269CA408_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 594));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 595));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 596));
		// if (automaticLoading && automaticRunning)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 597));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 598));
		bool L_0;
		L_0 = XRManagerSettings_get_automaticLoading_mF28DC51D46409F4D75DCF53E38C8E6B28444B01A(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 598));
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 599));
		bool L_1;
		L_1 = XRManagerSettings_get_automaticRunning_mE6F4B5875CF9B098B0B20388E77B651EB633D166(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 599));
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 600));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 601));
		// StopSubsystems();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 602));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 603));
		XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 603));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 604));
	}

IL_001f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 605));
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_OnDestroy_m88AE1F5A6B819CF07D249F6A6D3A7809C4DBF9E2 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_OnDestroy_m88AE1F5A6B819CF07D249F6A6D3A7809C4DBF9E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_OnDestroy_m88AE1F5A6B819CF07D249F6A6D3A7809C4DBF9E2_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 606));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 607));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 608));
		// if (automaticLoading)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 609));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 610));
		bool L_0;
		L_0 = XRManagerSettings_get_automaticLoading_mF28DC51D46409F4D75DCF53E38C8E6B28444B01A(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 610));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 611));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 612));
		// DeinitializeLoader();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 613));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 614));
		XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 614));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 615));
	}

IL_0014:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 616));
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_currentLoaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* XRManagerSettings_get_currentLoaders_m3A4FF4CA5168E58C4DAB89B33972C1EE83FF2237 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_get_currentLoaders_m3A4FF4CA5168E58C4DAB89B33972C1EE83FF2237_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_get_currentLoaders_m3A4FF4CA5168E58C4DAB89B33972C1EE83FF2237_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 617));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 618));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 619));
		// get { return m_Loaders; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 620));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Loaders; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 621));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::set_currentLoaders(System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_set_currentLoaders_mBF7D7DE30A657C0B8A145FBE84104797D668454A (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_set_currentLoaders_mBF7D7DE30A657C0B8A145FBE84104797D668454A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_set_currentLoaders_mBF7D7DE30A657C0B8A145FBE84104797D668454A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 622));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 623));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 624));
		// set { m_Loaders = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 625));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = ___0_value;
		__this->___m_Loaders_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Loaders_8), (void*)L_0);
		// set { m_Loaders = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 626));
		return;
	}
}
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_registeredLoaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* XRManagerSettings_get_registeredLoaders_m9FDA9ABA6EE526EC99C892488869777BF13E4D1B (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_get_registeredLoaders_m9FDA9ABA6EE526EC99C892488869777BF13E4D1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_get_registeredLoaders_m9FDA9ABA6EE526EC99C892488869777BF13E4D1B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 627));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 628));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 629));
		// get { return m_RegisteredLoaders; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 630));
		HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* L_0 = __this->___m_RegisteredLoaders_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_RegisteredLoaders; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 631));
		HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings__ctor_m516BC0C114BD8652EAE41D77BF961C5521520317 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mB5674CAFBC5EEF5CCCB52956A8F11D308F13D868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m54789A96B9085519EE4649A5AAA202B639232BAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings__ctor_m516BC0C114BD8652EAE41D77BF961C5521520317_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings__ctor_m516BC0C114BD8652EAE41D77BF961C5521520317_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 632));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 633));
	{
		// bool m_InitializationComplete = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 634));
		__this->___m_InitializationComplete_4 = (bool)0;
		// bool m_RequiresSettingsUpdate = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 635));
		__this->___m_RequiresSettingsUpdate_5 = (bool)0;
		// bool m_AutomaticLoading = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 636));
		__this->___m_AutomaticLoading_6 = (bool)0;
		// bool m_AutomaticRunning = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 637));
		__this->___m_AutomaticRunning_7 = (bool)0;
		// List<XRLoader> m_Loaders = new List<XRLoader>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 638));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 639));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = (List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822*)il2cpp_codegen_object_new(List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m54789A96B9085519EE4649A5AAA202B639232BAD(L_0, List_1__ctor_m54789A96B9085519EE4649A5AAA202B639232BAD_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 639));
		__this->___m_Loaders_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Loaders_8), (void*)L_0);
		// HashSet<XRLoader> m_RegisteredLoaders = new HashSet<XRLoader>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 640));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 641));
		HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* L_1 = (HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F*)il2cpp_codegen_object_new(HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_mB5674CAFBC5EEF5CCCB52956A8F11D308F13D868(L_1, HashSet_1__ctor_mB5674CAFBC5EEF5CCCB52956A8F11D308F13D868_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 641));
		__this->___m_RegisteredLoaders_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RegisteredLoaders_9), (void*)L_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 642));
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 642));
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
// System.Void UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLoaderU3Ed__24__ctor_m55EFC72939B5E8ABAF9E70DD0878A80B0280C97A (U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeLoaderU3Ed__24__ctor_m55EFC72939B5E8ABAF9E70DD0878A80B0280C97A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CInitializeLoaderU3Ed__24__ctor_m55EFC72939B5E8ABAF9E70DD0878A80B0280C97A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLoaderU3Ed__24_System_IDisposable_Dispose_mB850632340F899B06CCC956A3557DECF8BCC7AE8 (U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeLoaderU3Ed__24_System_IDisposable_Dispose_mB850632340F899B06CCC956A3557DECF8BCC7AE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CInitializeLoaderU3Ed__24_System_IDisposable_Dispose_mB850632340F899B06CCC956A3557DECF8BCC7AE8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				U3CInitializeLoaderU3Ed__24_U3CU3Em__Finally1_m6CCA9E68B1BF2344768A755069F9B9CD799E277C(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInitializeLoaderU3Ed__24_MoveNext_m0D3BCBEFAE33727F17874481BF551C2741132003 (U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m08EA2E51B87E7E0DE5F72486EDCADC812011B8CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4D452A399E7790870BCDE47FD637EABEC40C4884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA43D4F851A025BB5362598C2A735F9C2495141BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeLoaderU3Ed__24_MoveNext_m0D3BCBEFAE33727F17874481BF551C2741132003_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral890B268A2AFBDA04F33348E7C0FF8600A336DABE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CInitializeLoaderU3Ed__24_MoveNext_m0D3BCBEFAE33727F17874481BF551C2741132003_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 643));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 644));
	int32_t G_B14_0 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0143:
			{// begin fault (depth: 1)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 687));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 688));
				U3CInitializeLoaderU3Ed__24_System_IDisposable_Dispose_mB850632340F899B06CCC956A3557DECF8BCC7AE8(__this, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 688));
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 645));
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0019_1;
			}

IL_0012_1:
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				goto IL_00f4_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_014b;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 646));
				// if (activeLoader != null)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 647));
				XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3 = __this->___U3CU3E4__this_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 648));
				NullCheck(L_3);
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_4;
				L_4 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_3, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 648));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 649));
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 649));
				V_2 = L_5;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 650));
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_0050_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 651));
				// Debug.LogWarning(
				//     "XR Management has already initialized an active loader in this scene." +
				//     " Please make sure to stop all subsystems and deinitialize the active loader before initializing a new one.");
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 652));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 653));
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral890B268A2AFBDA04F33348E7C0FF8600A336DABE, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 653));
				// yield break;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 654));
				V_0 = (bool)0;
				goto IL_014b;
			}

IL_0050_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 655));
				// foreach (var loader in currentLoaders)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 656));
				XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_7 = __this->___U3CU3E4__this_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 657));
				NullCheck(L_7);
				List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_8;
				L_8 = XRManagerSettings_get_currentLoaders_m3A4FF4CA5168E58C4DAB89B33972C1EE83FF2237(L_7, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 657));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 658));
				NullCheck(L_8);
				Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A L_9;
				L_9 = List_1_GetEnumerator_mA43D4F851A025BB5362598C2A735F9C2495141BF(L_8, List_1_GetEnumerator_mA43D4F851A025BB5362598C2A735F9C2495141BF_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 658));
				__this->___U3CU3Es__1_3 = L_9;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__1_3))->____list_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__1_3))->____current_3), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 659));
				goto IL_0104_1;
			}

IL_0074_1:
			{
				// foreach (var loader in currentLoaders)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 660));
				Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A* L_10 = (&__this->___U3CU3Es__1_3);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 661));
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_11;
				L_11 = Enumerator_get_Current_m4D452A399E7790870BCDE47FD637EABEC40C4884_inline(L_10, Enumerator_get_Current_m4D452A399E7790870BCDE47FD637EABEC40C4884_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 661));
				__this->___U3CloaderU3E5__2_4 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloaderU3E5__2_4), (void*)L_11);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 662));
				// if (loader != null)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 663));
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_12 = __this->___U3CloaderU3E5__2_4;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 664));
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_13;
				L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 664));
				V_3 = L_13;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 665));
				bool L_14 = V_3;
				if (!L_14)
				{
					goto IL_00e2_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 666));
				// if (CheckGraphicsAPICompatibility(loader) && loader.Initialize())
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 667));
				XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_15 = __this->___U3CU3E4__this_2;
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_16 = __this->___U3CloaderU3E5__2_4;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 668));
				NullCheck(L_15);
				bool L_17;
				L_17 = XRManagerSettings_CheckGraphicsAPICompatibility_m63AE4A622C2B137618B747F25A7591CBD0B9496B(L_15, L_16, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 668));
				if (!L_17)
				{
					goto IL_00b7_1;
				}
			}
			{
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_18 = __this->___U3CloaderU3E5__2_4;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 669));
				NullCheck(L_18);
				bool L_19;
				L_19 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.XR.Management.XRLoader::Initialize() */, L_18);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 669));
				G_B14_0 = ((int32_t)(L_19));
				goto IL_00b8_1;
			}

IL_00b7_1:
			{
				G_B14_0 = 0;
			}

IL_00b8_1:
			{
				V_4 = (bool)G_B14_0;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 670));
				bool L_20 = V_4;
				if (!L_20)
				{
					goto IL_00e1_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 671));
				// activeLoader = loader;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 672));
				XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_21 = __this->___U3CU3E4__this_2;
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_22 = __this->___U3CloaderU3E5__2_4;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 673));
				NullCheck(L_21);
				XRManagerSettings_set_activeLoader_m85857974C574787278D7B4E861AD235F2D49726A_inline(L_21, L_22, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 673));
				// m_InitializationComplete = true;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 674));
				XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_23 = __this->___U3CU3E4__this_2;
				NullCheck(L_23);
				L_23->___m_InitializationComplete_4 = (bool)1;
				// yield break;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 675));
				V_0 = (bool)0;
				goto IL_011d_1;
			}

IL_00e1_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 676));
			}

IL_00e2_1:
			{
				// yield return null;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 677));
				__this->___U3CU3E2__current_1 = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_014b;
			}

IL_00f4_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 678));
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 679));
				__this->___U3CloaderU3E5__2_4 = (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloaderU3E5__2_4), (void*)(XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976*)NULL);
			}

IL_0104_1:
			{
				// foreach (var loader in currentLoaders)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 680));
				Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A* L_24 = (&__this->___U3CU3Es__1_3);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 681));
				bool L_25;
				L_25 = Enumerator_MoveNext_m08EA2E51B87E7E0DE5F72486EDCADC812011B8CB(L_24, Enumerator_MoveNext_m08EA2E51B87E7E0DE5F72486EDCADC812011B8CB_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 681));
				if (L_25)
				{
					goto IL_0074_1;
				}
			}
			{
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 682));
				U3CInitializeLoaderU3Ed__24_U3CU3Em__Finally1_m6CCA9E68B1BF2344768A755069F9B9CD799E277C(__this, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 682));
				goto IL_0126_1;
			}

IL_011d_1:
			{
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 683));
				U3CInitializeLoaderU3Ed__24_U3CU3Em__Finally1_m6CCA9E68B1BF2344768A755069F9B9CD799E277C(__this, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 683));
				goto IL_014b;
			}

IL_0126_1:
			{
				Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A* L_26 = (&__this->___U3CU3Es__1_3);
				il2cpp_codegen_initobj(L_26, sizeof(Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A));
				// activeLoader = null;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 684));
				XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_27 = __this->___U3CU3E4__this_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 685));
				NullCheck(L_27);
				XRManagerSettings_set_activeLoader_m85857974C574787278D7B4E861AD235F2D49726A_inline(L_27, (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976*)NULL, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 685));
				// }
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 686));
				V_0 = (bool)0;
				goto IL_014b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014b:
	{
		bool L_28 = V_0;
		return L_28;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLoaderU3Ed__24_U3CU3Em__Finally1_m6CCA9E68B1BF2344768A755069F9B9CD799E277C (U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m558B2F73F0E5D8B4B7247F8068645077549A3490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeLoaderU3Ed__24_U3CU3Em__Finally1_m6CCA9E68B1BF2344768A755069F9B9CD799E277C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CInitializeLoaderU3Ed__24_U3CU3Em__Finally1_m6CCA9E68B1BF2344768A755069F9B9CD799E277C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A* L_0 = (&__this->___U3CU3Es__1_3);
		Enumerator_Dispose_m558B2F73F0E5D8B4B7247F8068645077549A3490(L_0, Enumerator_Dispose_m558B2F73F0E5D8B4B7247F8068645077549A3490_RuntimeMethod_var);
		return;
	}
}
// System.Object UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInitializeLoaderU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4F6952CC23A00893DC2B18A638480696CEE3370C (U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeLoaderU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4F6952CC23A00893DC2B18A638480696CEE3370C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CInitializeLoaderU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4F6952CC23A00893DC2B18A638480696CEE3370C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLoaderU3Ed__24_System_Collections_IEnumerator_Reset_m803D94C93BE413DFBA21C0FEFABA00DA3E3414C4 (U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeLoaderU3Ed__24_System_Collections_IEnumerator_Reset_m803D94C93BE413DFBA21C0FEFABA00DA3E3414C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CInitializeLoaderU3Ed__24_System_Collections_IEnumerator_Reset_m803D94C93BE413DFBA21C0FEFABA00DA3E3414C4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeLoaderU3Ed__24_System_Collections_IEnumerator_Reset_m803D94C93BE413DFBA21C0FEFABA00DA3E3414C4_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInitializeLoaderU3Ed__24_System_Collections_IEnumerator_get_Current_m92156199FCA3AAD568CA668A7A6CF7FB31B8A23C (U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeLoaderU3Ed__24_System_Collections_IEnumerator_get_Current_m92156199FCA3AAD568CA668A7A6CF7FB31B8A23C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CInitializeLoaderU3Ed__24_System_Collections_IEnumerator_get_Current_m92156199FCA3AAD568CA668A7A6CF7FB31B8A23C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRConfigurationDataAttribute_set_displayName_m3AFFE133640E562156E3D20A81206FE9F62D12BB_inline (XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute_set_displayName_m3AFFE133640E562156E3D20A81206FE9F62D12BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRConfigurationDataAttribute_set_displayName_m3AFFE133640E562156E3D20A81206FE9F62D12BB_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 3));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 4));
	{
		// public string displayName { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 5));
		String_t* L_0 = ___0_value;
		__this->___U3CdisplayNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdisplayNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRConfigurationDataAttribute_set_buildSettingsKey_m6AFAEBF0A402551EC9A80324E5B64403065E75A0_inline (XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute_set_buildSettingsKey_m6AFAEBF0A402551EC9A80324E5B64403065E75A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRConfigurationDataAttribute_tFCF093318B5224BCC0E168E99C562AB50DDFC0B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRConfigurationDataAttribute_set_buildSettingsKey_m6AFAEBF0A402551EC9A80324E5B64403065E75A0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 9));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 10));
	{
		// public string buildSettingsKey { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 11));
		String_t* L_0 = ___0_value;
		__this->___U3CbuildSettingsKeyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbuildSettingsKeyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 378));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 379));
	{
		// public XRLoader activeLoader { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 380));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRManagerSettings_set_activeLoader_m85857974C574787278D7B4E861AD235F2D49726A_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_set_activeLoader_m85857974C574787278D7B4E861AD235F2D49726A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_set_activeLoader_m85857974C574787278D7B4E861AD235F2D49726A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 381));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 382));
	{
		// public XRLoader activeLoader { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 383));
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = ___0_value;
		__this->___U3CactiveLoaderU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CactiveLoaderU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 370));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_Management + 371));
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_Management + 372));
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
