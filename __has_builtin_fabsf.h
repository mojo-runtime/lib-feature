#pragma once

#if defined(__has_builtin)
#  define __has_builtin_fabsf __has_builtin(__builtin_fabsf)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_builtin_fabsf __has_gnuc(2, 8)
#else
#  error
#endif
