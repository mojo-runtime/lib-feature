#pragma once

#if defined(__has_builtin)
#  define __has_builtin_fabsl __has_builtin(__builtin_fabsl)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_builtin_fabsl __has_gnuc(2, 8)
#else
#  error
#endif
