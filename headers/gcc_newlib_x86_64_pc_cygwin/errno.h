#ifndef _ERRNO_H
#define _ERRNO_H

#define EDOM 33
#define ERANGE 34
#define EILSEQ 138

/* GNU Libc's internal definition of errno. */
#define errno (*__errno())
extern int *__errno (void);

#endif
