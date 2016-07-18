#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <sys/times.h>
#include <errno.h>

#ifdef REENTRANT_SYSCALLS_PROVIDED
clock_t
_DEFUN (_times_r, (r, ptms),
	struct _reent *r _AND
	struct tms *ptms) {
#else
clock_t _DEFUN (_times, (buf),
		struct tms *buf) { 

	struct _reent *r = _REENT;
#endif
	r->_errno = ENOSYS;
	return (clock_t)-1;
}

