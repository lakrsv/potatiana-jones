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


#include "codegen/il2cpp-codegen.h"

extern "C" void t786_marshal(const t786& unmarshaled, t786_marshaled& marshaled);
extern "C" void t786_marshal_back(const t786_marshaled& marshaled, t786& unmarshaled);
extern "C" void t786_marshal_cleanup(t786_marshaled& marshaled);
