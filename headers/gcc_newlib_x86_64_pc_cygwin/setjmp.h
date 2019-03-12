#ifndef _SETJMP_H
#define _SETJMP_H

typedef long jmp_buf[32];
int setjmp (jmp_buf __jmpb);
void longjmp(struct jmp_buf __jmpb,
                    int __retval)
    __attribute__ ((__noreturn__));

#endif
