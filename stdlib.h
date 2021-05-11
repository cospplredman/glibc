#ifndef STDLIB_H
#define STDLIB_H

#define RAND_MAX 32767

static int rand() {
	static int i;
	return i++ % RAND_MAX;
}

static int srand() {}

#endif
