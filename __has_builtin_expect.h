#pragma once

#if defined(__has_builtin)
#  define __has_builtin_expect __has_builtin(__builtin_expect)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_builtin_expect __has_gnuc(3, 0)
#else
#  error
#endif
