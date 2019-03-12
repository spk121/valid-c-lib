#ifndef _SIGNAL_H
#define _SIGNAL_H

typedef int sig_atomic_t;
typedef void (*_sig_func_ptr) (int);

#define SIG_DFL ((_sig_func_ptr)0)
#define SIG_ERR ((_sig_func_ptr)-1)
#define SIG_IGN ((_sig_func_ptr)1)
#define SIGINT 2
#define SIGILL 4
#define SIGABRT 6
#define SIGFPE 8
#define SIGSEGV 11
#define SIGTERM 15

_sig_func_ptr signal (int __sig, _sig_func_ptr __handler);
extern int raise(int __sig);

#endif
