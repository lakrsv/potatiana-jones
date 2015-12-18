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

struct t2032;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"
#include "t36.h"

extern "C" void m14221_gshared (t2032 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m14221(__this, p0, p1, method) (( void (*) (t2032 *, t12 *, t78, const MethodInfo*))m14221_gshared)(__this, p0, p1, method)
extern "C" void m14222_gshared (t2032 * __this, t36  p0, const MethodInfo* method);
#define m14222(__this, p0, method) (( void (*) (t2032 *, t36 , const MethodInfo*))m14222_gshared)(__this, p0, method)
extern "C" t12 * m14223_gshared (t2032 * __this, t36  p0, t239 * p1, t12 * p2, const MethodInfo* method);
#define m14223(__this, p0, p1, p2, method) (( t12 * (*) (t2032 *, t36 , t239 *, t12 *, const MethodInfo*))m14223_gshared)(__this, p0, p1, p2, method)
extern "C" void m14224_gshared (t2032 * __this, t12 * p0, const MethodInfo* method);
#define m14224(__this, p0, method) (( void (*) (t2032 *, t12 *, const MethodInfo*))m14224_gshared)(__this, p0, method)
