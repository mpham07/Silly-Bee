#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameController
struct GameController_t2782302542;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlowerRotation
struct  FlowerRotation_t1462251289  : public MonoBehaviour_t667441552
{
public:
	// System.Single FlowerRotation::rotateTime
	float ___rotateTime_2;
	// System.Int32 FlowerRotation::rotateSpeedSlow
	int32_t ___rotateSpeedSlow_3;
	// System.Int32 FlowerRotation::rotateSpeedFast
	int32_t ___rotateSpeedFast_4;
	// System.Int32 FlowerRotation::rotateSpeed
	int32_t ___rotateSpeed_5;
	// GameController FlowerRotation::gameController
	GameController_t2782302542 * ___gameController_6;
	// System.Single FlowerRotation::i
	float ___i_7;

public:
	inline static int32_t get_offset_of_rotateTime_2() { return static_cast<int32_t>(offsetof(FlowerRotation_t1462251289, ___rotateTime_2)); }
	inline float get_rotateTime_2() const { return ___rotateTime_2; }
	inline float* get_address_of_rotateTime_2() { return &___rotateTime_2; }
	inline void set_rotateTime_2(float value)
	{
		___rotateTime_2 = value;
	}

	inline static int32_t get_offset_of_rotateSpeedSlow_3() { return static_cast<int32_t>(offsetof(FlowerRotation_t1462251289, ___rotateSpeedSlow_3)); }
	inline int32_t get_rotateSpeedSlow_3() const { return ___rotateSpeedSlow_3; }
	inline int32_t* get_address_of_rotateSpeedSlow_3() { return &___rotateSpeedSlow_3; }
	inline void set_rotateSpeedSlow_3(int32_t value)
	{
		___rotateSpeedSlow_3 = value;
	}

	inline static int32_t get_offset_of_rotateSpeedFast_4() { return static_cast<int32_t>(offsetof(FlowerRotation_t1462251289, ___rotateSpeedFast_4)); }
	inline int32_t get_rotateSpeedFast_4() const { return ___rotateSpeedFast_4; }
	inline int32_t* get_address_of_rotateSpeedFast_4() { return &___rotateSpeedFast_4; }
	inline void set_rotateSpeedFast_4(int32_t value)
	{
		___rotateSpeedFast_4 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_5() { return static_cast<int32_t>(offsetof(FlowerRotation_t1462251289, ___rotateSpeed_5)); }
	inline int32_t get_rotateSpeed_5() const { return ___rotateSpeed_5; }
	inline int32_t* get_address_of_rotateSpeed_5() { return &___rotateSpeed_5; }
	inline void set_rotateSpeed_5(int32_t value)
	{
		___rotateSpeed_5 = value;
	}

	inline static int32_t get_offset_of_gameController_6() { return static_cast<int32_t>(offsetof(FlowerRotation_t1462251289, ___gameController_6)); }
	inline GameController_t2782302542 * get_gameController_6() const { return ___gameController_6; }
	inline GameController_t2782302542 ** get_address_of_gameController_6() { return &___gameController_6; }
	inline void set_gameController_6(GameController_t2782302542 * value)
	{
		___gameController_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_6, value);
	}

	inline static int32_t get_offset_of_i_7() { return static_cast<int32_t>(offsetof(FlowerRotation_t1462251289, ___i_7)); }
	inline float get_i_7() const { return ___i_7; }
	inline float* get_address_of_i_7() { return &___i_7; }
	inline void set_i_7(float value)
	{
		___i_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
