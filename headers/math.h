long labs(long a){return a<0?-a:a;}
abs(a){return a<0?-a:a;}
long long llabs(long long a){return a<0?-a:a;}

float fabsf(float a){return a<0?-a:a;}
double fabs(double a){return a<0?-a:a;}
long double fabsl(long double a){return a<0?-a:a;}

float roundf(float k){float r=0x1p-149;return k==0.5?1:r*k/r;}
double round(double k){double r=0x1p-1074;return k==0.5?1:r*k/r;}
long double roundl(long double k){long double r=k>0?0x1p63:-0x1p63;return k==0.5?1:r+k-r;}

float floorf(float k){return roundf(k-0.5);}
double floor(double k){return round(k-0.5);}
long double floorl(long double k){return roundl(k-0.5);}

float ceilf(float k){return -floorf(-k);}
double ceil(double k){return -floor(-k);}
long double ceill(long double k){return -floorl(-k);}

long lroundf(float a){return(long)(a+0.5);}
long lround(float a){return(long)(a+0.5);}
long lroundl(float a){return(long)(a+0.5);}

long long llroundf(float a){return(long long)(a+0.5);}
long long llround(double a){return(long long)(a+0.5);}
long long llroundl(long double a){return(long long)(a+0.5);}
