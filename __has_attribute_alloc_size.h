#pragma once

#if defined(__has_attribute)
#  define __has_attribute_alloc_size __has_attribute(alloc_size)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_attribute_alloc_size __has_gnuc(4, 3)
#else
#  error
#endif
