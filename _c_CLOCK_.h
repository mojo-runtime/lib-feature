#ifndef _c_CLOCK_
#  include "clockid_t.h"
#  define _c_CLOCK_(name, value) \
    __c_namespace_open \
    static \
    const clockid_t \
    CLOCK_##name = value; \
    __c_namespace_close
#endif
