#ifndef has_cxx_variable_templates
#  ifdef __has_extension
#    define has_cxx_variable_templates __has_extension(cxx_variable_templates)
#  elif defined __GNUC__
#    include "has/gcc/major.h"
#    define has_cxx_variable_templates has_gcc_major(5)
#  else
#    error todo
#  endif
#endif
