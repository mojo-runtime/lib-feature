#pragma once

#include "__has_attribute_nothrow.h"

#if __has_attribute_nothrow
#  define __nothrow __attribute__((__nothrow__))
#else
#  error
#endif
