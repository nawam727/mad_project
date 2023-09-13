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

// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>
struct List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180;
// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor>
struct List_1_tACFC79734710927A89702FFC38900223BB85B5A6;
// System.Collections.Generic.List`1<UnityEngine.Subsystem>
struct List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052;
// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor>
struct List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E;
// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider>
struct List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044;
// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>
struct List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.IntegratedSubsystem[]
struct IntegratedSubsystemU5BU5D_tEEE77FC679DF18ADB573921A79329F94951E95E1;
// UnityEngine.IntegratedSubsystemDescriptor[]
struct IntegratedSubsystemDescriptorU5BU5D_t23565775025CE363208D4777355B8B819E8E090B;
// UnityEngine.Subsystem[]
struct SubsystemU5BU5D_t07C0341FE1F84408AA50BB19DA43A246F0EC8AFC;
// UnityEngine.SubsystemDescriptor[]
struct SubsystemDescriptorU5BU5D_t37EEAB4387C3C54A4B704533E5318404D715BE6D;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider[]
struct SubsystemDescriptorWithProviderU5BU5D_tFA5A333C6A60BA20BE6D7C7D524363FB4F8B84C8;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider[]
struct SubsystemWithProviderU5BU5D_t9E5EDC6CF4EFA1968392CDB134778437D26F9329;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.ISubsystem
struct ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3;
// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// UnityEngine.Subsystem
struct Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7;
// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_SubsystemsModule[];
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tACFC79734710927A89702FFC38900223BB85B5A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0C4DC2D5A70403AF7756183C2C860CED08D2B9AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m201FC29315140F56FD039B953C177A973D9FF991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3155DE7FAE64064D242AD56FA4205E69D37BF5FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m12584CD93CF1B39E17FDD6908B4A9B696F7A785C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3D17618D315143F28601C5D18E2A3FCD02EFA1E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBFABAE97C6BAF9C93B1C521A6C0CEEA1F2AEDEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4801E04900108AE27A0B90D7C72DC91E12C7F6D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m75A153EE5B1A494ECA6C9A68F1A35642CE486BF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCD4E9C6BAC1835ADEBDE64EBAA8875ABCFE06847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystemDescriptor_UnityEngine_ISubsystemDescriptor_Create_m8B6149525628F9DB15BB0651CEE0BE2FCAE1E875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystemDescriptor__ctor_mD10D471BEAB8890C14BF59828EE3C37BCC1538D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystemDescriptor_get_id_m89DBA940C79ED7EFE1137E3EC4A5A53BF7052F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_Destroy_m3D6593DA2CB876877A48778C7D2F782EEC473A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem__ctor_m8A0E82CAFC72287502DB0158488C98831B2DF405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_get_valid_m6537B83457B7E79D9743A0EA9144BD116B0E850B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Internal_SubsystemDescriptors_Internal_AddDescriptor_m0462E74DADC94897AB6EECD3051878FD6832118E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m03BD0A8551829D8F4997B3D2229D08E236AB578C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6B6700A3B4946F7E50020E1F0A6DA7FD0A2CBC0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCFF9E882AEB97464121310EF54EB8F5BC39B63D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0F7790F018ADBCBBFB61D890ACEF96E28CB47794_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m224C03F9D69D2C07810899A1853A75AB4F3059C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mA689E5930843B7D7B0D18FD98A795607466703AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD66D0A6FCCA916E4EFC12C32224838B00C241A6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7655E0C1B1C7A52FE8D303DB4054EA8175408F36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD181B29D7F143400ECEEF37EBC8831DE4E49640E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE5E7D70B9DD3C8B2695C78B5176420BEC09D3FAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0F5CB5AFBF750066FF73E38CDD87AD0CF80FA4C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m1AB528898A1843AF5F1A53260C5C0F7C447F36BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mE2E3E5D3C559D3D0FA209C8FF52F2AC4AB2BDA9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4A21E1F505E2382B316D355A18E9BB8D1E0F14BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7E8FF6F78C88AE050351D828A57A12B0BD6970FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8DE527431E2108520C042B44A75DAC5DB237D3B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA786A401DCD46DAD7257EF6A3E5E9EF105C4C1ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDBE147D7123129854024227B5A861FD497C7BBE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE880513B25584D4B37E79F50BC3ACDD456E1BC20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7E0401B70301939E63AFB1AEA0070D31D156608F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA0C7AE870DA1E6D582A090A721DBCCC35B13E3C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorStore_ClearManagedDescriptors_m14AEFE442EDDC8BD082F300C7054FE185E1EA1D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorStore_InitializeManagedDescriptor_m74418769D7CDE1CED4F07A179A9173E6F0ECD12C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorStore_RegisterDeprecatedDescriptor_m0314598F5A51921C9C9B254B4E82C1191FC4D4B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorStore_RegisterDescriptor_TisSubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_TisSubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_mC3C092C7053B117A342B3038912DA3509CE487DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorStore_RegisterDescriptor_TisSubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71_TisSubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71_mCF1619B4D56F76AA321A1F5E1AF643181FFC1F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorStore__cctor_mE267CA787BE559BD490D9ED8BD2D55F4E8DE6A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_UnityEngine_ISubsystemDescriptor_Create_m93889530D53B9658319E5EF704F277AC3B03B336_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider__ctor_mADB008B99F8F98EDD0C5AEBE00368F96D11FCCD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_UnityEngine_ISubsystemDescriptor_Create_m9A9AD52C8D477CFE2F4DEE834C391F4822AC12C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor__ctor_m6A1BE1617C93356590A1DE68B9603C83D9A28F05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_get_id_mA4223910997DD72DCF70B03BA5340AFE11AA1A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_AddStandaloneSubsystem_mBEE590C56742D1E540349BB4D225C265A145D722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_ClearSubsystems_m36DD2EBBD868BD00A34CAAFD48BFA4E79D031443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_FindStandaloneSubsystemByDescriptor_m49CCAABC4FB6569333A0D54281EC885C5447BA4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetIntegratedSubsystemByPtr_mC117FBE03DF764DB78D48B11AD5AC324F223BDE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_InitializeIntegratedSubsystem_mE3336CB0547C0B2CF195BA2372AFBC99F65AB6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_ReloadSubsystemsCompleted_m708F6B5CEF21605E49DF6DF6DDA81FE3DA19099B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_ReloadSubsystemsStarted_mE6BE70BD76D9C294AFC4ABCD9E4A0DF9BB0E4273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_RemoveDeprecatedSubsystem_mBD8928FA7AE2FFC79D2768ED6F707FF61F65092D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_RemoveIntegratedSubsystemByPtr_mBFD54C173F757CAF38E897250D05D517D08D4784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_RemoveStandaloneSubsystem_m61CD473221C4A3210629379D92018723301E982A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager__cctor_m4B044EB8875B225C565E6FB10A2296C0E72BDE2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider__ctor_mF88170FBB0EBEEB2AB312C10958130058F256038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_get_running_m0331B5275B76BA00ACD2635216B455B599E41420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_Destroy_m8161D5B71C856F836660430CED8550AA17438BAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_Start_m720DC3EDB918F58D65CA4B12017D395788934644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_Stop_mB22AB4811D2636FCB317C0E54E8A7139D81A8E16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider__ctor_m7AAC2F13A01D674BF5040F42A08C88611FE60914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_get_providerBase_m8229B40F322D44A2E22B0AD62C581D284813410A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_set_providerBase_m0517BCC9991DC69C2AAF8C60AF96211BB5CAE14C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_set_running_mBEF44DA55F99B873A21E2003CDE06981E0348477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Subsystem_Destroy_m0CE70A94D9CAD2E4B2528CFE5D9C874FD5BC4759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Subsystem__ctor_m43AA875446123D3DCF6016748B19934D0141447A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_t00E4624764D7709C84B9E0BF0CE9280BDC829984_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_t8C50AA02704BDA130627B3A891AD19AAE70DE82D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_tD6B2BE598D993043B077F2F05D86E7B739EBAC30_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IntPtr_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCDD16073F88F09BB7B50158A053DD15949D8ADB6 
{
};

// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>
struct List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IntegratedSubsystemU5BU5D_tEEE77FC679DF18ADB573921A79329F94951E95E1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor>
struct List_1_tACFC79734710927A89702FFC38900223BB85B5A6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IntegratedSubsystemDescriptorU5BU5D_t23565775025CE363208D4777355B8B819E8E090B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Subsystem>
struct List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubsystemU5BU5D_t07C0341FE1F84408AA50BB19DA43A246F0EC8AFC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor>
struct List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubsystemDescriptorU5BU5D_t37EEAB4387C3C54A4B704533E5318404D715BE6D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider>
struct List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubsystemDescriptorWithProviderU5BU5D_tFA5A333C6A60BA20BE6D7C7D524363FB4F8B84C8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>
struct List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubsystemWithProviderU5BU5D_t9E5EDC6CF4EFA1968392CDB134778437D26F9329* ____items_1;
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

// UnityEngine.Internal_SubsystemDescriptors
struct Internal_SubsystemDescriptors_t087D53EE6F9D7AAEA9E38D42AF436C952DF7936F  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// UnityEngine.Subsystem
struct Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7  : public RuntimeObject
{
};

// UnityEngine.SubsystemBindings
struct SubsystemBindings_t4816F0D1B04996B9AA154C990BC1D293B9363049  : public RuntimeObject
{
};

// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
};

// UnityEngine.SubsystemDescriptorBindings
struct SubsystemDescriptorBindings_t12C0380442BAE5AD9760662561CAD0AE7B41FFFE  : public RuntimeObject
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore
struct SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250  : public RuntimeObject
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemManager
struct SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824  : public RuntimeObject
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.IntegratedSubsystem>
struct Enumerator_tD6B2BE598D993043B077F2F05D86E7B739EBAC30 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.IntegratedSubsystemDescriptor>
struct Enumerator_t8C50AA02704BDA130627B3A891AD19AAE70DE82D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tACFC79734710927A89702FFC38900223BB85B5A6* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>
struct Enumerator_t00E4624764D7709C84B9E0BF0CE9280BDC829984 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>
struct List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IntegratedSubsystemU5BU5D_tEEE77FC679DF18ADB573921A79329F94951E95E1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>

// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor>
struct List_1_tACFC79734710927A89702FFC38900223BB85B5A6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IntegratedSubsystemDescriptorU5BU5D_t23565775025CE363208D4777355B8B819E8E090B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor>

// System.Collections.Generic.List`1<UnityEngine.Subsystem>
struct List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubsystemU5BU5D_t07C0341FE1F84408AA50BB19DA43A246F0EC8AFC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Subsystem>

// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor>
struct List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubsystemDescriptorU5BU5D_t37EEAB4387C3C54A4B704533E5318404D715BE6D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor>

// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider>
struct List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubsystemDescriptorWithProviderU5BU5D_tFA5A333C6A60BA20BE6D7C7D524363FB4F8B84C8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider>

// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>
struct List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubsystemWithProviderU5BU5D_t9E5EDC6CF4EFA1968392CDB134778437D26F9329* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.Internal_SubsystemDescriptors

// UnityEngine.Internal_SubsystemDescriptors

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Subsystem

// UnityEngine.Subsystem

// UnityEngine.SubsystemBindings

// UnityEngine.SubsystemBindings

// UnityEngine.SubsystemDescriptor

// UnityEngine.SubsystemDescriptor

// UnityEngine.SubsystemDescriptorBindings

// UnityEngine.SubsystemDescriptorBindings

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore
struct SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_IntegratedDescriptors
	List_1_tACFC79734710927A89702FFC38900223BB85B5A6* ___s_IntegratedDescriptors_0;
	// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_StandaloneDescriptors
	List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044* ___s_StandaloneDescriptors_1;
	// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_DeprecatedDescriptors
	List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E* ___s_DeprecatedDescriptors_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemManager
struct SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields
{
	// System.Action UnityEngine.SubsystemManager::reloadSubsytemsStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___reloadSubsytemsStarted_0;
	// System.Action UnityEngine.SubsystemManager::reloadSubsytemsCompleted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___reloadSubsytemsCompleted_1;
	// System.Action UnityEngine.SubsystemManager::beforeReloadSubsystems
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___beforeReloadSubsystems_2;
	// System.Action UnityEngine.SubsystemManager::afterReloadSubsystems
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___afterReloadSubsystems_3;
	// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem> UnityEngine.SubsystemManager::s_IntegratedSubsystems
	List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* ___s_IntegratedSubsystems_4;
	// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider> UnityEngine.SubsystemManager::s_StandaloneSubsystems
	List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3* ___s_StandaloneSubsystems_5;
	// System.Collections.Generic.List`1<UnityEngine.Subsystem> UnityEngine.SubsystemManager::s_DeprecatedSubsystems
	List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052* ___s_DeprecatedSubsystems_6;
};

// UnityEngine.SubsystemManager

// UnityEngine.SubsystemsImplementation.SubsystemProvider

// UnityEngine.SubsystemsImplementation.SubsystemProvider

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider

// System.Collections.Generic.List`1/Enumerator<UnityEngine.IntegratedSubsystem>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.IntegratedSubsystem>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.IntegratedSubsystemDescriptor>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.IntegratedSubsystemDescriptor>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>

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

// UnityEngine.IntegratedSubsystem

// UnityEngine.IntegratedSubsystem

// UnityEngine.IntegratedSubsystemDescriptor

// UnityEngine.IntegratedSubsystemDescriptor

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

// System.Action

// System.Action
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TDescriptor,System.Collections.Generic.List`1<TBaseTypeInList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m54CF4787564658EB36D548FCF6EC4B67BE3E6471_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_descriptor, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___1_storeInList, const RuntimeMethod* method) ;

// System.String UnityEngine.SubsystemDescriptorBindings::GetId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorBindings_GetId_mD3D36C3199EF50AAAB7830E6D061269F4CE956C1 (intptr_t ___0_descriptorPtr, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDeprecatedDescriptor(UnityEngine.SubsystemDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDeprecatedDescriptor_m0314598F5A51921C9C9B254B4E82C1191FC4D4B1 (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* ___0_descriptor, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::RemoveIntegratedSubsystemByPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_RemoveIntegratedSubsystemByPtr_mBFD54C173F757CAF38E897250D05D517D08D4784 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemBindings::DestroySubsystem(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemBindings_DestroySubsystem_m601801D653E84DE619656D06A61357F3C9BC7456 (intptr_t ___0_nativePtr, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.IntegratedSubsystem::get_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_valid_m6537B83457B7E79D9743A0EA9144BD116B0E850B (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.IntegratedSubsystem::IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_IsRunning_m6AF6106D2DA0A840DBA7D52E9D5F373658B66009 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Subsystem>::Remove(T)
inline bool List_1_Remove_mE2E3E5D3C559D3D0FA209C8FF52F2AC4AB2BDA9D (List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052* __this, Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>::.ctor()
inline void List_1__ctor_m8DE527431E2108520C042B44A75DAC5DB237D3B0 (List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>::.ctor()
inline void List_1__ctor_mDBE147D7123129854024227B5A861FD497C7BBE8 (List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Subsystem>::.ctor()
inline void List_1__ctor_mE880513B25584D4B37E79F50BC3ACDD456E1BC20 (List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void UnityEngine.SubsystemManager::StaticConstructScriptingClassMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_StaticConstructScriptingClassMap_m350147EEDFABFFADB6541B807F1A94337F8E2337 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>::GetEnumerator()
inline Enumerator_tD6B2BE598D993043B077F2F05D86E7B739EBAC30 List_1_GetEnumerator_mE5E7D70B9DD3C8B2695C78B5176420BEC09D3FAA (List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* __this, const RuntimeMethod* method)
{
	Enumerator_tD6B2BE598D993043B077F2F05D86E7B739EBAC30 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.IntegratedSubsystem>::Dispose()
inline void Enumerator_Dispose_m201FC29315140F56FD039B953C177A973D9FF991 (Enumerator_tD6B2BE598D993043B077F2F05D86E7B739EBAC30* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.IntegratedSubsystem>::get_Current()
inline IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* Enumerator_get_Current_m4801E04900108AE27A0B90D7C72DC91E12C7F6D9_inline (Enumerator_tD6B2BE598D993043B077F2F05D86E7B739EBAC30* __this, const RuntimeMethod* method)
{
	IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.IntegratedSubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m3D17618D315143F28601C5D18E2A3FCD02EFA1E7 (Enumerator_tD6B2BE598D993043B077F2F05D86E7B739EBAC30* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>::get_Item(System.Int32)
inline IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* List_1_get_Item_mA0C7AE870DA1E6D582A090A721DBCCC35B13E3C8 (List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0F5CB5AFBF750066FF73E38CDD87AD0CF80FA4C8 (List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>::get_Count()
inline int32_t List_1_get_Count_m7E0401B70301939E63AFB1AEA0070D31D156608F_inline (List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>::Add(T)
inline void List_1_Add_mCFF9E882AEB97464121310EF54EB8F5BC39B63D2_inline (List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3* __this, SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>::Remove(T)
inline bool List_1_Remove_m1AB528898A1843AF5F1A53260C5C0F7C447F36BD (List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3* __this, SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>::GetEnumerator()
inline Enumerator_t00E4624764D7709C84B9E0BF0CE9280BDC829984 List_1_GetEnumerator_mD181B29D7F143400ECEEF37EBC8831DE4E49640E (List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3* __this, const RuntimeMethod* method)
{
	Enumerator_t00E4624764D7709C84B9E0BF0CE9280BDC829984 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>::Dispose()
inline void Enumerator_Dispose_m0C4DC2D5A70403AF7756183C2C860CED08D2B9AF (Enumerator_t00E4624764D7709C84B9E0BF0CE9280BDC829984* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>::get_Current()
inline SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* Enumerator_get_Current_mCD4E9C6BAC1835ADEBDE64EBAA8875ABCFE06847_inline (Enumerator_t00E4624764D7709C84B9E0BF0CE9280BDC829984* __this, const RuntimeMethod* method)
{
	SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>::MoveNext()
inline bool Enumerator_MoveNext_mBFABAE97C6BAF9C93B1C521A6C0CEEA1F2AEDEE6 (Enumerator_t00E4624764D7709C84B9E0BF0CE9280BDC829984* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.IntegratedSubsystem::SetHandle(UnityEngine.IntegratedSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_SetHandle_m22D17A2E0BD8AF0FC18CE09638572D34AD8DB48B (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* ___0_subsystem, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>::Add(T)
inline void List_1_Add_m03BD0A8551829D8F4997B3D2229D08E236AB578C_inline (List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* __this, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>::Clear()
inline void List_1_Clear_mA689E5930843B7D7B0D18FD98A795607466703AD_inline (List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>::Clear()
inline void List_1_Clear_m0F7790F018ADBCBBFB61D890ACEF96E28CB47794_inline (List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Subsystem>::Clear()
inline void List_1_Clear_mD66D0A6FCCA916E4EFC12C32224838B00C241A6E_inline (List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Boolean UnityEngine.SubsystemManager::RemoveDeprecatedSubsystem(UnityEngine.Subsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemManager_RemoveDeprecatedSubsystem_mBD8928FA7AE2FFC79D2768ED6F707FF61F65092D (Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7* ___0_subsystem, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor<UnityEngine.SubsystemDescriptor,UnityEngine.SubsystemDescriptor>(TDescriptor,System.Collections.Generic.List`1<TBaseTypeInList>)
inline void SubsystemDescriptorStore_RegisterDescriptor_TisSubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71_TisSubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71_mCF1619B4D56F76AA321A1F5E1AF643181FFC1F22 (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* ___0_descriptor, List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E* ___1_storeInList, const RuntimeMethod* method)
{
	((  void (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))SubsystemDescriptorStore_RegisterDescriptor_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m54CF4787564658EB36D548FCF6EC4B67BE3E6471_gshared)((Il2CppFullySharedGenericAny)___0_descriptor, (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)___1_storeInList, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor>::Add(T)
inline void List_1_Add_m6B6700A3B4946F7E50020E1F0A6DA7FD0A2CBC0F_inline (List_1_tACFC79734710927A89702FFC38900223BB85B5A6* __this, IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor>::GetEnumerator()
inline Enumerator_t8C50AA02704BDA130627B3A891AD19AAE70DE82D List_1_GetEnumerator_m7655E0C1B1C7A52FE8D303DB4054EA8175408F36 (List_1_tACFC79734710927A89702FFC38900223BB85B5A6* __this, const RuntimeMethod* method)
{
	Enumerator_t8C50AA02704BDA130627B3A891AD19AAE70DE82D il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.IntegratedSubsystemDescriptor>::Dispose()
inline void Enumerator_Dispose_m3155DE7FAE64064D242AD56FA4205E69D37BF5FA (Enumerator_t8C50AA02704BDA130627B3A891AD19AAE70DE82D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.IntegratedSubsystemDescriptor>::get_Current()
inline IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* Enumerator_get_Current_m75A153EE5B1A494ECA6C9A68F1A35642CE486BF7_inline (Enumerator_t8C50AA02704BDA130627B3A891AD19AAE70DE82D* __this, const RuntimeMethod* method)
{
	IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.IntegratedSubsystemDescriptor>::MoveNext()
inline bool Enumerator_MoveNext_m12584CD93CF1B39E17FDD6908B4A9B696F7A785C (Enumerator_t8C50AA02704BDA130627B3A891AD19AAE70DE82D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor>::Clear()
inline void List_1_Clear_m224C03F9D69D2C07810899A1853A75AB4F3059C5_inline (List_1_tACFC79734710927A89702FFC38900223BB85B5A6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider,UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider>(TDescriptor,System.Collections.Generic.List`1<TBaseTypeInList>)
inline void SubsystemDescriptorStore_RegisterDescriptor_TisSubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_TisSubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_mC3C092C7053B117A342B3038912DA3509CE487DC (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___0_descriptor, List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044* ___1_storeInList, const RuntimeMethod* method)
{
	((  void (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))SubsystemDescriptorStore_RegisterDescriptor_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m54CF4787564658EB36D548FCF6EC4B67BE3E6471_gshared)((Il2CppFullySharedGenericAny)___0_descriptor, (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)___1_storeInList, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m4A21E1F505E2382B316D355A18E9BB8D1E0F14BE (List_1_tACFC79734710927A89702FFC38900223BB85B5A6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider>::.ctor()
inline void List_1__ctor_m7E8FF6F78C88AE050351D828A57A12B0BD6970FE (List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor>::.ctor()
inline void List_1__ctor_mA786A401DCD46DAD7257EF6A3E5E9EF105C4C1ED (List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_providerBase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* SubsystemWithProvider_get_providerBase_m8229B40F322D44A2E22B0AD62C581D284813410A_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider::set_running(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemWithProvider_set_running_mBEF44DA55F99B873A21E2003CDE06981E0348477_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_Stop_mB22AB4811D2636FCB317C0E54E8A7139D81A8E16 (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SubsystemManager::RemoveStandaloneSubsystem(UnityEngine.SubsystemsImplementation.SubsystemWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemManager_RemoveStandaloneSubsystem_m61CD473221C4A3210629379D92018723301E982A (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* ___0_subsystem, const RuntimeMethod* method) ;
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
// Conversion methods for marshalling of: UnityEngine.IntegratedSubsystemDescriptor
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke(const IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D& unmarshaled, IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke_back(const IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_pinvoke& marshaled, IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.IntegratedSubsystemDescriptor
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke_cleanup(IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.IntegratedSubsystemDescriptor
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_com(const IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D& unmarshaled, IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_com_back(const IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_com& marshaled, IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.IntegratedSubsystemDescriptor
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_com_cleanup(IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_com& marshaled)
{
}
// System.String UnityEngine.IntegratedSubsystemDescriptor::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntegratedSubsystemDescriptor_get_id_m89DBA940C79ED7EFE1137E3EC4A5A53BF7052F15 (IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystemDescriptor_get_id_m89DBA940C79ED7EFE1137E3EC4A5A53BF7052F15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IntegratedSubsystemDescriptor_get_id_m89DBA940C79ED7EFE1137E3EC4A5A53BF7052F15_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 2));
		intptr_t L_0 = __this->___m_Ptr_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 3));
		String_t* L_1;
		L_1 = SubsystemDescriptorBindings_GetId_mD3D36C3199EF50AAAB7830E6D061269F4CE956C1(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 3));
		return L_1;
	}
}
// UnityEngine.ISubsystem UnityEngine.IntegratedSubsystemDescriptor::UnityEngine.ISubsystemDescriptor.Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntegratedSubsystemDescriptor_UnityEngine_ISubsystemDescriptor_Create_m8B6149525628F9DB15BB0651CEE0BE2FCAE1E875 (IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystemDescriptor_UnityEngine_ISubsystemDescriptor_Create_m8B6149525628F9DB15BB0651CEE0BE2FCAE1E875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IntegratedSubsystemDescriptor_UnityEngine_ISubsystemDescriptor_Create_m8B6149525628F9DB15BB0651CEE0BE2FCAE1E875_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 4));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 5));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 6));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 7));
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* UnityEngine.ISubsystem UnityEngine.IntegratedSubsystemDescriptor::CreateImpl() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 7));
		return L_0;
	}
}
// System.Void UnityEngine.IntegratedSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor__ctor_mD10D471BEAB8890C14BF59828EE3C37BCC1538D6 (IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystemDescriptor__ctor_mD10D471BEAB8890C14BF59828EE3C37BCC1538D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IntegratedSubsystemDescriptor__ctor_mD10D471BEAB8890C14BF59828EE3C37BCC1538D6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
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
// System.IntPtr UnityEngine.SubsystemDescriptorBindings::Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SubsystemDescriptorBindings_Create_m5C7A196279BEF451109C3BFDC9A4015F4122A6AA (intptr_t ___0_descriptorPtr, const RuntimeMethod* method) 
{
	typedef intptr_t (*SubsystemDescriptorBindings_Create_m5C7A196279BEF451109C3BFDC9A4015F4122A6AA_ftn) (intptr_t);
	static SubsystemDescriptorBindings_Create_m5C7A196279BEF451109C3BFDC9A4015F4122A6AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SubsystemDescriptorBindings_Create_m5C7A196279BEF451109C3BFDC9A4015F4122A6AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SubsystemDescriptorBindings::Create(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_descriptorPtr);
	return icallRetVal;
}
// System.String UnityEngine.SubsystemDescriptorBindings::GetId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorBindings_GetId_mD3D36C3199EF50AAAB7830E6D061269F4CE956C1 (intptr_t ___0_descriptorPtr, const RuntimeMethod* method) 
{
	typedef String_t* (*SubsystemDescriptorBindings_GetId_mD3D36C3199EF50AAAB7830E6D061269F4CE956C1_ftn) (intptr_t);
	static SubsystemDescriptorBindings_GetId_mD3D36C3199EF50AAAB7830E6D061269F4CE956C1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SubsystemDescriptorBindings_GetId_mD3D36C3199EF50AAAB7830E6D061269F4CE956C1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SubsystemDescriptorBindings::GetId(System.IntPtr)");
	String_t* icallRetVal = _il2cpp_icall_func(___0_descriptorPtr);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.SubsystemDescriptor::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubsystemDescriptor_get_id_mA4223910997DD72DCF70B03BA5340AFE11AA1A01 (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptor_get_id_mA4223910997DD72DCF70B03BA5340AFE11AA1A01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptor_get_id_mA4223910997DD72DCF70B03BA5340AFE11AA1A01_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 26));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 27));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 28));
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
// UnityEngine.ISubsystem UnityEngine.SubsystemDescriptor::UnityEngine.ISubsystemDescriptor.Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubsystemDescriptor_UnityEngine_ISubsystemDescriptor_Create_m9A9AD52C8D477CFE2F4DEE834C391F4822AC12C9 (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptor_UnityEngine_ISubsystemDescriptor_Create_m9A9AD52C8D477CFE2F4DEE834C391F4822AC12C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptor_UnityEngine_ISubsystemDescriptor_Create_m9A9AD52C8D477CFE2F4DEE834C391F4822AC12C9_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 29));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 30));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 31));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 32));
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* UnityEngine.ISubsystem UnityEngine.SubsystemDescriptor::CreateImpl() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 32));
		return L_0;
	}
}
// System.Void UnityEngine.SubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor__ctor_m6A1BE1617C93356590A1DE68B9603C83D9A28F05 (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptor__ctor_m6A1BE1617C93356590A1DE68B9603C83D9A28F05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptor__ctor_m6A1BE1617C93356590A1DE68B9603C83D9A28F05_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
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
// System.Void UnityEngine.Internal_SubsystemDescriptors::Internal_AddDescriptor(UnityEngine.SubsystemDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SubsystemDescriptors_Internal_AddDescriptor_m0462E74DADC94897AB6EECD3051878FD6832118E (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* ___0_descriptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Internal_SubsystemDescriptors_Internal_AddDescriptor_m0462E74DADC94897AB6EECD3051878FD6832118E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_descriptor));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Internal_SubsystemDescriptors_Internal_AddDescriptor_m0462E74DADC94897AB6EECD3051878FD6832118E_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 33));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 34));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 35));
		SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* L_0 = ___0_descriptor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 36));
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDeprecatedDescriptor_m0314598F5A51921C9C9B254B4E82C1191FC4D4B1(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 36));
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
// Conversion methods for marshalling of: UnityEngine.IntegratedSubsystem
IL2CPP_EXTERN_C void IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke(const IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3& unmarshaled, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SubsystemDescriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SubsystemDescriptor' of type 'IntegratedSubsystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SubsystemDescriptor_1Exception, NULL);
}
IL2CPP_EXTERN_C void IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke_back(const IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke& marshaled, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3& unmarshaled)
{
	Exception_t* ___m_SubsystemDescriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SubsystemDescriptor' of type 'IntegratedSubsystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SubsystemDescriptor_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.IntegratedSubsystem
IL2CPP_EXTERN_C void IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke_cleanup(IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.IntegratedSubsystem
IL2CPP_EXTERN_C void IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_com(const IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3& unmarshaled, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com& marshaled)
{
	Exception_t* ___m_SubsystemDescriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SubsystemDescriptor' of type 'IntegratedSubsystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SubsystemDescriptor_1Exception, NULL);
}
IL2CPP_EXTERN_C void IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_com_back(const IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com& marshaled, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3& unmarshaled)
{
	Exception_t* ___m_SubsystemDescriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SubsystemDescriptor' of type 'IntegratedSubsystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SubsystemDescriptor_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.IntegratedSubsystem
IL2CPP_EXTERN_C void IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_com_cleanup(IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.IntegratedSubsystem::SetHandle(UnityEngine.IntegratedSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_SetHandle_m22D17A2E0BD8AF0FC18CE09638572D34AD8DB48B (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* ___0_subsystem, const RuntimeMethod* method) 
{
	typedef void (*IntegratedSubsystem_SetHandle_m22D17A2E0BD8AF0FC18CE09638572D34AD8DB48B_ftn) (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3*, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3*);
	static IntegratedSubsystem_SetHandle_m22D17A2E0BD8AF0FC18CE09638572D34AD8DB48B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (IntegratedSubsystem_SetHandle_m22D17A2E0BD8AF0FC18CE09638572D34AD8DB48B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.IntegratedSubsystem::SetHandle(UnityEngine.IntegratedSubsystem)");
	_il2cpp_icall_func(__this, ___0_subsystem);
}
// System.Void UnityEngine.IntegratedSubsystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_Start_m2F871FE708687A50D8B078522D97C627D344CC34 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) 
{
	typedef void (*IntegratedSubsystem_Start_m2F871FE708687A50D8B078522D97C627D344CC34_ftn) (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3*);
	static IntegratedSubsystem_Start_m2F871FE708687A50D8B078522D97C627D344CC34_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (IntegratedSubsystem_Start_m2F871FE708687A50D8B078522D97C627D344CC34_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.IntegratedSubsystem::Start()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.IntegratedSubsystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_Stop_m4CFEE7A1C17893728205EAEEF9D5427622C794C4 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) 
{
	typedef void (*IntegratedSubsystem_Stop_m4CFEE7A1C17893728205EAEEF9D5427622C794C4_ftn) (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3*);
	static IntegratedSubsystem_Stop_m4CFEE7A1C17893728205EAEEF9D5427622C794C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (IntegratedSubsystem_Stop_m4CFEE7A1C17893728205EAEEF9D5427622C794C4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.IntegratedSubsystem::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.IntegratedSubsystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_Destroy_m3D6593DA2CB876877A48778C7D2F782EEC473A08 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_Destroy_m3D6593DA2CB876877A48778C7D2F782EEC473A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IntegratedSubsystem_Destroy_m3D6593DA2CB876877A48778C7D2F782EEC473A08_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 37));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 38));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 39));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 40));
		intptr_t L_0 = __this->___m_Ptr_0;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 41));
		intptr_t L_1 = __this->___m_Ptr_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 42));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_RemoveIntegratedSubsystemByPtr_mBFD54C173F757CAF38E897250D05D517D08D4784(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 42));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 43));
		intptr_t L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 44));
		SubsystemBindings_DestroySubsystem_m601801D653E84DE619656D06A61357F3C9BC7456(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 44));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 45));
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___m_Ptr_0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 46));
		return;
	}
}
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 47));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 48));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 49));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 50));
		bool L_0;
		L_0 = IntegratedSubsystem_get_valid_m6537B83457B7E79D9743A0EA9144BD116B0E850B(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 50));
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 51));
		bool L_1;
		L_1 = IntegratedSubsystem_IsRunning_m6AF6106D2DA0A840DBA7D52E9D5F373658B66009(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 51));
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean UnityEngine.IntegratedSubsystem::get_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_valid_m6537B83457B7E79D9743A0EA9144BD116B0E850B (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_get_valid_m6537B83457B7E79D9743A0EA9144BD116B0E850B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IntegratedSubsystem_get_valid_m6537B83457B7E79D9743A0EA9144BD116B0E850B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 52));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 53));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 54));
		intptr_t L_0 = __this->___m_Ptr_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 55));
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 55));
		return L_2;
	}
}
// System.Boolean UnityEngine.IntegratedSubsystem::IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_IsRunning_m6AF6106D2DA0A840DBA7D52E9D5F373658B66009 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) 
{
	typedef bool (*IntegratedSubsystem_IsRunning_m6AF6106D2DA0A840DBA7D52E9D5F373658B66009_ftn) (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3*);
	static IntegratedSubsystem_IsRunning_m6AF6106D2DA0A840DBA7D52E9D5F373658B66009_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (IntegratedSubsystem_IsRunning_m6AF6106D2DA0A840DBA7D52E9D5F373658B66009_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.IntegratedSubsystem::IsRunning()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.IntegratedSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem__ctor_m8A0E82CAFC72287502DB0158488C98831B2DF405 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem__ctor_m8A0E82CAFC72287502DB0158488C98831B2DF405_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IntegratedSubsystem__ctor_m8A0E82CAFC72287502DB0158488C98831B2DF405_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
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
// System.Void UnityEngine.SubsystemBindings::DestroySubsystem(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemBindings_DestroySubsystem_m601801D653E84DE619656D06A61357F3C9BC7456 (intptr_t ___0_nativePtr, const RuntimeMethod* method) 
{
	typedef void (*SubsystemBindings_DestroySubsystem_m601801D653E84DE619656D06A61357F3C9BC7456_ftn) (intptr_t);
	static SubsystemBindings_DestroySubsystem_m601801D653E84DE619656D06A61357F3C9BC7456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SubsystemBindings_DestroySubsystem_m601801D653E84DE619656D06A61357F3C9BC7456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SubsystemBindings::DestroySubsystem(System.IntPtr)");
	_il2cpp_icall_func(___0_nativePtr);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.SubsystemManager::RemoveDeprecatedSubsystem(UnityEngine.Subsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemManager_RemoveDeprecatedSubsystem_mBD8928FA7AE2FFC79D2768ED6F707FF61F65092D (Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7* ___0_subsystem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mE2E3E5D3C559D3D0FA209C8FF52F2AC4AB2BDA9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_RemoveDeprecatedSubsystem_mBD8928FA7AE2FFC79D2768ED6F707FF61F65092D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_subsystem));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemManager_RemoveDeprecatedSubsystem_mBD8928FA7AE2FFC79D2768ED6F707FF61F65092D_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 56));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 57));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 58));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052* L_0 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_DeprecatedSubsystems_6;
		Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7* L_1 = ___0_subsystem;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 59));
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mE2E3E5D3C559D3D0FA209C8FF52F2AC4AB2BDA9D(L_0, L_1, List_1_Remove_mE2E3E5D3C559D3D0FA209C8FF52F2AC4AB2BDA9D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 59));
		return L_2;
	}
}
// System.Void UnityEngine.SubsystemManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager__cctor_m4B044EB8875B225C565E6FB10A2296C0E72BDE2F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8DE527431E2108520C042B44A75DAC5DB237D3B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDBE147D7123129854024227B5A861FD497C7BBE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE880513B25584D4B37E79F50BC3ACDD456E1BC20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager__cctor_m4B044EB8875B225C565E6FB10A2296C0E72BDE2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemManager__cctor_m4B044EB8875B225C565E6FB10A2296C0E72BDE2F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 60));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 61));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 62));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 63));
		List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* L_0 = (List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180*)il2cpp_codegen_object_new(List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8DE527431E2108520C042B44A75DAC5DB237D3B0(L_0, List_1__ctor_m8DE527431E2108520C042B44A75DAC5DB237D3B0_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 63));
		((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_IntegratedSubsystems_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_IntegratedSubsystems_4), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 64));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 65));
		List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3* L_1 = (List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3*)il2cpp_codegen_object_new(List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mDBE147D7123129854024227B5A861FD497C7BBE8(L_1, List_1__ctor_mDBE147D7123129854024227B5A861FD497C7BBE8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 65));
		((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_StandaloneSubsystems_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_StandaloneSubsystems_5), (void*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 66));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 67));
		List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052* L_2 = (List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052*)il2cpp_codegen_object_new(List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mE880513B25584D4B37E79F50BC3ACDD456E1BC20(L_2, List_1__ctor_mE880513B25584D4B37E79F50BC3ACDD456E1BC20_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 67));
		((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_DeprecatedSubsystems_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_DeprecatedSubsystems_6), (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 68));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 69));
		SubsystemManager_StaticConstructScriptingClassMap_m350147EEDFABFFADB6541B807F1A94337F8E2337(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 69));
		return;
	}
}
// UnityEngine.IntegratedSubsystem UnityEngine.SubsystemManager::GetIntegratedSubsystemByPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* SubsystemManager_GetIntegratedSubsystemByPtr_mC117FBE03DF764DB78D48B11AD5AC324F223BDE7 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m201FC29315140F56FD039B953C177A973D9FF991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3D17618D315143F28601C5D18E2A3FCD02EFA1E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4801E04900108AE27A0B90D7C72DC91E12C7F6D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tD6B2BE598D993043B077F2F05D86E7B739EBAC30_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE5E7D70B9DD3C8B2695C78B5176420BEC09D3FAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetIntegratedSubsystemByPtr_mC117FBE03DF764DB78D48B11AD5AC324F223BDE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD6B2BE598D993043B077F2F05D86E7B739EBAC30 V_0;
	memset((&V_0), 0, sizeof(V_0));
	IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* V_1 = NULL;
	bool V_2 = false;
	IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* V_3 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemManager_GetIntegratedSubsystemByPtr_mC117FBE03DF764DB78D48B11AD5AC324F223BDE7_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 76));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 77));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 78));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 79));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 80));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* L_0 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_IntegratedSubsystems_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 81));
		NullCheck(L_0);
		Enumerator_tD6B2BE598D993043B077F2F05D86E7B739EBAC30 L_1;
		L_1 = List_1_GetEnumerator_mE5E7D70B9DD3C8B2695C78B5176420BEC09D3FAA(L_0, List_1_GetEnumerator_mE5E7D70B9DD3C8B2695C78B5176420BEC09D3FAA_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 81));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 93));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 94));
				Enumerator_Dispose_m201FC29315140F56FD039B953C177A973D9FF991((&V_0), Enumerator_Dispose_m201FC29315140F56FD039B953C177A973D9FF991_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 94));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 82));
				goto IL_002d_1;
			}

IL_000f_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 83));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 84));
				IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_2;
				L_2 = Enumerator_get_Current_m4801E04900108AE27A0B90D7C72DC91E12C7F6D9_inline((&V_0), Enumerator_get_Current_m4801E04900108AE27A0B90D7C72DC91E12C7F6D9_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 84));
				V_1 = L_2;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 85));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 86));
				IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_3 = V_1;
				NullCheck(L_3);
				intptr_t L_4 = L_3->___m_Ptr_0;
				intptr_t L_5 = ___0_ptr;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 87));
				bool L_6;
				L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 87));
				V_2 = L_6;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 88));
				bool L_7 = V_2;
				if (!L_7)
				{
					goto IL_002c_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 89));
				IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_8 = V_1;
				V_3 = L_8;
				goto IL_004b;
			}

IL_002c_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 90));
			}

IL_002d_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 91));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 92));
				bool L_9;
				L_9 = Enumerator_MoveNext_m3D17618D315143F28601C5D18E2A3FCD02EFA1E7((&V_0), Enumerator_MoveNext_m3D17618D315143F28601C5D18E2A3FCD02EFA1E7_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 92));
				if (L_9)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 95));
		V_3 = (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3*)NULL;
		goto IL_004b;
	}

IL_004b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 96));
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_10 = V_3;
		return L_10;
	}
}
// System.Void UnityEngine.SubsystemManager::RemoveIntegratedSubsystemByPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_RemoveIntegratedSubsystemByPtr_mBFD54C173F757CAF38E897250D05D517D08D4784 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0F5CB5AFBF750066FF73E38CDD87AD0CF80FA4C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7E0401B70301939E63AFB1AEA0070D31D156608F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA0C7AE870DA1E6D582A090A721DBCCC35B13E3C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_RemoveIntegratedSubsystemByPtr_mBFD54C173F757CAF38E897250D05D517D08D4784_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemManager_RemoveIntegratedSubsystemByPtr_mBFD54C173F757CAF38E897250D05D517D08D4784_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 97));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 98));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 99));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 100));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 101));
		goto IL_0049;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 102));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 103));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* L_0 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_IntegratedSubsystems_4;
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 104));
		NullCheck(L_0);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_2;
		L_2 = List_1_get_Item_mA0C7AE870DA1E6D582A090A721DBCCC35B13E3C8(L_0, L_1, List_1_get_Item_mA0C7AE870DA1E6D582A090A721DBCCC35B13E3C8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 104));
		NullCheck(L_2);
		intptr_t L_3 = L_2->___m_Ptr_0;
		intptr_t L_4 = ___0_ptr;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 105));
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 105));
		V_1 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 106));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 107));
		goto IL_0045;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 108));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* L_7 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_IntegratedSubsystems_4;
		int32_t L_8 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 109));
		NullCheck(L_7);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_9;
		L_9 = List_1_get_Item_mA0C7AE870DA1E6D582A090A721DBCCC35B13E3C8(L_7, L_8, List_1_get_Item_mA0C7AE870DA1E6D582A090A721DBCCC35B13E3C8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 109));
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		NullCheck(L_9);
		L_9->___m_Ptr_0 = L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 110));
		List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* L_11 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_IntegratedSubsystems_4;
		int32_t L_12 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 111));
		NullCheck(L_11);
		List_1_RemoveAt_m0F5CB5AFBF750066FF73E38CDD87AD0CF80FA4C8(L_11, L_12, List_1_RemoveAt_m0F5CB5AFBF750066FF73E38CDD87AD0CF80FA4C8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 111));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 112));
		goto IL_005a;
	}

IL_0045:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 113));
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 114));
		int32_t L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* L_15 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_IntegratedSubsystems_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 115));
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m7E0401B70301939E63AFB1AEA0070D31D156608F_inline(L_15, List_1_get_Count_m7E0401B70301939E63AFB1AEA0070D31D156608F_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 115));
		V_2 = (bool)((((int32_t)L_14) < ((int32_t)L_16))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 116));
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_0005;
		}
	}

IL_005a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 117));
		return;
	}
}
// System.Void UnityEngine.SubsystemManager::AddStandaloneSubsystem(UnityEngine.SubsystemsImplementation.SubsystemWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_AddStandaloneSubsystem_mBEE590C56742D1E540349BB4D225C265A145D722 (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* ___0_subsystem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCFF9E882AEB97464121310EF54EB8F5BC39B63D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_AddStandaloneSubsystem_mBEE590C56742D1E540349BB4D225C265A145D722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_subsystem));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemManager_AddStandaloneSubsystem_mBEE590C56742D1E540349BB4D225C265A145D722_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 118));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 119));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 120));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 121));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3* L_0 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_StandaloneSubsystems_5;
		SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* L_1 = ___0_subsystem;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 122));
		NullCheck(L_0);
		List_1_Add_mCFF9E882AEB97464121310EF54EB8F5BC39B63D2_inline(L_0, L_1, List_1_Add_mCFF9E882AEB97464121310EF54EB8F5BC39B63D2_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 122));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 123));
		return;
	}
}
// System.Boolean UnityEngine.SubsystemManager::RemoveStandaloneSubsystem(UnityEngine.SubsystemsImplementation.SubsystemWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemManager_RemoveStandaloneSubsystem_m61CD473221C4A3210629379D92018723301E982A (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* ___0_subsystem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1AB528898A1843AF5F1A53260C5C0F7C447F36BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_RemoveStandaloneSubsystem_m61CD473221C4A3210629379D92018723301E982A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_subsystem));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemManager_RemoveStandaloneSubsystem_m61CD473221C4A3210629379D92018723301E982A_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 124));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 125));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 126));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 127));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3* L_0 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_StandaloneSubsystems_5;
		SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* L_1 = ___0_subsystem;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 128));
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m1AB528898A1843AF5F1A53260C5C0F7C447F36BD(L_0, L_1, List_1_Remove_m1AB528898A1843AF5F1A53260C5C0F7C447F36BD_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 128));
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 129));
		bool L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider UnityEngine.SubsystemManager::FindStandaloneSubsystemByDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* SubsystemManager_FindStandaloneSubsystemByDescriptor_m49CCAABC4FB6569333A0D54281EC885C5447BA4D (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___0_descriptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0C4DC2D5A70403AF7756183C2C860CED08D2B9AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBFABAE97C6BAF9C93B1C521A6C0CEEA1F2AEDEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCD4E9C6BAC1835ADEBDE64EBAA8875ABCFE06847_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t00E4624764D7709C84B9E0BF0CE9280BDC829984_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD181B29D7F143400ECEEF37EBC8831DE4E49640E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_FindStandaloneSubsystemByDescriptor_m49CCAABC4FB6569333A0D54281EC885C5447BA4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t00E4624764D7709C84B9E0BF0CE9280BDC829984 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* V_1 = NULL;
	bool V_2 = false;
	SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* V_3 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_descriptor));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemManager_FindStandaloneSubsystemByDescriptor_m49CCAABC4FB6569333A0D54281EC885C5447BA4D_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 130));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 131));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 132));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 133));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 134));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3* L_0 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_StandaloneSubsystems_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 135));
		NullCheck(L_0);
		Enumerator_t00E4624764D7709C84B9E0BF0CE9280BDC829984 L_1;
		L_1 = List_1_GetEnumerator_mD181B29D7F143400ECEEF37EBC8831DE4E49640E(L_0, List_1_GetEnumerator_mD181B29D7F143400ECEEF37EBC8831DE4E49640E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 135));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 147));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 148));
				Enumerator_Dispose_m0C4DC2D5A70403AF7756183C2C860CED08D2B9AF((&V_0), Enumerator_Dispose_m0C4DC2D5A70403AF7756183C2C860CED08D2B9AF_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 148));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 136));
				goto IL_002a_1;
			}

IL_000f_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 137));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 138));
				SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* L_2;
				L_2 = Enumerator_get_Current_mCD4E9C6BAC1835ADEBDE64EBAA8875ABCFE06847_inline((&V_0), Enumerator_get_Current_mCD4E9C6BAC1835ADEBDE64EBAA8875ABCFE06847_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 138));
				V_1 = L_2;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 139));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 140));
				SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* L_3 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 141));
				NullCheck(L_3);
				SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* L_4;
				L_4 = VirtualFuncInvoker0< SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* >::Invoke(12 /* UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_descriptor() */, L_3);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 141));
				SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* L_5 = ___0_descriptor;
				V_2 = (bool)((((RuntimeObject*)(SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_4) == ((RuntimeObject*)(SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_5))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 142));
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_0029_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 143));
				SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* L_7 = V_1;
				V_3 = L_7;
				goto IL_0048;
			}

IL_0029_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 144));
			}

IL_002a_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 145));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 146));
				bool L_8;
				L_8 = Enumerator_MoveNext_mBFABAE97C6BAF9C93B1C521A6C0CEEA1F2AEDEE6((&V_0), Enumerator_MoveNext_mBFABAE97C6BAF9C93B1C521A6C0CEEA1F2AEDEE6_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 146));
				if (L_8)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 149));
		V_3 = (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242*)NULL;
		goto IL_0048;
	}

IL_0048:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 150));
		SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* L_9 = V_3;
		return L_9;
	}
}
// System.Void UnityEngine.SubsystemManager::ReloadSubsystemsStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_ReloadSubsystemsStarted_mE6BE70BD76D9C294AFC4ABCD9E4A0DF9BB0E4273 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_ReloadSubsystemsStarted_mE6BE70BD76D9C294AFC4ABCD9E4A0DF9BB0E4273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemManager_ReloadSubsystemsStarted_mE6BE70BD76D9C294AFC4ABCD9E4A0DF9BB0E4273_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 151));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 152));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 153));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 154));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___reloadSubsytemsStarted_0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 155));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 156));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___reloadSubsytemsStarted_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 157));
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 157));
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 158));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___beforeReloadSubsystems_2;
		V_1 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 159));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 160));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___beforeReloadSubsystems_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 161));
		NullCheck(L_5);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 161));
	}

IL_002f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 162));
		return;
	}
}
// System.Void UnityEngine.SubsystemManager::ReloadSubsystemsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_ReloadSubsystemsCompleted_m708F6B5CEF21605E49DF6DF6DDA81FE3DA19099B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_ReloadSubsystemsCompleted_m708F6B5CEF21605E49DF6DF6DDA81FE3DA19099B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemManager_ReloadSubsystemsCompleted_m708F6B5CEF21605E49DF6DF6DDA81FE3DA19099B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 163));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 164));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 165));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 166));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___reloadSubsytemsCompleted_1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 167));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 168));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___reloadSubsytemsCompleted_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 169));
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 169));
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 170));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___afterReloadSubsystems_3;
		V_1 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 171));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 172));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___afterReloadSubsystems_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 173));
		NullCheck(L_5);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 173));
	}

IL_002f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 174));
		return;
	}
}
// System.Void UnityEngine.SubsystemManager::InitializeIntegratedSubsystem(System.IntPtr,UnityEngine.IntegratedSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_InitializeIntegratedSubsystem_mE3336CB0547C0B2CF195BA2372AFBC99F65AB6F5 (intptr_t ___0_ptr, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* ___1_subsystem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m03BD0A8551829D8F4997B3D2229D08E236AB578C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_InitializeIntegratedSubsystem_mE3336CB0547C0B2CF195BA2372AFBC99F65AB6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_subsystem));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemManager_InitializeIntegratedSubsystem_mE3336CB0547C0B2CF195BA2372AFBC99F65AB6F5_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 175));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 176));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 177));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 178));
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_0 = ___1_subsystem;
		intptr_t L_1 = ___0_ptr;
		NullCheck(L_0);
		L_0->___m_Ptr_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 179));
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_2 = ___1_subsystem;
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_3 = ___1_subsystem;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 180));
		NullCheck(L_2);
		IntegratedSubsystem_SetHandle_m22D17A2E0BD8AF0FC18CE09638572D34AD8DB48B(L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 180));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 181));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* L_4 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_IntegratedSubsystems_4;
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_5 = ___1_subsystem;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 182));
		NullCheck(L_4);
		List_1_Add_m03BD0A8551829D8F4997B3D2229D08E236AB578C_inline(L_4, L_5, List_1_Add_m03BD0A8551829D8F4997B3D2229D08E236AB578C_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 182));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 183));
		return;
	}
}
// System.Void UnityEngine.SubsystemManager::ClearSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_ClearSubsystems_m36DD2EBBD868BD00A34CAAFD48BFA4E79D031443 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m201FC29315140F56FD039B953C177A973D9FF991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3D17618D315143F28601C5D18E2A3FCD02EFA1E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4801E04900108AE27A0B90D7C72DC91E12C7F6D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tD6B2BE598D993043B077F2F05D86E7B739EBAC30_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m0F7790F018ADBCBBFB61D890ACEF96E28CB47794_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mA689E5930843B7D7B0D18FD98A795607466703AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD66D0A6FCCA916E4EFC12C32224838B00C241A6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE5E7D70B9DD3C8B2695C78B5176420BEC09D3FAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_ClearSubsystems_m36DD2EBBD868BD00A34CAAFD48BFA4E79D031443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD6B2BE598D993043B077F2F05D86E7B739EBAC30 V_0;
	memset((&V_0), 0, sizeof(V_0));
	IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* V_1 = NULL;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemManager_ClearSubsystems_m36DD2EBBD868BD00A34CAAFD48BFA4E79D031443_RuntimeMethod_var, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 184));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 185));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 186));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 187));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 188));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* L_0 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_IntegratedSubsystems_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 189));
		NullCheck(L_0);
		Enumerator_tD6B2BE598D993043B077F2F05D86E7B739EBAC30 L_1;
		L_1 = List_1_GetEnumerator_mE5E7D70B9DD3C8B2695C78B5176420BEC09D3FAA(L_0, List_1_GetEnumerator_mE5E7D70B9DD3C8B2695C78B5176420BEC09D3FAA_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 189));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 196));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 197));
				Enumerator_Dispose_m201FC29315140F56FD039B953C177A973D9FF991((&V_0), Enumerator_Dispose_m201FC29315140F56FD039B953C177A973D9FF991_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 197));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 190));
				goto IL_0022_1;
			}

IL_000f_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 191));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 192));
				IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_2;
				L_2 = Enumerator_get_Current_m4801E04900108AE27A0B90D7C72DC91E12C7F6D9_inline((&V_0), Enumerator_get_Current_m4801E04900108AE27A0B90D7C72DC91E12C7F6D9_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 192));
				V_1 = L_2;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 193));
				IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_3 = V_1;
				intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				NullCheck(L_3);
				L_3->___m_Ptr_0 = L_4;
			}

IL_0022_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 194));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 195));
				bool L_5;
				L_5 = Enumerator_MoveNext_m3D17618D315143F28601C5D18E2A3FCD02EFA1E7((&V_0), Enumerator_MoveNext_m3D17618D315143F28601C5D18E2A3FCD02EFA1E7_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 195));
				if (L_5)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 198));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* L_6 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_IntegratedSubsystems_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 199));
		NullCheck(L_6);
		List_1_Clear_mA689E5930843B7D7B0D18FD98A795607466703AD_inline(L_6, List_1_Clear_mA689E5930843B7D7B0D18FD98A795607466703AD_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 199));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 200));
		List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3* L_7 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_StandaloneSubsystems_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 201));
		NullCheck(L_7);
		List_1_Clear_m0F7790F018ADBCBBFB61D890ACEF96E28CB47794_inline(L_7, List_1_Clear_m0F7790F018ADBCBBFB61D890ACEF96E28CB47794_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 201));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 202));
		List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052* L_8 = ((SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var))->___s_DeprecatedSubsystems_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 203));
		NullCheck(L_8);
		List_1_Clear_mD66D0A6FCCA916E4EFC12C32224838B00C241A6E_inline(L_8, List_1_Clear_mD66D0A6FCCA916E4EFC12C32224838B00C241A6E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 203));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 204));
		return;
	}
}
// System.Void UnityEngine.SubsystemManager::StaticConstructScriptingClassMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_StaticConstructScriptingClassMap_m350147EEDFABFFADB6541B807F1A94337F8E2337 (const RuntimeMethod* method) 
{
	typedef void (*SubsystemManager_StaticConstructScriptingClassMap_m350147EEDFABFFADB6541B807F1A94337F8E2337_ftn) ();
	static SubsystemManager_StaticConstructScriptingClassMap_m350147EEDFABFFADB6541B807F1A94337F8E2337_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SubsystemManager_StaticConstructScriptingClassMap_m350147EEDFABFFADB6541B807F1A94337F8E2337_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SubsystemManager::StaticConstructScriptingClassMap()");
	_il2cpp_icall_func();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Subsystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_Destroy_m0CE70A94D9CAD2E4B2528CFE5D9C874FD5BC4759 (Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Subsystem_Destroy_m0CE70A94D9CAD2E4B2528CFE5D9C874FD5BC4759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Subsystem_Destroy_m0CE70A94D9CAD2E4B2528CFE5D9C874FD5BC4759_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 205));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 206));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 207));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 208));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 209));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SubsystemManager_RemoveDeprecatedSubsystem_mBD8928FA7AE2FFC79D2768ED6F707FF61F65092D(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 209));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 210));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 211));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 212));
		VirtualActionInvoker0::Invoke(10 /* System.Void UnityEngine.Subsystem::OnDestroy() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 212));
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 213));
		return;
	}
}
// System.Void UnityEngine.Subsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem__ctor_m43AA875446123D3DCF6016748B19934D0141447A (Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Subsystem__ctor_m43AA875446123D3DCF6016748B19934D0141447A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Subsystem__ctor_m43AA875446123D3DCF6016748B19934D0141447A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
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
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDeprecatedDescriptor(UnityEngine.SubsystemDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDeprecatedDescriptor_m0314598F5A51921C9C9B254B4E82C1191FC4D4B1 (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* ___0_descriptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_RegisterDeprecatedDescriptor_m0314598F5A51921C9C9B254B4E82C1191FC4D4B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_RegisterDescriptor_TisSubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71_TisSubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71_mCF1619B4D56F76AA321A1F5E1AF643181FFC1F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_descriptor));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptorStore_RegisterDeprecatedDescriptor_m0314598F5A51921C9C9B254B4E82C1191FC4D4B1_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 214));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 215));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 216));
		SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* L_0 = ___0_descriptor;
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E* L_1 = ((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_DeprecatedDescriptors_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 217));
		SubsystemDescriptorStore_RegisterDescriptor_TisSubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71_TisSubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71_mCF1619B4D56F76AA321A1F5E1AF643181FFC1F22(L_0, L_1, SubsystemDescriptorStore_RegisterDescriptor_TisSubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71_TisSubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71_mCF1619B4D56F76AA321A1F5E1AF643181FFC1F22_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 217));
		return;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::InitializeManagedDescriptor(System.IntPtr,UnityEngine.IntegratedSubsystemDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_InitializeManagedDescriptor_m74418769D7CDE1CED4F07A179A9173E6F0ECD12C (intptr_t ___0_ptr, IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* ___1_desc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6B6700A3B4946F7E50020E1F0A6DA7FD0A2CBC0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_InitializeManagedDescriptor_m74418769D7CDE1CED4F07A179A9173E6F0ECD12C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_desc));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptorStore_InitializeManagedDescriptor_m74418769D7CDE1CED4F07A179A9173E6F0ECD12C_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 218));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 219));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 220));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 221));
		IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* L_0 = ___1_desc;
		intptr_t L_1 = ___0_ptr;
		NullCheck(L_0);
		L_0->___m_Ptr_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 222));
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		List_1_tACFC79734710927A89702FFC38900223BB85B5A6* L_2 = ((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_IntegratedDescriptors_0;
		IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* L_3 = ___1_desc;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 223));
		NullCheck(L_2);
		List_1_Add_m6B6700A3B4946F7E50020E1F0A6DA7FD0A2CBC0F_inline(L_2, L_3, List_1_Add_m6B6700A3B4946F7E50020E1F0A6DA7FD0A2CBC0F_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 223));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 224));
		return;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::ClearManagedDescriptors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_ClearManagedDescriptors_m14AEFE442EDDC8BD082F300C7054FE185E1EA1D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3155DE7FAE64064D242AD56FA4205E69D37BF5FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m12584CD93CF1B39E17FDD6908B4A9B696F7A785C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m75A153EE5B1A494ECA6C9A68F1A35642CE486BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t8C50AA02704BDA130627B3A891AD19AAE70DE82D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m224C03F9D69D2C07810899A1853A75AB4F3059C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7655E0C1B1C7A52FE8D303DB4054EA8175408F36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_ClearManagedDescriptors_m14AEFE442EDDC8BD082F300C7054FE185E1EA1D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8C50AA02704BDA130627B3A891AD19AAE70DE82D V_0;
	memset((&V_0), 0, sizeof(V_0));
	IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* V_1 = NULL;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptorStore_ClearManagedDescriptors_m14AEFE442EDDC8BD082F300C7054FE185E1EA1D5_RuntimeMethod_var, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 225));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 226));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 227));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 228));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 229));
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		List_1_tACFC79734710927A89702FFC38900223BB85B5A6* L_0 = ((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_IntegratedDescriptors_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 230));
		NullCheck(L_0);
		Enumerator_t8C50AA02704BDA130627B3A891AD19AAE70DE82D L_1;
		L_1 = List_1_GetEnumerator_m7655E0C1B1C7A52FE8D303DB4054EA8175408F36(L_0, List_1_GetEnumerator_m7655E0C1B1C7A52FE8D303DB4054EA8175408F36_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 230));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 237));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 238));
				Enumerator_Dispose_m3155DE7FAE64064D242AD56FA4205E69D37BF5FA((&V_0), Enumerator_Dispose_m3155DE7FAE64064D242AD56FA4205E69D37BF5FA_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 238));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 231));
				goto IL_0022_1;
			}

IL_000f_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 232));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 233));
				IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* L_2;
				L_2 = Enumerator_get_Current_m75A153EE5B1A494ECA6C9A68F1A35642CE486BF7_inline((&V_0), Enumerator_get_Current_m75A153EE5B1A494ECA6C9A68F1A35642CE486BF7_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 233));
				V_1 = L_2;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 234));
				IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* L_3 = V_1;
				intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				NullCheck(L_3);
				L_3->___m_Ptr_0 = L_4;
			}

IL_0022_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 235));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 236));
				bool L_5;
				L_5 = Enumerator_MoveNext_m12584CD93CF1B39E17FDD6908B4A9B696F7A785C((&V_0), Enumerator_MoveNext_m12584CD93CF1B39E17FDD6908B4A9B696F7A785C_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 236));
				if (L_5)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 239));
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		List_1_tACFC79734710927A89702FFC38900223BB85B5A6* L_6 = ((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_IntegratedDescriptors_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 240));
		NullCheck(L_6);
		List_1_Clear_m224C03F9D69D2C07810899A1853A75AB4F3059C5_inline(L_6, List_1_Clear_m224C03F9D69D2C07810899A1853A75AB4F3059C5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 240));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 241));
		return;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::ReportSingleSubsystemAnalytics(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_ReportSingleSubsystemAnalytics_m12986597FBE76C21232348BAC03ADEEB9F02DB99 (String_t* ___0_id, const RuntimeMethod* method) 
{
	typedef void (*SubsystemDescriptorStore_ReportSingleSubsystemAnalytics_m12986597FBE76C21232348BAC03ADEEB9F02DB99_ftn) (String_t*);
	static SubsystemDescriptorStore_ReportSingleSubsystemAnalytics_m12986597FBE76C21232348BAC03ADEEB9F02DB99_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SubsystemDescriptorStore_ReportSingleSubsystemAnalytics_m12986597FBE76C21232348BAC03ADEEB9F02DB99_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::ReportSingleSubsystemAnalytics(System.String)");
	_il2cpp_icall_func(___0_id);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___0_descriptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_RegisterDescriptor_TisSubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_TisSubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_mC3C092C7053B117A342B3038912DA3509CE487DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_descriptor));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 242));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 243));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 244));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 245));
		SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* L_0 = ___0_descriptor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 246));
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(7 /* System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::ThrowIfInvalid() */, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 246));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 247));
		SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* L_1 = ___0_descriptor;
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044* L_2 = ((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_StandaloneDescriptors_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 248));
		SubsystemDescriptorStore_RegisterDescriptor_TisSubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_TisSubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_mC3C092C7053B117A342B3038912DA3509CE487DC(L_1, L_2, SubsystemDescriptorStore_RegisterDescriptor_TisSubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_TisSubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_mC3C092C7053B117A342B3038912DA3509CE487DC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 248));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 249));
		return;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore__cctor_mE267CA787BE559BD490D9ED8BD2D55F4E8DE6A14 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4A21E1F505E2382B316D355A18E9BB8D1E0F14BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7E8FF6F78C88AE050351D828A57A12B0BD6970FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA786A401DCD46DAD7257EF6A3E5E9EF105C4C1ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tACFC79734710927A89702FFC38900223BB85B5A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore__cctor_mE267CA787BE559BD490D9ED8BD2D55F4E8DE6A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptorStore__cctor_mE267CA787BE559BD490D9ED8BD2D55F4E8DE6A14_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 312));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 313));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 314));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 315));
		List_1_tACFC79734710927A89702FFC38900223BB85B5A6* L_0 = (List_1_tACFC79734710927A89702FFC38900223BB85B5A6*)il2cpp_codegen_object_new(List_1_tACFC79734710927A89702FFC38900223BB85B5A6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4A21E1F505E2382B316D355A18E9BB8D1E0F14BE(L_0, List_1__ctor_m4A21E1F505E2382B316D355A18E9BB8D1E0F14BE_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 315));
		((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_IntegratedDescriptors_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_IntegratedDescriptors_0), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 316));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 317));
		List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044* L_1 = (List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044*)il2cpp_codegen_object_new(List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7E8FF6F78C88AE050351D828A57A12B0BD6970FE(L_1, List_1__ctor_m7E8FF6F78C88AE050351D828A57A12B0BD6970FE_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 317));
		((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_StandaloneDescriptors_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_StandaloneDescriptors_1), (void*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 318));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 319));
		List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E* L_2 = (List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E*)il2cpp_codegen_object_new(List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mA786A401DCD46DAD7257EF6A3E5E9EF105C4C1ED(L_2, List_1__ctor_mA786A401DCD46DAD7257EF6A3E5E9EF105C4C1ED_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 319));
		((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_DeprecatedDescriptors_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_DeprecatedDescriptors_2), (void*)L_2);
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
// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 320));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 321));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 322));
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 323));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 324));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 325));
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 326));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 327));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 328));
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 329));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 330));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 331));
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 332));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 333));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 334));
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 335));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 336));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 337));
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// UnityEngine.ISubsystem UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::UnityEngine.ISubsystemDescriptor.Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubsystemDescriptorWithProvider_UnityEngine_ISubsystemDescriptor_Create_m93889530D53B9658319E5EF704F277AC3B03B336 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_UnityEngine_ISubsystemDescriptor_Create_m93889530D53B9658319E5EF704F277AC3B03B336_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptorWithProvider_UnityEngine_ISubsystemDescriptor_Create_m93889530D53B9658319E5EF704F277AC3B03B336_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 338));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 339));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 340));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 341));
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* UnityEngine.ISubsystem UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::CreateImpl() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 341));
		return L_0;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider__ctor_mADB008B99F8F98EDD0C5AEBE00368F96D11FCCD1 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider__ctor_mADB008B99F8F98EDD0C5AEBE00368F96D11FCCD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemDescriptorWithProvider__ctor_mADB008B99F8F98EDD0C5AEBE00368F96D11FCCD1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
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
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_Start_m720DC3EDB918F58D65CA4B12017D395788934644 (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_Start_m720DC3EDB918F58D65CA4B12017D395788934644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemWithProvider_Start_m720DC3EDB918F58D65CA4B12017D395788934644_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 413));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 414));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 415));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 416));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 417));
		bool L_0;
		L_0 = SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 417));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 418));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 419));
		goto IL_0028;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 420));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 421));
		VirtualActionInvoker0::Invoke(7 /* System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider::OnStart() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 421));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 422));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 423));
		SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* L_2;
		L_2 = SubsystemWithProvider_get_providerBase_m8229B40F322D44A2E22B0AD62C581D284813410A_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 423));
		NullCheck(L_2);
		L_2->___m_Running_0 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 424));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 425));
		SubsystemWithProvider_set_running_mBEF44DA55F99B873A21E2003CDE06981E0348477_inline(__this, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 425));
	}

IL_0028:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 426));
		return;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_Stop_mB22AB4811D2636FCB317C0E54E8A7139D81A8E16 (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_Stop_mB22AB4811D2636FCB317C0E54E8A7139D81A8E16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemWithProvider_Stop_mB22AB4811D2636FCB317C0E54E8A7139D81A8E16_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 427));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 428));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 429));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 430));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 431));
		bool L_0;
		L_0 = SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 431));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 432));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 433));
		goto IL_002b;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 434));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 435));
		VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider::OnStop() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 435));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 436));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 437));
		SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* L_2;
		L_2 = SubsystemWithProvider_get_providerBase_m8229B40F322D44A2E22B0AD62C581D284813410A_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 437));
		NullCheck(L_2);
		L_2->___m_Running_0 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 438));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 439));
		SubsystemWithProvider_set_running_mBEF44DA55F99B873A21E2003CDE06981E0348477_inline(__this, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 439));
	}

IL_002b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 440));
		return;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_Destroy_m8161D5B71C856F836660430CED8550AA17438BAF (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_Destroy_m8161D5B71C856F836660430CED8550AA17438BAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemWithProvider_Destroy_m8161D5B71C856F836660430CED8550AA17438BAF_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 441));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 442));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 443));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 444));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 445));
		SubsystemWithProvider_Stop_mB22AB4811D2636FCB317C0E54E8A7139D81A8E16(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 445));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 446));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 447));
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SubsystemManager_RemoveStandaloneSubsystem_m61CD473221C4A3210629379D92018723301E982A(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 447));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 448));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 449));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 450));
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider::OnDestroy() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 450));
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 451));
		return;
	}
}
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44 (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 452));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 453));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 454));
		bool L_0 = __this->___U3CrunningU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider::set_running(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_set_running_mBEF44DA55F99B873A21E2003CDE06981E0348477 (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_set_running_mBEF44DA55F99B873A21E2003CDE06981E0348477_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemWithProvider_set_running_mBEF44DA55F99B873A21E2003CDE06981E0348477_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 455));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 456));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 457));
		bool L_0 = ___0_value;
		__this->___U3CrunningU3Ek__BackingField_0 = L_0;
		return;
	}
}
// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_providerBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* SubsystemWithProvider_get_providerBase_m8229B40F322D44A2E22B0AD62C581D284813410A (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_get_providerBase_m8229B40F322D44A2E22B0AD62C581D284813410A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemWithProvider_get_providerBase_m8229B40F322D44A2E22B0AD62C581D284813410A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 458));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 459));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 460));
		SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* L_0 = __this->___U3CproviderBaseU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider::set_providerBase(UnityEngine.SubsystemsImplementation.SubsystemProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_set_providerBase_m0517BCC9991DC69C2AAF8C60AF96211BB5CAE14C (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_set_providerBase_m0517BCC9991DC69C2AAF8C60AF96211BB5CAE14C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemWithProvider_set_providerBase_m0517BCC9991DC69C2AAF8C60AF96211BB5CAE14C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 461));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 462));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 463));
		SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* L_0 = ___0_value;
		__this->___U3CproviderBaseU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderBaseU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider__ctor_m7AAC2F13A01D674BF5040F42A08C88611FE60914 (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider__ctor_m7AAC2F13A01D674BF5040F42A08C88611FE60914_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemWithProvider__ctor_m7AAC2F13A01D674BF5040F42A08C88611FE60914_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
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
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemProvider_get_running_m0331B5275B76BA00ACD2635216B455B599E41420 (SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_get_running_m0331B5275B76BA00ACD2635216B455B599E41420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemProvider_get_running_m0331B5275B76BA00ACD2635216B455B599E41420_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 511));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 512));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 513));
		bool L_0 = __this->___m_Running_0;
		return L_0;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemProvider__ctor_mF88170FBB0EBEEB2AB312C10958130058F256038 (SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider__ctor_mF88170FBB0EBEEB2AB312C10958130058F256038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemProvider__ctor_mF88170FBB0EBEEB2AB312C10958130058F256038_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 452));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 453));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 454));
		bool L_0 = __this->___U3CrunningU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* SubsystemWithProvider_get_providerBase_m8229B40F322D44A2E22B0AD62C581D284813410A_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_get_providerBase_m8229B40F322D44A2E22B0AD62C581D284813410A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemWithProvider_get_providerBase_m8229B40F322D44A2E22B0AD62C581D284813410A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 458));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 459));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 460));
		SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* L_0 = __this->___U3CproviderBaseU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemWithProvider_set_running_mBEF44DA55F99B873A21E2003CDE06981E0348477_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_set_running_mBEF44DA55F99B873A21E2003CDE06981E0348477_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SubsystemWithProvider_set_running_mBEF44DA55F99B873A21E2003CDE06981E0348477_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 455));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 456));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_SubsystemsModule + 457));
		bool L_0 = ___0_value;
		__this->___U3CrunningU3Ek__BackingField_0 = L_0;
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
