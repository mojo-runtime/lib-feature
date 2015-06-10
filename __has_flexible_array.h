#pragma once

#if defined(__cplusplus)
#  if defined(__clang__)
#    define __has_flexible_array 1
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    define __has_flexible_array __has_gnuc(2, 97)
#  else
#    error
#  endif
#else
#  if defined(__STDC_VERSION__)
#    define __has_flexible_array (__STDC_VERSION__ >= 199901L)
#  else
#    error
#  endif
#endif
