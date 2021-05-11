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
		- decided by jurry in the c&cpp discordserver #lobby
