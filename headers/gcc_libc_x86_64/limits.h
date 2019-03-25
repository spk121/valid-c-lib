#ifndef _LIMITS_H
#define _LIMITS_H

# ifdef _MB_LEN_MAX
#  define MB_LEN_MAX	_MB_LEN_MAX
# else
#  define MB_LEN_MAX    16
# endif

#define CHAR_BIT 8
#define CHAR_MAX 127
#define CHAR_MIN -128
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define LONG_MAX 9223372036854775807L
#define LONG_MIN (-0x7fffffffffffffffL -1L)
#define LLONG_MAX 9223372036854775807L
#define LLONG_MIN (-0x7fffffffffffffffL -1L)
#define SCHAR_MAX 127
#define SCHAR_MIN -128
#define SHRT_MAX 32767
#define SHRT_MIN -32768
#define UCHAR_MAX 255
#define USHRT_MAX 65535
#define UINT_MAX 4294967295
#define ULONG_MAX 18446744073709551615UL
#define ULLONG_MAX 18446744073709551615UL
#endif
