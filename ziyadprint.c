#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE1(ziyadprint,char __user *,data)
{
	printk("The received string is : %s.\n",data);
	return 0;
}
