#pragma once

#if defined(__has_builtin)
#  define __has_builtin_expm1l __has_builtin(__builtin_expm1l)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_builtin_expm1l __has_gnuc(3, 5)
#else
#  error
#endif
