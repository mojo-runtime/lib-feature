#pragma once

#if defined(__has_feature)
#  define __has_cxx_relaxed_constexpr __has_feature(cxx_relaxed_constexpr)
#elif defined(__GNUC__)
#  define __has_cxx_relaxed_constexpr (__GNUC__ >= 5)
#else
#  error
#endif
