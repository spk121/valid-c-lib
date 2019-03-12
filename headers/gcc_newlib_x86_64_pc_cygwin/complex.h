#ifndef _COMPLEX_H
#define _COMPLEX_H

#define complex _Complex
#define _Complex_I 1.0iF
#define I _Complex_I

/* GCC doesn't have an imaginary type. */
// #define imaginary _Imaginary
// #define _Imaginary_I 1.0iF

#define CMPLX(x, y) __builtin_complex ((double) (x), (double) (y))
#define CMPLXF(x, y) __builtin_complex ((float) (x), (float) (y))
#define CMPLXL(x, y) __builtin_complex ((long double) (x), (long double) (y))

double complex cacos(double complexz);
float complex cacosf(float complexz);
long double complex cacosl(long double complexz);
double complex casin(double complexz);
float complex casinf(float complexz);
long double complex casinl(long double complexz);
double complex catan(double complexz);
float complex catanf(float complexz);
long double complex catanl(long double complexz);
double complex ccos(double complexz);
float complex ccosf(float complexz);
long double complex ccosl(long double complexz);
double complex csin(double complexz);
float complex csinf(float complexz);
long double complex csinl(long double complexz);
double complex ctan(double complexz);
float complex ctanf(float complexz);
long double complex ctanl(long double complexz);
double complex cacosh(double complexz);
float complex cacoshf(float complexz);
long double complex cacoshl(long double complexz);
double complex casinh(double complexz);
float complex casinhf(float complexz);
long double complex casinhl(long double complexz);
double complex catanh(double complexz);
float complex catanhf(float complexz);
long double complex catanhl(long double complexz);
double complex ccosh(double complexz);
float complex ccoshf(float complexz);
long double complex ccoshl(long double complexz);
double complex csinh(double complexz);
float complex csinhf(float complexz);
long double complex csinhl(long double complexz);
double complex ctanh(double complexz);
float complex ctanhf(float complexz);
long double complex ctanhl(long double complexz);
double complex cexp(double complexz);
float complex cexpf(float complexz);
long double complex cexpl(long double complexz);
double complex clog(double complexz);
float complex clogf(float complexz);
long double complex clogl(long double complexz);
double cabs(double complexz);
float cabsf(float complexz);
long double cabsl(long double complexz);
double complex cpow(double complexx,double complexy);
float complex cpowf(float complexx,float complexy);
long double complex cpowl(long double complexx,long double complexy);
double complex csqrt(double complexz);
float complex csqrtf(float complexz);
long double complex csqrtl(long double complexz);
double carg(double complexz);
float cargf(float complexz);
long double cargl(long double complexz);
double cimag(double complexz);
float cimagf(float complexz);
long double cimagl(long double complexz);
double complex conj(double complexz);
float complex conjf(float complexz);
long double complex conjl(long double complexz);
double complex cproj(double complexz);
float complex cprojf(float complexz);
long double complex cprojl(long double complexz);
double creal(double complexz);
float crealf(float complexz);
long double creall(long double complexz);

#endif
