abs(a){return a<0?-a:a;}
long labs(long a){return a<0?-a:a;}
long long llabs(long long a){return a<0?-a:a;}

double fabs(double a){return a<0?-a:a;}
float fabsf(float a){return a<0?-a:a;}
long double fabsl(long double a){return a<0?-a:a;}

float roundf(float k){float r=0x1p-149;return r*k/r;}
double round(double k){double r=0x1p-1074;return r*k/r;}
long double roundl(long double k){long double r=k>0?0x1p63:-0x1p63;return r+k-r;}
