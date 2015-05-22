#pragma once

#include "errno/EBADF.h"
#include "errno/EBUSY.h"
#include "errno/EINTR.h"
#include "errno/EINVAL.h"
#include "errno/EMFILE.h"
#include "syscall/SYS_dup3.h"
#include "Result.hxx"

namespace os { inline namespace linux {

static inline
auto
dup3(int oldfd, int newfd, int flags) noexcept
{
    enum Error
    {
        _E(BADF),
        _E(BUSY),
        _E(INTR),
        _E(INVAL),
        _E(MFILE),
    };

    return Result<int, Error>(SYS_dup3, oldfd, newfd, flags);
}

}}
