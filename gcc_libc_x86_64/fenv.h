#ifndef _FENV_H
#define _FENV_H

typedef unsigned short fexcept_t;

typedef struct
  {
    unsigned short int __control_word;
    unsigned short int __glibc_reserved1;
    unsigned short int __status_word;
    unsigned short int __glibc_reserved2;
    unsigned short int __tags;
    unsigned short int __glibc_reserved3;
    unsigned int __eip;
    unsigned short int __cs_selector;
    unsigned int __opcode:11;
    unsigned int __glibc_reserved4:5;
    unsigned int __data_offset;
    unsigned short int __data_selector;
    unsigned short int __glibc_reserved5;
    unsigned int __mxcsr;
} fenv_t;

#define FE_DIVBYZERO 4
#define FE_INEXACT 32
#define FE_INVALID 1
#define FE_OVERFLOW 8
#define FE_UNDERFLOW 16
#define FE_ALL_EXCEPT 61
#define FE_DOWNWARD 1024
#define FE_TONEAREST 0
#define FE_TOWARDZERO 3072
#define FE_UPWARD 2048
#define FE_DFL_ENV ((const fenv_t *)0xffffffffffffffff)

#define FE_ALL_EXCEPT (FE_DIVBYZERO | FE_INEXACT | FE_INVALID | FE_OVERFLOW | FE_UNDERFLOW)

int feclearexcept (int excepts);
int fegetexceptflag(fexcept_t *flagp, int excepts);
int feraiseexcept(int excepts);
int fesetexceptflag(const fexcept_t *flagp, int excepts);
int fesetexcept(int excepts);
int fegetround(void);
int fesetround(int round);
int fegetenv(fenv_t *envp);
int feholdexcept(fenv_t *envp);
int fesetenv(const fenv_t *envp);
int feupdateenv(const fenv_t *envp);

#endif
