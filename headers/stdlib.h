#ifndef STDLIB_H
#define STDLIB_H

#include "stddef.h"

#define RAND_MAX 32767

static int __ri = 1;

static int rand() {
	return __ri = ((__ri * __ri ^ __ri) + __ri) % RAND_MAX;
}

static int srand(int x) {
	__ri = x;
}

void* free(void*);
void* malloc(size_t);
void* calloc(size_t, size_t);
void* realloc(void*, size_t);

#endif
