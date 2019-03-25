#ifndef _TGMATH_H
#define _TGMATH_H
#include <math.h>
#include <complex.h>

#define acos(x) __builtin_tgmath(acosf,acos,acosl,cacosf,cacos,cacosl,(x))
#define asin(x) __builtin_tgmath(asinf,asin,asinl,casinf,casin,casinl,(x))
#define atan(x) __builtin_tgmath(atanf,atan,atanl,catanf,catan,catanl,(x))
#define acosh(x) __builtin_tgmath(acoshf,acosh,acoshl,cacoshf,cacosh,cacoshl,(x))
#define asinh(x) __builtin_tgmath(asinhf,asinh,asinhl,casinhf,casinh,casinhl,(x))
#define atanh(x) __builtin_tgmath(atanhf,atanh,atanhl,catanhf,catanh,catanhl,(x))
#define cos(x) __builtin_tgmath(cosf,cos,cosl,ccosf,ccos,ccosl,(x))
#define sin(x) __builtin_tgmath(sinf,sin,sinl,csinf,csin,csinl,(x))
#define tan(x) __builtin_tgmath(tanf,tan,tanl,ctanf,ctan,ctanl,(x))
#define cosh(x) __builtin_tgmath(coshf,cosh,coshl,ccoshf,ccosh,ccoshl,(x))
#define sinh(x) __builtin_tgmath(sinhf,sinh,sinhl,csinhf,csinh,csinhl,(x))
#define tanh(x) __builtin_tgmath(tanhf,tanh,tanhl,ctanhf,ctanh,ctanhl,(x))
#define exp(x) __builtin_tgmath(expf,exp,expl,cexpf,cexp,cexpl,(x))
#define log(x) __builtin_tgmath(logf,log,logl,clogf,clog,clogl,(x))
#define pow(x,y) __builtin_tgmath(powf,pow,powl,cpowf,cpow,cpowl,(x),(y))
#define sqrt(x) __builtin_tgmath(sqrtf,sqrt,sqrtl,csqrtf,csqrt,csqrtl,(x))
#define fabs(x) __builtin_tgmath(fabsf,fabs,fabsl,cabsf,cabs,cabsl,(x))
#define atan2(x,y) __builtin_tgmath(atan2f,atan2,atan2l,(x),(y))
#define cbrt(x) __builtin_tgmath(cbrtf,cbrt,cbrtl,(x))
#define ceil(x) __builtin_tgmath(ceilf,ceil,ceill,(x))
#define copysign(x,y) __builtin_tgmath(copysignf,copysign,copysignl,(x),(y))
#define erf(x) __builtin_tgmath(erff,erf,erfl,(x))
#define erfc(x) __builtin_tgmath(erfcf,erfc,erfcl,(x))
#define exp2(x) __builtin_tgmath(exp2f,exp2,exp2l,(x))
#define expm1(x) __builtin_tgmath(expm1f,expm1,expm1l,(x))
#define fdim(x,y) __builtin_tgmath(fdimf,fdim,fdiml,(x),(y))
#define floor(x) __builtin_tgmath(floorf,floor,floorl,(x))
#define fma(x,y,z) __builtin_tgmath(fmaf,fma,fmal,(x),(y),(z))
#define fmax(x,y) __builtin_tgmath(fmaxf,fmax,fmaxl,(x),(y))
#define fmin(x,y) __builtin_tgmath(fminf,fmin,fminl,(x),(y))
#define fmodf(x,y) __builtin_tgmath(fmodf,fmod,fmodl,(x),(y))
#define frexp(x,y) __builtin_tgmath(frexpf,frexp,frexpl,(x),(y))
#define hypot(x,y) __builtin_tgmath(hypotf,hypot,hypotl,(x),(y))
#define ilogb(x) __builtin_tgmath(ilogbf,ilogb,ilogbl,(x))
#define ldexp(x,y) __builtin_tgmath(ldexpf,ldexp,ldexpl,(x),(y))
#define lgamma(x) __builtin_tgmath(lgammaf,lgamma,lgammal(x))
#define llrint(x) __builtin_tgmath(llrintf,llrint,llrintl,(x))
#define llround(x) __builtin_tgmath(llroundf,llround,llroundl,(x))
#define log10(x) __builtin_tgmath(log10f,log10,log10l,(x))
#define log1p(x) __builtin_tgmath(log1pf,log1p,log1pl,(x))
#define log2(x) __builtin_tgmath(log2f,log2,log2l,(x))
#define lrint(x) __builtin_tgmath(lrintf,lrint,lrintl,(x))
#define lround(x) __builtin_tgmath(lroundf,lround,lroundl,(x))
#define nearbyint(x) __builtin_tgmath(nearbyintf,nearbyint,nearbyintl,(x))
#define nextafter(x,y) __builtin_tgmath(nextafterf,nextafter,nextafterl,(x),(y))
#define nexttoward(x,y) __builtin_tgmath(nexttowardf,nexttoward,nexttowardl,(x),(y))
#define remainder(x,y) __builtin_tgmath(remainderf,remainder,remainderl,(x),(y))
#define remquo(x,y,z) __builtin_tgmath(remquof,remquo,remquol,(x),(y),(z))
#define rint(x) __builtin_tgmath(rintf,rint,rintl,(x))
#define round(x) __builtin_tgmath(roundf,round,roundl,(x))
#define scanbn(x,y) __builtin_tgmath(scalbnf,scalbn,scalbnl,(x),(y))
#define scalbln(x,y) __builtin_tgmath(scalblnf,scalbln,scalblnl,(x),(y))
#define tgamma(x) __builtin_tgmath(tgammaf,tgamma,tgammal,(x))
#define trunc(x) __builtin_tgmath(truncf,trunc,truncl,(x))
#define carg(x) __builtin_tgmath(cargf,carg,cargl,(x))
#define cimag(x) __builtin_tgmath(cimagf,cimag,cimagl,(x))
#define conj(x) __builtin_tgmath(conjf,conj,conjl,(x))
#define cproj(x) __builtin_tgmath(cprojf,cproj,cprojl,(x))
#define creal(x) __builtin_tgmath(crealf,creal,creall,(x))
#endif