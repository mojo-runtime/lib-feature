#ifndef _c__linux__x86_64___sys_getdents_h
#define _c__linux__x86_64___sys_getdents_h

#include "c/uint32_t.h"
#include "c/linux/x86_64/SYS_getdents.h"
#include "c/linux/x86_64/linux_dirent.h"
#include "c/linux/x86_64/_FileDescriptor.h"
#include "c/linux/x86_64/_SystemCallResult.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
_SystemCallResult
_sys_getdents(_FileDescriptor fd, void* /* struct linux_dirent* */ buffer, uint32_t length)
{
    _SystemCallResult
    result;

    register
    _FileDescriptor
    r1 __asm__ ("rdi") = fd;

    register
    void*
    r2 __asm__ ("rsi") = buffer;

    register
    uint32_t
    r3 __asm__ ("rdx") = length;

    __asm__ volatile (
        "syscall"
        : /* outputs  */ "=a" (result)
        : /* inputs   */ "0" (SYS_getdents), "r" (r1), "r" (r2), "r" (r3)
        : /* clobbers */ "rcx", "r11"
    );

    return result;
}

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
