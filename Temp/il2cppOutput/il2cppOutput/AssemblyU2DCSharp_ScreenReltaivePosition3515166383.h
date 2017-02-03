#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_ScreenReltaivePosition_ScreenEdge821756019.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenReltaivePosition
struct  ScreenReltaivePosition_t3515166383  : public MonoBehaviour_t1158329972
{
public:
	// ScreenReltaivePosition/ScreenEdge ScreenReltaivePosition::screenEdge
	int32_t ___screenEdge_2;
	// System.Single ScreenReltaivePosition::xOffset
	float ___xOffset_3;
	// System.Single ScreenReltaivePosition::yOffset
	float ___yOffset_4;

public:
	inline static int32_t get_offset_of_screenEdge_2() { return static_cast<int32_t>(offsetof(ScreenReltaivePosition_t3515166383, ___screenEdge_2)); }
	inline int32_t get_screenEdge_2() const { return ___screenEdge_2; }
	inline int32_t* get_address_of_screenEdge_2() { return &___screenEdge_2; }
	inline void set_screenEdge_2(int32_t value)
	{
		___screenEdge_2 = value;
	}

	inline static int32_t get_offset_of_xOffset_3() { return static_cast<int32_t>(offsetof(ScreenReltaivePosition_t3515166383, ___xOffset_3)); }
	inline float get_xOffset_3() const { return ___xOffset_3; }
	inline float* get_address_of_xOffset_3() { return &___xOffset_3; }
	inline void set_xOffset_3(float value)
	{
		___xOffset_3 = value;
	}

	inline static int32_t get_offset_of_yOffset_4() { return static_cast<int32_t>(offsetof(ScreenReltaivePosition_t3515166383, ___yOffset_4)); }
	inline float get_yOffset_4() const { return ___yOffset_4; }
	inline float* get_address_of_yOffset_4() { return &___yOffset_4; }
	inline void set_yOffset_4(float value)
	{
		___yOffset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
