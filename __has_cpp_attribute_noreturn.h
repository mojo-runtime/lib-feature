#pragma once

#if defined(__has_cpp_attribute)
#  define __has_cpp_attribute_noreturn __has_cpp_attribute(noreturn)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_cpp_attribute_noreturn __has_gnuc(4, 8)
#else
#  error
#endif
