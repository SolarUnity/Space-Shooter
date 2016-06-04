#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mover
struct  Mover_t74534561  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Rigidbody Mover::rb
	Rigidbody_t1972007546 * ___rb_2;
	// System.Single Mover::speed
	float ___speed_3;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(Mover_t74534561, ___rb_2)); }
	inline Rigidbody_t1972007546 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody_t1972007546 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Mover_t74534561, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
