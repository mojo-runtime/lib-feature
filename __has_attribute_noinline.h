#pragma once

#if defined(__has_attribute)
#  define __has_attribute_noinline __has_attribute(noinline)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_attribute_noinline __has_gnuc(3, 1)
#else
#  error
#endif
