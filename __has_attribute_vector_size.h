#pragma once

#if defined(__has_attribute)
#  define __has_attribute_vector_size __has_attribute(vector_size)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_attribute_vector_size __has_gnuc(4, 0)
#else
#  error
#endif
