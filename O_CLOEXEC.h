#ifndef c_O_CLOEXEC_h_
#define c_O_CLOEXEC_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
O_CLOEXEC =
#ifdef __linux__
#  ifdef __x86_64__
 02000000 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
