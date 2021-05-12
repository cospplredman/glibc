# glibc
golfed libc targeting gcc

##### rules (subject to change):
- no __builtins
- requires ieee floats (no fast math)
- requires ieee doubles
- requires 80 bit long doubles
- no asm() or __asm{} (basically no inline assembly)
- legit implimentations only
	* for example, no bruteforcing math functions
		- decided by jurry in the c&cpp discord server #lobby
- requires x64 linux

Complete:
- assert.h
- ctype.h (without localization)
- errno.h
- stdbool.h
- stddef.h

Partial:
- stdlib.h (felis working on it)
- math.h (cos working on it)
- string.h (pi working on it)

To-do:
- complex.h
- fenv.h
- float.h
- inttypes.h
- iso646.h
- limits.h
- locale.h
- setjmp.h
- signal.h
- stdalign.h
- stdarg.h
- stdatomic.h
- stdint.h
- stdio.h
- stdnoreturn.h
- tgmath.h
- threads.h
- time.h
- uchar.h
- wchar.h
- wctype.h
