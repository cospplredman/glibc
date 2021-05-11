#ifndef STDLIB_H
#define STDLIB_H

#include "stddef.h"
#include <unistd.h>

#define RAND_MAX 32767

static int __ri = 1;

static int rand() {
	return __ri = ((__ri * __ri ^ __ri) + __ri) % RAND_MAX;
}

static int srand(int x) {
	__ri = x;
}

static const size_t align = _Alignof(void*);

static void* malloc(size_t _) {
	size_t n = (_&~(align-1))+align;
	void* ptr = sbrk(n);
	return ptr==(void*)-1?0:ptr;
}

static void* free(void* ptr) {}

static void* calloc(size_t n, size_t s) {
	void* ptr = malloc(n * s);
	memset(ptr, 0, n * s);
	return ptr;
}

static void* realloc(void* ptr, size_t n) {
	void* new = malloc(n);
	if(!new) return new;
	memcpy(new, ptr, n);
	free(ptr);
	return new;
}

#endif
