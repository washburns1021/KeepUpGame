﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"


struct t320573180;
struct t320573180_marshaled_pinvoke;

extern "C" void t320573180_marshal_pinvoke(const t320573180& unmarshaled, t320573180_marshaled_pinvoke& marshaled);
extern "C" void t320573180_marshal_pinvoke_back(const t320573180_marshaled_pinvoke& marshaled, t320573180& unmarshaled);
extern "C" void t320573180_marshal_pinvoke_cleanup(t320573180_marshaled_pinvoke& marshaled);

struct t320573180;
struct t320573180_marshaled_com;

extern "C" void t320573180_marshal_com(const t320573180& unmarshaled, t320573180_marshaled_com& marshaled);
extern "C" void t320573180_marshal_com_back(const t320573180_marshaled_com& marshaled, t320573180& unmarshaled);
extern "C" void t320573180_marshal_com_cleanup(t320573180_marshaled_com& marshaled);
