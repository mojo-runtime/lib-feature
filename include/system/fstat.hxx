// -*- C++ -*-
#pragma once

#include "c/struct stat.h"
#include "Result"

namespace system {

static inline
auto
fstat(int fd, struct stat* buf) noexcept
{
#if defined(__linux__)
#  include "c/EBADF.h"
#  include "c/EFAULT.h"
#  include "c/ENOMEM.h"
#  include "c/EOVERFLOW.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EBADF),
        _(EFAULT),
        _(ENOMEM),
        _(EOVERFLOW),
    };

#  undef _
#  include "c/SYS_fstat.h"

    return Result<void, Error>(SYS_fstat, fd, buf);

#else
#  error
#endif
}

}
