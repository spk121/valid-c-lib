#ifndef _FENV_H
#define _FENV_H

typedef __uint32_t fexcept_t;

typedef struct _fenv_t
{
  struct _fpu_env_info {
    unsigned int _fpu_cw;	/* low 16 bits only. */
    unsigned int _fpu_sw;	/* low 16 bits only. */
    unsigned int _fpu_tagw;	/* low 16 bits only. */
    unsigned int _fpu_ipoff;
    unsigned int _fpu_ipsel;
    unsigned int _fpu_opoff;
    unsigned int _fpu_opsel;	/* low 16 bits only. */
  } _fpu;
  unsigned int _sse_mxcsr;
} fenv_t;

#define FE_DIVBYZERO	(1 << 2)
#define FE_INEXACT	(1 << 5)
#define FE_INVALID	(1 << 0)
#define FE_OVERFLOW	(1 << 3)
#define FE_UNDERFLOW	(1 << 4)

#define FE_ALL_EXCEPT \
  (FE_INEXACT | FE_UNDERFLOW | FE_OVERFLOW | FE_DIVBYZERO | FE_INVALID)

#define FE_DOWNWARD	(1)
#define FE_TONEAREST	(0)
#define FE_TOWARDZERO	(3)
#define FE_UPWARD	(2)
extern const fenv_t *_fe_dfl_env;
#define FE_DFL_ENV (_fe_dfl_env)

extern int feclearexcept (int __excepts);
extern int fegetexceptflag (fexcept_t *__flagp, int __excepts);
extern int feraiseexcept (int __excepts);
extern int fesetexceptflag (const fexcept_t *__flagp, int __excepts);
extern int fetestexcept (int __excepts);
extern int fegetround (void);
extern int fesetround (int __round);
extern int fegetenv (fenv_t *__envp);
extern int feholdexcept (fenv_t *__envp);
extern int fesetenv (const fenv_t *__envp);
extern int feupdateenv (const fenv_t *__envp);

#endif
