#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// admob.Admob/AdmobAdCallBack
struct AdmobAdCallBack_t807790594;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void admob.Admob/AdmobAdCallBack::.ctor(System.Object,System.IntPtr)
extern "C"  void AdmobAdCallBack__ctor_m2428499085 (AdmobAdCallBack_t807790594 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob/AdmobAdCallBack::Invoke(System.String,System.String,System.String)
extern "C"  void AdmobAdCallBack_Invoke_m4140064819 (AdmobAdCallBack_t807790594 * __this, String_t* ___adtype0, String_t* ___eventName1, String_t* ___msg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult admob.Admob/AdmobAdCallBack::BeginInvoke(System.String,System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AdmobAdCallBack_BeginInvoke_m3173663696 (AdmobAdCallBack_t807790594 * __this, String_t* ___adtype0, String_t* ___eventName1, String_t* ___msg2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob/AdmobAdCallBack::EndInvoke(System.IAsyncResult)
extern "C"  void AdmobAdCallBack_EndInvoke_m154514717 (AdmobAdCallBack_t807790594 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
