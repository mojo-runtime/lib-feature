#ifndef SIGCHLD

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define SIGCHLD 17
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SIGCHLD 20
#else
#  error
#endif

#endif
