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
struct Admob_t546240967;
// admob.Admob/AdmobEventHandler
struct AdmobEventHandler_t2983421020;
// System.String
struct String_t;
// admob.Admob/AdmobAdCallBack
struct AdmobAdCallBack_t390902866;
// admob.AdSize
struct AdSize_t3770813302;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_Admob_AdmobEve2983421020.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_Admob_AdmobAdCa390902866.h"
#include "AssemblyU2DCSharpU2Dfirstpass_admob_AdSize3770813302.h"

// System.Void admob.Admob::.ctor()
extern "C"  void Admob__ctor_m3904493015 (Admob_t546240967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::add_bannerEventHandler(admob.Admob/AdmobEventHandler)
extern "C"  void Admob_add_bannerEventHandler_m1557830709 (Admob_t546240967 * __this, AdmobEventHandler_t2983421020 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::remove_bannerEventHandler(admob.Admob/AdmobEventHandler)
extern "C"  void Admob_remove_bannerEventHandler_m2591577026 (Admob_t546240967 * __this, AdmobEventHandler_t2983421020 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::add_interstitialEventHandler(admob.Admob/AdmobEventHandler)
extern "C"  void Admob_add_interstitialEventHandler_m528202391 (Admob_t546240967 * __this, AdmobEventHandler_t2983421020 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::remove_interstitialEventHandler(admob.Admob/AdmobEventHandler)
extern "C"  void Admob_remove_interstitialEventHandler_m2729753070 (Admob_t546240967 * __this, AdmobEventHandler_t2983421020 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::add_rewardedVideoEventHandler(admob.Admob/AdmobEventHandler)
extern "C"  void Admob_add_rewardedVideoEventHandler_m698753172 (Admob_t546240967 * __this, AdmobEventHandler_t2983421020 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::remove_rewardedVideoEventHandler(admob.Admob/AdmobEventHandler)
extern "C"  void Admob_remove_rewardedVideoEventHandler_m2765341749 (Admob_t546240967 * __this, AdmobEventHandler_t2983421020 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// admob.Admob admob.Admob::Instance()
extern "C"  Admob_t546240967 * Admob_Instance_m352023099 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::preInitAdmob()
extern "C"  void Admob_preInitAdmob_m392180999 (Admob_t546240967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kminitAdmob(System.String,System.String,admob.Admob/AdmobAdCallBack)
extern "C"  void Admob__kminitAdmob_m3213489909 (Il2CppObject * __this /* static, unused */, String_t* ___bannerid0, String_t* ___fullid1, AdmobAdCallBack_t390902866 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::initAdmob(System.String,System.String)
extern "C"  void Admob_initAdmob_m1941857206 (Admob_t546240967 * __this, String_t* ___bannerID0, String_t* ___fullID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmshowBannerAbsolute(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Admob__kmshowBannerAbsolute_m3907511478 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___x2, int32_t ___y3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::showBannerAbsolute(admob.AdSize,System.Int32,System.Int32)
extern "C"  void Admob_showBannerAbsolute_m134245192 (Admob_t546240967 * __this, AdSize_t3770813302 * ___size0, int32_t ___x1, int32_t ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmshowBannerRelative(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Admob__kmshowBannerRelative_m2577731533 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___position2, int32_t ___marginY3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::showBannerRelative(admob.AdSize,System.Int32,System.Int32)
extern "C"  void Admob_showBannerRelative_m1985123803 (Admob_t546240967 * __this, AdSize_t3770813302 * ___size0, int32_t ___position1, int32_t ___marginY2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmremoveBanner()
extern "C"  void Admob__kmremoveBanner_m627095452 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::removeBanner()
extern "C"  void Admob_removeBanner_m1892867273 (Admob_t546240967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmloadInterstitial()
extern "C"  void Admob__kmloadInterstitial_m2535838764 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::loadInterstitial()
extern "C"  void Admob_loadInterstitial_m2602394663 (Admob_t546240967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean admob.Admob::_kmisInterstitialReady()
extern "C"  bool Admob__kmisInterstitialReady_m3914756345 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean admob.Admob::isInterstitialReady()
extern "C"  bool Admob_isInterstitialReady_m3353041644 (Admob_t546240967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmshowInterstitial()
extern "C"  void Admob__kmshowInterstitial_m1396908119 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::showInterstitial()
extern "C"  void Admob_showInterstitial_m2032088296 (Admob_t546240967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmloadRewardedVideo(System.String)
extern "C"  void Admob__kmloadRewardedVideo_m1533307933 (Il2CppObject * __this /* static, unused */, String_t* ___rewardedVideoID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::loadRewardedVideo(System.String)
extern "C"  void Admob_loadRewardedVideo_m4191770420 (Admob_t546240967 * __this, String_t* ___rewardedVideoID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean admob.Admob::_kmisRewardedVideoReady()
extern "C"  bool Admob__kmisRewardedVideoReady_m3707665492 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean admob.Admob::isRewardedVideoReady()
extern "C"  bool Admob_isRewardedVideoReady_m89423453 (Admob_t546240967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmshowRewardedVideo()
extern "C"  void Admob__kmshowRewardedVideo_m3329502270 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::showRewardedVideo()
extern "C"  void Admob_showRewardedVideo_m908495731 (Admob_t546240967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmsetTesting(System.Boolean)
extern "C"  void Admob__kmsetTesting_m830384613 (Il2CppObject * __this /* static, unused */, bool ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::setTesting(System.Boolean)
extern "C"  void Admob_setTesting_m4242041198 (Admob_t546240967 * __this, bool ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::_kmsetForChildren(System.Boolean)
extern "C"  void Admob__kmsetForChildren_m3748844775 (Il2CppObject * __this /* static, unused */, bool ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::setForChildren(System.Boolean)
extern "C"  void Admob_setForChildren_m3468175206 (Admob_t546240967 * __this, bool ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob::onAdmobEventCallBack(System.String,System.String,System.String)
extern "C"  void Admob_onAdmobEventCallBack_m1864886544 (Il2CppObject * __this /* static, unused */, String_t* ___adtype0, String_t* ___eventName1, String_t* ___msg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Admob_onAdmobEventCallBack_m1864886544(char* ___adtype0, char* ___eventName1, char* ___msg2);
