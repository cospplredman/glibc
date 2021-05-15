//not golfed yet gimme a sec gatta impliment everything

#define Q(a,e,b,c)((typeof(a+0.1))0x1p2000l>(typeof(a+0.1))0x1p1999l?(typeof(a+0.1))b e:(typeof(a+0.1))c e)

#define NAN (0x1p128f*0)
#define INFINITY 0x1p128f

#define HUGE_VALF 0x1p128f
#define HUGE_VAL 0x1p128f
#define HUGE_VALL 0x1p128f

#define FP_NORMAL 0
#define FP_SUBNORMAL 1
#define FP_ZERO 2
#define FP_INFINITE 3
#define FP_NAN 4

#define fpclassify(a)((a)==0?2:(a)-1==(a)?3:(a)<((typeof(a))0x1p-16382?(typeof(a))0x1p-16382:(typeof(a))0x1p-1022?(typeof(a))0x1p-1022:0x1p-126)?1:(a)*0!=0?4:0)
#define isfinite(a)((a)-1!=(a))
#define isinf(a)((a)-1==(a))
#define isnan(a)((a)-1!=(a)&&(a)*0!=0)
#define isnormal(a)(fpclassify(a)==0)
#define signbit(a)((a)<0)
#define isgreater(a,b)((a)>(b))
#define isgreaterequal(a,b)((a)>=(b))
#define isless(a,b)((a)<(b))
#define islessequal(a,b)((a)<=(b))
#define islessgreater(a,b)((a)<(b)||(a)>(b))
#define isunordered(a,b)(isnan(a)||isnan(b))

typedef double float_t;
typedef double double_t;

struct div_t{int quot,rem};
struct ldiv_t{long quot,rem};
struct lldiv_t{long long quot,rem};
// todo: struct imaxdiv_t { int quot; int rem; };

struct div_t div(a,b){struct div_t c={a/b,a%b};return c;}
struct ldiv_t ldiv(a,b)long a,b;{struct ldiv_t c={a/b,a%b};return c;}
struct lldiv_t lldiv(a,b)long long a,b;{struct lldiv_t c={a/b,a%b};return c;}
// todo: imaxdiv_t imaxdiv()

//todo imaxabs
long labs(long a){return a<0?-a:a;}
abs(a){return a<0?-a:a;}
long long llabs(long long a){return a<0?-a:a;}

#define abs(a) (a<0?-a:a)
float fabsf(float a){return a<0?-a:a;}
double fabs(double a){return a<0?-a:a;}
long double fabsl(long double a){return a<0?-a:a;}

float fdimf(float a,float b){return fabsf(a-b);}
double fdim(double a,double b){return fabs(a-b);}
long double fdiml(long double a,long double b){return fabsl(a-b);}
#define fdim(a,b)Q(a+b,(a+b),fdiml,fdim)

float roundf(float k){float r=0x1p-149;return k==0.5?1:r*k/r;}
double round(double k){double r=0x1p-1074;return k==0.5?1:r*k/r;}
long double roundl(long double k){long double r=k>0?0x1p63:-0x1p63;return k==0.5?1:r+k-r;}
#define round(a)Q(a,(a),roundl,round)

float floorf(float k){return roundf(k-0.5);}
double floor(double k){return round(k-0.5);}
long double floorl(long double k){return roundl(k-0.5);}
#define floor(a)Q(a,(a),floorl,floor)

float ceilf(float k){return -floorf(-k);}
double ceil(double k){return -floor(-k);}
long double ceill(long double k){return -floorl(-k);}
#define ceil(a)Q(a,(a),ceill,ceil)

long lroundf(float a){return lround(a);}
long lround(float a){return lround(a);}
long lroundl(float a){return lround(a);}
#define lround(a) (long)(a+0.5)

long long llroundf(float a){return llround(a);}
long long llround(double a){return llround(a);}
long long llroundl(long double a){return llround(a);}
#define llround(a) (long long)(a+0.5)

float fmodf(float a,float b){return a-b*floorf(a/b);}
double fmod(double a,double b){return a-b*floor(a/b);}
long double fmodl(long double a,long double b){return a-b*floorl(a/b);}
#define fmod(a,b)Q(a+b,(a,b),fmodl,fmod)

float remainderf(float a,float b){return a-roundf(a/b)*b;}
double remainder(double a,double b){return a-round(a/b)*b;}
long double remainderl(long double a,long double b){return a-roundl(a/b)*b;}
#define remainder(a,b)Q(a+b,(a,b),remainderl,remainder)

float remquof(float a,float b,int *c){union{int a;float b}k={.b=a/b};return *c=k.a&7,remainder(a,b);}
double remquo(double a,double b,int *c){union{int a[2];float b}k={.b=a/b};return *c=k.a[0]&7,remainder(a,b);}
long double remquol(long double a,long double b,int *c){union{int a[4];float b}k={.b=a/b};return *c=k.a[0]&7,remainder(a,b);}
#define remquo(a,b,c)Q(a+b,(a,b,c),remquol,remquo)

float nanf(char*){return 0;}
double nan(char*){return 0;}
long double nanl(char*){return 0;}

#define sqrt(r) (r f){r g=0,o=f;do(g+=o)*g>f&&(g-=o);while(g+(o/=2)!=g);return f<0?NAN:g;}
float sqrtf sqrt(float)
double sqrt sqrt(double)
long double sqrtl sqrt(long double)
#undef sqrt
#define sqrt(a)Q(a,(a),sqrtl,sqrt)

float hypotf(float a,float b){return sqrtf(a*a+b*b);}
double hypot(double a,double b){return sqrt(a*a+b*b);}
long double hypotl(long double a,long double b){return sqrtl(a*a+b*b);}
#define hypot(a,b)Q(a+b,(a,b),hypotl,hypot)

#define cbrt(r) (r f){r g=0,o=f;do(g+=o)*g*g>f&&(g-=o);while(g+(o/=2)!=g);return f<0?NAN:g;}
float cbrtf cbrt(float)
double cbrt cbrt(double)
long double cbrtl cbrt(long double)
#undef cbrt
#define cbrt(a)Q(a,(a),cbrtl,cbrt)

float frexpf(float a,int* e){union{float f;int i}k={.f=a};*e=((k.i>>23)&255)-127;return k.i&=0x807fffff,k.i|=0x3f800000, k.f;}
double frexp(double a,int* e){union{double f;int i[2]}k={.f=a};*e=((k.i[1]>>20)&2047)-1023;return k.i[1]&=0x800fffff,k.i[1]|=(1023<<20),k.f;}
long double frexpl(long double a,int* e){union{long double f;int i[4]}k={.f=a};*e=(k.i[2]&0x7fff)-16383;return k.i[3]=0,k.i[2]&=0x8000,k.i[2]|=16383,k.f;}
#define frexp(a,b)Q(a,(a,b),frexpl,frexp)

float log2f(float j){int a;float k=0,f=1;for(int i=24;i;i--)j=frexpf(j,&a),k+=a*f,f*=0.5,j*=j;return k;}
double log2(float j){int a;double k=0,f=1;for(int i=53;i;i--)j=frexp(j,&a),k+=a*f,f*=0.5,j*=j;return k;}
long double log2l(float j){int a;long double k=0,f=1;for(int i=65;i;i--)j=frexpl(j,&a),k+=a*f,f*=0.5,j*=j;return k;}
#define log2(a)Q(a,(a),log2l,log2)

float fmaf(float a,float b,float c){return a*b+c;}
double fma(double a,double b,double c){return a*b+c;}
long double fmal(long double a,long double b,long double c){return a*b+c;}
#define fma(a,b,c)Q(a+b+c,(a,b,c),fmal,fma)

float ldexpf(float a,int e){union{float f;int i}k={.f=a};e+=((k.i>>23)&255)-127;return k.i&=0x807fffff,k.i|=(e+127)<<23,e>127?HUGE_VALF:k.f;}
double ldexp(double a,int e){union{double f;int i[2]}k={.f=a};e+=((k.i[1]>>20)&2047)-1023;return k.i[1]&=0x800fffff,k.i[1]|=((e+1023)<<20),e>1025?HUGE_VAL:k.f;}
long double ldexpl(long double a,int e){union{long double f;int i[4]}k={.f=a};e+=(k.i[2]&0x7fff)-16383;return k.i[3]=0,k.i[2]&=0x8000,k.i[2]|=e+16383,e>16385?HUGE_VALL:k.f;}
#define ldexp(a,b)Q(a,(a,b),ldexpl,ldexp)

float fmaxf(float a,float b){return a>b?a:b;}
double fmax(double a,double b){return a>b?a:b;}
long double fmaxl(long double a,long double b){return a>b?a:b;}
#define fmax(a,b)Q(a,(a,b),fmaxl,fmax)

float fminf(float a,float b){return a<b?a:b;}
double fmin(double a,double b){return a<b?a:b;}
long double fminl(long double a,long double b){return a<b?a:b;}
#define fmin(a,b)Q(a,(a,b),fminl,fmin)

float truncf(float k){return roundf(k-k<1?0.5:-0.5);}
double trunc(double k){return round(k-k<1?0.5:-0.5);}
long double truncl(long double k){return roundl(k-k<1?0.5:-0.5);}
#define trunc(a)Q(a,(a),truncl,trunc)
