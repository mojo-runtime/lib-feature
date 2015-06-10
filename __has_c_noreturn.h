#pragma once

#if defined(__STDC_VERSION__)
#  define __has_c_noreturn (__STDC_VERSION__ >= 201112L)
#else
#  define __has_c_noreturn 0
#endif
