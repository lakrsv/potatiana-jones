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

struct t247;
struct t247_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2262 (t247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2263 (t247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2264 (t247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t247_marshal(const t247& unmarshaled, t247_marshaled& marshaled);
extern "C" void t247_marshal_back(const t247_marshaled& marshaled, t247& unmarshaled);
extern "C" void t247_marshal_cleanup(t247_marshaled& marshaled);
