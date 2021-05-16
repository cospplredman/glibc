#define R return
#define D double
#define Y 0xc.90fdaa22168c235p-1
#define HUGE_VAL 0x1p128f
struct div_t{int quot,rem};
struct ldiv_t{long quot,rem};
struct div_t div(a,b){R(struct div_t){a/b,a%b};}
struct ldiv_t ldiv(a,b)long a,b;{R(struct ldiv_t){a/b,a%b};}
long labs(long a){R a<0?-a:a;}
abs(a){R labs(a);}
D fabs(D a){R a<0?-a:a;}
D floor(D k){R(k-0.5)*0x1.1p0f*0x1p-1074/0x1p-1074;}
D ceil(D k){R -floor(-k);}
D fmod(D a,D b){R a-b*floor(a/b);}
D sqrt(D f){D g=0,o=f;do(g+=o)*g>f&&(g-=o);while(g+(o/=2)!=g);R(f>0)*g;}
D frexp(D a,int*e){union{D f;int i[2]}k={.f=a};*e=((k.i[1]>>20)&2047)-1023;R k.i[1]&=0x800fffff,k.i[1]|=(1023<<20),k.f;}
D ldexp(D a,int e){union{D f;int i[2]}k={.i=0};R k.i[1]=((e+1023)<<20),e>1025?HUGE_VAL:k.f*a;}
D modf(D a,D*b){R*b=floor(a),a-*b;};
long D L(long D i){union{long D f;int i[4];}a={.f=i};long D k=0,f=2;for(i=64;i;i--)k+=((a.i[2]&0x7fff)-16383)*(f/=2),a.i[2]=16383,a.f*=a.f;R k;}
long D sqrtc(long D f){long D g=0,o=f;do(g+=o)*g>f&&(g-=o);while(g+(o/=2)!=g);R(f>0)*g;}
long D P(long D k){long D o=ldexp(1,k),p=2,g=fabs(k);union{long D f;long i[2];}r={.f=g-(int)g+1};while(*r.i)p=sqrtc(p),(*r.i<<=1)&(1ull<<63)&&(o*=p);R k>0?o:1/o;}
D log(D a){R L(a)*0xb.17217f7d1cf7c55p-4l;}
D log10(D a){R L(a)*0x9.a209a84fbcff799p-5l;}
D exp(D a){R P(a*0xb.8aa3b295c17f0bbp-3l);}
D pow(D a,D b){R P(L(a)*b);}
D cos(D a){a=fmod(a,Y)+Y;long D v=1,c=-a*a/2,e=3;while(v!=v+c)v+=c,c*=-a*a,c/=e++*e++;R v;}
D sin(D a){R cos(a-Y/4);}
D asin(D a){long D v=a,c=a*a*a/6,e=3;while(v!=v+c)v+=c,c*=(e*e/++e)/++e,c*=a*a;R v;}
D acos(D a){R Y/4-asin(a);}
D tan(D a){R sin(a)/cos(a);}
D atan(D a){long D v=a,c=-a*a*a/3,e=3;while(v!=v+c)v+=c,c*=-a*a*e,c/=e+=2;R v;}
D atan2(D a,D b){R atan(a/b)+((a>0)-0.5)*(b<0)*Y;}
D sinh(D a){R(exp(a)-exp(-a))/2;}
D cosh(D a){R(exp(a)+exp(-a))/2;}
D tanhc(D a){R sinh(a)/cosh(a);}
