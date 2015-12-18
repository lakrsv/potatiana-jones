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

struct t2083;

#include "codegen/il2cpp-codegen.h"
#include "t9.h"

extern "C" void m15010_gshared (t2083 * __this, const MethodInfo* method);
#define m15010(__this, method) (( void (*) (t2083 *, const MethodInfo*))m15010_gshared)(__this, method)
extern "C" int32_t m15011_gshared (t2083 * __this, t9  p0, t9  p1, const MethodInfo* method);
#define m15011(__this, p0, p1, method) (( int32_t (*) (t2083 *, t9 , t9 , const MethodInfo*))m15011_gshared)(__this, p0, p1, method)
