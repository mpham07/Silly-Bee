#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// admob.Admob
struct Admob_t2931807771;
// admob.Admob/AdmobEventHandler
struct AdmobEventHandler_t1386791722;
// System.String
struct String_t;
// admob.Admob/AdmobAdCallBack
struct AdmobAdCallBack_t807790594;
// admob.AdSize
struct AdSize_t871997796;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// admob.AdmobEvent
struct AdmobEvent_t3152248509;
// admob.AdPosition
struct AdPosition_t375275660;
// admobdemo
struct admobdemo_t183024480;
// MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t60011986;
// System.Type
struct Type_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_Admob2931807771.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_Admob2931807771MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_Admob_AdmobEve1386791722.h"
#include "mscorlib_System_Delegate3310234105MethodDeclarations.h"
#include "mscorlib_System_Delegate3310234105.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_Admob_AdmobAdCa807790594.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_Admob_AdmobAdCa807790594MethodDeclarations.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Int321153838500.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_AdSize871997796.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_AdSize871997796MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_Admob_AdmobEve1386791722MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_AdmobEvent3152248509.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_AdmobEvent3152248509MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_AdPosition375275660.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_AdPosition375275660MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admobdemo183024480.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admobdemo183024480MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUI3134605553MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Rect4241904616MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Debug4195163081MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MonoPInvokeCallbackAtt60011986.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MonoPInvokeCallbackAtt60011986MethodDeclarations.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Attribute2523058482MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void admob.Admob::.ctor()
extern "C"  void Admob__ctor_m2562958091 (Admob_t2931807771 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void admob.Admob::add_bannerEventHandler(admob.Admob/AdmobEventHandler)
extern Il2CppClass* AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var;
extern const uint32_t Admob_add_bannerEventHandler_m438201717_MetadataUsageId;
extern "C"  void Admob_add_bannerEventHandler_m438201717 (Admob_t2931807771 * __this, AdmobEventHandler_t1386791722 * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Admob_add_bannerEventHandler_m438201717_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AdmobEventHandler_t1386791722 * L_0 = __this->get_bannerEventHandler_1();
		AdmobEventHandler_t1386791722 * L_1 = ___value0;
		Delegate_t3310234105 * L_2 = Delegate_Combine_m1842362874(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_bannerEventHandler_1(((AdmobEventHandler_t1386791722 *)CastclassSealed(L_2, AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void admob.Admob::remove_bannerEventHandler(admob.Admob/AdmobEventHandler)
extern Il2CppClass* AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var;
extern const uint32_t Admob_remove_bannerEventHandler_m1117212424_MetadataUsageId;
extern "C"  void Admob_remove_bannerEventHandler_m1117212424 (Admob_t2931807771 * __this, AdmobEventHandler_t1386791722 * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Admob_remove_bannerEventHandler_m1117212424_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AdmobEventHandler_t1386791722 * L_0 = __this->get_bannerEventHandler_1();
		AdmobEventHandler_t1386791722 * L_1 = ___value0;
		Delegate_t3310234105 * L_2 = Delegate_Remove_m3898886541(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_bannerEventHandler_1(((AdmobEventHandler_t1386791722 *)CastclassSealed(L_2, AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void admob.Admob::add_interstitialEventHandler(admob.Admob/AdmobEventHandler)
extern Il2CppClass* AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var;
extern const uint32_t Admob_add_interstitialEventHandler_m2573762037_MetadataUsageId;
extern "C"  void Admob_add_interstitialEventHandler_m2573762037 (Admob_t2931807771 * __this, AdmobEventHandler_t1386791722 * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Admob_add_interstitialEventHandler_m2573762037_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AdmobEventHandler_t1386791722 * L_0 = __this->get_interstitialEventHandler_2();
		AdmobEventHandler_t1386791722 * L_1 = ___value0;
		Delegate_t3310234105 * L_2 = Delegate_Combine_m1842362874(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_interstitialEventHandler_2(((AdmobEventHandler_t1386791722 *)CastclassSealed(L_2, AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void admob.Admob::remove_interstitialEventHandler(admob.Admob/AdmobEventHandler)
extern Il2CppClass* AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var;
extern const uint32_t Admob_remove_interstitialEventHandler_m1109960008_MetadataUsageId;
extern "C"  void Admob_remove_interstitialEventHandler_m1109960008 (Admob_t2931807771 * __this, AdmobEventHandler_t1386791722 * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Admob_remove_interstitialEventHandler_m1109960008_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AdmobEventHandler_t1386791722 * L_0 = __this->get_interstitialEventHandler_2();
		AdmobEventHandler_t1386791722 * L_1 = ___value0;
		Delegate_t3310234105 * L_2 = Delegate_Remove_m3898886541(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_interstitialEventHandler_2(((AdmobEventHandler_t1386791722 *)CastclassSealed(L_2, AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void admob.Admob::add_rewardedVideoEventHandler(admob.Admob/AdmobEventHandler)
extern Il2CppClass* AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var;
extern const uint32_t Admob_add_rewardedVideoEventHandler_m4019090272_MetadataUsageId;
extern "C"  void Admob_add_rewardedVideoEventHandler_m4019090272 (Admob_t2931807771 * __this, AdmobEventHandler_t1386791722 * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Admob_add_rewardedVideoEventHandler_m4019090272_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AdmobEventHandler_t1386791722 * L_0 = __this->get_rewardedVideoEventHandler_3();
		AdmobEventHandler_t1386791722 * L_1 = ___value0;
		Delegate_t3310234105 * L_2 = Delegate_Combine_m1842362874(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_rewardedVideoEventHandler_3(((AdmobEventHandler_t1386791722 *)CastclassSealed(L_2, AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void admob.Admob::remove_rewardedVideoEventHandler(admob.Admob/AdmobEventHandler)
extern Il2CppClass* AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var;
extern const uint32_t Admob_remove_rewardedVideoEventHandler_m1590900333_MetadataUsageId;
extern "C"  void Admob_remove_rewardedVideoEventHandler_m1590900333 (Admob_t2931807771 * __this, AdmobEventHandler_t1386791722 * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Admob_remove_rewardedVideoEventHandler_m1590900333_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AdmobEventHandler_t1386791722 * L_0 = __this->get_rewardedVideoEventHandler_3();
		AdmobEventHandler_t1386791722 * L_1 = ___value0;
		Delegate_t3310234105 * L_2 = Delegate_Remove_m3898886541(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_rewardedVideoEventHandler_3(((AdmobEventHandler_t1386791722 *)CastclassSealed(L_2, AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var)));
		return;
	}
}
// admob.Admob admob.Admob::Instance()
extern Il2CppClass* Admob_t2931807771_il2cpp_TypeInfo_var;
extern const uint32_t Admob_Instance_m1681183207_MetadataUsageId;
extern "C"  Admob_t2931807771 * Admob_Instance_m1681183207 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Admob_Instance_m1681183207_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Admob_t2931807771 * L_0 = ((Admob_t2931807771_StaticFields*)Admob_t2931807771_il2cpp_TypeInfo_var->static_fields)->get__instance_0();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Admob_t2931807771 * L_1 = (Admob_t2931807771 *)il2cpp_codegen_object_new(Admob_t2931807771_il2cpp_TypeInfo_var);
		Admob__ctor_m2562958091(L_1, /*hidden argument*/NULL);
		((Admob_t2931807771_StaticFields*)Admob_t2931807771_il2cpp_TypeInfo_var->static_fields)->set__instance_0(L_1);
		Admob_t2931807771 * L_2 = ((Admob_t2931807771_StaticFields*)Admob_t2931807771_il2cpp_TypeInfo_var->static_fields)->get__instance_0();
		NullCheck(L_2);
		Admob_preInitAdmob_m1981559715(L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		Admob_t2931807771 * L_3 = ((Admob_t2931807771_StaticFields*)Admob_t2931807771_il2cpp_TypeInfo_var->static_fields)->get__instance_0();
		return L_3;
	}
}
// System.Void admob.Admob::preInitAdmob()
extern "C"  void Admob_preInitAdmob_m1981559715 (Admob_t2931807771 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void DEFAULT_CALL _kminitAdmob(char*, char*, Il2CppMethodPointer);
// System.Void admob.Admob::_kminitAdmob(System.String,System.String,admob.Admob/AdmobAdCallBack)
extern "C"  void Admob__kminitAdmob_m2422791523 (Il2CppObject * __this /* static, unused */, String_t* ___bannerid0, String_t* ___fullid1, AdmobAdCallBack_t807790594 * ___callback2, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, Il2CppMethodPointer);

	// Marshaling of parameter '___bannerid0' to native representation
	char* ____bannerid0_marshaled = NULL;
	____bannerid0_marshaled = il2cpp_codegen_marshal_string(___bannerid0);

	// Marshaling of parameter '___fullid1' to native representation
	char* ____fullid1_marshaled = NULL;
	____fullid1_marshaled = il2cpp_codegen_marshal_string(___fullid1);

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___callback2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_kminitAdmob)(____bannerid0_marshaled, ____fullid1_marshaled, ____callback2_marshaled);

	// Marshaling cleanup of parameter '___bannerid0' native representation
	il2cpp_codegen_marshal_free(____bannerid0_marshaled);
	____bannerid0_marshaled = NULL;

	// Marshaling cleanup of parameter '___fullid1' native representation
	il2cpp_codegen_marshal_free(____fullid1_marshaled);
	____fullid1_marshaled = NULL;

}
// System.Void admob.Admob::initAdmob(System.String,System.String)
extern Il2CppClass* AdmobAdCallBack_t807790594_il2cpp_TypeInfo_var;
extern const MethodInfo* Admob_onAdmobEventCallBack_m3059458016_MethodInfo_var;
extern const uint32_t Admob_initAdmob_m3766059048_MetadataUsageId;
extern "C"  void Admob_initAdmob_m3766059048 (Admob_t2931807771 * __this, String_t* ___bannerID0, String_t* ___fullID1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Admob_initAdmob_m3766059048_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___bannerID0;
		String_t* L_1 = ___fullID1;
		IntPtr_t L_2;
		L_2.set_m_value_0((void*)(void*)Admob_onAdmobEventCallBack_m3059458016_MethodInfo_var);
		AdmobAdCallBack_t807790594 * L_3 = (AdmobAdCallBack_t807790594 *)il2cpp_codegen_object_new(AdmobAdCallBack_t807790594_il2cpp_TypeInfo_var);
		AdmobAdCallBack__ctor_m2428499085(L_3, NULL, L_2, /*hidden argument*/NULL);
		Admob__kminitAdmob_m2422791523(NULL /*static, unused*/, L_0, L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL _kmshowBannerAbsolute(int32_t, int32_t, int32_t, int32_t);
// System.Void admob.Admob::_kmshowBannerAbsolute(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Admob__kmshowBannerAbsolute_m3324302300 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___x2, int32_t ___y3, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_kmshowBannerAbsolute)(___width0, ___height1, ___x2, ___y3);

}
// System.Void admob.Admob::showBannerAbsolute(admob.AdSize,System.Int32,System.Int32)
extern "C"  void Admob_showBannerAbsolute_m2892801252 (Admob_t2931807771 * __this, AdSize_t871997796 * ___size0, int32_t ___x1, int32_t ___y2, const MethodInfo* method)
{
	{
		AdSize_t871997796 * L_0 = ___size0;
		NullCheck(L_0);
		int32_t L_1 = AdSize_get_Width_m1072009663(L_0, /*hidden argument*/NULL);
		AdSize_t871997796 * L_2 = ___size0;
		NullCheck(L_2);
		int32_t L_3 = AdSize_get_Height_m3671342832(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___x1;
		int32_t L_5 = ___y2;
		Admob__kmshowBannerAbsolute_m3324302300(NULL /*static, unused*/, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL _kmshowBannerRelative(int32_t, int32_t, int32_t, int32_t);
// System.Void admob.Admob::_kmshowBannerRelative(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Admob__kmshowBannerRelative_m2160923047 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___position2, int32_t ___marginY3, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_kmshowBannerRelative)(___width0, ___height1, ___position2, ___marginY3);

}
// System.Void admob.Admob::showBannerRelative(admob.AdSize,System.Int32,System.Int32)
extern "C"  void Admob_showBannerRelative_m3277642041 (Admob_t2931807771 * __this, AdSize_t871997796 * ___size0, int32_t ___position1, int32_t ___marginY2, const MethodInfo* method)
{
	{
		AdSize_t871997796 * L_0 = ___size0;
		NullCheck(L_0);
		int32_t L_1 = AdSize_get_Width_m1072009663(L_0, /*hidden argument*/NULL);
		AdSize_t871997796 * L_2 = ___size0;
		NullCheck(L_2);
		int32_t L_3 = AdSize_get_Height_m3671342832(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___position1;
		int32_t L_5 = ___marginY2;
		Admob__kmshowBannerRelative_m2160923047(NULL /*static, unused*/, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL _kmremoveBanner();
// System.Void admob.Admob::_kmremoveBanner()
extern "C"  void Admob__kmremoveBanner_m3442298714 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_kmremoveBanner)();

}
// System.Void admob.Admob::removeBanner()
extern "C"  void Admob_removeBanner_m701552009 (Admob_t2931807771 * __this, const MethodInfo* method)
{
	{
		Admob__kmremoveBanner_m3442298714(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL _kmloadInterstitial();
// System.Void admob.Admob::_kmloadInterstitial()
extern "C"  void Admob__kmloadInterstitial_m3786586300 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_kmloadInterstitial)();

}
// System.Void admob.Admob::loadInterstitial()
extern "C"  void Admob_loadInterstitial_m2545520491 (Admob_t2931807771 * __this, const MethodInfo* method)
{
	{
		Admob__kmloadInterstitial_m3786586300(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
extern "C" int32_t DEFAULT_CALL _kmisInterstitialReady();
// System.Boolean admob.Admob::_kmisInterstitialReady()
extern "C"  bool Admob__kmisInterstitialReady_m1074969033 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_kmisInterstitialReady)();

	return returnValue;
}
// System.Boolean admob.Admob::isInterstitialReady()
extern "C"  bool Admob_isInterstitialReady_m3037148018 (Admob_t2931807771 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Admob__kmisInterstitialReady_m1074969033(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C" void DEFAULT_CALL _kmshowInterstitial();
// System.Void admob.Admob::_kmshowInterstitial()
extern "C"  void Admob__kmshowInterstitial_m239983251 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_kmshowInterstitial)();

}
// System.Void admob.Admob::showInterstitial()
extern "C"  void Admob_showInterstitial_m3293884738 (Admob_t2931807771 * __this, const MethodInfo* method)
{
	{
		Admob__kmshowInterstitial_m239983251(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL _kmloadRewardedVideo(char*);
// System.Void admob.Admob::_kmloadRewardedVideo(System.String)
extern "C"  void Admob__kmloadRewardedVideo_m3470522435 (Il2CppObject * __this /* static, unused */, String_t* ___rewardedVideoID0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___rewardedVideoID0' to native representation
	char* ____rewardedVideoID0_marshaled = NULL;
	____rewardedVideoID0_marshaled = il2cpp_codegen_marshal_string(___rewardedVideoID0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_kmloadRewardedVideo)(____rewardedVideoID0_marshaled);

	// Marshaling cleanup of parameter '___rewardedVideoID0' native representation
	il2cpp_codegen_marshal_free(____rewardedVideoID0_marshaled);
	____rewardedVideoID0_marshaled = NULL;

}
// System.Void admob.Admob::loadRewardedVideo(System.String)
extern "C"  void Admob_loadRewardedVideo_m1513222322 (Admob_t2931807771 * __this, String_t* ___rewardedVideoID0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___rewardedVideoID0;
		Admob__kmloadRewardedVideo_m3470522435(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" int32_t DEFAULT_CALL _kmisRewardedVideoReady();
// System.Boolean admob.Admob::_kmisRewardedVideoReady()
extern "C"  bool Admob__kmisRewardedVideoReady_m1423242630 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_kmisRewardedVideoReady)();

	return returnValue;
}
// System.Boolean admob.Admob::isRewardedVideoReady()
extern "C"  bool Admob_isRewardedVideoReady_m2121249021 (Admob_t2931807771 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Admob__kmisRewardedVideoReady_m1423242630(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C" void DEFAULT_CALL _kmshowRewardedVideo();
// System.Void admob.Admob::_kmshowRewardedVideo()
extern "C"  void Admob__kmshowRewardedVideo_m1704053288 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_kmshowRewardedVideo)();

}
// System.Void admob.Admob::showRewardedVideo()
extern "C"  void Admob_showRewardedVideo_m1885718873 (Admob_t2931807771 * __this, const MethodInfo* method)
{
	{
		Admob__kmshowRewardedVideo_m1704053288(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL _kmsetTesting(int32_t);
// System.Void admob.Admob::_kmsetTesting(System.Boolean)
extern "C"  void Admob__kmsetTesting_m715000847 (Il2CppObject * __this /* static, unused */, bool ___v0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_kmsetTesting)(___v0);

}
// System.Void admob.Admob::setTesting(System.Boolean)
extern "C"  void Admob_setTesting_m171361214 (Admob_t2931807771 * __this, bool ___v0, const MethodInfo* method)
{
	{
		bool L_0 = ___v0;
		Admob__kmsetTesting_m715000847(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL _kmsetForChildren(int32_t);
// System.Void admob.Admob::_kmsetForChildren(System.Boolean)
extern "C"  void Admob__kmsetForChildren_m1210033255 (Il2CppObject * __this /* static, unused */, bool ___v0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_kmsetForChildren)(___v0);

}
// System.Void admob.Admob::setForChildren(System.Boolean)
extern "C"  void Admob_setForChildren_m3089558678 (Admob_t2931807771 * __this, bool ___v0, const MethodInfo* method)
{
	{
		bool L_0 = ___v0;
		Admob__kmsetForChildren_m1210033255(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void admob.Admob::onAdmobEventCallBack(System.String,System.String,System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2898624300;
extern Il2CppCodeGenString* _stringLiteral604727084;
extern Il2CppCodeGenString* _stringLiteral778580237;
extern const uint32_t Admob_onAdmobEventCallBack_m3059458016_MetadataUsageId;
extern "C"  void Admob_onAdmobEventCallBack_m3059458016 (Il2CppObject * __this /* static, unused */, String_t* ___adtype0, String_t* ___eventName1, String_t* ___msg2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Admob_onAdmobEventCallBack_m3059458016_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___adtype0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_0, _stringLiteral2898624300, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		Admob_t2931807771 * L_2 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		AdmobEventHandler_t1386791722 * L_3 = L_2->get_bannerEventHandler_1();
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		Admob_t2931807771 * L_4 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		AdmobEventHandler_t1386791722 * L_5 = L_4->get_bannerEventHandler_1();
		String_t* L_6 = ___eventName1;
		String_t* L_7 = ___msg2;
		NullCheck(L_5);
		AdmobEventHandler_Invoke_m3282322703(L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0030:
	{
		goto IL_009a;
	}

IL_0035:
	{
		String_t* L_8 = ___adtype0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_8, _stringLiteral604727084, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		Admob_t2931807771 * L_10 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		AdmobEventHandler_t1386791722 * L_11 = L_10->get_interstitialEventHandler_2();
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		Admob_t2931807771 * L_12 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		AdmobEventHandler_t1386791722 * L_13 = L_12->get_interstitialEventHandler_2();
		String_t* L_14 = ___eventName1;
		String_t* L_15 = ___msg2;
		NullCheck(L_13);
		AdmobEventHandler_Invoke_m3282322703(L_13, L_14, L_15, /*hidden argument*/NULL);
	}

IL_0065:
	{
		goto IL_009a;
	}

IL_006a:
	{
		String_t* L_16 = ___adtype0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_16, _stringLiteral778580237, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		Admob_t2931807771 * L_18 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		AdmobEventHandler_t1386791722 * L_19 = L_18->get_rewardedVideoEventHandler_3();
		if (!L_19)
		{
			goto IL_009a;
		}
	}
	{
		Admob_t2931807771 * L_20 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_20);
		AdmobEventHandler_t1386791722 * L_21 = L_20->get_rewardedVideoEventHandler_3();
		String_t* L_22 = ___eventName1;
		String_t* L_23 = ___msg2;
		NullCheck(L_21);
		AdmobEventHandler_Invoke_m3282322703(L_21, L_22, L_23, /*hidden argument*/NULL);
	}

IL_009a:
	{
		return;
	}
}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Admob_onAdmobEventCallBack_m3059458016(char* ___adtype0, char* ___eventName1, char* ___msg2)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___adtype0' to managed representation
	String_t* ____adtype0_unmarshaled = NULL;
	____adtype0_unmarshaled = il2cpp_codegen_marshal_string_result(___adtype0);

	// Marshaling of parameter '___eventName1' to managed representation
	String_t* ____eventName1_unmarshaled = NULL;
	____eventName1_unmarshaled = il2cpp_codegen_marshal_string_result(___eventName1);

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	Admob_onAdmobEventCallBack_m3059458016(NULL, ____adtype0_unmarshaled, ____eventName1_unmarshaled, ____msg2_unmarshaled, NULL);

}
// System.Void admob.Admob/AdmobAdCallBack::.ctor(System.Object,System.IntPtr)
extern "C"  void AdmobAdCallBack__ctor_m2428499085 (AdmobAdCallBack_t807790594 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void admob.Admob/AdmobAdCallBack::Invoke(System.String,System.String,System.String)
extern "C"  void AdmobAdCallBack_Invoke_m4140064819 (AdmobAdCallBack_t807790594 * __this, String_t* ___adtype0, String_t* ___eventName1, String_t* ___msg2, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		AdmobAdCallBack_Invoke_m4140064819((AdmobAdCallBack_t807790594 *)__this->get_prev_9(),___adtype0, ___eventName1, ___msg2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Il2CppObject *, void* __this, String_t* ___adtype0, String_t* ___eventName1, String_t* ___msg2, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,il2cpp_codegen_get_delegate_this(__this),___adtype0, ___eventName1, ___msg2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, String_t* ___adtype0, String_t* ___eventName1, String_t* ___msg2, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(il2cpp_codegen_get_delegate_this(__this),___adtype0, ___eventName1, ___msg2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, String_t* ___eventName1, String_t* ___msg2, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___adtype0, ___eventName1, ___msg2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
extern "C"  void DelegatePInvokeWrapper_AdmobAdCallBack_t807790594 (AdmobAdCallBack_t807790594 * __this, String_t* ___adtype0, String_t* ___eventName1, String_t* ___msg2, const MethodInfo* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Marshaling of parameter '___adtype0' to native representation
	char* ____adtype0_marshaled = NULL;
	____adtype0_marshaled = il2cpp_codegen_marshal_string(___adtype0);

	// Marshaling of parameter '___eventName1' to native representation
	char* ____eventName1_marshaled = NULL;
	____eventName1_marshaled = il2cpp_codegen_marshal_string(___eventName1);

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(____adtype0_marshaled, ____eventName1_marshaled, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___adtype0' native representation
	il2cpp_codegen_marshal_free(____adtype0_marshaled);
	____adtype0_marshaled = NULL;

	// Marshaling cleanup of parameter '___eventName1' native representation
	il2cpp_codegen_marshal_free(____eventName1_marshaled);
	____eventName1_marshaled = NULL;

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.IAsyncResult admob.Admob/AdmobAdCallBack::BeginInvoke(System.String,System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AdmobAdCallBack_BeginInvoke_m3173663696 (AdmobAdCallBack_t807790594 * __this, String_t* ___adtype0, String_t* ___eventName1, String_t* ___msg2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___adtype0;
	__d_args[1] = ___eventName1;
	__d_args[2] = ___msg2;
	return (Il2CppObject *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback3, (Il2CppObject*)___object4);
}
// System.Void admob.Admob/AdmobAdCallBack::EndInvoke(System.IAsyncResult)
extern "C"  void AdmobAdCallBack_EndInvoke_m154514717 (AdmobAdCallBack_t807790594 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void admob.Admob/AdmobEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AdmobEventHandler__ctor_m890673333 (AdmobEventHandler_t1386791722 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void admob.Admob/AdmobEventHandler::Invoke(System.String,System.String)
extern "C"  void AdmobEventHandler_Invoke_m3282322703 (AdmobEventHandler_t1386791722 * __this, String_t* ___eventName0, String_t* ___msg1, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		AdmobEventHandler_Invoke_m3282322703((AdmobEventHandler_t1386791722 *)__this->get_prev_9(),___eventName0, ___msg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Il2CppObject *, void* __this, String_t* ___eventName0, String_t* ___msg1, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,il2cpp_codegen_get_delegate_this(__this),___eventName0, ___msg1,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, String_t* ___eventName0, String_t* ___msg1, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(il2cpp_codegen_get_delegate_this(__this),___eventName0, ___msg1,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, String_t* ___msg1, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___eventName0, ___msg1,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
extern "C"  void DelegatePInvokeWrapper_AdmobEventHandler_t1386791722 (AdmobEventHandler_t1386791722 * __this, String_t* ___eventName0, String_t* ___msg1, const MethodInfo* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Marshaling of parameter '___eventName0' to native representation
	char* ____eventName0_marshaled = NULL;
	____eventName0_marshaled = il2cpp_codegen_marshal_string(___eventName0);

	// Marshaling of parameter '___msg1' to native representation
	char* ____msg1_marshaled = NULL;
	____msg1_marshaled = il2cpp_codegen_marshal_string(___msg1);

	// Native function invocation
	il2cppPInvokeFunc(____eventName0_marshaled, ____msg1_marshaled);

	// Marshaling cleanup of parameter '___eventName0' native representation
	il2cpp_codegen_marshal_free(____eventName0_marshaled);
	____eventName0_marshaled = NULL;

	// Marshaling cleanup of parameter '___msg1' native representation
	il2cpp_codegen_marshal_free(____msg1_marshaled);
	____msg1_marshaled = NULL;

}
// System.IAsyncResult admob.Admob/AdmobEventHandler::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AdmobEventHandler_BeginInvoke_m512766692 (AdmobEventHandler_t1386791722 * __this, String_t* ___eventName0, String_t* ___msg1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___eventName0;
	__d_args[1] = ___msg1;
	return (Il2CppObject *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback2, (Il2CppObject*)___object3);
}
// System.Void admob.Admob/AdmobEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AdmobEventHandler_EndInvoke_m1670688069 (AdmobEventHandler_t1386791722 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void admob.AdmobEvent::.ctor()
extern "C"  void AdmobEvent__ctor_m2241030593 (AdmobEvent_t3152248509 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void admob.AdmobEvent::.cctor()
extern Il2CppClass* AdmobEvent_t3152248509_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral861234439;
extern Il2CppCodeGenString* _stringLiteral1855724576;
extern Il2CppCodeGenString* _stringLiteral948174187;
extern Il2CppCodeGenString* _stringLiteral3290456156;
extern Il2CppCodeGenString* _stringLiteral601233006;
extern Il2CppCodeGenString* _stringLiteral1242619911;
extern Il2CppCodeGenString* _stringLiteral1748790067;
extern Il2CppCodeGenString* _stringLiteral2530373389;
extern const uint32_t AdmobEvent__cctor_m270375436_MetadataUsageId;
extern "C"  void AdmobEvent__cctor_m270375436 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (AdmobEvent__cctor_m270375436_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AdmobEvent_t3152248509_StaticFields*)AdmobEvent_t3152248509_il2cpp_TypeInfo_var->static_fields)->set_onAdLoaded_0(_stringLiteral861234439);
		((AdmobEvent_t3152248509_StaticFields*)AdmobEvent_t3152248509_il2cpp_TypeInfo_var->static_fields)->set_onAdFailedToLoad_1(_stringLiteral1855724576);
		((AdmobEvent_t3152248509_StaticFields*)AdmobEvent_t3152248509_il2cpp_TypeInfo_var->static_fields)->set_onAdOpened_2(_stringLiteral948174187);
		((AdmobEvent_t3152248509_StaticFields*)AdmobEvent_t3152248509_il2cpp_TypeInfo_var->static_fields)->set_adViewWillDismissScreen_3(_stringLiteral3290456156);
		((AdmobEvent_t3152248509_StaticFields*)AdmobEvent_t3152248509_il2cpp_TypeInfo_var->static_fields)->set_onAdClosed_4(_stringLiteral601233006);
		((AdmobEvent_t3152248509_StaticFields*)AdmobEvent_t3152248509_il2cpp_TypeInfo_var->static_fields)->set_onAdLeftApplication_5(_stringLiteral1242619911);
		((AdmobEvent_t3152248509_StaticFields*)AdmobEvent_t3152248509_il2cpp_TypeInfo_var->static_fields)->set_onRewardedVideoStarted_6(_stringLiteral1748790067);
		((AdmobEvent_t3152248509_StaticFields*)AdmobEvent_t3152248509_il2cpp_TypeInfo_var->static_fields)->set_onRewarded_7(_stringLiteral2530373389);
		return;
	}
}
// System.Void admob.AdPosition::.ctor()
extern "C"  void AdPosition__ctor_m973357266 (AdPosition_t375275660 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void admob.AdPosition::.cctor()
extern Il2CppClass* AdPosition_t375275660_il2cpp_TypeInfo_var;
extern const uint32_t AdPosition__cctor_m3922175259_MetadataUsageId;
extern "C"  void AdPosition__cctor_m3922175259 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (AdPosition__cctor_m3922175259_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AdPosition_t375275660_StaticFields*)AdPosition_t375275660_il2cpp_TypeInfo_var->static_fields)->set_TOP_LEFT_1(1);
		((AdPosition_t375275660_StaticFields*)AdPosition_t375275660_il2cpp_TypeInfo_var->static_fields)->set_TOP_CENTER_2(2);
		((AdPosition_t375275660_StaticFields*)AdPosition_t375275660_il2cpp_TypeInfo_var->static_fields)->set_TOP_RIGHT_3(3);
		((AdPosition_t375275660_StaticFields*)AdPosition_t375275660_il2cpp_TypeInfo_var->static_fields)->set_MIDDLE_LEFT_4(4);
		((AdPosition_t375275660_StaticFields*)AdPosition_t375275660_il2cpp_TypeInfo_var->static_fields)->set_MIDDLE_CENTER_5(5);
		((AdPosition_t375275660_StaticFields*)AdPosition_t375275660_il2cpp_TypeInfo_var->static_fields)->set_MIDDLE_RIGHT_6(6);
		((AdPosition_t375275660_StaticFields*)AdPosition_t375275660_il2cpp_TypeInfo_var->static_fields)->set_BOTTOM_LEFT_7(7);
		((AdPosition_t375275660_StaticFields*)AdPosition_t375275660_il2cpp_TypeInfo_var->static_fields)->set_BOTTOM_CENTER_8(8);
		((AdPosition_t375275660_StaticFields*)AdPosition_t375275660_il2cpp_TypeInfo_var->static_fields)->set_BOTTOM_RIGHT_9(((int32_t)9));
		return;
	}
}
// System.Void admob.AdSize::.ctor(System.Int32,System.Int32)
extern "C"  void AdSize__ctor_m3063932780 (AdSize_t871997796 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___width0;
		__this->set_width_0(L_0);
		int32_t L_1 = ___height1;
		__this->set_height_1(L_1);
		return;
	}
}
// System.Void admob.AdSize::.cctor()
extern Il2CppClass* AdSize_t871997796_il2cpp_TypeInfo_var;
extern const uint32_t AdSize__cctor_m2213564915_MetadataUsageId;
extern "C"  void AdSize__cctor_m2213564915 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (AdSize__cctor_m2213564915_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AdSize_t871997796 * L_0 = (AdSize_t871997796 *)il2cpp_codegen_object_new(AdSize_t871997796_il2cpp_TypeInfo_var);
		AdSize__ctor_m3063932780(L_0, ((int32_t)320), ((int32_t)50), /*hidden argument*/NULL);
		((AdSize_t871997796_StaticFields*)AdSize_t871997796_il2cpp_TypeInfo_var->static_fields)->set_Banner_2(L_0);
		AdSize_t871997796 * L_1 = (AdSize_t871997796 *)il2cpp_codegen_object_new(AdSize_t871997796_il2cpp_TypeInfo_var);
		AdSize__ctor_m3063932780(L_1, ((int32_t)300), ((int32_t)250), /*hidden argument*/NULL);
		((AdSize_t871997796_StaticFields*)AdSize_t871997796_il2cpp_TypeInfo_var->static_fields)->set_MediumRectangle_3(L_1);
		AdSize_t871997796 * L_2 = (AdSize_t871997796 *)il2cpp_codegen_object_new(AdSize_t871997796_il2cpp_TypeInfo_var);
		AdSize__ctor_m3063932780(L_2, ((int32_t)468), ((int32_t)60), /*hidden argument*/NULL);
		((AdSize_t871997796_StaticFields*)AdSize_t871997796_il2cpp_TypeInfo_var->static_fields)->set_IABBanner_4(L_2);
		AdSize_t871997796 * L_3 = (AdSize_t871997796 *)il2cpp_codegen_object_new(AdSize_t871997796_il2cpp_TypeInfo_var);
		AdSize__ctor_m3063932780(L_3, ((int32_t)728), ((int32_t)90), /*hidden argument*/NULL);
		((AdSize_t871997796_StaticFields*)AdSize_t871997796_il2cpp_TypeInfo_var->static_fields)->set_Leaderboard_5(L_3);
		AdSize_t871997796 * L_4 = (AdSize_t871997796 *)il2cpp_codegen_object_new(AdSize_t871997796_il2cpp_TypeInfo_var);
		AdSize__ctor_m3063932780(L_4, ((int32_t)120), ((int32_t)600), /*hidden argument*/NULL);
		((AdSize_t871997796_StaticFields*)AdSize_t871997796_il2cpp_TypeInfo_var->static_fields)->set_WideSkyscraper_6(L_4);
		AdSize_t871997796 * L_5 = (AdSize_t871997796 *)il2cpp_codegen_object_new(AdSize_t871997796_il2cpp_TypeInfo_var);
		AdSize__ctor_m3063932780(L_5, (-1), ((int32_t)-2), /*hidden argument*/NULL);
		((AdSize_t871997796_StaticFields*)AdSize_t871997796_il2cpp_TypeInfo_var->static_fields)->set_SmartBanner_7(L_5);
		return;
	}
}
// System.Int32 admob.AdSize::get_Width()
extern "C"  int32_t AdSize_get_Width_m1072009663 (AdSize_t871997796 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_width_0();
		return L_0;
	}
}
// System.Int32 admob.AdSize::get_Height()
extern "C"  int32_t AdSize_get_Height_m3671342832 (AdSize_t871997796 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_height_1();
		return L_0;
	}
}
// System.Void admobdemo::.ctor()
extern "C"  void admobdemo__ctor_m4147454423 (admobdemo_t183024480 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void admobdemo::Start()
extern Il2CppClass* AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var;
extern const MethodInfo* admobdemo_onBannerEvent_m364387962_MethodInfo_var;
extern const MethodInfo* admobdemo_onInterstitialEvent_m1026804282_MethodInfo_var;
extern const MethodInfo* admobdemo_onRewardedVideoEvent_m2458849509_MethodInfo_var;
extern const uint32_t admobdemo_Start_m3094592215_MetadataUsageId;
extern "C"  void admobdemo_Start_m3094592215 (admobdemo_t183024480 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (admobdemo_Start_m3094592215_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Admob_t2931807771 * L_0 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1;
		L_1.set_m_value_0((void*)(void*)admobdemo_onBannerEvent_m364387962_MethodInfo_var);
		AdmobEventHandler_t1386791722 * L_2 = (AdmobEventHandler_t1386791722 *)il2cpp_codegen_object_new(AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var);
		AdmobEventHandler__ctor_m890673333(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Admob_add_bannerEventHandler_m438201717(L_0, L_2, /*hidden argument*/NULL);
		Admob_t2931807771 * L_3 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_4;
		L_4.set_m_value_0((void*)(void*)admobdemo_onInterstitialEvent_m1026804282_MethodInfo_var);
		AdmobEventHandler_t1386791722 * L_5 = (AdmobEventHandler_t1386791722 *)il2cpp_codegen_object_new(AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var);
		AdmobEventHandler__ctor_m890673333(L_5, __this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Admob_add_interstitialEventHandler_m2573762037(L_3, L_5, /*hidden argument*/NULL);
		Admob_t2931807771 * L_6 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_7;
		L_7.set_m_value_0((void*)(void*)admobdemo_onRewardedVideoEvent_m2458849509_MethodInfo_var);
		AdmobEventHandler_t1386791722 * L_8 = (AdmobEventHandler_t1386791722 *)il2cpp_codegen_object_new(AdmobEventHandler_t1386791722_il2cpp_TypeInfo_var);
		AdmobEventHandler__ctor_m890673333(L_8, __this, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Admob_add_rewardedVideoEventHandler_m4019090272(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void admobdemo::Update()
extern "C"  void admobdemo_Update_m1448930326 (admobdemo_t183024480 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void admobdemo::OnGUI()
extern Il2CppClass* GUI_t3134605553_il2cpp_TypeInfo_var;
extern Il2CppClass* AdSize_t871997796_il2cpp_TypeInfo_var;
extern Il2CppClass* AdPosition_t375275660_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4038674669;
extern Il2CppCodeGenString* _stringLiteral3129669266;
extern Il2CppCodeGenString* _stringLiteral1247789961;
extern Il2CppCodeGenString* _stringLiteral3516072649;
extern Il2CppCodeGenString* _stringLiteral3062036303;
extern Il2CppCodeGenString* _stringLiteral3786644945;
extern Il2CppCodeGenString* _stringLiteral1194879081;
extern Il2CppCodeGenString* _stringLiteral4248784713;
extern Il2CppCodeGenString* _stringLiteral762831598;
extern const uint32_t admobdemo_OnGUI_m3642853073_MetadataUsageId;
extern "C"  void admobdemo_OnGUI_m3642853073 (admobdemo_t183024480 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (admobdemo_OnGUI_m3642853073_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Admob_t2931807771 * V_0 = NULL;
	Admob_t2931807771 * V_1 = NULL;
	Admob_t2931807771 * V_2 = NULL;
	{
		Rect_t4241904616  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m3291325233(&L_0, (0.0f), (0.0f), (100.0f), (60.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		bool L_1 = GUI_Button_m885093907(NULL /*static, unused*/, L_0, _stringLiteral4038674669, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Admob_t2931807771 * L_2 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		Admob_t2931807771 * L_3 = V_0;
		NullCheck(L_3);
		Admob_initAdmob_m3766059048(L_3, _stringLiteral3129669266, _stringLiteral1247789961, /*hidden argument*/NULL);
	}

IL_003e:
	{
		Rect_t4241904616  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Rect__ctor_m3291325233(&L_4, (120.0f), (0.0f), (100.0f), (60.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		bool L_5 = GUI_Button_m885093907(NULL /*static, unused*/, L_4, _stringLiteral3516072649, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0088;
		}
	}
	{
		Admob_t2931807771 * L_6 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_6;
		Admob_t2931807771 * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = Admob_isInterstitialReady_m3037148018(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0082;
		}
	}
	{
		Admob_t2931807771 * L_9 = V_1;
		NullCheck(L_9);
		Admob_showInterstitial_m3293884738(L_9, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_0082:
	{
		Admob_t2931807771 * L_10 = V_1;
		NullCheck(L_10);
		Admob_loadInterstitial_m2545520491(L_10, /*hidden argument*/NULL);
	}

IL_0088:
	{
		Rect_t4241904616  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Rect__ctor_m3291325233(&L_11, (240.0f), (0.0f), (100.0f), (60.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		bool L_12 = GUI_Button_m885093907(NULL /*static, unused*/, L_11, _stringLiteral3062036303, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00d7;
		}
	}
	{
		Admob_t2931807771 * L_13 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_13;
		Admob_t2931807771 * L_14 = V_2;
		NullCheck(L_14);
		bool L_15 = Admob_isRewardedVideoReady_m2121249021(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00cc;
		}
	}
	{
		Admob_t2931807771 * L_16 = V_2;
		NullCheck(L_16);
		Admob_showRewardedVideo_m1885718873(L_16, /*hidden argument*/NULL);
		goto IL_00d7;
	}

IL_00cc:
	{
		Admob_t2931807771 * L_17 = V_2;
		NullCheck(L_17);
		Admob_loadRewardedVideo_m1513222322(L_17, _stringLiteral3786644945, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		Rect_t4241904616  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Rect__ctor_m3291325233(&L_18, (240.0f), (100.0f), (100.0f), (60.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		bool L_19 = GUI_Button_m885093907(NULL /*static, unused*/, L_18, _stringLiteral1194879081, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0114;
		}
	}
	{
		Admob_t2931807771 * L_20 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AdSize_t871997796_il2cpp_TypeInfo_var);
		AdSize_t871997796 * L_21 = ((AdSize_t871997796_StaticFields*)AdSize_t871997796_il2cpp_TypeInfo_var->static_fields)->get_Banner_2();
		IL2CPP_RUNTIME_CLASS_INIT(AdPosition_t375275660_il2cpp_TypeInfo_var);
		int32_t L_22 = ((AdPosition_t375275660_StaticFields*)AdPosition_t375275660_il2cpp_TypeInfo_var->static_fields)->get_BOTTOM_CENTER_8();
		NullCheck(L_20);
		Admob_showBannerRelative_m3277642041(L_20, L_21, L_22, 0, /*hidden argument*/NULL);
	}

IL_0114:
	{
		Rect_t4241904616  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Rect__ctor_m3291325233(&L_23, (240.0f), (200.0f), (100.0f), (60.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		bool L_24 = GUI_Button_m885093907(NULL /*static, unused*/, L_23, _stringLiteral4248784713, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_014e;
		}
	}
	{
		Admob_t2931807771 * L_25 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AdSize_t871997796_il2cpp_TypeInfo_var);
		AdSize_t871997796 * L_26 = ((AdSize_t871997796_StaticFields*)AdSize_t871997796_il2cpp_TypeInfo_var->static_fields)->get_SmartBanner_7();
		NullCheck(L_25);
		Admob_showBannerAbsolute_m2892801252(L_25, L_26, 0, ((int32_t)30), /*hidden argument*/NULL);
	}

IL_014e:
	{
		Rect_t4241904616  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Rect__ctor_m3291325233(&L_27, (240.0f), (300.0f), (100.0f), (60.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		bool L_28 = GUI_Button_m885093907(NULL /*static, unused*/, L_27, _stringLiteral762831598, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0180;
		}
	}
	{
		Admob_t2931807771 * L_29 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		Admob_removeBanner_m701552009(L_29, /*hidden argument*/NULL);
	}

IL_0180:
	{
		return;
	}
}
// System.Void admobdemo::onInterstitialEvent(System.String,System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppClass* AdmobEvent_t3152248509_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral755252315;
extern Il2CppCodeGenString* _stringLiteral31776;
extern const uint32_t admobdemo_onInterstitialEvent_m1026804282_MetadataUsageId;
extern "C"  void admobdemo_onInterstitialEvent_m1026804282 (admobdemo_t183024480 * __this, String_t* ___eventName0, String_t* ___msg1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (admobdemo_onInterstitialEvent_m1026804282_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___eventName0;
		String_t* L_1 = ___msg1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m2933632197(NULL /*static, unused*/, _stringLiteral755252315, L_0, _stringLiteral31776, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___eventName0;
		IL2CPP_RUNTIME_CLASS_INIT(AdmobEvent_t3152248509_il2cpp_TypeInfo_var);
		String_t* L_4 = ((AdmobEvent_t3152248509_StaticFields*)AdmobEvent_t3152248509_il2cpp_TypeInfo_var->static_fields)->get_onAdLoaded_0();
		bool L_5 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Admob_t2931807771 * L_6 = Admob_Instance_m1681183207(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		Admob_showInterstitial_m3293884738(L_6, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void admobdemo::onBannerEvent(System.String,System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1479054759;
extern Il2CppCodeGenString* _stringLiteral31776;
extern const uint32_t admobdemo_onBannerEvent_m364387962_MetadataUsageId;
extern "C"  void admobdemo_onBannerEvent_m364387962 (admobdemo_t183024480 * __this, String_t* ___eventName0, String_t* ___msg1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (admobdemo_onBannerEvent_m364387962_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___eventName0;
		String_t* L_1 = ___msg1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m2933632197(NULL /*static, unused*/, _stringLiteral1479054759, L_0, _stringLiteral31776, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void admobdemo::onRewardedVideoEvent(System.String,System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral973446763;
extern Il2CppCodeGenString* _stringLiteral31776;
extern const uint32_t admobdemo_onRewardedVideoEvent_m2458849509_MetadataUsageId;
extern "C"  void admobdemo_onRewardedVideoEvent_m2458849509 (admobdemo_t183024480 * __this, String_t* ___eventName0, String_t* ___msg1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (admobdemo_onRewardedVideoEvent_m2458849509_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___eventName0;
		String_t* L_1 = ___msg1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m2933632197(NULL /*static, unused*/, _stringLiteral973446763, L_0, _stringLiteral31776, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern "C"  void MonoPInvokeCallbackAttribute__ctor_m2378237340 (MonoPInvokeCallbackAttribute_t60011986 * __this, Type_t * ___type0, const MethodInfo* method)
{
	{
		Attribute__ctor_m2985353781(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
