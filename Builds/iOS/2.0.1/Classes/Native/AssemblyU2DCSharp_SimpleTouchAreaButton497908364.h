#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleTouchAreaButton
struct  SimpleTouchAreaButton_t497908364  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean SimpleTouchAreaButton::canFire
	bool ___canFire_2;
	// System.Single SimpleTouchAreaButton::smoothing
	float ___smoothing_3;
	// System.Boolean SimpleTouchAreaButton::touched
	bool ___touched_4;
	// System.Int32 SimpleTouchAreaButton::pointerId
	int32_t ___pointerId_5;

public:
	inline static int32_t get_offset_of_canFire_2() { return static_cast<int32_t>(offsetof(SimpleTouchAreaButton_t497908364, ___canFire_2)); }
	inline bool get_canFire_2() const { return ___canFire_2; }
	inline bool* get_address_of_canFire_2() { return &___canFire_2; }
	inline void set_canFire_2(bool value)
	{
		___canFire_2 = value;
	}

	inline static int32_t get_offset_of_smoothing_3() { return static_cast<int32_t>(offsetof(SimpleTouchAreaButton_t497908364, ___smoothing_3)); }
	inline float get_smoothing_3() const { return ___smoothing_3; }
	inline float* get_address_of_smoothing_3() { return &___smoothing_3; }
	inline void set_smoothing_3(float value)
	{
		___smoothing_3 = value;
	}

	inline static int32_t get_offset_of_touched_4() { return static_cast<int32_t>(offsetof(SimpleTouchAreaButton_t497908364, ___touched_4)); }
	inline bool get_touched_4() const { return ___touched_4; }
	inline bool* get_address_of_touched_4() { return &___touched_4; }
	inline void set_touched_4(bool value)
	{
		___touched_4 = value;
	}

	inline static int32_t get_offset_of_pointerId_5() { return static_cast<int32_t>(offsetof(SimpleTouchAreaButton_t497908364, ___pointerId_5)); }
	inline int32_t get_pointerId_5() const { return ___pointerId_5; }
	inline int32_t* get_address_of_pointerId_5() { return &___pointerId_5; }
	inline void set_pointerId_5(int32_t value)
	{
		___pointerId_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
