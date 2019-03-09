#ifndef _SETJMP_H
#define _SETJMP_H

typedef struct {unsigned long int __val[16];} __sigset_t;
typedef long int __jmp_buf[8];

struct __jmp_buf_tag
  {
    __jmp_buf __jmpbuf;		/* Calling environment.  */
    int __mask_was_saved;	/* Saved the signal mask?  */
    __sigset_t __saved_mask;	/* Saved signal mask.  */
  };
typedef struct __jmp_buf_tag jmp_buf[1];
int _setjmp (jmp_buf env);
#define setjmp(env) _setjmp(env)
_Noreturn void longjmp(jmp_buf env, int val);

#endif
