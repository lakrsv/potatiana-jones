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

struct t2178;

#include "codegen/il2cpp-codegen.h"
#include "t418.h"

extern "C" void m16155_gshared (t2178 * __this, const MethodInfo* method);
#define m16155(__this, method) (( void (*) (t2178 *, const MethodInfo*))m16155_gshared)(__this, method)
extern "C" int32_t m16156_gshared (t2178 * __this, t418  p0, t418  p1, const MethodInfo* method);
#define m16156(__this, p0, p1, method) (( int32_t (*) (t2178 *, t418 , t418 , const MethodInfo*))m16156_gshared)(__this, p0, p1, method)
