﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// admob.Admob/AdmobEventHandler
struct AdmobEventHandler_t1386791722;
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

// System.Void admob.Admob/AdmobEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AdmobEventHandler__ctor_m890673333 (AdmobEventHandler_t1386791722 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob/AdmobEventHandler::Invoke(System.String,System.String)
extern "C"  void AdmobEventHandler_Invoke_m3282322703 (AdmobEventHandler_t1386791722 * __this, String_t* ___eventName0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult admob.Admob/AdmobEventHandler::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AdmobEventHandler_BeginInvoke_m512766692 (AdmobEventHandler_t1386791722 * __this, String_t* ___eventName0, String_t* ___msg1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob/AdmobEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AdmobEventHandler_EndInvoke_m1670688069 (AdmobEventHandler_t1386791722 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
