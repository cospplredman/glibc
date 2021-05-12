#define NAN (float)((1/0)*0)
#define INFINITY (float)(1/0)

#define HUGE_VALF (float)(1/0)
#define HUGE_VAL (double)(1/0)
#define HUGE_VALL (long double)(1/0)

#define FP_NORMAL 0
#define FP_SUBNORMAL 1
#define FP_ZERO 2
#define FP_INFINITE 3
#define FP_NAN 4
//todo #define fpclassify(a) a==0?2:

//todo imaxabs
long labs(long a){return a<0?-a:a;}
abs(a){return a<0?-a:a;}
long long llabs(long long a){return a<0?-a:a;}

#define abs(a) (a<0?-a:a)
float fabsf(float a){return a<0?-a:a;}
double fabs(double a){return a<0?-a:a;}
long double fabsl(long double a){return a<0?-a:a;}

//todo #define round
float roundf(float k){float r=0x1p-149;return k==0.5?1:r*k/r;}
double round(double k){double r=0x1p-1074;return k==0.5?1:r*k/r;}
long double roundl(long double k){long double r=k>0?0x1p63:-0x1p63;return k==0.5?1:r+k-r;}

//todo #define floor
float floorf(float k){return roundf(k-0.5);}
double floor(double k){return round(k-0.5);}
long double floorl(long double k){return roundl(k-0.5);}

//todo #define ceil
float ceilf(float k){return -floorf(-k);}
double ceil(double k){return -floor(-k);}
long double ceill(long double k){return -floorl(-k);}

#define lround(a) (long)(a+0.5)
long lroundf(float a){return lround(a);}
long lround(float a){return lround(a);}
long lroundl(float a){return lround(a);}

#define llround(a) (long long)(a+0.5)
long long llroundf(float a){return llround(a);}
long long llround(double a){return llround(a);}
long long llroundl(long double a){return llround(a);}

//todo #define fmod
float fmodf(float a,float b){return a-b*floorf(a/b);}
double fmod(double a,double b){return a-b*floor(a/b);}
long double fmodl(long double a,long double b){return a-b*floorl(a/b);}

//todo #define remainder
float remainderf(float a,float b){return a-roundf(a/b)*b;}
double remainder(double a,double b){return a-round(a/b)*b;}
long double remainderl(long double a,long double b){return a-roundl(a/b)*b;}

float nanf(char*){return 0;}
double nan(char*){return 0;}
long double nanl(char*){return 0;}

#define sqrt(r) (r f){r g=0,o=f;do(g+=o)*g>f&&(g-=o);while(g+(o/=2)!=g);return f<0?NAN:g;}
float sqrtf sqrt(float)
double sqrt sqrt(double)
long double sqrtl sqrt(long double)
#undef sqrt
//todo #define sqrt

float hypotf(float a,float b){return sqrtf(a*a+b*b);}
double hypot(double a,double b){return sqrt(a*a+b*b);}
long double hypotl(long double a,long double b){return sqrtl(a*a+b*b);}

#define cbrt(r) (r f){r g=0,o=f;do(g+=o)*g*g>f&&(g-=o);while(g+(o/=2)!=g);return f<0?NAN:g;}
float cbrtf cbrt(float)
double cbrt cbrt(double)
long double cbrtl cbrt(long double)
#undef cbrt
//todo #define cbrt

float frexpf(float a,int* e){union{float f;int i;}k={.f=a};*e=((k.i>>23)&255)-127;return k.i&=0x807fffff,k.i|=0x3f800000, k.f;}
double frexp(double a,int* e){union{double f;int i[2];}k={.f=a};*e=((k.i[1]>>20)&2047)-1023;return k.i[1]&=0x800fffff,k.i[1]|=(1023<<20),k.f;}
long double frexpl(long double a,int* e){union{long double f;int i[4];}k={.f=a};*e=(k.i[2]&0x7fff)-16383;return k.i[3]=0,k.i[2]&=0x8000,k.i[2]|=16383,k.f;}
//todo #define frexp

float log2f(float j){int a;float k=0,f=1;for(int i=24;i;i--)j=frexpf(j,&a),k+=a*f,f*=0.5,j*=j;return k;}
double log2(float j){int a;double k=0,f=1;for(int i=53;i;i--)j=frexp(j,&a),k+=a*f,f*=0.5,j*=j;return k;}
long double log2l(float j){int a;long double k=0,f=1;for(int i=65;i;i--)j=frexpl(j,&a),k+=a*f,f*=0.5,j*=j;return k;}
//todo #define log2

