// Autogenerated file - edit at your peril!!

#include <linux/filter.h>
#include <errno.h>

#include "seccomp_bpfs.h"
const sock_filter arm64_filter[] = {
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5, 0, 28),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 203, 13, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 101, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 43, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 19, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 18, 23, 22), //setxattr|lsetxattr|fsetxattr|getxattr|lgetxattr|fgetxattr|listxattr|llistxattr|flistxattr|removexattr|lremovexattr|fremovexattr|getcwd
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 42, 22, 21), //eventfd2|epoll_create1|epoll_ctl|epoll_pwait|dup|dup3|fcntl|inotify_init1|inotify_add_watch|inotify_rm_watch|ioctl|ioprio_set|ioprio_get|flock|mknodat|mkdirat|unlinkat|symlinkat|linkat|renameat|umount2|mount|pivot_root
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 59, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 58, 20, 19), //statfs|fstatfs|truncate|ftruncate|fallocate|faccessat|chdir|fchdir|chroot|fchmod|fchmodat|fchownat|fchown|openat|close
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 99, 19, 18), //pipe2|quotactl|getdents64|lseek|read|write|readv|writev|pread64|pwrite64|preadv|pwritev|sendfile|pselect6|ppoll|signalfd4|vmsplice|splice|tee|readlinkat|newfstatat|fstat|sync|fsync|fdatasync|sync_file_range|timerfd_create|timerfd_settime|timerfd_gettime|utimensat|acct|capget|capset|personality|exit|exit_group|waitid|set_tid_address|unshare|futex
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 198, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 105, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 104, 16, 15), //nanosleep|getitimer|setitimer
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 180, 15, 14), //init_module|delete_module|timer_create|timer_gettime|timer_getoverrun|timer_settime|timer_delete|clock_settime|clock_gettime|clock_getres|clock_nanosleep|syslog|ptrace|sched_setparam|sched_setscheduler|sched_getscheduler|sched_getparam|sched_setaffinity|sched_getaffinity|sched_yield|sched_get_priority_max|sched_get_priority_min|sched_rr_get_interval|restart_syscall|kill|tkill|tgkill|sigaltstack|rt_sigsuspend|rt_sigaction|rt_sigprocmask|rt_sigpending|rt_sigtimedwait|rt_sigqueueinfo|rt_sigreturn|setpriority|getpriority|reboot|setregid|setgid|setreuid|setuid|setresuid|getresuid|setresgid|getresgid|setfsuid|setfsgid|times|setpgid|getpgid|getsid|setsid|getgroups|setgroups|uname|sethostname|setdomainname|getrlimit|setrlimit|getrusage|umask|prctl|getcpu|gettimeofday|settimeofday|adjtimex|getpid|getppid|getuid|geteuid|getgid|getegid|gettid|sysinfo
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 202, 14, 13), //socket|socketpair|bind|listen
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 260, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 226, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 220, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 217, 10, 9), //connect|getsockname|getpeername|sendto|recvfrom|setsockopt|getsockopt|shutdown|sendmsg|recvmsg|readahead|brk|munmap|mremap
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 224, 9, 8), //clone|execve|mmap|fadvise64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 240, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 234, 7, 6), //mprotect|msync|mlock|munlock|mlockall|munlockall|mincore|madvise
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 244, 6, 5), //rt_tgsigqueueinfo|perf_event_open|accept4|recvmmsg
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 277, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 266, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 262, 3, 2), //wait4|prlimit64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 272, 2, 1), //clock_adjtime|syncfs|setns|sendmmsg|process_vm_readv|process_vm_writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 279, 1, 0), //seccomp|getrandom
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_ALLOW),
};

const size_t arm64_filter_size = sizeof(arm64_filter) / sizeof(struct sock_filter);
