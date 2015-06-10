#pragma once

#if defined(__has_attribute)
#  define __has_attribute_pure __has_attribute(pure)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_attribute_pure __has_gnuc(2, 96)
#else
#  error
#endif
