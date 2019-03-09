#ifndef _STDDEF_H
#define _STDDEF_H

typedef long int ptrdiff_t;
typedef long unsigned int size_t;
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
typedef int wchar_t;
#define NULL ((void *)0)

#endif
