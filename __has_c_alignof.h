#pragma once

#if defined(__has_feature)
#  define __has_c_alignof __has_feature(c_alignof)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_c_alignof __has_gnuc(4, 7)
#else
#  error
#endif
