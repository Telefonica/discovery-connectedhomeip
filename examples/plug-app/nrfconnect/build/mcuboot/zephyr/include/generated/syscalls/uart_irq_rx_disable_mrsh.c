/* auto-generated by gen_syscalls.py, don't edit */

#include <syscalls/uart.h>

extern void z_vrfy_uart_irq_rx_disable(const struct device * dev);
uintptr_t z_mrsh_uart_irq_rx_disable(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, void *ssf)
{
	_current->syscall_frame = ssf;
	(void) arg1;	/* unused */
	(void) arg2;	/* unused */
	(void) arg3;	/* unused */
	(void) arg4;	/* unused */
	(void) arg5;	/* unused */
	union { uintptr_t x; const struct device * val; } parm0;
	parm0.x = arg0;
	z_vrfy_uart_irq_rx_disable(parm0.val);
	_current->syscall_frame = NULL;
	return 0;
}
