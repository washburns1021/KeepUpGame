﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t123613238;
struct t3983467982;
struct t190145395;

#include "Il2CppObject.h"
#include "t4233344013.h"
#include "t2978696884.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2846739282  : public Il2CppObject
{
public:
	String_t* f0;
	int32_t f1;
	t123613238 * f2;
	int32_t f3;
	t3983467982 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2846739282, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2846739282, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2846739282, f2)); }
	inline t123613238 * fg2() const { return f2; }
	inline t123613238 ** fag2() { return &f2; }
	inline void fs2(t123613238 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2846739282, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2846739282, f4)); }
	inline t3983467982 * fg4() const { return f4; }
	inline t3983467982 ** fag4() { return &f4; }
	inline void fs4(t3983467982 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

struct t2846739282_SFs
{
public:
	t190145395 * f5;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2846739282_SFs, f5)); }
	inline t190145395 * fg5() const { return f5; }
	inline t190145395 ** fag5() { return &f5; }
	inline void fs5(t190145395 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
