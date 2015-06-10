#pragma once

#if defined(__has_builtin)
#  define __has_builtin_atan2l __has_builtin(__builtin_atan2l)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_builtin_atan2l __has_gnuc(3, 4)
#else
#  error
#endif
