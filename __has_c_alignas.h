#pragma once

#if defined(__has_feature)
#  define __has_c_alignas __has_feature(c_alignas)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_c_alignas __has_gnuc(4, 7)
#else
#  error
#endif
