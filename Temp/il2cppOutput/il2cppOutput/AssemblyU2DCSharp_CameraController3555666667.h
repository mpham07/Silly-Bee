#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3555666667  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CameraController::speed
	float ___speed_2;
	// System.Single CameraController::speedDefault
	float ___speedDefault_3;
	// System.Boolean CameraController::isStopCam
	bool ___isStopCam_4;
	// System.Boolean CameraController::isPlaying
	bool ___isPlaying_5;
	// UnityEngine.Vector3 CameraController::newPosition
	Vector3_t2243707580  ___newPosition_6;
	// System.Single CameraController::speedReset
	float ___speedReset_7;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_speedDefault_3() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___speedDefault_3)); }
	inline float get_speedDefault_3() const { return ___speedDefault_3; }
	inline float* get_address_of_speedDefault_3() { return &___speedDefault_3; }
	inline void set_speedDefault_3(float value)
	{
		___speedDefault_3 = value;
	}

	inline static int32_t get_offset_of_isStopCam_4() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___isStopCam_4)); }
	inline bool get_isStopCam_4() const { return ___isStopCam_4; }
	inline bool* get_address_of_isStopCam_4() { return &___isStopCam_4; }
	inline void set_isStopCam_4(bool value)
	{
		___isStopCam_4 = value;
	}

	inline static int32_t get_offset_of_isPlaying_5() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___isPlaying_5)); }
	inline bool get_isPlaying_5() const { return ___isPlaying_5; }
	inline bool* get_address_of_isPlaying_5() { return &___isPlaying_5; }
	inline void set_isPlaying_5(bool value)
	{
		___isPlaying_5 = value;
	}

	inline static int32_t get_offset_of_newPosition_6() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___newPosition_6)); }
	inline Vector3_t2243707580  get_newPosition_6() const { return ___newPosition_6; }
	inline Vector3_t2243707580 * get_address_of_newPosition_6() { return &___newPosition_6; }
	inline void set_newPosition_6(Vector3_t2243707580  value)
	{
		___newPosition_6 = value;
	}

	inline static int32_t get_offset_of_speedReset_7() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___speedReset_7)); }
	inline float get_speedReset_7() const { return ___speedReset_7; }
	inline float* get_address_of_speedReset_7() { return &___speedReset_7; }
	inline void set_speedReset_7(float value)
	{
		___speedReset_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
