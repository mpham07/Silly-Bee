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
#include "AssemblyU2DCSharp_TypeFlower1414339783.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JarController
struct  JarController_t1479526107  : public MonoBehaviour_t1158329972
{
public:
	// TypeFlower JarController::typeFlower
	int32_t ___typeFlower_2;
	// GameController JarController::gameController
	GameController_t3607102586 * ___gameController_3;

public:
	inline static int32_t get_offset_of_typeFlower_2() { return static_cast<int32_t>(offsetof(JarController_t1479526107, ___typeFlower_2)); }
	inline int32_t get_typeFlower_2() const { return ___typeFlower_2; }
	inline int32_t* get_address_of_typeFlower_2() { return &___typeFlower_2; }
	inline void set_typeFlower_2(int32_t value)
	{
		___typeFlower_2 = value;
	}

	inline static int32_t get_offset_of_gameController_3() { return static_cast<int32_t>(offsetof(JarController_t1479526107, ___gameController_3)); }
	inline GameController_t3607102586 * get_gameController_3() const { return ___gameController_3; }
	inline GameController_t3607102586 ** get_address_of_gameController_3() { return &___gameController_3; }
	inline void set_gameController_3(GameController_t3607102586 * value)
	{
		___gameController_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
