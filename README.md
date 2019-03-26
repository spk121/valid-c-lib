# valid-c-lib
This project is a personal challenge to see what one can do using only valid C -- the C language as described in the C standard.

For anyone that has coded in C, the library that came with your compiler probably felt pretty limited already.  There isn't a huge amount of functionality provided in GNU Libc, or Windows's UCRT, or Red Hat's Newlib.  But all of these libraries have far greater functionality that the C standard requires.  The valid C library is extremely minimal.

This project, as concieved in my head, has four main parts:
1. A modification to the Musl C library which can reduce it to contain only the functions required by the C Standard
2. Libraries written only in valid C that provide common functions and constructs
3. UNIX-like tools modified to use only valid C and the libraries provided by this project
4. Strategies for common operating systems to gather a toolchain that can compile valid C

## Porting to Valid C

Theoretically, a program in valid C is portable to every platform with a C compiler, so if a program is constrained to use only valid C, it should be able to be compiled and run anywhere.  However, if you actually wanted to try to port a C program to strictly valid C, you would have to remove most of the hardware and OS interactions.

The OS functionality of the official C library is limited to
* Stream-based I/O such as `fopen` and `fprintf`
* `getenv` / `setenv`
* The `system` function
* C (not posix) threads
* `signal` and `raise`

Existing C programs are very likely to use more OS functionality that the official C library provides.  Notably, in valid C there is no concept of some very common operating system constructs like
- directories
- sockets
- POSIX threads
- querying file info with `stat`
- timers
- `fork` and `exec`
- dynamically loadable libraries

### Splitting Portable and Unportable layers

Since porting to strictly valid C is not an option for most programs, you could use some of the tools and techniques in this project to help split a program into portable and unportable modules.  If the main core of your program only used valid C headers and extended functionality was pushed into separate modules, it should be easier to comparmentalize any OS-specific `#ifdef` code.

## Colophon

Hey, if you actually look at this or use it, let me know.

Mike Gran `spk121@yahoo.com`
