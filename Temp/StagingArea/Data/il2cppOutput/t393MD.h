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

struct t393;
struct t393_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m1827 (t393 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t393_marshal(const t393& unmarshaled, t393_marshaled& marshaled);
extern "C" void t393_marshal_back(const t393_marshaled& marshaled, t393& unmarshaled);
extern "C" void t393_marshal_cleanup(t393_marshaled& marshaled);
