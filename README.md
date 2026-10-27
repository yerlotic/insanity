# Insanity
Compiler insanity tester

There are a bunch of things that compilers optimize away because of some standard.

Some examples:
 - [felix-gcc signed integer overflow bug](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=30475)
 - [Make finite loops infinite](https://susam.net/loopy-c-puzzle.html)

The basic feature of the compiler is to produce machine code that is sensible. Not to exploit the standard to make the code do the wrong thing. This tool tries to identify the behaviour of compilers on different architectures for you to understand what you should and should not do (or ditch one compiler or the other).
