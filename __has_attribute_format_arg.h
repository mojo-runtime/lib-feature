#pragma once

#if defined(__has_attribute)
#  define __has_attribute_format_arg __has_attribute(format_arg)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_attribute_format_arg __has_gnuc(2, 8)
#else
#  error
#endif
