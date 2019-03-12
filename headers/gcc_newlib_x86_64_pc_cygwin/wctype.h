#ifndef _WCTYPE_H
#define _WCTYPE_H
typedef unsigned int wint_t;
typedef const __int32_t *wctrans_t;
typedef unsigned long int wctype_t;
#define WEOF (0xffffffffu)

extern int iswalnum (wint_t __wc) __attribute__ ((__nothrow__ , __leaf__));
extern int iswblank (wint_t __wc) __attribute__ ((__nothrow__ , __leaf__));
extern int iswcntrl (wint_t __wc) __attribute__ ((__nothrow__ , __leaf__));
extern int iswdigit (wint_t __wc) __attribute__ ((__nothrow__ , __leaf__));
extern int iswgraph (wint_t __wc) __attribute__ ((__nothrow__ , __leaf__));
extern int iswlower (wint_t __wc) __attribute__ ((__nothrow__ , __leaf__));
extern int iswprint (wint_t __wc) __attribute__ ((__nothrow__ , __leaf__));
extern int iswpunct (wint_t __wc) __attribute__ ((__nothrow__ , __leaf__));
extern int iswspace (wint_t __wc) __attribute__ ((__nothrow__ , __leaf__));
extern int iswupper (wint_t __wc) __attribute__ ((__nothrow__ , __leaf__));
extern int iswxdigit (wint_t __wc) __attribute__ ((__nothrow__ , __leaf__));
extern int iswalnum (wint_t __wc) __attribute__ ((__nothrow__ , __leaf__));
extern wctype_t wctype (const char *__property) __attribute__ ((__nothrow__ , __leaf__));
extern int iswctype (wint_t __wc, wctype_t __desc) __attribute__ ((__nothrow__ , __leaf__));
extern wint_t towlower (wint_t __wc) __attribute__ ((__nothrow__ , __leaf__));
extern wint_t towupper (wint_t __wc) __attribute__ ((__nothrow__ , __leaf__));
extern wctrans_t wctrans (const char *__property) __attribute__ ((__nothrow__ , __leaf__));
extern wint_t towctrans (wint_t __wc, wctrans_t __desc) __attribute__ ((__nothrow__ , __leaf__));
#endif
