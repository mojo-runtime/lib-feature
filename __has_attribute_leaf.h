#pragma once

#if defined(__has_attribute)
#  define __has_attribute_leaf __has_attribute(leaf)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_attribute_leaf __has_gnuc(4, 6)
#else
#  error
#endif
