#ifndef _LIMITS_H
#define _LIMITS_H
#define CHAR_BIT 8
#define CHAR_MAX 127
#define CHAR_MIN (-128)
#define INT_MAX 0x7fffffff
#define INT_MIN (-0x7fffffff -1)
#define LONG_MAX 0x7fffffffffffffffL
#define LONG_MIN (-0x7fffffffffffffffL -1L)
#define LLONG_MAX 0x7fffffffffffffffLL
#define LLONG_MIN (-0x7fffffffffffffffLL -1)
#define MB_LEN_MAX 8
#define SCHAR_MAX 127
#define SCHAR_MIN (-128)
#define SHRT_MAX 32767
#define SHRT_MIN (-32768)
#define UCHAR_MAX 255
#define USHRT_MAX 65535
#define UINT_MAX (0x7fffffff * 2U + 1)
#define ULONG_MAX (0x7fffffffffffffffL * 2UL + 1)
#define ULLONG_MAX (0x7fffffffffffffffL * 2UL + 1)
#endif
