﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundRepeater
struct  BackgroundRepeater_t3511017664  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform BackgroundRepeater::cameraTransform
	Transform_t3275118058 * ___cameraTransform_2;
	// System.Single BackgroundRepeater::spriteSize
	float ___spriteSize_3;

public:
	inline static int32_t get_offset_of_cameraTransform_2() { return static_cast<int32_t>(offsetof(BackgroundRepeater_t3511017664, ___cameraTransform_2)); }
	inline Transform_t3275118058 * get_cameraTransform_2() const { return ___cameraTransform_2; }
	inline Transform_t3275118058 ** get_address_of_cameraTransform_2() { return &___cameraTransform_2; }
	inline void set_cameraTransform_2(Transform_t3275118058 * value)
	{
		___cameraTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_2, value);
	}

	inline static int32_t get_offset_of_spriteSize_3() { return static_cast<int32_t>(offsetof(BackgroundRepeater_t3511017664, ___spriteSize_3)); }
	inline float get_spriteSize_3() const { return ___spriteSize_3; }
	inline float* get_address_of_spriteSize_3() { return &___spriteSize_3; }
	inline void set_spriteSize_3(float value)
	{
		___spriteSize_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif