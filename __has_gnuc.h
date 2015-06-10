#pragma once

#if defined(__GNUC__) && defined(__GNUC_MINOR__)
#  define __has_gnuc(major, minor) ((__GNUC__ > (major)) || ((__GNUC__ == (major)) && (__GNUC_MINOR__ >= (minor))))
#else
#  define __has_gnuc(major, minor) 0
#endif
