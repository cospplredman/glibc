#ifndef STDLIB_H
#define STDLIB_H

#include "stddef.h"
#include <unistd.h>

#define RAND_MAX 32767

// prototypes not needed for rand() and srand()

void* malloc(size_t);
void* free(void*);
void* calloc(size_t, size_t);
void* realloc(void*, size_t);

#endif
