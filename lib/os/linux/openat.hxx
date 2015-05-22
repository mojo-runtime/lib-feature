#pragma once

#include "errno/EACCES.h"
#include "errno/EBADF.h"
#include "errno/EDQUOT.h"
#include "errno/EEXIST.h"
#include "errno/EFAULT.h"
#include "errno/EINTR.h"
#include "errno/EINVAL.h"
#include "errno/EISDIR.h"
#include "errno/ELOOP.h"
#include "errno/EMFILE.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENFILE.h"
#include "errno/ENODEV.h"
#include "errno/ENOENT.h"
#include "errno/ENOMEM.h"
#include "errno/ENOSPC.h"
#include "errno/ENOTDIR.h"
#include "errno/ENXIO.h"
#include "errno/EOPNOTSUPP.h"
#include "errno/EOVERFLOW.h"
#include "errno/EPERM.h"
#include "errno/EROFS.h"
#include "errno/ETXTBSY.h"
#include "errno/EWOULDBLOCK.h"
#include "syscall/SYS_openat.h"
#include "c/mode_t.h"
#include "Result.hxx"

namespace os { inline namespace linux {

static inline
auto
openat(int dirfd, const char* pathname, int flags) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(BADF),
        _E(DQUOT),
        _E(EXIST),
        _E(FAULT),
        _E(INTR),
        _E(INVAL),
        _E(ISDIR),
        _E(LOOP),
        _E(MFILE),
        _E(NAMETOOLONG),
        _E(NFILE),
        _E(NODEV),
        _E(NOENT),
        _E(NOMEM),
        _E(NOSPC),
        _E(NOTDIR),
        _E(NXIO),
        _E(OPNOTSUPP),
        _E(OVERFLOW),
        _E(PERM),
        _E(ROFS),
        _E(TXTBSY),
        _E(WOULDBLOCK),
    };

    return Result<int, Error>(SYS_openat, dirfd, pathname, flags);
}

}}
