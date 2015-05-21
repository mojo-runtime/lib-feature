#pragma once

#include <abi/__Word.h>

typedef struct
{
    __Word
    __word;

#if defined(__FreeBSD__)
    __Word
    __is_error;
#endif
}
__Result;

static inline
#if defined(__cplusplus)
bool
#else
_Bool
#endif
__Result_is_error(const __Result self)
{
#if defined(__linux__)
#  if defined(__LP64__)
    return self.__word > 0XFFFFFFFFFFFFF000UL;
#  elif defined(__ILP32__)
    return self.__word > 0XFFFFF000UL;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
    return self.__is_error;
#else
#  error
#endif
}

static inline
int
__Result_error_number(const __Result self)
{
#if defined(__linux__)
    return ((int)-self.__word);
#elif defined(__FreeBSD__)
    return ((int)self.__word);
#else
#  error
#endif
}
