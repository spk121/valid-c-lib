#ifndef _SIGNAL_H
#define _SIGNAL_H

typedef int __sig_atomic_t;
typedef __sig_atomic_t sig_atomic_t;
typedef void (*__sighandler_t) (int);

#define SIG_DFL ((__sighandler_t)0)
#define SIG_ERR ((__sighandler_t)-1)
#define SIG_IGN ((__sighandler_t)1)
#define SIGINT 2
#define SIGILL 4
#define SIGABRT 6
#define SIGFPE 8
#define SIGSEGV 11
#define SIGTERM 15

extern __sighandler_t signal (int __sig, __sighandler_t __handler)
    __attribute__ ((__nothrow__ , __leaf__));
extern int raise(int __sig)
    __attribute__ ((__nothrow__ , __leaf__));

#endif
