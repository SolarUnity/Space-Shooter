#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text GameController::scoreText
	Text_t3286458198 * ___scoreText_2;
	// UnityEngine.UI.Text GameController::restartText
	Text_t3286458198 * ___restartText_3;
	// UnityEngine.UI.Text GameController::gameOverText
	Text_t3286458198 * ___gameOverText_4;
	// UnityEngine.GameObject GameController::restartButton
	GameObject_t4012695102 * ___restartButton_5;
	// System.Int32 GameController::score
	int32_t ___score_6;
	// UnityEngine.GameObject[] GameController::hazards
	GameObjectU5BU5D_t3499186955* ___hazards_7;
	// UnityEngine.Vector3 GameController::spawnValues
	Vector3_t3525329789  ___spawnValues_8;
	// System.Int32 GameController::hazardCount
	int32_t ___hazardCount_9;
	// System.Single GameController::spawnWait
	float ___spawnWait_10;
	// System.Single GameController::startWait
	float ___startWait_11;
	// System.Single GameController::waveWait
	float ___waveWait_12;
	// System.Single GameController::afterWave
	float ___afterWave_13;
	// System.Int32 GameController::startCount
	int32_t ___startCount_14;
	// System.Boolean GameController::gameOver
	bool ___gameOver_15;
	// System.Boolean GameController::restart
	bool ___restart_16;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___scoreText_2)); }
	inline Text_t3286458198 * get_scoreText_2() const { return ___scoreText_2; }
	inline Text_t3286458198 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(Text_t3286458198 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_2, value);
	}

	inline static int32_t get_offset_of_restartText_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___restartText_3)); }
	inline Text_t3286458198 * get_restartText_3() const { return ___restartText_3; }
	inline Text_t3286458198 ** get_address_of_restartText_3() { return &___restartText_3; }
	inline void set_restartText_3(Text_t3286458198 * value)
	{
		___restartText_3 = value;
		Il2CppCodeGenWriteBarrier(&___restartText_3, value);
	}

	inline static int32_t get_offset_of_gameOverText_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameOverText_4)); }
	inline Text_t3286458198 * get_gameOverText_4() const { return ___gameOverText_4; }
	inline Text_t3286458198 ** get_address_of_gameOverText_4() { return &___gameOverText_4; }
	inline void set_gameOverText_4(Text_t3286458198 * value)
	{
		___gameOverText_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverText_4, value);
	}

	inline static int32_t get_offset_of_restartButton_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___restartButton_5)); }
	inline GameObject_t4012695102 * get_restartButton_5() const { return ___restartButton_5; }
	inline GameObject_t4012695102 ** get_address_of_restartButton_5() { return &___restartButton_5; }
	inline void set_restartButton_5(GameObject_t4012695102 * value)
	{
		___restartButton_5 = value;
		Il2CppCodeGenWriteBarrier(&___restartButton_5, value);
	}

	inline static int32_t get_offset_of_score_6() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___score_6)); }
	inline int32_t get_score_6() const { return ___score_6; }
	inline int32_t* get_address_of_score_6() { return &___score_6; }
	inline void set_score_6(int32_t value)
	{
		___score_6 = value;
	}

	inline static int32_t get_offset_of_hazards_7() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___hazards_7)); }
	inline GameObjectU5BU5D_t3499186955* get_hazards_7() const { return ___hazards_7; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_hazards_7() { return &___hazards_7; }
	inline void set_hazards_7(GameObjectU5BU5D_t3499186955* value)
	{
		___hazards_7 = value;
		Il2CppCodeGenWriteBarrier(&___hazards_7, value);
	}

	inline static int32_t get_offset_of_spawnValues_8() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___spawnValues_8)); }
	inline Vector3_t3525329789  get_spawnValues_8() const { return ___spawnValues_8; }
	inline Vector3_t3525329789 * get_address_of_spawnValues_8() { return &___spawnValues_8; }
	inline void set_spawnValues_8(Vector3_t3525329789  value)
	{
		___spawnValues_8 = value;
	}

	inline static int32_t get_offset_of_hazardCount_9() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___hazardCount_9)); }
	inline int32_t get_hazardCount_9() const { return ___hazardCount_9; }
	inline int32_t* get_address_of_hazardCount_9() { return &___hazardCount_9; }
	inline void set_hazardCount_9(int32_t value)
	{
		___hazardCount_9 = value;
	}

	inline static int32_t get_offset_of_spawnWait_10() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___spawnWait_10)); }
	inline float get_spawnWait_10() const { return ___spawnWait_10; }
	inline float* get_address_of_spawnWait_10() { return &___spawnWait_10; }
	inline void set_spawnWait_10(float value)
	{
		___spawnWait_10 = value;
	}

	inline static int32_t get_offset_of_startWait_11() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___startWait_11)); }
	inline float get_startWait_11() const { return ___startWait_11; }
	inline float* get_address_of_startWait_11() { return &___startWait_11; }
	inline void set_startWait_11(float value)
	{
		___startWait_11 = value;
	}

	inline static int32_t get_offset_of_waveWait_12() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___waveWait_12)); }
	inline float get_waveWait_12() const { return ___waveWait_12; }
	inline float* get_address_of_waveWait_12() { return &___waveWait_12; }
	inline void set_waveWait_12(float value)
	{
		___waveWait_12 = value;
	}

	inline static int32_t get_offset_of_afterWave_13() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___afterWave_13)); }
	inline float get_afterWave_13() const { return ___afterWave_13; }
	inline float* get_address_of_afterWave_13() { return &___afterWave_13; }
	inline void set_afterWave_13(float value)
	{
		___afterWave_13 = value;
	}

	inline static int32_t get_offset_of_startCount_14() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___startCount_14)); }
	inline int32_t get_startCount_14() const { return ___startCount_14; }
	inline int32_t* get_address_of_startCount_14() { return &___startCount_14; }
	inline void set_startCount_14(int32_t value)
	{
		___startCount_14 = value;
	}

	inline static int32_t get_offset_of_gameOver_15() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameOver_15)); }
	inline bool get_gameOver_15() const { return ___gameOver_15; }
	inline bool* get_address_of_gameOver_15() { return &___gameOver_15; }
	inline void set_gameOver_15(bool value)
	{
		___gameOver_15 = value;
	}

	inline static int32_t get_offset_of_restart_16() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___restart_16)); }
	inline bool get_restart_16() const { return ___restart_16; }
	inline bool* get_address_of_restart_16() { return &___restart_16; }
	inline void set_restart_16(bool value)
	{
		___restart_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
