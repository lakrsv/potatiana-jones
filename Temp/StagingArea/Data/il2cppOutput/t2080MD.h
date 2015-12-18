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

struct t2080;

#include "codegen/il2cpp-codegen.h"
#include "t9.h"

extern "C" void m14999_gshared (t2080 * __this, const MethodInfo* method);
#define m14999(__this, method) (( void (*) (t2080 *, const MethodInfo*))m14999_gshared)(__this, method)
extern "C" int32_t m15000_gshared (t2080 * __this, t9  p0, const MethodInfo* method);
#define m15000(__this, p0, method) (( int32_t (*) (t2080 *, t9 , const MethodInfo*))m15000_gshared)(__this, p0, method)
extern "C" bool m15001_gshared (t2080 * __this, t9  p0, t9  p1, const MethodInfo* method);
#define m15001(__this, p0, p1, method) (( bool (*) (t2080 *, t9 , t9 , const MethodInfo*))m15001_gshared)(__this, p0, p1, method)
