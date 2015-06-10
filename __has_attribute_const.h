#pragma once

#if defined(__has_attribute)
#  define __has_attribute_const __has_attribute(const)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_attribute_const __has_gnuc(2, 5)
#else
#  error
#endif
