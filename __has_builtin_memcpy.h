#pragma once

#if defined(__has_builtin)
#  define __has_builtin_memcpy __has_builtin(__builtin_memcpy)
#elif defined(__GNUC__)
#  define __has_builtin_memcpy 1 // Version?
#else
#  error
#endif
