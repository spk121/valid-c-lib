#ifndef _SETJMP_H
#define _SETJMP_H

typedef struct
{
    unsigned long int __val[16];
} __sigset_t;

typedef long int __jmp_buf[8];

struct __jmp_buf_tag
{
    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
};

typedef struct __jmp_buf_tag jmp_buf[1];

extern int setjmp (jmp_buf env)
    __attribute__ ((__nothrow__));
extern void longjmp(struct __jmp_buf_tag __env[1],
                    int __val)
    __attribute__ ((__nothrow__))
    __attribute__ ((__noreturn__));
#endif
