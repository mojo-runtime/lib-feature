#pragma once

#if defined(__has_extension)
#  define __has_is_enum __has_extension(is_enum)
#elif defined(__GNUC__)
#  define __has_is_enum 1 // Version?
#else
#  error
#endif
