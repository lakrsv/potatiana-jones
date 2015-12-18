#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

struct t493;
struct t12;
struct t238;
struct t239;
struct t207;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "t70.h"
#include "t493.h"
#include "t493MD.h"
#include "t78.h"
#include "t71.h"
#include "t12.h"
#include "t239.h"
#include "t207.h"
#include "t207MD.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void m3015 (t493 * __this, t12 * p0, t78 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m3016 (t493 * __this, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3016((t493 *)__this->f9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if ((__this->f2 != NULL || MethodHasParameters((MethodInfo*)(__this->f3.f0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t12 *, t12 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t12 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t493(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern "C" t12 * m3017 (t493 * __this, t239 * p0, t12 * p1, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t12 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern "C" void m3018 (t493 * __this, t12 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
extern "C" void m1871 (t207 * __this, t12 * p0, t78 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m1890 (t207 * __this, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m1890((t207 *)__this->f9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if ((__this->f2 != NULL || MethodHasParameters((MethodInfo*)(__this->f3.f0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t12 *, t12 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t12 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t207(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern "C" t12 * m3019 (t207 * __this, t239 * p0, t12 * p1, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t12 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern "C" void m3020 (t207 * __this, t12 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
