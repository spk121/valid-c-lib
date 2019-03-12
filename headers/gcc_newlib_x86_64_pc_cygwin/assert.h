#ifndef _ASSERT_H
#define _ASSERT_H

#ifdef NDEBUG
#define assert(x) ((void)0)
#else

/* This version of assert relies on a GNU Libc internal procedure. */
void __assert_func (const char *__file, int __line, const char *__function, const char *__expr);

#define assert(expr)                                                    \
    ((expr)                                                             \
     ? ((void)0)                                                        \
     : __assert_func (__FILE__, __LINE__, __func__, #expr))

#endif

#define static_assert _Static_assert

#endif
