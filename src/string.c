#define T typedef
#define P static
#define D(x){return x;}
#define L strlen
#define N strnlen
#define m(x,y,z)x<y?x<z?x:z:y
T unsigned long Z;T unsigned char C;T const char*S;T char*s;T const void*V;T C*U;T void*v;P Z R;P r;P U a,b;Z N(S s,Z l){for(R=0;l--&&*s++;R++);R=R;}Z L(S s)D(N(s,-1))memcmp(V x,V y,Z n){for(r=0,a=x,b=y;n--&&!(r=*a++-*b++););r=r;}strncmp(S x,S y,Z n)D(memcmp(x,y,m(n,N(x,n)+1,N(y,n)+1)))strcmp(S x,S y)D(strncmp(x,y,-1))v memset(d,x,n)v d;Z n;{for(a=d;n--;*a++=x);a=d;}v memcpy(v d,V s,Z n){for(a=d,b=s;n--;*a++=*b++);a=d;}v memmove(v d,V s,Z n){if(d<s)memcpy(d,s,n);else for(a=d,b=s;n--;a[n]=b[n]);a=d;}s strncpy(s d,S s,Z n)D(memcpy(d,s,m(n,1+N(s,n),-1u)))s strcpy(s d,S s)D(strncpy(d,s,-1))s strncat(s d,S s,Z n){strncpy(d+L(d),s,n);a=d;}s strcat(s d,S s)D(strncat(d,s,-1))v memchr(x,c,n)V x;Z n;{for(a=x;n--&&*a++!=(C)c;);a=n+1?a-1:0;}s strchr(x,c)S x;D(memchr(x,c,L(x)+1))s strstr(S x,S y){for(;*x&&strncmp(x,y,L(y));x++);a=*x?x:0;}
