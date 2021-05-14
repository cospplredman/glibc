#include "stdlib.h"
#include "ctype.h"

double atof(char*p) {
	return strtod(p,NULL);
}

double strtod(char*p,char**e) {
	// todo: rewrite this using strtol
	while(isspace(*p))p++;
	int x,s=abs(*p-44)-1?1:44-*p++;
	double d=0,m=1,z=0;
	for(;isdigit(*p);d=d*10+*p++-48);
	if(*p==46)for(;isdigit(*++p);d+=(m/=10)*(*p-48));
	if(toupper(*p)==69) {
		x=abs(*++p-44)-1?1:44-*p++;
		for(;isdigit(*p);z=z*10+*p++-48);
		d*=pow(10,x*z);
	}
	if(e)*e=p;
	if(d==1e309)return(errno=34),s*1e309;
	if(d==0)errno=34;
	return s*d;
}

int r = 1;

int rand() {
	return r = ((r * r ^ r) + r) % RAND_MAX;
}

int srand(int x) {
	r = x;
}

#define l _Alignof(void*)

void* malloc(size_t _) {
	void* p = sbrk((_&~(l-1))+l);
	return p==(void*)-1?0:p;
}

void* free(void*p) {}

void* calloc(size_t n, size_t s) {
	void* ptr = malloc(n*s);
	memset(ptr,0,n*s);
	return ptr;
}

void* realloc(void* ptr, size_t n) {
	void* new = malloc(n);
	if(!new)return new;
	memcpy(new,ptr,n);
	free(ptr);
	return new;
}
