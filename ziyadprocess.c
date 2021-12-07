#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/cred.h>

SYSCALL_DEFINE0(ziyadprocess)
{
	struct task_struct *parentprocess=current->parent;
	printk("Parent process ID : %d\n",parentprocess->pid);	
	printk("Current process ID : %d\n",current->pid);
	return 0;
}
