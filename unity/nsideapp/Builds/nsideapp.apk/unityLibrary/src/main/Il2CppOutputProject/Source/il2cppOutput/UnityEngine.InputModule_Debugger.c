#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[5] = 
{
	{ 1275, 0,  0 } /*tableIndex: 0 */,
	{ 9439, 0,  1 } /*tableIndex: 1 */,
	{ 4979, 1,  1 } /*tableIndex: 2 */,
	{ 1314, 0,  2 } /*tableIndex: 3 */,
	{ 2003, 0,  3 } /*tableIndex: 4 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[2] = 
{
	"callback",
	"eventBufferPtr",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[8] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngineInternal.Input.NativeUpdateCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*) */,
	{ 0, 0 } /* 0x06000003 System.Void UnityEngineInternal.Input.NativeInputSystem::.cctor() */,
	{ 0, 1 } /* 0x06000004 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType) */,
	{ 1, 2 } /* 0x06000005 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.IntPtr) */,
	{ 3, 1 } /* 0x06000006 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(System.Int32,System.String) */,
	{ 4, 1 } /* 0x06000007 System.Void UnityEngineInternal.Input.NativeInputSystem::ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean&) */,
	{ 0, 0 } /* 0x06000008 System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_InputModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_InputModule[49] = 
{
	{ 38495, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 38495, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 38495, 1, 94, 94, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 38495, 1, 97, 97, 13, 49, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 38495, 1, 97, 97, 13, 49, 2, kSequencePointKind_StepOut, 0, 4 } /* seqPointIndex: 4 */,
	{ 38495, 1, 98, 98, 9, 10, 8, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 38496, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 38496, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 38496, 1, 102, 102, 9, 10, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 38496, 1, 103, 103, 13, 66, 1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 38496, 1, 104, 104, 13, 34, 7, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 38496, 1, 104, 104, 0, 0, 12, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 38496, 1, 105, 105, 17, 38, 15, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 38496, 1, 105, 105, 17, 38, 17, kSequencePointKind_StepOut, 0, 13 } /* seqPointIndex: 13 */,
	{ 38496, 1, 106, 106, 9, 10, 23, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 38497, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 38497, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 38497, 1, 110, 110, 9, 10, 0, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 38497, 1, 111, 111, 13, 54, 1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 38497, 1, 112, 112, 13, 83, 7, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 38497, 1, 112, 112, 13, 83, 9, kSequencePointKind_StepOut, 0, 20 } /* seqPointIndex: 20 */,
	{ 38497, 1, 113, 113, 13, 34, 15, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 38497, 1, 113, 113, 0, 0, 20, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 38497, 1, 114, 114, 13, 14, 23, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 38497, 1, 115, 115, 17, 48, 24, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 38497, 1, 116, 116, 17, 49, 31, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 38497, 1, 117, 117, 13, 14, 38, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 38497, 1, 117, 117, 0, 0, 39, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 38497, 1, 119, 119, 13, 14, 41, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 38497, 1, 120, 120, 17, 54, 42, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 38497, 1, 120, 120, 17, 54, 45, kSequencePointKind_StepOut, 0, 30 } /* seqPointIndex: 30 */,
	{ 38497, 1, 121, 121, 13, 14, 51, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 38497, 1, 122, 122, 9, 10, 52, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 38498, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 38498, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 38498, 1, 126, 126, 9, 10, 0, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 38498, 1, 127, 127, 13, 84, 1, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 38498, 1, 128, 128, 13, 34, 7, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 38498, 1, 128, 128, 0, 0, 12, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 38498, 1, 129, 129, 17, 54, 15, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 38498, 1, 129, 129, 17, 54, 18, kSequencePointKind_StepOut, 0, 40 } /* seqPointIndex: 40 */,
	{ 38498, 1, 130, 130, 9, 10, 24, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 38499, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 38499, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 38499, 1, 134, 134, 9, 10, 0, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 38499, 1, 135, 135, 13, 72, 1, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 38499, 1, 136, 136, 13, 69, 7, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 38499, 1, 136, 136, 13, 69, 16, kSequencePointKind_StepOut, 0, 47 } /* seqPointIndex: 47 */,
	{ 38499, 1, 137, 137, 9, 10, 22, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_InputModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_InputModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\Input\\Private\\Input.cs", { 103, 159, 142, 190, 1, 0, 47, 209, 127, 197, 149, 83, 247, 243, 157, 8} }, //1 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = 
{
	{ 5471, 1 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[4] = 
{
	{ 0, 24 },
	{ 0, 53 },
	{ 0, 25 },
	{ 0, 23 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[8] = 
{
	{ 0, 0, 0 } /* System.Void UnityEngineInternal.Input.NativeUpdateCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*) */,
	{ 0, 0, 0 } /* System.Void UnityEngineInternal.Input.NativeInputSystem::.cctor() */,
	{ 24, 0, 1 } /* System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType) */,
	{ 53, 1, 1 } /* System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.IntPtr) */,
	{ 25, 2, 1 } /* System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(System.Int32,System.String) */,
	{ 23, 3, 1 } /* System.Void UnityEngineInternal.Input.NativeInputSystem::ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean&) */,
	{ 0, 0, 0 } /* System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_InputModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_InputModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	49,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_InputModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	1,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
