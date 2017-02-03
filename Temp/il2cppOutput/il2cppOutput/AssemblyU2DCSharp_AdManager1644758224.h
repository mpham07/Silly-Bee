#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AdManager
struct AdManager_t1644758224;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AdManager
struct  AdManager_t1644758224  : public MonoBehaviour_t1158329972
{
public:
	// System.String AdManager::bannerID
	String_t* ___bannerID_3;
	// System.String AdManager::videoID
	String_t* ___videoID_4;

public:
	inline static int32_t get_offset_of_bannerID_3() { return static_cast<int32_t>(offsetof(AdManager_t1644758224, ___bannerID_3)); }
	inline String_t* get_bannerID_3() const { return ___bannerID_3; }
	inline String_t** get_address_of_bannerID_3() { return &___bannerID_3; }
	inline void set_bannerID_3(String_t* value)
	{
		___bannerID_3 = value;
		Il2CppCodeGenWriteBarrier(&___bannerID_3, value);
	}

	inline static int32_t get_offset_of_videoID_4() { return static_cast<int32_t>(offsetof(AdManager_t1644758224, ___videoID_4)); }
	inline String_t* get_videoID_4() const { return ___videoID_4; }
	inline String_t** get_address_of_videoID_4() { return &___videoID_4; }
	inline void set_videoID_4(String_t* value)
	{
		___videoID_4 = value;
		Il2CppCodeGenWriteBarrier(&___videoID_4, value);
	}
};

struct AdManager_t1644758224_StaticFields
{
public:
	// AdManager AdManager::<Instance>k__BackingField
	AdManager_t1644758224 * ___U3CInstanceU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdManager_t1644758224_StaticFields, ___U3CInstanceU3Ek__BackingField_2)); }
	inline AdManager_t1644758224 * get_U3CInstanceU3Ek__BackingField_2() const { return ___U3CInstanceU3Ek__BackingField_2; }
	inline AdManager_t1644758224 ** get_address_of_U3CInstanceU3Ek__BackingField_2() { return &___U3CInstanceU3Ek__BackingField_2; }
	inline void set_U3CInstanceU3Ek__BackingField_2(AdManager_t1644758224 * value)
	{
		___U3CInstanceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
