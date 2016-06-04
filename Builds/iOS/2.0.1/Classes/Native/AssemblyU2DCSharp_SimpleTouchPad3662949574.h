#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleTouchPad
struct  SimpleTouchPad_t3662949574  : public MonoBehaviour_t3012272455
{
public:
	// System.Single SimpleTouchPad::smoothing
	float ___smoothing_2;
	// UnityEngine.Vector2 SimpleTouchPad::origin
	Vector2_t3525329788  ___origin_3;
	// UnityEngine.Vector2 SimpleTouchPad::direction
	Vector2_t3525329788  ___direction_4;
	// UnityEngine.Vector2 SimpleTouchPad::smoothDirection
	Vector2_t3525329788  ___smoothDirection_5;
	// System.Boolean SimpleTouchPad::touched
	bool ___touched_6;
	// System.Int32 SimpleTouchPad::pointerId
	int32_t ___pointerId_7;

public:
	inline static int32_t get_offset_of_smoothing_2() { return static_cast<int32_t>(offsetof(SimpleTouchPad_t3662949574, ___smoothing_2)); }
	inline float get_smoothing_2() const { return ___smoothing_2; }
	inline float* get_address_of_smoothing_2() { return &___smoothing_2; }
	inline void set_smoothing_2(float value)
	{
		___smoothing_2 = value;
	}

	inline static int32_t get_offset_of_origin_3() { return static_cast<int32_t>(offsetof(SimpleTouchPad_t3662949574, ___origin_3)); }
	inline Vector2_t3525329788  get_origin_3() const { return ___origin_3; }
	inline Vector2_t3525329788 * get_address_of_origin_3() { return &___origin_3; }
	inline void set_origin_3(Vector2_t3525329788  value)
	{
		___origin_3 = value;
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(SimpleTouchPad_t3662949574, ___direction_4)); }
	inline Vector2_t3525329788  get_direction_4() const { return ___direction_4; }
	inline Vector2_t3525329788 * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector2_t3525329788  value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_smoothDirection_5() { return static_cast<int32_t>(offsetof(SimpleTouchPad_t3662949574, ___smoothDirection_5)); }
	inline Vector2_t3525329788  get_smoothDirection_5() const { return ___smoothDirection_5; }
	inline Vector2_t3525329788 * get_address_of_smoothDirection_5() { return &___smoothDirection_5; }
	inline void set_smoothDirection_5(Vector2_t3525329788  value)
	{
		___smoothDirection_5 = value;
	}

	inline static int32_t get_offset_of_touched_6() { return static_cast<int32_t>(offsetof(SimpleTouchPad_t3662949574, ___touched_6)); }
	inline bool get_touched_6() const { return ___touched_6; }
	inline bool* get_address_of_touched_6() { return &___touched_6; }
	inline void set_touched_6(bool value)
	{
		___touched_6 = value;
	}

	inline static int32_t get_offset_of_pointerId_7() { return static_cast<int32_t>(offsetof(SimpleTouchPad_t3662949574, ___pointerId_7)); }
	inline int32_t get_pointerId_7() const { return ___pointerId_7; }
	inline int32_t* get_address_of_pointerId_7() { return &___pointerId_7; }
	inline void set_pointerId_7(int32_t value)
	{
		___pointerId_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
