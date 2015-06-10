#pragma once

#if defined(__has_builtin)
#  define __has_builtin_constant_p __has_builtin(__builtin_constant_p)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_builtin_constant_p __has_gnuc(3, 0)
#else
#  error
#endif
