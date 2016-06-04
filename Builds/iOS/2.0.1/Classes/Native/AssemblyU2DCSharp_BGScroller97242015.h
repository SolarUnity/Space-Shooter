#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BGScroller
struct  BGScroller_t97242015  : public MonoBehaviour_t3012272455
{
public:
	// System.Single BGScroller::scrollSpeed
	float ___scrollSpeed_2;
	// System.Single BGScroller::someLength
	float ___someLength_3;
	// UnityEngine.Vector3 BGScroller::startPosition
	Vector3_t3525329789  ___startPosition_4;

public:
	inline static int32_t get_offset_of_scrollSpeed_2() { return static_cast<int32_t>(offsetof(BGScroller_t97242015, ___scrollSpeed_2)); }
	inline float get_scrollSpeed_2() const { return ___scrollSpeed_2; }
	inline float* get_address_of_scrollSpeed_2() { return &___scrollSpeed_2; }
	inline void set_scrollSpeed_2(float value)
	{
		___scrollSpeed_2 = value;
	}

	inline static int32_t get_offset_of_someLength_3() { return static_cast<int32_t>(offsetof(BGScroller_t97242015, ___someLength_3)); }
	inline float get_someLength_3() const { return ___someLength_3; }
	inline float* get_address_of_someLength_3() { return &___someLength_3; }
	inline void set_someLength_3(float value)
	{
		___someLength_3 = value;
	}

	inline static int32_t get_offset_of_startPosition_4() { return static_cast<int32_t>(offsetof(BGScroller_t97242015, ___startPosition_4)); }
	inline Vector3_t3525329789  get_startPosition_4() const { return ___startPosition_4; }
	inline Vector3_t3525329789 * get_address_of_startPosition_4() { return &___startPosition_4; }
	inline void set_startPosition_4(Vector3_t3525329789  value)
	{
		___startPosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
