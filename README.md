# valid-c-lib
This project is an alternate set of headers for the GNU C library which only supports procedures and macros in the C standard.

If you place these headers in a directory, and include them first by using the the gcc '-I' option on that directory first, they will override the system-supplied headers.   You must include them first, though.  If you add the '-nostdinc' option, it will ensure that you have only used valid C headers as they appear in the C standard.

## Porting to Valid C

If you actually wanted to try to port a C program to strictly valid C, you can use these headers to see which extended C library functions you need to reimplement or replace.  But the official C library is quite limited.

The OS functionality of the official C library is limited to
* FILE-base I/O
* getenv / setenv
* system
* C (not posix) threads
* signal and raise

Thus, most existing programs use more OS functionality that the official C library provides.

## Splitting Portable and Unportable layers

Since porting to strictly valid C is not an option for most programs, you could use these headers to help split a program into portable and unportable modules.  If the main core of your program only used valid C headers and extended functionality was pushed into separate libraries, it might be easier to comparmentalize any OS-specific `#ifdef` code.

## Colophon

Hey, if you actually look at this or use it, let me know.

Mike Gran `spk121@yahoo.com`
