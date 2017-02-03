#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameController
struct GameController_t3607102586;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlowerController
struct  FlowerController_t2774094951  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean FlowerController::moveToJar
	bool ___moveToJar_2;
	// System.Single FlowerController::moveSpeed
	float ___moveSpeed_3;
	// UnityEngine.Vector3 FlowerController::moveDirection
	Vector3_t2243707580  ___moveDirection_4;
	// GameController FlowerController::gameController
	GameController_t3607102586 * ___gameController_5;

public:
	inline static int32_t get_offset_of_moveToJar_2() { return static_cast<int32_t>(offsetof(FlowerController_t2774094951, ___moveToJar_2)); }
	inline bool get_moveToJar_2() const { return ___moveToJar_2; }
	inline bool* get_address_of_moveToJar_2() { return &___moveToJar_2; }
	inline void set_moveToJar_2(bool value)
	{
		___moveToJar_2 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_3() { return static_cast<int32_t>(offsetof(FlowerController_t2774094951, ___moveSpeed_3)); }
	inline float get_moveSpeed_3() const { return ___moveSpeed_3; }
	inline float* get_address_of_moveSpeed_3() { return &___moveSpeed_3; }
	inline void set_moveSpeed_3(float value)
	{
		___moveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_moveDirection_4() { return static_cast<int32_t>(offsetof(FlowerController_t2774094951, ___moveDirection_4)); }
	inline Vector3_t2243707580  get_moveDirection_4() const { return ___moveDirection_4; }
	inline Vector3_t2243707580 * get_address_of_moveDirection_4() { return &___moveDirection_4; }
	inline void set_moveDirection_4(Vector3_t2243707580  value)
	{
		___moveDirection_4 = value;
	}

	inline static int32_t get_offset_of_gameController_5() { return static_cast<int32_t>(offsetof(FlowerController_t2774094951, ___gameController_5)); }
	inline GameController_t3607102586 * get_gameController_5() const { return ___gameController_5; }
	inline GameController_t3607102586 ** get_address_of_gameController_5() { return &___gameController_5; }
	inline void set_gameController_5(GameController_t3607102586 * value)
	{
		___gameController_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
