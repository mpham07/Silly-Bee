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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BeeController
struct  BeeController_t1259946816  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean BeeController::isPlaying
	bool ___isPlaying_2;
	// GameController BeeController::gameController
	GameController_t3607102586 * ___gameController_3;
	// UnityEngine.Sprite[] BeeController::spriteBees
	SpriteU5BU5D_t3359083662* ___spriteBees_4;
	// UnityEngine.SpriteRenderer BeeController::sprRenderer
	SpriteRenderer_t1209076198 * ___sprRenderer_5;
	// System.Single BeeController::jetpackForce
	float ___jetpackForce_6;

public:
	inline static int32_t get_offset_of_isPlaying_2() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___isPlaying_2)); }
	inline bool get_isPlaying_2() const { return ___isPlaying_2; }
	inline bool* get_address_of_isPlaying_2() { return &___isPlaying_2; }
	inline void set_isPlaying_2(bool value)
	{
		___isPlaying_2 = value;
	}

	inline static int32_t get_offset_of_gameController_3() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___gameController_3)); }
	inline GameController_t3607102586 * get_gameController_3() const { return ___gameController_3; }
	inline GameController_t3607102586 ** get_address_of_gameController_3() { return &___gameController_3; }
	inline void set_gameController_3(GameController_t3607102586 * value)
	{
		___gameController_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_3, value);
	}

	inline static int32_t get_offset_of_spriteBees_4() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___spriteBees_4)); }
	inline SpriteU5BU5D_t3359083662* get_spriteBees_4() const { return ___spriteBees_4; }
	inline SpriteU5BU5D_t3359083662** get_address_of_spriteBees_4() { return &___spriteBees_4; }
	inline void set_spriteBees_4(SpriteU5BU5D_t3359083662* value)
	{
		___spriteBees_4 = value;
		Il2CppCodeGenWriteBarrier(&___spriteBees_4, value);
	}

	inline static int32_t get_offset_of_sprRenderer_5() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___sprRenderer_5)); }
	inline SpriteRenderer_t1209076198 * get_sprRenderer_5() const { return ___sprRenderer_5; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sprRenderer_5() { return &___sprRenderer_5; }
	inline void set_sprRenderer_5(SpriteRenderer_t1209076198 * value)
	{
		___sprRenderer_5 = value;
		Il2CppCodeGenWriteBarrier(&___sprRenderer_5, value);
	}

	inline static int32_t get_offset_of_jetpackForce_6() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___jetpackForce_6)); }
	inline float get_jetpackForce_6() const { return ___jetpackForce_6; }
	inline float* get_address_of_jetpackForce_6() { return &___jetpackForce_6; }
	inline void set_jetpackForce_6(float value)
	{
		___jetpackForce_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
