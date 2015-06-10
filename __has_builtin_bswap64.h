#pragma once

#if defined(__has_builtin)
#  define __has_builtin_bswap64 __has_builtin(__builtin_bswap64)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_builtin_bswap64 __has_gnuc(4, 3)
#else
#  error
#endif
