#ifndef F_GETFL

#if defined(__linux__) || defined(__FreeBSD__)
#  define F_GETFL 3
#else
#  error
#endif

#endif
