/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_DEVICE_H
#define Z_INCLUDE_SYSCALLS_DEVICE_H


#include <tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall.h>

#include <linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern const struct device * z_impl_device_get_binding(const char * name);

__pinned_func
static inline const struct device * device_get_binding(const char * name)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const char * val; } parm0 = { .val = name };
		return (const struct device *) arch_syscall_invoke1(parm0.x, K_SYSCALL_DEVICE_GET_BINDING);
	}
#endif
	compiler_barrier();
	return z_impl_device_get_binding(name);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define device_get_binding(name) ({ 	const struct device * retval; 	sys_port_trace_syscall_enter(K_SYSCALL_DEVICE_GET_BINDING, device_get_binding, name); 	retval = device_get_binding(name); 	sys_port_trace_syscall_exit(K_SYSCALL_DEVICE_GET_BINDING, device_get_binding, name, retval); 	retval; })
#endif
#endif


extern bool z_impl_device_is_ready(const struct device * dev);

__pinned_func
static inline bool device_is_ready(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		return (bool) arch_syscall_invoke1(parm0.x, K_SYSCALL_DEVICE_IS_READY);
	}
#endif
	compiler_barrier();
	return z_impl_device_is_ready(dev);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define device_is_ready(dev) ({ 	bool retval; 	sys_port_trace_syscall_enter(K_SYSCALL_DEVICE_IS_READY, device_is_ready, dev); 	retval = device_is_ready(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_DEVICE_IS_READY, device_is_ready, dev, retval); 	retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */