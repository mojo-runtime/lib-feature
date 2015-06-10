#pragma once

#if defined(__has_builtin)
#  define __has_builtin_memcmp __has_builtin(__builtin_memcmp)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_builtin_memcmp __has_gnuc(2, 91)
#else
#  error
#endif
