# valid-c-lib
This project is a personal challenge to see what one can do using only valid C -- the C language as described in the C standard.

For anyone that has coded in C has used a vendor's C library, but, that C library likely has far greater functionality that the C standard requires.  The valid C library is quite minimal.

This project has three main parts:
1. A port of the Red Hat Newlib C library which has been reduced to contain only the functions required by the C Standard.
2. Some libraries, written in valid C, that provide functionality usually contained in standard C libraries.
3. Standard Unix tools modified to only valid C.

## Porting to Valid C

If you actually wanted to try to port a C program to strictly valid C, you would have to remove most of the hardware and OS interactions.

The OS functionality of the official C library is limited to
* FILE-base I/O
* getenv / setenv
* The `system` function
* C (not posix) threads
* `signal` and `raise`

Thus, most existing programs use more OS functionality that the official C library provides.

## Splitting Portable and Unportable layers

Since porting to strictly valid C is not an option for most programs, you could use these headers to help split a program into portable and unportable modules.  If the main core of your program only used valid C headers and extended functionality was pushed into separate libraries, it might be easier to comparmentalize any OS-specific `#ifdef` code.

## Colophon

Hey, if you actually look at this or use it, let me know.

Mike Gran `spk121@yahoo.com`
