#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameSpawnStuffController
struct  GameSpawnStuffController_t3098321639  : public MonoBehaviour_t667441552
{
public:
	// System.Single GameSpawnStuffController::minSpawnTime
	float ___minSpawnTime_2;
	// System.Single GameSpawnStuffController::maxSpawnTime
	float ___maxSpawnTime_3;
	// System.Int32 GameSpawnStuffController::iTimeToSpawnStopSign
	int32_t ___iTimeToSpawnStopSign_4;
	// UnityEngine.GameObject[] GameSpawnStuffController::flowerPrefabs
	GameObjectU5BU5D_t2662109048* ___flowerPrefabs_5;
	// UnityEngine.GameObject GameSpawnStuffController::stopSignPrefab
	GameObject_t3674682005 * ___stopSignPrefab_6;
	// UnityEngine.GameObject GameSpawnStuffController::flowerPrefab
	GameObject_t3674682005 * ___flowerPrefab_7;
	// System.Int32 GameSpawnStuffController::flowerNumOld
	int32_t ___flowerNumOld_8;
	// System.Int32 GameSpawnStuffController::flowerColorOld
	int32_t ___flowerColorOld_9;
	// System.Int32 GameSpawnStuffController::countFlower
	int32_t ___countFlower_10;

public:
	inline static int32_t get_offset_of_minSpawnTime_2() { return static_cast<int32_t>(offsetof(GameSpawnStuffController_t3098321639, ___minSpawnTime_2)); }
	inline float get_minSpawnTime_2() const { return ___minSpawnTime_2; }
	inline float* get_address_of_minSpawnTime_2() { return &___minSpawnTime_2; }
	inline void set_minSpawnTime_2(float value)
	{
		___minSpawnTime_2 = value;
	}

	inline static int32_t get_offset_of_maxSpawnTime_3() { return static_cast<int32_t>(offsetof(GameSpawnStuffController_t3098321639, ___maxSpawnTime_3)); }
	inline float get_maxSpawnTime_3() const { return ___maxSpawnTime_3; }
	inline float* get_address_of_maxSpawnTime_3() { return &___maxSpawnTime_3; }
	inline void set_maxSpawnTime_3(float value)
	{
		___maxSpawnTime_3 = value;
	}

	inline static int32_t get_offset_of_iTimeToSpawnStopSign_4() { return static_cast<int32_t>(offsetof(GameSpawnStuffController_t3098321639, ___iTimeToSpawnStopSign_4)); }
	inline int32_t get_iTimeToSpawnStopSign_4() const { return ___iTimeToSpawnStopSign_4; }
	inline int32_t* get_address_of_iTimeToSpawnStopSign_4() { return &___iTimeToSpawnStopSign_4; }
	inline void set_iTimeToSpawnStopSign_4(int32_t value)
	{
		___iTimeToSpawnStopSign_4 = value;
	}

	inline static int32_t get_offset_of_flowerPrefabs_5() { return static_cast<int32_t>(offsetof(GameSpawnStuffController_t3098321639, ___flowerPrefabs_5)); }
	inline GameObjectU5BU5D_t2662109048* get_flowerPrefabs_5() const { return ___flowerPrefabs_5; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_flowerPrefabs_5() { return &___flowerPrefabs_5; }
	inline void set_flowerPrefabs_5(GameObjectU5BU5D_t2662109048* value)
	{
		___flowerPrefabs_5 = value;
		Il2CppCodeGenWriteBarrier(&___flowerPrefabs_5, value);
	}

	inline static int32_t get_offset_of_stopSignPrefab_6() { return static_cast<int32_t>(offsetof(GameSpawnStuffController_t3098321639, ___stopSignPrefab_6)); }
	inline GameObject_t3674682005 * get_stopSignPrefab_6() const { return ___stopSignPrefab_6; }
	inline GameObject_t3674682005 ** get_address_of_stopSignPrefab_6() { return &___stopSignPrefab_6; }
	inline void set_stopSignPrefab_6(GameObject_t3674682005 * value)
	{
		___stopSignPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___stopSignPrefab_6, value);
	}

	inline static int32_t get_offset_of_flowerPrefab_7() { return static_cast<int32_t>(offsetof(GameSpawnStuffController_t3098321639, ___flowerPrefab_7)); }
	inline GameObject_t3674682005 * get_flowerPrefab_7() const { return ___flowerPrefab_7; }
	inline GameObject_t3674682005 ** get_address_of_flowerPrefab_7() { return &___flowerPrefab_7; }
	inline void set_flowerPrefab_7(GameObject_t3674682005 * value)
	{
		___flowerPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___flowerPrefab_7, value);
	}

	inline static int32_t get_offset_of_flowerNumOld_8() { return static_cast<int32_t>(offsetof(GameSpawnStuffController_t3098321639, ___flowerNumOld_8)); }
	inline int32_t get_flowerNumOld_8() const { return ___flowerNumOld_8; }
	inline int32_t* get_address_of_flowerNumOld_8() { return &___flowerNumOld_8; }
	inline void set_flowerNumOld_8(int32_t value)
	{
		___flowerNumOld_8 = value;
	}

	inline static int32_t get_offset_of_flowerColorOld_9() { return static_cast<int32_t>(offsetof(GameSpawnStuffController_t3098321639, ___flowerColorOld_9)); }
	inline int32_t get_flowerColorOld_9() const { return ___flowerColorOld_9; }
	inline int32_t* get_address_of_flowerColorOld_9() { return &___flowerColorOld_9; }
	inline void set_flowerColorOld_9(int32_t value)
	{
		___flowerColorOld_9 = value;
	}

	inline static int32_t get_offset_of_countFlower_10() { return static_cast<int32_t>(offsetof(GameSpawnStuffController_t3098321639, ___countFlower_10)); }
	inline int32_t get_countFlower_10() const { return ___countFlower_10; }
	inline int32_t* get_address_of_countFlower_10() { return &___countFlower_10; }
	inline void set_countFlower_10(int32_t value)
	{
		___countFlower_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
