#ifndef _THREADS_H
#define _THREADS_H

#undef __STDC_NO_THREADS__
#define thread_local _Thread_local;
#define ONCE_FLAG_INIT { 0 }
#define TSS_DTOR_ITERATIONS 4

typedef union
{
  char __size[48];
  __extension__ long long int __align ;
} cnd_t;

typedef unsigned long int thrd_t;
typedef unsigned int tss_t;

typedef union
{
  char __size[40];
  long int __align ;
} mtx_t;

typedef void (*tss_dtor_t) (void*);
typedef int (*thrd_start_t) (void*);

typedef struct
{
  int __data ;
} once_flag;

enum
{
  mtx_plain = 0,
  mtx_recursive = 1,
  mtx_timed = 2
};

enum
{
  thrd_success = 0,
  thrd_busy = 1,
  thrd_error = 2,
  thrd_nomem = 3,
  thrd_timedout = 4
};

extern void call_once (once_flag *__flag, void (*__func)(void));
extern int cnd_broadcast (cnd_t *__cond);
extern void cnd_destroy (cnd_t *__COND);
extern int cnd_init (cnd_t *__cond);
extern int cnd_signal (cnd_t *__cond);
extern int cnd_timedwait (cnd_t *__restrict __cond,
     mtx_t *__restrict __mutex,
     const struct timespec *__restrict __time_point);
extern int cnd_wait (cnd_t *__cond, mtx_t *__mutex);
extern void mtx_destroy (mtx_t *__mutex);
extern int mtx_init (mtx_t *__mutex, int __type);
extern int mtx_lock (mtx_t *__mutex);
extern int mtx_timedlock (mtx_t *__restrict __mutex,
     const struct timespec *__restrict __time_point);
extern int mtx_trylock (mtx_t *__mutex);

extern int mtx_unlock (mtx_t *__mutex);
extern int thrd_create (thrd_t *__thr, thrd_start_t __func, void *__arg);
extern thrd_t thrd_current (void);
extern int thrd_detach (thrd_t __thr);
extern int thrd_equal (thrd_t __lhs, thrd_t __rhs);
extern void thrd_exit (int __res) __attribute__ ((__noreturn__));
extern int thrd_join (thrd_t __thr, int *__res);
extern int thrd_sleep (const struct timespec *__time_point,
         struct timespec *__remaining);
extern void thrd_yield (void);
extern int tss_create (tss_t *__tss_id, tss_dtor_t __destructor);
extern void tss_delete (tss_t __tss_id);

extern void *tss_get (tss_t __tss_id);

extern int tss_set (tss_t __tss_id, void *__val);

#endif
