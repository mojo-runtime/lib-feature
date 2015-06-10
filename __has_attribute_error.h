#pragma once

#if defined(__has_attribute)
#  define __has_attribute_error __has_attribute(error)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_attribute_error __has_gnuc(4, 3)
#else
#  error
#endif
