#ifndef linux_Result_hxx_
#define linux_Result_hxx_

#include "platform/_Word.h"

namespace linux {

template <typename Ok, typename Error>
struct Result
{
    constexpr explicit
    Result(_Word word)
        : __word(word)
    {
    }

    //--------------------------------------------------------------------------------------------//

    constexpr
    bool
    is_error() const noexcept
    {
        return this->__word > static_cast<_Word>(-4096);
    }

    constexpr
    bool
    is_ok() const noexcept
    {
        return !this->is_error();
    }

    constexpr
    Error
    error() const noexcept
    {
        return static_cast<Error>(-this->__word);
    }

    constexpr
    Ok
    ok() const noexcept
    {
        return static_cast<Ok>(this->__word);
    }

    //--------------------------------------------------------------------------------------------//

    template <typename NewError>
    constexpr
    auto
    _with_error() const noexcept
    {
        return Result<Ok, NewError>(this->__word);
    }

  private:
    _Word
    __word;
};

} // namespace linux

#endif
