# Insanity
Compiler insanity tester

There are a bunch of things that compilers optimize away because of some standard.

Some examples:
 - [felix-gcc signed integer overflow bug](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=30475)
 - [Make finite loops infinite](https://susam.net/loopy-c-puzzle.html)
 - [Is it OK that gcc optimizes away overflow check?](https://gcc.gnu.org/legacy-ml/gcc-help/2011-07/msg00219.html)
 - [Undefined behaviour and advanced compiler optimizations](https://youtu.be/w3_e9vZj7D8)

The basic feature of the compiler is to produce machine code that is sensible. Not to exploit the standard to make the code do the wrong thing. This tool tries to identify the behaviour of compilers on different architectures for you to understand what you should and should not do (or ditch one compiler or the other).
