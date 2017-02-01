#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GameSpawnStuffController
struct GameSpawnStuffController_t3098321639;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void GameSpawnStuffController::.ctor()
extern "C"  void GameSpawnStuffController__ctor_m2985312148 (GameSpawnStuffController_t3098321639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSpawnStuffController::init()
extern "C"  void GameSpawnStuffController_init_m132685856 (GameSpawnStuffController_t3098321639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSpawnStuffController::stopSpawnStuff()
extern "C"  void GameSpawnStuffController_stopSpawnStuff_m4128626283 (GameSpawnStuffController_t3098321639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSpawnStuffController::vodSpawnFlower()
extern "C"  void GameSpawnStuffController_vodSpawnFlower_m4104420731 (GameSpawnStuffController_t3098321639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GameSpawnStuffController::getFlowerObject(System.Int32)
extern "C"  GameObject_t3674682005 * GameSpawnStuffController_getFlowerObject_m2425187198 (GameSpawnStuffController_t3098321639 * __this, int32_t ___num0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameSpawnStuffController::getNameFlower(System.Int32)
extern "C"  String_t* GameSpawnStuffController_getNameFlower_m2579978140 (GameSpawnStuffController_t3098321639 * __this, int32_t ___num0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameSpawnStuffController::randNoSame(System.Int32,System.Int32,System.Int32&)
extern "C"  int32_t GameSpawnStuffController_randNoSame_m2759281809 (GameSpawnStuffController_t3098321639 * __this, int32_t ___min0, int32_t ___max1, int32_t* ___oldValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
