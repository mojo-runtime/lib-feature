#pragma once

#include "os/read.hxx"

namespace io { inline namespace _posix {

struct Reader
{
    constexpr explicit
    Reader(int fd)
        : __fd(fd)
    {
    }

    //----------------------------------------------------------------------------------------------

    auto
    read(void* buffer, size_t length) const noexcept
    {
        return os::read(this->__fd, buffer, length);
    }

  private:
    int
    __fd;
};

}}