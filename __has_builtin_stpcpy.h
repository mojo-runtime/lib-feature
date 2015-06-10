#pragma once

#if defined(__has_builtin)
#  define __has_builtin_stpcpy __has_builtin(__builtin_stpcpy)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_builtin_stpcpy __has_gnuc(3, 4)
#else
#  error
#endif
