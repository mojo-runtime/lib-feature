#pragma once

#if defined(__has_attribute)
#  define __has_attribute_nonnull __has_attribute(nonnull)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_attribute_nonnull __has_gnuc(3, 3)
#else
#  error
#endif
