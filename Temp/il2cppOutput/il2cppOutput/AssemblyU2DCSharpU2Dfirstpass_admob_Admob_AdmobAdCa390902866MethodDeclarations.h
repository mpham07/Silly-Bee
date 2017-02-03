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
struct AdmobAdCallBack_t390902866;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void admob.Admob/AdmobAdCallBack::.ctor(System.Object,System.IntPtr)
extern "C"  void AdmobAdCallBack__ctor_m2242352453 (AdmobAdCallBack_t390902866 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob/AdmobAdCallBack::Invoke(System.String,System.String,System.String)
extern "C"  void AdmobAdCallBack_Invoke_m1861044811 (AdmobAdCallBack_t390902866 * __this, String_t* ___adtype0, String_t* ___eventName1, String_t* ___msg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult admob.Admob/AdmobAdCallBack::BeginInvoke(System.String,System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AdmobAdCallBack_BeginInvoke_m1105238270 (AdmobAdCallBack_t390902866 * __this, String_t* ___adtype0, String_t* ___eventName1, String_t* ___msg2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob/AdmobAdCallBack::EndInvoke(System.IAsyncResult)
extern "C"  void AdmobAdCallBack_EndInvoke_m928280963 (AdmobAdCallBack_t390902866 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
