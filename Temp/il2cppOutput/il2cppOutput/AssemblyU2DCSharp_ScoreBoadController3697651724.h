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
// UnityEngine.UI.Button
struct Button_t2872111280;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreBoadController
struct  ScoreBoadController_t3697651724  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ScoreBoadController::txtScoreUnderJar
	Text_t356221433 * ___txtScoreUnderJar_2;
	// UnityEngine.UI.Text ScoreBoadController::txtScoreAboveBestScore
	Text_t356221433 * ___txtScoreAboveBestScore_3;
	// UnityEngine.UI.Text ScoreBoadController::txtScoreBest
	Text_t356221433 * ___txtScoreBest_4;
	// UnityEngine.UI.Button ScoreBoadController::btnPlayAgain
	Button_t2872111280 * ___btnPlayAgain_5;
	// System.Single ScoreBoadController::fScoreUnderJar
	float ___fScoreUnderJar_6;
	// System.Single ScoreBoadController::fScoreAboveBestScore
	float ___fScoreAboveBestScore_7;
	// System.Single ScoreBoadController::fScoreTemp
	float ___fScoreTemp_8;
	// System.Int32 ScoreBoadController::iSpeed
	int32_t ___iSpeed_9;
	// System.Int32 ScoreBoadController::iScoreBest
	int32_t ___iScoreBest_10;
	// System.Boolean ScoreBoadController::isAllowUpdateTextCore
	bool ___isAllowUpdateTextCore_11;

public:
	inline static int32_t get_offset_of_txtScoreUnderJar_2() { return static_cast<int32_t>(offsetof(ScoreBoadController_t3697651724, ___txtScoreUnderJar_2)); }
	inline Text_t356221433 * get_txtScoreUnderJar_2() const { return ___txtScoreUnderJar_2; }
	inline Text_t356221433 ** get_address_of_txtScoreUnderJar_2() { return &___txtScoreUnderJar_2; }
	inline void set_txtScoreUnderJar_2(Text_t356221433 * value)
	{
		___txtScoreUnderJar_2 = value;
		Il2CppCodeGenWriteBarrier(&___txtScoreUnderJar_2, value);
	}

	inline static int32_t get_offset_of_txtScoreAboveBestScore_3() { return static_cast<int32_t>(offsetof(ScoreBoadController_t3697651724, ___txtScoreAboveBestScore_3)); }
	inline Text_t356221433 * get_txtScoreAboveBestScore_3() const { return ___txtScoreAboveBestScore_3; }
	inline Text_t356221433 ** get_address_of_txtScoreAboveBestScore_3() { return &___txtScoreAboveBestScore_3; }
	inline void set_txtScoreAboveBestScore_3(Text_t356221433 * value)
	{
		___txtScoreAboveBestScore_3 = value;
		Il2CppCodeGenWriteBarrier(&___txtScoreAboveBestScore_3, value);
	}

	inline static int32_t get_offset_of_txtScoreBest_4() { return static_cast<int32_t>(offsetof(ScoreBoadController_t3697651724, ___txtScoreBest_4)); }
	inline Text_t356221433 * get_txtScoreBest_4() const { return ___txtScoreBest_4; }
	inline Text_t356221433 ** get_address_of_txtScoreBest_4() { return &___txtScoreBest_4; }
	inline void set_txtScoreBest_4(Text_t356221433 * value)
	{
		___txtScoreBest_4 = value;
		Il2CppCodeGenWriteBarrier(&___txtScoreBest_4, value);
	}

	inline static int32_t get_offset_of_btnPlayAgain_5() { return static_cast<int32_t>(offsetof(ScoreBoadController_t3697651724, ___btnPlayAgain_5)); }
	inline Button_t2872111280 * get_btnPlayAgain_5() const { return ___btnPlayAgain_5; }
	inline Button_t2872111280 ** get_address_of_btnPlayAgain_5() { return &___btnPlayAgain_5; }
	inline void set_btnPlayAgain_5(Button_t2872111280 * value)
	{
		___btnPlayAgain_5 = value;
		Il2CppCodeGenWriteBarrier(&___btnPlayAgain_5, value);
	}

	inline static int32_t get_offset_of_fScoreUnderJar_6() { return static_cast<int32_t>(offsetof(ScoreBoadController_t3697651724, ___fScoreUnderJar_6)); }
	inline float get_fScoreUnderJar_6() const { return ___fScoreUnderJar_6; }
	inline float* get_address_of_fScoreUnderJar_6() { return &___fScoreUnderJar_6; }
	inline void set_fScoreUnderJar_6(float value)
	{
		___fScoreUnderJar_6 = value;
	}

	inline static int32_t get_offset_of_fScoreAboveBestScore_7() { return static_cast<int32_t>(offsetof(ScoreBoadController_t3697651724, ___fScoreAboveBestScore_7)); }
	inline float get_fScoreAboveBestScore_7() const { return ___fScoreAboveBestScore_7; }
	inline float* get_address_of_fScoreAboveBestScore_7() { return &___fScoreAboveBestScore_7; }
	inline void set_fScoreAboveBestScore_7(float value)
	{
		___fScoreAboveBestScore_7 = value;
	}

	inline static int32_t get_offset_of_fScoreTemp_8() { return static_cast<int32_t>(offsetof(ScoreBoadController_t3697651724, ___fScoreTemp_8)); }
	inline float get_fScoreTemp_8() const { return ___fScoreTemp_8; }
	inline float* get_address_of_fScoreTemp_8() { return &___fScoreTemp_8; }
	inline void set_fScoreTemp_8(float value)
	{
		___fScoreTemp_8 = value;
	}

	inline static int32_t get_offset_of_iSpeed_9() { return static_cast<int32_t>(offsetof(ScoreBoadController_t3697651724, ___iSpeed_9)); }
	inline int32_t get_iSpeed_9() const { return ___iSpeed_9; }
	inline int32_t* get_address_of_iSpeed_9() { return &___iSpeed_9; }
	inline void set_iSpeed_9(int32_t value)
	{
		___iSpeed_9 = value;
	}

	inline static int32_t get_offset_of_iScoreBest_10() { return static_cast<int32_t>(offsetof(ScoreBoadController_t3697651724, ___iScoreBest_10)); }
	inline int32_t get_iScoreBest_10() const { return ___iScoreBest_10; }
	inline int32_t* get_address_of_iScoreBest_10() { return &___iScoreBest_10; }
	inline void set_iScoreBest_10(int32_t value)
	{
		___iScoreBest_10 = value;
	}

	inline static int32_t get_offset_of_isAllowUpdateTextCore_11() { return static_cast<int32_t>(offsetof(ScoreBoadController_t3697651724, ___isAllowUpdateTextCore_11)); }
	inline bool get_isAllowUpdateTextCore_11() const { return ___isAllowUpdateTextCore_11; }
	inline bool* get_address_of_isAllowUpdateTextCore_11() { return &___isAllowUpdateTextCore_11; }
	inline void set_isAllowUpdateTextCore_11(bool value)
	{
		___isAllowUpdateTextCore_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
