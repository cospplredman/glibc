# glibc
golfed C90 libc targeting gcc

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
- stddef.h
- float.h
- math.h

Partial:
- stdlib.h (felis working on it)
- string.h (pi working on it)

To-do:
- limits.h
- locale.h
- setjmp.h
- signal.h
- stdio.h
- time.h
