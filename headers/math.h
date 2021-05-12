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
