// -*- C++ -*-
#if defined(__linux__) && defined(__x86_64__)
#  include "chdir"
#  include "chmod"
#  include "chown"
#  include "clock_getres"
#  include "clock_gettime"
#  include "clock_nanosleep"
#  include "clock_settime"
#  include "clone"
#  include "close"
#  include "dup3"
#  include "epoll_create1"
#  include "epoll_ctl"
#  include "epoll_wait"
#  include "execve"
#endif
#include "exit"
#if defined(__linux__) && defined(__x86_64__)
#  include "exit_group"
#  include "fchdir"
#  include "fcntl"
#  include "fork"
#  include "fstat"
#  include "fstatat"
#  include "get_thread_area"
#  include "getcwd"
#  include "getdents"
#endif
#if defined(__linux__)
#  include "gettid"
#endif
#if defined(__linux__) && defined(__x86_64__)
#  include "inotify_add_watch"
#  include "inotify_init1"
#  include "inotify_rm_watch"
#  include "ioctl"
#  include "kill"
#  include "mkdir"
#  include "mmap"
#  include "mremap"
#  include "munmap"
#  include "open"
#  include "pipe2"
#  include "read"
#  include "readlink"
#  include "rmdir"
#  include "set_thread_area"
#  include "stat"
#  include "symlink"
#  include "tgkill"
#  include "uname"
#  include "unlink"
#  include "waitid"
#  include "write"
#endif
