#ifndef c_AT_BASE_PLATFORM_h_
#define c_AT_BASE_PLATFORM_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_BASE_PLATFORM =
#ifdef __linux__
 24
#else
#  error
#endif
 ;

__c_namespace_close

#endif
