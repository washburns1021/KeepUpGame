﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;
struct t1363551830;
struct t1967233988;
struct t2399218676;
struct t276412187;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2772416992  : public Il2CppObject
{
public:
	Il2CppObject * f0;
	t1363551830 * f1;
	Il2CppObject * f2;
	t1967233988 * f3;
	t2399218676 * f4;
	t276412187 * f5;
	bool f6;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2772416992, f0)); }
	inline Il2CppObject * fg0() const { return f0; }
	inline Il2CppObject ** fag0() { return &f0; }
	inline void fs0(Il2CppObject * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2772416992, f1)); }
	inline t1363551830 * fg1() const { return f1; }
	inline t1363551830 ** fag1() { return &f1; }
	inline void fs1(t1363551830 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2772416992, f2)); }
	inline Il2CppObject * fg2() const { return f2; }
	inline Il2CppObject ** fag2() { return &f2; }
	inline void fs2(Il2CppObject * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2772416992, f3)); }
	inline t1967233988 * fg3() const { return f3; }
	inline t1967233988 ** fag3() { return &f3; }
	inline void fs3(t1967233988 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2772416992, f4)); }
	inline t2399218676 * fg4() const { return f4; }
	inline t2399218676 ** fag4() { return &f4; }
	inline void fs4(t2399218676 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2772416992, f5)); }
	inline t276412187 * fg5() const { return f5; }
	inline t276412187 ** fag5() { return &f5; }
	inline void fs5(t276412187 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2772416992, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
