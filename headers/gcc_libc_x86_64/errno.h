#ifndef _ERRNO_H
#define _ERRNO_H

#define EDOM 33
#define ERANGE 34
#define EILSEQ 84

/* GNU Libc's internal definition of errno. */
int *__errno_location (void);
#define errno (*__errno_location ())

#endif
