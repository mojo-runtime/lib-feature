#pragma once

#include "compat/__has_attribute.h"

namespace abi {

#if __has_attribute(mode)
typedef unsigned int Word __attribute__((__mode__(__word__)));
#else
#  error
#endif

} // namespace abi
