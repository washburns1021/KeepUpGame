﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1006925219;
struct t2509538522;

#include "Il2CppObject.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t47287592  : public Il2CppObject
{
public:
	IntPtr_t f0;
	t1006925219 * f1;
	t2509538522 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t47287592, f0)); }
	inline IntPtr_t fg0() const { return f0; }
	inline IntPtr_t* fag0() { return &f0; }
	inline void fs0(IntPtr_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t47287592, f1)); }
	inline t1006925219 * fg1() const { return f1; }
	inline t1006925219 ** fag1() { return &f1; }
	inline void fs1(t1006925219 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t47287592, f2)); }
	inline t2509538522 * fg2() const { return f2; }
	inline t2509538522 ** fag2() { return &f2; }
	inline void fs2(t2509538522 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
