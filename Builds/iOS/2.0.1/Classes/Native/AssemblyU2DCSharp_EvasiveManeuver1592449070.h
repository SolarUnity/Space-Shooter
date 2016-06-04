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
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EvasiveManeuver
struct  EvasiveManeuver_t1592449070  : public MonoBehaviour_t3012272455
{
public:
	// System.Single EvasiveManeuver::dodge
	float ___dodge_2;
	// System.Single EvasiveManeuver::smoothing
	float ___smoothing_3;
	// System.Single EvasiveManeuver::tilt
	float ___tilt_4;
	// UnityEngine.Vector2 EvasiveManeuver::startWait
	Vector2_t3525329788  ___startWait_5;
	// UnityEngine.Vector2 EvasiveManeuver::maneuverTime
	Vector2_t3525329788  ___maneuverTime_6;
	// UnityEngine.Vector2 EvasiveManeuver::maneuverWait
	Vector2_t3525329788  ___maneuverWait_7;
	// Boundary EvasiveManeuver::boundary
	Boundary_t2244299850 * ___boundary_8;
	// UnityEngine.Rigidbody EvasiveManeuver::rb
	Rigidbody_t1972007546 * ___rb_9;
	// System.Single EvasiveManeuver::targetManeuver
	float ___targetManeuver_10;
	// System.Single EvasiveManeuver::currentSpeed
	float ___currentSpeed_11;
	// UnityEngine.Transform EvasiveManeuver::playerTransform
	Transform_t284553113 * ___playerTransform_12;

public:
	inline static int32_t get_offset_of_dodge_2() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___dodge_2)); }
	inline float get_dodge_2() const { return ___dodge_2; }
	inline float* get_address_of_dodge_2() { return &___dodge_2; }
	inline void set_dodge_2(float value)
	{
		___dodge_2 = value;
	}

	inline static int32_t get_offset_of_smoothing_3() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___smoothing_3)); }
	inline float get_smoothing_3() const { return ___smoothing_3; }
	inline float* get_address_of_smoothing_3() { return &___smoothing_3; }
	inline void set_smoothing_3(float value)
	{
		___smoothing_3 = value;
	}

	inline static int32_t get_offset_of_tilt_4() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___tilt_4)); }
	inline float get_tilt_4() const { return ___tilt_4; }
	inline float* get_address_of_tilt_4() { return &___tilt_4; }
	inline void set_tilt_4(float value)
	{
		___tilt_4 = value;
	}

	inline static int32_t get_offset_of_startWait_5() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___startWait_5)); }
	inline Vector2_t3525329788  get_startWait_5() const { return ___startWait_5; }
	inline Vector2_t3525329788 * get_address_of_startWait_5() { return &___startWait_5; }
	inline void set_startWait_5(Vector2_t3525329788  value)
	{
		___startWait_5 = value;
	}

	inline static int32_t get_offset_of_maneuverTime_6() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___maneuverTime_6)); }
	inline Vector2_t3525329788  get_maneuverTime_6() const { return ___maneuverTime_6; }
	inline Vector2_t3525329788 * get_address_of_maneuverTime_6() { return &___maneuverTime_6; }
	inline void set_maneuverTime_6(Vector2_t3525329788  value)
	{
		___maneuverTime_6 = value;
	}

	inline static int32_t get_offset_of_maneuverWait_7() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___maneuverWait_7)); }
	inline Vector2_t3525329788  get_maneuverWait_7() const { return ___maneuverWait_7; }
	inline Vector2_t3525329788 * get_address_of_maneuverWait_7() { return &___maneuverWait_7; }
	inline void set_maneuverWait_7(Vector2_t3525329788  value)
	{
		___maneuverWait_7 = value;
	}

	inline static int32_t get_offset_of_boundary_8() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___boundary_8)); }
	inline Boundary_t2244299850 * get_boundary_8() const { return ___boundary_8; }
	inline Boundary_t2244299850 ** get_address_of_boundary_8() { return &___boundary_8; }
	inline void set_boundary_8(Boundary_t2244299850 * value)
	{
		___boundary_8 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_8, value);
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___rb_9)); }
	inline Rigidbody_t1972007546 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody_t1972007546 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier(&___rb_9, value);
	}

	inline static int32_t get_offset_of_targetManeuver_10() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___targetManeuver_10)); }
	inline float get_targetManeuver_10() const { return ___targetManeuver_10; }
	inline float* get_address_of_targetManeuver_10() { return &___targetManeuver_10; }
	inline void set_targetManeuver_10(float value)
	{
		___targetManeuver_10 = value;
	}

	inline static int32_t get_offset_of_currentSpeed_11() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___currentSpeed_11)); }
	inline float get_currentSpeed_11() const { return ___currentSpeed_11; }
	inline float* get_address_of_currentSpeed_11() { return &___currentSpeed_11; }
	inline void set_currentSpeed_11(float value)
	{
		___currentSpeed_11 = value;
	}

	inline static int32_t get_offset_of_playerTransform_12() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___playerTransform_12)); }
	inline Transform_t284553113 * get_playerTransform_12() const { return ___playerTransform_12; }
	inline Transform_t284553113 ** get_address_of_playerTransform_12() { return &___playerTransform_12; }
	inline void set_playerTransform_12(Transform_t284553113 * value)
	{
		___playerTransform_12 = value;
		Il2CppCodeGenWriteBarrier(&___playerTransform_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
