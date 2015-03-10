#ifndef assert

#if defined(NDEBUG)
#  include "builtin/__builtin_assume.h"
#  define assert __builtin_assume
#else
#  include "c/_c_static_cast.h"
#  include "config/RUNTIME.h"
#  if (RUNTIME == RUNTIME_GLIBC)
#    include "__external/glibc/__assert_fail.h"
#    define assert(x) ((x)                                              \
                       ? _c_static_cast(void, 0)                        \
                       : __assert_fail(#x, __FILE__, __LINE__, __PRETTY_FUNCTION__))
#  elif (RUNTIME == RUNTIME_FREEBSD)
#    include "__external/bsd/__assert.h"
#    define assert(x) ((x)                                              \
                       ? _c_static_cast(void, 0)                        \
                       : __assert(__PRETTY_FUNCTION__, __FILE__, __LINE__, #x))
#  else
#    error
#  endif
#endif

#endif
