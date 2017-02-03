#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// admob.Admob/AdmobEventHandler
struct AdmobEventHandler_t2983421020;
// admob.Admob
struct Admob_t546240967;
// admob.Admob/AdmobAdCallBack
struct AdmobAdCallBack_t390902866;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// admob.Admob
struct  Admob_t546240967  : public Il2CppObject
{
public:
	// admob.Admob/AdmobEventHandler admob.Admob::bannerEventHandler
	AdmobEventHandler_t2983421020 * ___bannerEventHandler_0;
	// admob.Admob/AdmobEventHandler admob.Admob::interstitialEventHandler
	AdmobEventHandler_t2983421020 * ___interstitialEventHandler_1;
	// admob.Admob/AdmobEventHandler admob.Admob::rewardedVideoEventHandler
	AdmobEventHandler_t2983421020 * ___rewardedVideoEventHandler_2;

public:
	inline static int32_t get_offset_of_bannerEventHandler_0() { return static_cast<int32_t>(offsetof(Admob_t546240967, ___bannerEventHandler_0)); }
	inline AdmobEventHandler_t2983421020 * get_bannerEventHandler_0() const { return ___bannerEventHandler_0; }
	inline AdmobEventHandler_t2983421020 ** get_address_of_bannerEventHandler_0() { return &___bannerEventHandler_0; }
	inline void set_bannerEventHandler_0(AdmobEventHandler_t2983421020 * value)
	{
		___bannerEventHandler_0 = value;
		Il2CppCodeGenWriteBarrier(&___bannerEventHandler_0, value);
	}

	inline static int32_t get_offset_of_interstitialEventHandler_1() { return static_cast<int32_t>(offsetof(Admob_t546240967, ___interstitialEventHandler_1)); }
	inline AdmobEventHandler_t2983421020 * get_interstitialEventHandler_1() const { return ___interstitialEventHandler_1; }
	inline AdmobEventHandler_t2983421020 ** get_address_of_interstitialEventHandler_1() { return &___interstitialEventHandler_1; }
	inline void set_interstitialEventHandler_1(AdmobEventHandler_t2983421020 * value)
	{
		___interstitialEventHandler_1 = value;
		Il2CppCodeGenWriteBarrier(&___interstitialEventHandler_1, value);
	}

	inline static int32_t get_offset_of_rewardedVideoEventHandler_2() { return static_cast<int32_t>(offsetof(Admob_t546240967, ___rewardedVideoEventHandler_2)); }
	inline AdmobEventHandler_t2983421020 * get_rewardedVideoEventHandler_2() const { return ___rewardedVideoEventHandler_2; }
	inline AdmobEventHandler_t2983421020 ** get_address_of_rewardedVideoEventHandler_2() { return &___rewardedVideoEventHandler_2; }
	inline void set_rewardedVideoEventHandler_2(AdmobEventHandler_t2983421020 * value)
	{
		___rewardedVideoEventHandler_2 = value;
		Il2CppCodeGenWriteBarrier(&___rewardedVideoEventHandler_2, value);
	}
};

struct Admob_t546240967_StaticFields
{
public:
	// admob.Admob admob.Admob::_instance
	Admob_t546240967 * ____instance_3;
	// admob.Admob/AdmobAdCallBack admob.Admob::<>f__mg$cache0
	AdmobAdCallBack_t390902866 * ___U3CU3Ef__mgU24cache0_4;

public:
	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(Admob_t546240967_StaticFields, ____instance_3)); }
	inline Admob_t546240967 * get__instance_3() const { return ____instance_3; }
	inline Admob_t546240967 ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(Admob_t546240967 * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier(&____instance_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_4() { return static_cast<int32_t>(offsetof(Admob_t546240967_StaticFields, ___U3CU3Ef__mgU24cache0_4)); }
	inline AdmobAdCallBack_t390902866 * get_U3CU3Ef__mgU24cache0_4() const { return ___U3CU3Ef__mgU24cache0_4; }
	inline AdmobAdCallBack_t390902866 ** get_address_of_U3CU3Ef__mgU24cache0_4() { return &___U3CU3Ef__mgU24cache0_4; }
	inline void set_U3CU3Ef__mgU24cache0_4(AdmobAdCallBack_t390902866 * value)
	{
		___U3CU3Ef__mgU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
