#ifndef _c__linux__x86_64___SystemCallResult_as_pointer_h
#define _c__linux__x86_64___SystemCallResult_as_pointer_h

#include "c/linux/x86_64/_SystemCallResult.h"
#include "c/__c_STATIC_CAST.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
void*
_SystemCallResult_as_pointer(_SystemCallResult result)
{
    return __c_STATIC_CAST(void*, result.__word);
}

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
