#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/cred.h>
#include <linux/sched.h>

SYSCALL_DEFINE0(ziyadgetpid)
{
	return task_tgid_vnr(current);
}
