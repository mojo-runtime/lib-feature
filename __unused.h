#pragma once

#include "__has_attribute_unused.h"

#if __has_attribute_unused
#  define __unused __attribute__((__unused__))
#else
#  error
#endif
