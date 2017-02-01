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

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_Admob_AdmobEve1386791722.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_Admob_AdmobAdCa807790594.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_AdSize871997796.h"

// System.Void admob.Admob::.ctor()
extern "C"  void Admob__ctor_m2562958091 (Admob_t2931807771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::add_bannerEventHandler(admob.Admob/AdmobEventHandler)
extern "C"  void Admob_add_bannerEventHandler_m438201717 (Admob_t2931807771 * __this, AdmobEventHandler_t1386791722 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::remove_bannerEventHandler(admob.Admob/AdmobEventHandler)
extern "C"  void Admob_remove_bannerEventHandler_m1117212424 (Admob_t2931807771 * __this, AdmobEventHandler_t1386791722 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::add_interstitialEventHandler(admob.Admob/AdmobEventHandler)
extern "C"  void Admob_add_interstitialEventHandler_m2573762037 (Admob_t2931807771 * __this, AdmobEventHandler_t1386791722 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::remove_interstitialEventHandler(admob.Admob/AdmobEventHandler)
extern "C"  void Admob_remove_interstitialEventHandler_m1109960008 (Admob_t2931807771 * __this, AdmobEventHandler_t1386791722 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::add_rewardedVideoEventHandler(admob.Admob/AdmobEventHandler)
extern "C"  void Admob_add_rewardedVideoEventHandler_m4019090272 (Admob_t2931807771 * __this, AdmobEventHandler_t1386791722 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::remove_rewardedVideoEventHandler(admob.Admob/AdmobEventHandler)
extern "C"  void Admob_remove_rewardedVideoEventHandler_m1590900333 (Admob_t2931807771 * __this, AdmobEventHandler_t1386791722 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// admob.Admob admob.Admob::Instance()
extern "C"  Admob_t2931807771 * Admob_Instance_m1681183207 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::preInitAdmob()
extern "C"  void Admob_preInitAdmob_m1981559715 (Admob_t2931807771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kminitAdmob(System.String,System.String,admob.Admob/AdmobAdCallBack)
extern "C"  void Admob__kminitAdmob_m2422791523 (Il2CppObject * __this /* static, unused */, String_t* ___bannerid0, String_t* ___fullid1, AdmobAdCallBack_t807790594 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::initAdmob(System.String,System.String)
extern "C"  void Admob_initAdmob_m3766059048 (Admob_t2931807771 * __this, String_t* ___bannerID0, String_t* ___fullID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmshowBannerAbsolute(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Admob__kmshowBannerAbsolute_m3324302300 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___x2, int32_t ___y3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::showBannerAbsolute(admob.AdSize,System.Int32,System.Int32)
extern "C"  void Admob_showBannerAbsolute_m2892801252 (Admob_t2931807771 * __this, AdSize_t871997796 * ___size0, int32_t ___x1, int32_t ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmshowBannerRelative(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Admob__kmshowBannerRelative_m2160923047 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___position2, int32_t ___marginY3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::showBannerRelative(admob.AdSize,System.Int32,System.Int32)
extern "C"  void Admob_showBannerRelative_m3277642041 (Admob_t2931807771 * __this, AdSize_t871997796 * ___size0, int32_t ___position1, int32_t ___marginY2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmremoveBanner()
extern "C"  void Admob__kmremoveBanner_m3442298714 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::removeBanner()
extern "C"  void Admob_removeBanner_m701552009 (Admob_t2931807771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmloadInterstitial()
extern "C"  void Admob__kmloadInterstitial_m3786586300 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::loadInterstitial()
extern "C"  void Admob_loadInterstitial_m2545520491 (Admob_t2931807771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean admob.Admob::_kmisInterstitialReady()
extern "C"  bool Admob__kmisInterstitialReady_m1074969033 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean admob.Admob::isInterstitialReady()
extern "C"  bool Admob_isInterstitialReady_m3037148018 (Admob_t2931807771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmshowInterstitial()
extern "C"  void Admob__kmshowInterstitial_m239983251 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::showInterstitial()
extern "C"  void Admob_showInterstitial_m3293884738 (Admob_t2931807771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmloadRewardedVideo(System.String)
extern "C"  void Admob__kmloadRewardedVideo_m3470522435 (Il2CppObject * __this /* static, unused */, String_t* ___rewardedVideoID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::loadRewardedVideo(System.String)
extern "C"  void Admob_loadRewardedVideo_m1513222322 (Admob_t2931807771 * __this, String_t* ___rewardedVideoID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean admob.Admob::_kmisRewardedVideoReady()
extern "C"  bool Admob__kmisRewardedVideoReady_m1423242630 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean admob.Admob::isRewardedVideoReady()
extern "C"  bool Admob_isRewardedVideoReady_m2121249021 (Admob_t2931807771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmshowRewardedVideo()
extern "C"  void Admob__kmshowRewardedVideo_m1704053288 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::showRewardedVideo()
extern "C"  void Admob_showRewardedVideo_m1885718873 (Admob_t2931807771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmsetTesting(System.Boolean)
extern "C"  void Admob__kmsetTesting_m715000847 (Il2CppObject * __this /* static, unused */, bool ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::setTesting(System.Boolean)
extern "C"  void Admob_setTesting_m171361214 (Admob_t2931807771 * __this, bool ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmsetForChildren(System.Boolean)
extern "C"  void Admob__kmsetForChildren_m1210033255 (Il2CppObject * __this /* static, unused */, bool ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::setForChildren(System.Boolean)
extern "C"  void Admob_setForChildren_m3089558678 (Admob_t2931807771 * __this, bool ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::onAdmobEventCallBack(System.String,System.String,System.String)
extern "C"  void Admob_onAdmobEventCallBack_m3059458016 (Il2CppObject * __this /* static, unused */, String_t* ___adtype0, String_t* ___eventName1, String_t* ___msg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Admob_onAdmobEventCallBack_m3059458016(char* ___adtype0, char* ___eventName1, char* ___msg2);
