#ifndef _c_exit_h_
#define _c_exit_h_

#include "compat/x_noreturn.h"
#include "compat/x_nothrow.h"
#include "compat/__builtin_unreachable.h"

#if defined(__unix__)
#  include "SYS_exit.h"
#else
#  error
#endif

x_noreturn
x_nothrow
static inline
void
_exit(int status)
{
    // Roll this special case by hand.
#if defined(__linux__) || defined(__FreeBSD__)
#  if defined(__x86_64__)
    // Without a return, these are actually the same
    __asm__ __volatile__ ("syscall" :: "a" (SYS_exit), "D" (status));
#  else
#    error
#  endif
#else
#  error
#endif
    __builtin_unreachable();
}

#endif