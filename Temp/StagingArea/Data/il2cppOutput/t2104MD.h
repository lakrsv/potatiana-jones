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

struct t2104;

#include "codegen/il2cpp-codegen.h"
#include "t36.h"

extern "C" void m15304_gshared (t2104 * __this, const MethodInfo* method);
#define m15304(__this, method) (( void (*) (t2104 *, const MethodInfo*))m15304_gshared)(__this, method)
extern "C" int32_t m15305_gshared (t2104 * __this, t36  p0, t36  p1, const MethodInfo* method);
#define m15305(__this, p0, p1, method) (( int32_t (*) (t2104 *, t36 , t36 , const MethodInfo*))m15305_gshared)(__this, p0, p1, method)
