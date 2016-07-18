#ifndef _MACHINE__TYPES_H
#define _MACHINE__TYPES_H

#include <machine/_default_types.h>

/* Use 64bit types */
typedef __int64_t _off_t;
#define __off_t_defined 1

typedef __int64_t _fpos_t;
#define __fpos_t_defined 1

#endif