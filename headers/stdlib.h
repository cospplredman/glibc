#ifndef STDLIB_H
#define STDLIB_H

#include "stddef.h"
#include <unistd.h>

#define RAND_MAX 32767

// div_t
// ldiv_t
// MB_CUR_MAX

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

double atof(const char *nptr);

double strtod(const char *nptr, char **endptr);

// prototypes not needed for rand() and srand()

void* malloc(size_t);
void* free(void*);
void* calloc(size_t, size_t);
void* realloc(void*, size_t);

#endif
