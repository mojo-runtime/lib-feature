#pragma once

#if defined(__has_builtin)
#  define __has_builtin_memset __has_builtin(__builtin_memset)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_builtin_memset __has_gnuc(2, 91)
#else
#  error
#endif
