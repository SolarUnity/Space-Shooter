#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Boundary
struct Boundary_t2244299850;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3681339876;
// SimpleTouchAreaButton
struct SimpleTouchAreaButton_t497908364;
// SimpleTouchPad
struct SimpleTouchPad_t3662949574;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t3012272455
{
public:
	// System.Single PlayerController::speed
	float ___speed_2;
	// System.Single PlayerController::tilt
	float ___tilt_3;
	// Boundary PlayerController::boundary
	Boundary_t2244299850 * ___boundary_4;
	// System.Single PlayerController::fireRate
	float ___fireRate_5;
	// UnityEngine.GameObject PlayerController::shot
	GameObject_t4012695102 * ___shot_6;
	// UnityEngine.Transform[] PlayerController::shotSpawns
	TransformU5BU5D_t3681339876* ___shotSpawns_7;
	// SimpleTouchAreaButton PlayerController::simpleTouchAreaButton
	SimpleTouchAreaButton_t497908364 * ___simpleTouchAreaButton_8;
	// SimpleTouchPad PlayerController::simpleTouchPad
	SimpleTouchPad_t3662949574 * ___simpleTouchPad_9;
	// System.Single PlayerController::nextFire
	float ___nextFire_10;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t1972007546 * ___rb_11;
	// UnityEngine.AudioSource PlayerController::audio
	AudioSource_t3628549054 * ___audio_12;
	// UnityEngine.Quaternion PlayerController::calibrationQuaternion
	Quaternion_t1891715979  ___calibrationQuaternion_13;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_tilt_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___tilt_3)); }
	inline float get_tilt_3() const { return ___tilt_3; }
	inline float* get_address_of_tilt_3() { return &___tilt_3; }
	inline void set_tilt_3(float value)
	{
		___tilt_3 = value;
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___boundary_4)); }
	inline Boundary_t2244299850 * get_boundary_4() const { return ___boundary_4; }
	inline Boundary_t2244299850 ** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(Boundary_t2244299850 * value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_4, value);
	}

	inline static int32_t get_offset_of_fireRate_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___fireRate_5)); }
	inline float get_fireRate_5() const { return ___fireRate_5; }
	inline float* get_address_of_fireRate_5() { return &___fireRate_5; }
	inline void set_fireRate_5(float value)
	{
		___fireRate_5 = value;
	}

	inline static int32_t get_offset_of_shot_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___shot_6)); }
	inline GameObject_t4012695102 * get_shot_6() const { return ___shot_6; }
	inline GameObject_t4012695102 ** get_address_of_shot_6() { return &___shot_6; }
	inline void set_shot_6(GameObject_t4012695102 * value)
	{
		___shot_6 = value;
		Il2CppCodeGenWriteBarrier(&___shot_6, value);
	}

	inline static int32_t get_offset_of_shotSpawns_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___shotSpawns_7)); }
	inline TransformU5BU5D_t3681339876* get_shotSpawns_7() const { return ___shotSpawns_7; }
	inline TransformU5BU5D_t3681339876** get_address_of_shotSpawns_7() { return &___shotSpawns_7; }
	inline void set_shotSpawns_7(TransformU5BU5D_t3681339876* value)
	{
		___shotSpawns_7 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawns_7, value);
	}

	inline static int32_t get_offset_of_simpleTouchAreaButton_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___simpleTouchAreaButton_8)); }
	inline SimpleTouchAreaButton_t497908364 * get_simpleTouchAreaButton_8() const { return ___simpleTouchAreaButton_8; }
	inline SimpleTouchAreaButton_t497908364 ** get_address_of_simpleTouchAreaButton_8() { return &___simpleTouchAreaButton_8; }
	inline void set_simpleTouchAreaButton_8(SimpleTouchAreaButton_t497908364 * value)
	{
		___simpleTouchAreaButton_8 = value;
		Il2CppCodeGenWriteBarrier(&___simpleTouchAreaButton_8, value);
	}

	inline static int32_t get_offset_of_simpleTouchPad_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___simpleTouchPad_9)); }
	inline SimpleTouchPad_t3662949574 * get_simpleTouchPad_9() const { return ___simpleTouchPad_9; }
	inline SimpleTouchPad_t3662949574 ** get_address_of_simpleTouchPad_9() { return &___simpleTouchPad_9; }
	inline void set_simpleTouchPad_9(SimpleTouchPad_t3662949574 * value)
	{
		___simpleTouchPad_9 = value;
		Il2CppCodeGenWriteBarrier(&___simpleTouchPad_9, value);
	}

	inline static int32_t get_offset_of_nextFire_10() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___nextFire_10)); }
	inline float get_nextFire_10() const { return ___nextFire_10; }
	inline float* get_address_of_nextFire_10() { return &___nextFire_10; }
	inline void set_nextFire_10(float value)
	{
		___nextFire_10 = value;
	}

	inline static int32_t get_offset_of_rb_11() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rb_11)); }
	inline Rigidbody_t1972007546 * get_rb_11() const { return ___rb_11; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_11() { return &___rb_11; }
	inline void set_rb_11(Rigidbody_t1972007546 * value)
	{
		___rb_11 = value;
		Il2CppCodeGenWriteBarrier(&___rb_11, value);
	}

	inline static int32_t get_offset_of_audio_12() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___audio_12)); }
	inline AudioSource_t3628549054 * get_audio_12() const { return ___audio_12; }
	inline AudioSource_t3628549054 ** get_address_of_audio_12() { return &___audio_12; }
	inline void set_audio_12(AudioSource_t3628549054 * value)
	{
		___audio_12 = value;
		Il2CppCodeGenWriteBarrier(&___audio_12, value);
	}

	inline static int32_t get_offset_of_calibrationQuaternion_13() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___calibrationQuaternion_13)); }
	inline Quaternion_t1891715979  get_calibrationQuaternion_13() const { return ___calibrationQuaternion_13; }
	inline Quaternion_t1891715979 * get_address_of_calibrationQuaternion_13() { return &___calibrationQuaternion_13; }
	inline void set_calibrationQuaternion_13(Quaternion_t1891715979  value)
	{
		___calibrationQuaternion_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
