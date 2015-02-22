#ifndef c_struct_termios_h_
#define c_struct_termios_h_

#include "NCCS.h"
#include "cc_t.h"
#include "speed_t.h"
#include "tcflag_t.h"

_c_namespace

struct termios
{
#ifdef __linux__
    tcflag_t
    c_iflag;

    tcflag_t
    c_oflag;

    tcflag_t
    c_cflag;

    tcflag_t
    c_lflag;

    cc_t
    c_line;

    cc_t
    c_cc[NCCS];
#else
#  error
#endif
};

_c_namespace_end

#endif
