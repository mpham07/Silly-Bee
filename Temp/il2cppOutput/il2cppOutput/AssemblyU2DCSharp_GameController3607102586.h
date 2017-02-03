#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CameraController
struct CameraController_t3555666667;
// GameSpawnStuffController
struct GameSpawnStuffController_t3807643869;
// GameScoreController
struct GameScoreController_t777358180;
// BeeController
struct BeeController_t1259946816;
// JarController
struct JarController_t1479526107;
// UIManagerController
struct UIManagerController_t1838950257;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// CameraController GameController::cameraController
	CameraController_t3555666667 * ___cameraController_2;
	// GameSpawnStuffController GameController::spawnStuffController
	GameSpawnStuffController_t3807643869 * ___spawnStuffController_3;
	// GameScoreController GameController::scoreController
	GameScoreController_t777358180 * ___scoreController_4;
	// BeeController GameController::beeController
	BeeController_t1259946816 * ___beeController_5;
	// JarController GameController::jarController
	JarController_t1479526107 * ___jarController_6;
	// UIManagerController GameController::uiManagerController
	UIManagerController_t1838950257 * ___uiManagerController_7;
	// System.Boolean GameController::_isPlaying
	bool ____isPlaying_8;
	// System.Boolean GameController::_isTouchingFloors
	bool ____isTouchingFloors_9;
	// UnityEngine.AudioSource[] GameController::audioSource
	AudioSourceU5BU5D_t1873220070* ___audioSource_10;

public:
	inline static int32_t get_offset_of_cameraController_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___cameraController_2)); }
	inline CameraController_t3555666667 * get_cameraController_2() const { return ___cameraController_2; }
	inline CameraController_t3555666667 ** get_address_of_cameraController_2() { return &___cameraController_2; }
	inline void set_cameraController_2(CameraController_t3555666667 * value)
	{
		___cameraController_2 = value;
		Il2CppCodeGenWriteBarrier(&___cameraController_2, value);
	}

	inline static int32_t get_offset_of_spawnStuffController_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___spawnStuffController_3)); }
	inline GameSpawnStuffController_t3807643869 * get_spawnStuffController_3() const { return ___spawnStuffController_3; }
	inline GameSpawnStuffController_t3807643869 ** get_address_of_spawnStuffController_3() { return &___spawnStuffController_3; }
	inline void set_spawnStuffController_3(GameSpawnStuffController_t3807643869 * value)
	{
		___spawnStuffController_3 = value;
		Il2CppCodeGenWriteBarrier(&___spawnStuffController_3, value);
	}

	inline static int32_t get_offset_of_scoreController_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___scoreController_4)); }
	inline GameScoreController_t777358180 * get_scoreController_4() const { return ___scoreController_4; }
	inline GameScoreController_t777358180 ** get_address_of_scoreController_4() { return &___scoreController_4; }
	inline void set_scoreController_4(GameScoreController_t777358180 * value)
	{
		___scoreController_4 = value;
		Il2CppCodeGenWriteBarrier(&___scoreController_4, value);
	}

	inline static int32_t get_offset_of_beeController_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___beeController_5)); }
	inline BeeController_t1259946816 * get_beeController_5() const { return ___beeController_5; }
	inline BeeController_t1259946816 ** get_address_of_beeController_5() { return &___beeController_5; }
	inline void set_beeController_5(BeeController_t1259946816 * value)
	{
		___beeController_5 = value;
		Il2CppCodeGenWriteBarrier(&___beeController_5, value);
	}

	inline static int32_t get_offset_of_jarController_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___jarController_6)); }
	inline JarController_t1479526107 * get_jarController_6() const { return ___jarController_6; }
	inline JarController_t1479526107 ** get_address_of_jarController_6() { return &___jarController_6; }
	inline void set_jarController_6(JarController_t1479526107 * value)
	{
		___jarController_6 = value;
		Il2CppCodeGenWriteBarrier(&___jarController_6, value);
	}

	inline static int32_t get_offset_of_uiManagerController_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___uiManagerController_7)); }
	inline UIManagerController_t1838950257 * get_uiManagerController_7() const { return ___uiManagerController_7; }
	inline UIManagerController_t1838950257 ** get_address_of_uiManagerController_7() { return &___uiManagerController_7; }
	inline void set_uiManagerController_7(UIManagerController_t1838950257 * value)
	{
		___uiManagerController_7 = value;
		Il2CppCodeGenWriteBarrier(&___uiManagerController_7, value);
	}

	inline static int32_t get_offset_of__isPlaying_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ____isPlaying_8)); }
	inline bool get__isPlaying_8() const { return ____isPlaying_8; }
	inline bool* get_address_of__isPlaying_8() { return &____isPlaying_8; }
	inline void set__isPlaying_8(bool value)
	{
		____isPlaying_8 = value;
	}

	inline static int32_t get_offset_of__isTouchingFloors_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ____isTouchingFloors_9)); }
	inline bool get__isTouchingFloors_9() const { return ____isTouchingFloors_9; }
	inline bool* get_address_of__isTouchingFloors_9() { return &____isTouchingFloors_9; }
	inline void set__isTouchingFloors_9(bool value)
	{
		____isTouchingFloors_9 = value;
	}

	inline static int32_t get_offset_of_audioSource_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___audioSource_10)); }
	inline AudioSourceU5BU5D_t1873220070* get_audioSource_10() const { return ___audioSource_10; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_audioSource_10() { return &___audioSource_10; }
	inline void set_audioSource_10(AudioSourceU5BU5D_t1873220070* value)
	{
		___audioSource_10 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
