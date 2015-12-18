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

struct t2166;

#include "codegen/il2cpp-codegen.h"
#include "t420.h"

extern "C" void m16000_gshared (t2166 * __this, const MethodInfo* method);
#define m16000(__this, method) (( void (*) (t2166 *, const MethodInfo*))m16000_gshared)(__this, method)
extern "C" int32_t m16001_gshared (t2166 * __this, t420  p0, const MethodInfo* method);
#define m16001(__this, p0, method) (( int32_t (*) (t2166 *, t420 , const MethodInfo*))m16001_gshared)(__this, p0, method)
extern "C" bool m16002_gshared (t2166 * __this, t420  p0, t420  p1, const MethodInfo* method);
#define m16002(__this, p0, p1, method) (( bool (*) (t2166 *, t420 , t420 , const MethodInfo*))m16002_gshared)(__this, p0, p1, method)
