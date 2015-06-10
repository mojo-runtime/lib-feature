#pragma once

#if defined(__has_extension)
#  define __has_underlying_type __has_extension(underlying_type)
#elif defined(__GNUC__)
#  define __has_underlying_type 1 // Version?
#else
#  error
#endif
