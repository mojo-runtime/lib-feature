#pragma once

#if defined(__has_feature)
#  define __has_cxx_alignas __has_feature(cxx_alignas)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_cxx_alignas __has_gnuc(4, 8)
#else
#  error
#endif
