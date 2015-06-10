#pragma once

#if defined(__has_builtin)
#  define __has_builtin_inff __has_builtin(__builtin_inff)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_builtin_inff __has_gnuc(3, 3)
#else
#  error
#endif
