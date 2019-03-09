#ifndef _TIME_H
#define _TIME_H

#define NULL ((void *)0)
#define CLOCKS_PER_SEC   ((__clock_t) 1000000)
#define TIME_UTC 1

typedef long int __clock_t;
typedef __clock_t clock_t;

typedef long int __time_t;
typedef __time_t time_t;

typedef long int __syscall_slong_t;

struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};

struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
  long int tm_gmtoff;
  const char *tm_zone;
};

extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));
extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));

extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));

extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));

extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));

extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

#endif
