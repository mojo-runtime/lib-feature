#pragma once

#include "errno/EACCES.h"
#include "errno/EAGAIN.h"
#include "errno/EBADF.h"
#include "errno/EINVAL.h"
#include "errno/ENFILE.h"
#include "errno/ENODEV.h"
#include "errno/ENOMEM.h"
#include "errno/EOVERFLOW.h"
#include "errno/EPERM.h"
#include "errno/ETXTBSY.h"
#include "syscall/SYS_mmap.h"
#include "c/off_t.h"
#include "c/size_t.h"
#include "Result.hxx"

namespace os { inline namespace linux {

static inline
auto
mmap(void* addr, size_t length, int prot, int flags, int fd, off_t offset) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(AGAIN),
        _E(BADF),
        _E(INVAL),
        _E(NFILE),
        _E(NODEV),
        _E(NOMEM),
        _E(OVERFLOW),
        _E(PERM),
        _E(TXTBSY),
    };

    return Result<void*, Error>(SYS_mmap, addr, length, prot, flags, fd, offset);
}

}}
