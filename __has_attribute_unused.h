#pragma once

#if defined(__has_attribute)
#  define __has_attribute_unused __has_attribute(unused)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_attribute_unused __has_gnuc(3, 1)
#else
#  error
#endif
