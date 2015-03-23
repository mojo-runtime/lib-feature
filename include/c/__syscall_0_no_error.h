#pragma once

#pragma clang diagnostic ignored "-Wgnu-statement-expression"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__x86_64__)
#  define __syscall_0_no_error(Result, n)                   \
    ({                                                      \
        Result                                              \
        result;                                             \
                                                            \
        __asm__ __volatile__ (                              \
            "syscall"                                       \
            : "=a" (result)                                 \
            : "0" (n)                                       \
            : "rcx", "r11"                                  \
        );                                                  \
                                                            \
        result;                                             \
    })
#else
#  error
#endif

#pragma clang diagnostic pop