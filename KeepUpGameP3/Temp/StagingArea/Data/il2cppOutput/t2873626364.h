﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t151856077;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2873626364  : public Il2CppObject
{
public:
	t151856077* f1;
	bool f2;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2873626364, f1)); }
	inline t151856077* fg1() const { return f1; }
	inline t151856077** fag1() { return &f1; }
	inline void fs1(t151856077* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2873626364, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif