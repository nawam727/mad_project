﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AIModule[];
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavMeshPath_CalculateCorners_mFC7D66E9304DE81D6030B3FEB237754DFFFDF548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavMeshPath_ClearCorners_m8633C3989850C01982EBD3D4BC70E85AF461CE5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavMeshPath_Finalize_mB151BFBD5D7E65C343415B6B332A58504F12AF77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavMesh_CalculatePathInternal_m4463C51C0B2370D61653C4BC002C2A4AB7C5370F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavMesh_Internal_CallOnNavMeshPreUpdate_m2A62DB32F5E1435F527AD8A59A882B9F2A193177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC64F337A786EF1DE807D08323D848149E353A750 
{
};

// UnityEngine.AI.NavMesh
struct NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46  : public RuntimeObject
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

// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
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

// UnityEngine.AI.NavMeshData
struct NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// UnityEngine.AI.NavMesh
struct NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields
{
	// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate UnityEngine.AI.NavMesh::onPreUpdate
	OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* ___onPreUpdate_0;
};

// UnityEngine.AI.NavMesh

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

// System.Delegate

// System.Delegate

// UnityEngine.AI.NavMeshPath

// UnityEngine.AI.NavMeshPath

// UnityEngine.AI.NavMeshData

// UnityEngine.AI.NavMeshData

// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate

// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
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



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AI.NavMeshPath::InitializeNavMeshPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NavMeshPath_InitializeNavMeshPath_m14652B99A3EFB12B428AC2C959A629EE906DE5F1 (const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::DestroyNavMeshPath(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_DestroyNavMeshPath_mAB640913E8A9F1BE03EF9103FF34D5F4C5EBE3F7 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::ClearCornersInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_ClearCornersInternal_m2310C5CB9B4EB2B3C4685476B2CF8440ED369606 (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::CalculateCornersInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_CalculateCornersInternal_m59C910C60F8C28D4E387C93B299B7D3F76213850 (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::CalculateCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_CalculateCorners_mFC7D66E9304DE81D6030B3FEB237754DFFFDF548 (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::ClearCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_ClearCorners_m8633C3989850C01982EBD3D4BC70E85AF461CE5B (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePathInternal_m4463C51C0B2370D61653C4BC002C2A4AB7C5370F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_sourcePosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_targetPosition, int32_t ___2_areaMask, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___3_path, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePathInternal_Injected_mA35693202F3421933D42D9DF44F6CB0880E3EEEA (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_sourcePosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_targetPosition, int32_t ___2_areaMask, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___3_path, const RuntimeMethod* method) ;
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
// Conversion methods for marshalling of: UnityEngine.AI.NavMeshPath
IL2CPP_EXTERN_C void NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshal_pinvoke(const NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7& unmarshaled, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
	if (unmarshaled.___m_Corners_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaledm_Corners_Length = (unmarshaled.___m_Corners_1)->max_length;
		marshaled.___m_Corners_1 = il2cpp_codegen_marshal_allocate_array<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(_unmarshaledm_Corners_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledm_Corners_Length); i++)
		{
			(marshaled.___m_Corners_1)[i] = (unmarshaled.___m_Corners_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Corners_1 = NULL;
	}
}
IL2CPP_EXTERN_C void NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshal_pinvoke_back(const NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke& marshaled, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
	if (marshaled.___m_Corners_1 != NULL)
	{
		if (unmarshaled.___m_Corners_1 == NULL)
		{
			unmarshaled.___m_Corners_1 = reinterpret_cast<Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*>((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Corners_1), (void*)reinterpret_cast<Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*>((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___m_Corners_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___m_Corners_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Corners_1)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.AI.NavMeshPath
IL2CPP_EXTERN_C void NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshal_pinvoke_cleanup(NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke& marshaled)
{
	if (marshaled.___m_Corners_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Corners_1);
		marshaled.___m_Corners_1 = NULL;
	}
}
// Conversion methods for marshalling of: UnityEngine.AI.NavMeshPath
IL2CPP_EXTERN_C void NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshal_com(const NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7& unmarshaled, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
	if (unmarshaled.___m_Corners_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaledm_Corners_Length = (unmarshaled.___m_Corners_1)->max_length;
		marshaled.___m_Corners_1 = il2cpp_codegen_marshal_allocate_array<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(_unmarshaledm_Corners_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledm_Corners_Length); i++)
		{
			(marshaled.___m_Corners_1)[i] = (unmarshaled.___m_Corners_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Corners_1 = NULL;
	}
}
IL2CPP_EXTERN_C void NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshal_com_back(const NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com& marshaled, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
	if (marshaled.___m_Corners_1 != NULL)
	{
		if (unmarshaled.___m_Corners_1 == NULL)
		{
			unmarshaled.___m_Corners_1 = reinterpret_cast<Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*>((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Corners_1), (void*)reinterpret_cast<Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*>((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___m_Corners_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___m_Corners_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Corners_1)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.AI.NavMeshPath
IL2CPP_EXTERN_C void NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshal_com_cleanup(NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com& marshaled)
{
	if (marshaled.___m_Corners_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Corners_1);
		marshaled.___m_Corners_1 = NULL;
	}
}
// System.Void UnityEngine.AI.NavMeshPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 2));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 3));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 5));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 6));
		intptr_t L_0;
		L_0 = NavMeshPath_InitializeNavMeshPath_m14652B99A3EFB12B428AC2C959A629EE906DE5F1(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 6));
		__this->___m_Ptr_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 7));
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshPath::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_Finalize_mB151BFBD5D7E65C343415B6B332A58504F12AF77 (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_Finalize_mB151BFBD5D7E65C343415B6B332A58504F12AF77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NavMeshPath_Finalize_mB151BFBD5D7E65C343415B6B332A58504F12AF77_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 8));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 9));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 10));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001b:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 15));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 16));
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 16));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 11));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 12));
			intptr_t L_0 = __this->___m_Ptr_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 13));
			NavMeshPath_DestroyNavMeshPath_mAB640913E8A9F1BE03EF9103FF34D5F4C5EBE3F7(L_0, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 13));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 14));
			intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			__this->___m_Ptr_0 = L_1;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 17));
		return;
	}
}
// System.IntPtr UnityEngine.AI.NavMeshPath::InitializeNavMeshPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NavMeshPath_InitializeNavMeshPath_m14652B99A3EFB12B428AC2C959A629EE906DE5F1 (const RuntimeMethod* method) 
{
	typedef intptr_t (*NavMeshPath_InitializeNavMeshPath_m14652B99A3EFB12B428AC2C959A629EE906DE5F1_ftn) ();
	static NavMeshPath_InitializeNavMeshPath_m14652B99A3EFB12B428AC2C959A629EE906DE5F1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_InitializeNavMeshPath_m14652B99A3EFB12B428AC2C959A629EE906DE5F1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::InitializeNavMeshPath()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshPath::DestroyNavMeshPath(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_DestroyNavMeshPath_mAB640913E8A9F1BE03EF9103FF34D5F4C5EBE3F7 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (*NavMeshPath_DestroyNavMeshPath_mAB640913E8A9F1BE03EF9103FF34D5F4C5EBE3F7_ftn) (intptr_t);
	static NavMeshPath_DestroyNavMeshPath_mAB640913E8A9F1BE03EF9103FF34D5F4C5EBE3F7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_DestroyNavMeshPath_mAB640913E8A9F1BE03EF9103FF34D5F4C5EBE3F7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::DestroyNavMeshPath(System.IntPtr)");
	_il2cpp_icall_func(___0_ptr);
}
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::CalculateCornersInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_CalculateCornersInternal_m59C910C60F8C28D4E387C93B299B7D3F76213850 (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	typedef Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*NavMeshPath_CalculateCornersInternal_m59C910C60F8C28D4E387C93B299B7D3F76213850_ftn) (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*);
	static NavMeshPath_CalculateCornersInternal_m59C910C60F8C28D4E387C93B299B7D3F76213850_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_CalculateCornersInternal_m59C910C60F8C28D4E387C93B299B7D3F76213850_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::CalculateCornersInternal()");
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshPath::ClearCornersInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_ClearCornersInternal_m2310C5CB9B4EB2B3C4685476B2CF8440ED369606 (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	typedef void (*NavMeshPath_ClearCornersInternal_m2310C5CB9B4EB2B3C4685476B2CF8440ED369606_ftn) (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*);
	static NavMeshPath_ClearCornersInternal_m2310C5CB9B4EB2B3C4685476B2CF8440ED369606_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_ClearCornersInternal_m2310C5CB9B4EB2B3C4685476B2CF8440ED369606_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::ClearCornersInternal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AI.NavMeshPath::ClearCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_ClearCorners_m8633C3989850C01982EBD3D4BC70E85AF461CE5B (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_ClearCorners_m8633C3989850C01982EBD3D4BC70E85AF461CE5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NavMeshPath_ClearCorners_m8633C3989850C01982EBD3D4BC70E85AF461CE5B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 18));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 19));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 21));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 22));
		NavMeshPath_ClearCornersInternal_m2310C5CB9B4EB2B3C4685476B2CF8440ED369606(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 23));
		__this->___m_Corners_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Corners_1), (void*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 24));
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshPath::CalculateCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_CalculateCorners_mFC7D66E9304DE81D6030B3FEB237754DFFFDF548 (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_CalculateCorners_mFC7D66E9304DE81D6030B3FEB237754DFFFDF548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NavMeshPath_CalculateCorners_mFC7D66E9304DE81D6030B3FEB237754DFFFDF548_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 25));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 26));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 27));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 28));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___m_Corners_1;
		V_0 = (bool)((((RuntimeObject*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 29));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 30));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 31));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2;
		L_2 = NavMeshPath_CalculateCornersInternal_m59C910C60F8C28D4E387C93B299B7D3F76213850(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 31));
		__this->___m_Corners_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Corners_1), (void*)L_2);
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 32));
		return;
	}
}
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 33));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 34));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 35));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 36));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 37));
		NavMeshPath_CalculateCorners_mFC7D66E9304DE81D6030B3FEB237754DFFFDF548(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 37));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 38));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___m_Corners_1;
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 39));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMesh_Internal_CallOnNavMeshPreUpdate_m2A62DB32F5E1435F527AD8A59A882B9F2A193177 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMesh_Internal_CallOnNavMeshPreUpdate_m2A62DB32F5E1435F527AD8A59A882B9F2A193177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NavMesh_Internal_CallOnNavMeshPreUpdate_m2A62DB32F5E1435F527AD8A59A882B9F2A193177_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 40));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 41));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 42));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 43));
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* L_0 = ((NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var))->___onPreUpdate_0;
		V_0 = (bool)((!(((RuntimeObject*)(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 44));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 45));
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* L_2 = ((NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var))->___onPreUpdate_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 46));
		NullCheck(L_2);
		OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 46));
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 47));
		return;
	}
}
// System.Boolean UnityEngine.AI.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_sourcePosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_targetPosition, int32_t ___2_areaMask, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___3_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_sourcePosition), (&___1_targetPosition), (&___2_areaMask), (&___3_path));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 48));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 49));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 50));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 51));
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = ___3_path;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 52));
		NullCheck(L_0);
		NavMeshPath_ClearCorners_m8633C3989850C01982EBD3D4BC70E85AF461CE5B(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 52));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 53));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_sourcePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_targetPosition;
		int32_t L_3 = ___2_areaMask;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_4 = ___3_path;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 54));
		bool L_5;
		L_5 = NavMesh_CalculatePathInternal_m4463C51C0B2370D61653C4BC002C2A4AB7C5370F(L_1, L_2, L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 54));
		V_0 = L_5;
		goto IL_0014;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AIModule + 55));
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePathInternal_m4463C51C0B2370D61653C4BC002C2A4AB7C5370F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_sourcePosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_targetPosition, int32_t ___2_areaMask, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___3_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMesh_CalculatePathInternal_m4463C51C0B2370D61653C4BC002C2A4AB7C5370F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NavMesh_CalculatePathInternal_m4463C51C0B2370D61653C4BC002C2A4AB7C5370F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_areaMask;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_1 = ___3_path;
		bool L_2;
		L_2 = NavMesh_CalculatePathInternal_Injected_mA35693202F3421933D42D9DF44F6CB0880E3EEEA((&___0_sourcePosition), (&___1_targetPosition), L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePathInternal_Injected_mA35693202F3421933D42D9DF44F6CB0880E3EEEA (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_sourcePosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_targetPosition, int32_t ___2_areaMask, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___3_path, const RuntimeMethod* method) 
{
	typedef bool (*NavMesh_CalculatePathInternal_Injected_mA35693202F3421933D42D9DF44F6CB0880E3EEEA_ftn) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, int32_t, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*);
	static NavMesh_CalculatePathInternal_Injected_mA35693202F3421933D42D9DF44F6CB0880E3EEEA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_CalculatePathInternal_Injected_mA35693202F3421933D42D9DF44F6CB0880E3EEEA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::CalculatePathInternal_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Int32,UnityEngine.AI.NavMeshPath)");
	bool icallRetVal = _il2cpp_icall_func(___0_sourcePosition, ___1_targetPosition, ___2_areaMask, ___3_path);
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
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_Multicast(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* currentDelegate = reinterpret_cast<OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenInst(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStatic(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStaticInvoker(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_ClosedStaticInvoker(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7 (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate__ctor_m7142A3AA991BE50B637A16D946AB7604C64EF9BA (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_Multicast;
}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914 (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
