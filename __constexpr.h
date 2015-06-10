#pragma once

#include "__has_cxx_relaxed_constexpr.h"

#if __has_cxx_relaxed_constexpr
#  define __constexpr constexpr
#else
#  include "__has_attribute_const.h"
#  if __has_attribute_const
#    define __constexpr __attribute__((__const__))
#  else
#    error
#  endif
#endif
