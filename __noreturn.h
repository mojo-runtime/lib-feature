#pragma once

#if defined(__cplusplus)
#  include "__has_cpp_attribute_noreturn.h"
#  if __has_cpp_attribute_noreturn
#    define __noreturn [[noreturn]]
#  else
#    error
#  endif
#else
#  include "__has_c_noreturn.h"
#  if __has_c_noreturn
#    define __noreturn _Noreturn
#  else
#    error
#  endif
#endif
