#ifndef _syscall_Result_error
#  include "c/_c_static_cast.h"
#  define _syscall_Result_error(T, self) _c_static_cast(T, -self)
#endif
