#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WeaponController
struct  WeaponController_t4154151672  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject WeaponController::shot
	GameObject_t4012695102 * ___shot_2;
	// UnityEngine.Transform WeaponController::showSpawn
	Transform_t284553113 * ___showSpawn_3;
	// System.Single WeaponController::fireRate
	float ___fireRate_4;
	// System.Single WeaponController::delay
	float ___delay_5;
	// UnityEngine.AudioSource WeaponController::audioSource
	AudioSource_t3628549054 * ___audioSource_6;

public:
	inline static int32_t get_offset_of_shot_2() { return static_cast<int32_t>(offsetof(WeaponController_t4154151672, ___shot_2)); }
	inline GameObject_t4012695102 * get_shot_2() const { return ___shot_2; }
	inline GameObject_t4012695102 ** get_address_of_shot_2() { return &___shot_2; }
	inline void set_shot_2(GameObject_t4012695102 * value)
	{
		___shot_2 = value;
		Il2CppCodeGenWriteBarrier(&___shot_2, value);
	}

	inline static int32_t get_offset_of_showSpawn_3() { return static_cast<int32_t>(offsetof(WeaponController_t4154151672, ___showSpawn_3)); }
	inline Transform_t284553113 * get_showSpawn_3() const { return ___showSpawn_3; }
	inline Transform_t284553113 ** get_address_of_showSpawn_3() { return &___showSpawn_3; }
	inline void set_showSpawn_3(Transform_t284553113 * value)
	{
		___showSpawn_3 = value;
		Il2CppCodeGenWriteBarrier(&___showSpawn_3, value);
	}

	inline static int32_t get_offset_of_fireRate_4() { return static_cast<int32_t>(offsetof(WeaponController_t4154151672, ___fireRate_4)); }
	inline float get_fireRate_4() const { return ___fireRate_4; }
	inline float* get_address_of_fireRate_4() { return &___fireRate_4; }
	inline void set_fireRate_4(float value)
	{
		___fireRate_4 = value;
	}

	inline static int32_t get_offset_of_delay_5() { return static_cast<int32_t>(offsetof(WeaponController_t4154151672, ___delay_5)); }
	inline float get_delay_5() const { return ___delay_5; }
	inline float* get_address_of_delay_5() { return &___delay_5; }
	inline void set_delay_5(float value)
	{
		___delay_5 = value;
	}

	inline static int32_t get_offset_of_audioSource_6() { return static_cast<int32_t>(offsetof(WeaponController_t4154151672, ___audioSource_6)); }
	inline AudioSource_t3628549054 * get_audioSource_6() const { return ___audioSource_6; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_6() { return &___audioSource_6; }
	inline void set_audioSource_6(AudioSource_t3628549054 * value)
	{
		___audioSource_6 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
