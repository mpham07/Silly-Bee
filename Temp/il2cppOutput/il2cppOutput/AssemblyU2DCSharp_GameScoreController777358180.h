#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameScoreController
struct  GameScoreController_t777358180  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 GameScoreController::iScore
	int32_t ___iScore_2;
	// UnityEngine.UI.Text GameScoreController::txtScore
	Text_t356221433 * ___txtScore_3;

public:
	inline static int32_t get_offset_of_iScore_2() { return static_cast<int32_t>(offsetof(GameScoreController_t777358180, ___iScore_2)); }
	inline int32_t get_iScore_2() const { return ___iScore_2; }
	inline int32_t* get_address_of_iScore_2() { return &___iScore_2; }
	inline void set_iScore_2(int32_t value)
	{
		___iScore_2 = value;
	}

	inline static int32_t get_offset_of_txtScore_3() { return static_cast<int32_t>(offsetof(GameScoreController_t777358180, ___txtScore_3)); }
	inline Text_t356221433 * get_txtScore_3() const { return ___txtScore_3; }
	inline Text_t356221433 ** get_address_of_txtScore_3() { return &___txtScore_3; }
	inline void set_txtScore_3(Text_t356221433 * value)
	{
		___txtScore_3 = value;
		Il2CppCodeGenWriteBarrier(&___txtScore_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
