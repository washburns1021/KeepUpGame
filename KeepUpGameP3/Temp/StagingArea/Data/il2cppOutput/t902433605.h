﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2754714603;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t902433605  : public Il2CppObject
{
public:

public:
};

struct t902433605_SFs
{
public:
	t2754714603 * f0;
	t2754714603 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t902433605_SFs, f0)); }
	inline t2754714603 * fg0() const { return f0; }
	inline t2754714603 ** fag0() { return &f0; }
	inline void fs0(t2754714603 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t902433605_SFs, f1)); }
	inline t2754714603 * fg1() const { return f1; }
	inline t2754714603 ** fag1() { return &f1; }
	inline void fs1(t2754714603 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
