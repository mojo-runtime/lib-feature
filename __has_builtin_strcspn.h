#pragma once

#if defined(__has_builtin)
#  define __has_builtin_strcspn __has_builtin(__builtin_strcspn)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_builtin_strcspn __has_gnuc(3, 2)
#else
#  error
#endif
