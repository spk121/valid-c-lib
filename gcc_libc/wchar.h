#ifndef_WCHAR_H
#define _WCHAR_H
typedef unsigned int wint_t;
typedef long unsigned int size_t;
typedef int wchar_t;

#define WCHAR_MIN (-0x7fffffff - 1)
#define WCHAR_MAX (0x7fffffff)
#define NULL ((void *)0)

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

struct tm;

extern int fwprintf (__FILE *__restrict __stream,
       const wchar_t *__restrict __format, ...)
                                                           ;
extern int fwscanf (__FILE *__restrict __stream,
      const wchar_t *__restrict __format, ...)
                                                          ;
extern int swprintf (wchar_t *__restrict __s, size_t __n,
       const wchar_t *__restrict __format, ...)
     __attribute__ ((__nothrow__ , __leaf__)) ;

extern int swscanf (const wchar_t *__restrict __s,
      const wchar_t *__restrict __format, ...)
     __attribute__ ((__nothrow__ , __leaf__)) ;
extern int vfwprintf (__FILE *__restrict __s,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
                                                           ;
xtern int vfwscanf (__FILE *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                          ;

extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) ;

extern int vswscanf (const wchar_t *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) ;

extern int vswscanf (const wchar_t *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) ;

extern int vwscanf (const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
                                                          ;
extern int wprintf (const wchar_t *__restrict __format, ...)
                                                           ;
extern int wscanf (const wchar_t *__restrict __format, ...)
                                                          ;
extern wint_t fgetwc (__FILE *__stream);
extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);
extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern int fputws (const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);
extern int fwide (__FILE *__fp, int __mode) __attribute__ ((__nothrow__ , __leaf__));
extern wint_t getwc (__FILE *__stream);
extern wint_t getwchar (void);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwchar (wchar_t __wc);
extern wint_t ungetwc (wint_t __wc, __FILE *__stream);
extern double wcstod (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));

extern float wcstof (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));
extern long double wcstold (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));
# 428 "/usr/include/wchar.h" 3 4
extern long int wcstol (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));

extern unsigned long int wcstoul (const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int wcstoll (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern unsigned long long int wcstoull (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) __attribute__ ((__nothrow__ , __leaf__));
extern wchar_t *wcpcpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) __attribute__ ((__nothrow__ , __leaf__));
extern wchar_t *wcpncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));
extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    const wchar_t *__restrict __s2, size_t __n) __attribute__ ((__nothrow__ , __leaf__));



extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));
extern wchar_t *wcscat (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int wcscmp (const wchar_t *__s1, const wchar_t *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int wcscoll (const wchar_t *__s1, const wchar_t *__s2) __attribute__ ((__nothrow__ , __leaf__));
extern int wcsncmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t wcsxfrm (wchar_t *__restrict __s1,
         const wchar_t *__restrict __s2, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern size_t wcscspn (const wchar_t *__wcs, const wchar_t *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));

extern wchar_t *wcspbrk (const wchar_t *__wcs, const wchar_t *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));

extern size_t wcsspn (const wchar_t *__wcs, const wchar_t *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern wchar_t *wcsstr (const wchar_t *__haystack, const wchar_t *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));

extern wchar_t *wcstok (wchar_t *__restrict __s,
   const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) __attribute__ ((__nothrow__ , __leaf__));
extern wchar_t *wmemchr (const wchar_t *__s, wchar_t __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern size_t wcslen (const wchar_t *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   const wchar_t *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));
extern wint_t btowc (int __c) __attribute__ ((__nothrow__ , __leaf__));
extern int wctob (wint_t __c) __attribute__ ((__nothrow__ , __leaf__));
extern int mbsinit (const mbstate_t *__ps) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern size_t mbrlen (const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
extern size_t mbrtowc (wchar_t *__restrict __pwc,
         const char *__restrict __s, size_t __n,
         mbstate_t *__restrict __p) __attribute__ ((__nothrow__ , __leaf__));
extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
extern size_t wcsrtombs (char *__restrict __dst,
    const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
#endif
