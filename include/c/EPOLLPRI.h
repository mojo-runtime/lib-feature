#ifndef EPOLLPRI

#if defined(__linux__)
#  include "POLLPRI.h"
#  define EPOLLPRI POLLPRI
#else
#  error
#endif

#endif
