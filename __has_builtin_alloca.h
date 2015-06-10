#pragma once

#if defined(__has_builtin)
#  define __has_builtin_alloca __has_builtin(__builtin_alloca)
#elif defined(__GNUC__)
#  define __has_builtin_alloca 1 // Version?
#else
#  error
#endif
