#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t2330;

#include "codegen/il2cpp-codegen.h"
#include "t682.h"

extern "C" void m17636_gshared (t2330 * __this, const MethodInfo* method);
#define m17636(__this, method) (( void (*) (t2330 *, const MethodInfo*))m17636_gshared)(__this, method)
extern "C" int32_t m17637_gshared (t2330 * __this, t682  p0, t682  p1, const MethodInfo* method);
#define m17637(__this, p0, p1, method) (( int32_t (*) (t2330 *, t682 , t682 , const MethodInfo*))m17637_gshared)(__this, p0, p1, method)
