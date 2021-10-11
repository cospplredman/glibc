all:
	gcc -I ./headers ./src/*c -Woverflow -Wimplicit-int -o golibc -nostdinc
