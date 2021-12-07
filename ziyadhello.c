#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(ziyadhello)
{
	printk("Hello New Linux Kernel\n");
	return 0;
}
