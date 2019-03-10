#ifndef _ASSERT_H
#define _ASSERT_H

#ifdef NDEBUG
#define assert(x) ((void)0)
#else

/* This version of assert relies on a GNU Libc internal procedure. */
void __assert_fail (const char *__assertion, const char *__file,
                    unsigned int __line, const char *__function);

#define assert(expr)                                                    \
    ((expr)                                                             \
     ? ((void)0)                                                        \
     : __assert_fail (#expr, __FILE__, __LINE__, __func__))

#endif

#define static_assert _Static_assert

#endif
