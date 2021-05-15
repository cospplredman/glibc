all:
	gcc ./headers/*.h ./src/*c -Woverflow -Wimplicit-int -o golibc
