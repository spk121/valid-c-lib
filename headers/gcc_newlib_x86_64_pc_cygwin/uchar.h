#ifndef _UCHAR_H
#define _UCHAR_H

typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;

typedef __mbstate_t mbstate_t;
typedef long unsigned int size_t;
typedef __uint_least16_t char16_t;
typedef __uint_least32_t char32_t;

extern size_t mbrtoc16 (char16_t *__restrict __pc16,
   const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __p) __attribute__ ((__nothrow__ , __leaf__));

extern size_t c16rtomb (char *__restrict __s, char16_t __c16,
   mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));

extern size_t mbrtoc32 (char32_t *__restrict __pc32,
   const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __p) __attribute__ ((__nothrow__ , __leaf__));

extern size_t c32rtomb (char *__restrict __s, char32_t __c32,
   mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));

#endif
