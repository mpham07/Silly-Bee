#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// AdManager
struct AdManager_t3461832170;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AdManager
struct  AdManager_t3461832170  : public MonoBehaviour_t667441552
{
public:
	// System.String AdManager::bannerID
	String_t* ___bannerID_2;
	// System.String AdManager::videoID
	String_t* ___videoID_3;

public:
	inline static int32_t get_offset_of_bannerID_2() { return static_cast<int32_t>(offsetof(AdManager_t3461832170, ___bannerID_2)); }
	inline String_t* get_bannerID_2() const { return ___bannerID_2; }
	inline String_t** get_address_of_bannerID_2() { return &___bannerID_2; }
	inline void set_bannerID_2(String_t* value)
	{
		___bannerID_2 = value;
		Il2CppCodeGenWriteBarrier(&___bannerID_2, value);
	}

	inline static int32_t get_offset_of_videoID_3() { return static_cast<int32_t>(offsetof(AdManager_t3461832170, ___videoID_3)); }
	inline String_t* get_videoID_3() const { return ___videoID_3; }
	inline String_t** get_address_of_videoID_3() { return &___videoID_3; }
	inline void set_videoID_3(String_t* value)
	{
		___videoID_3 = value;
		Il2CppCodeGenWriteBarrier(&___videoID_3, value);
	}
};

struct AdManager_t3461832170_StaticFields
{
public:
	// AdManager AdManager::<Instance>k__BackingField
	AdManager_t3461832170 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AdManager_t3461832170_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline AdManager_t3461832170 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline AdManager_t3461832170 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(AdManager_t3461832170 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
