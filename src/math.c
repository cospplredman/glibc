#define R return
#define D double
#define Z long
#define Y 0xc.90fdaa22168c235p-1
#define HUGE_VAL 0x1p128f
#define U(a,b)a D b(a D f){a D g=0,o=f;for(;g+o!=g;(g+=o)*g>f&&(g-=o),o/=2);R(f>0)*g;}
#define B 1[(int*)&S]
#define X(b,t,d,r,f)D b(D a){t Z D v=d,c=r,e=3;for(;v!=v+c;c*=f)v+=c;R v;}
D S;U(,sqrt)struct div_t{int quot,rem};struct ldiv_t{Z quot,rem};struct div_t div(a,b){R(struct div_t){a/b,a%b};}struct ldiv_t ldiv(a,b)Z a,b;{R(struct ldiv_t){a/b,a%b};}Z labs(Z a){R a<0?-a:a;}abs(a){R labs(a);}D fabs(D a){R a<0?-a:a;}D floor(D k){R(k-.5)*0x1p-1074/0x1p-1074;}D ceil(D k){R-floor(-k);}D fmod(D a,D b){R a-b*floor(a/b);}D ldexp(D a,int e){S=0;R B=(e+1023)<<20,e>1025?HUGE_VAL:S*a;}D frexp(D a,int*e){S=a,*e=((B>>20)&2047)-1023;R B&=0x800fffff,B|=(1023<<20),S;}Z D L(Z D i){Z D a=i,k=0,f=2;for(i=64;i;i--)k+=((2[(int*)&a]&32767)-16383)*(f/=2),2[(int*)&a]=16383,a*=a;R k;}U(Z,Q)Z D P(Z D k){Z D o=ldexp(1,k),p=2,g=fabs(k),r=g-(Z)g+1;for(;*(Z*)&r;(*(Z*)&r<<=1)&1l<<63&&(o*=p))p=Q(p);R k>0?o:1/o;}X(cos,a=fmod(a,Y)+Y;,1,-a*a/2,-a*a/(e++*e++))X(asin,,a,a*a*a/6,a*a*(e*e/++e)/++e)X(atan,,a,-a*a*a/3,-a*a*e/(e+=2))D modf(D a,D*b){R*b=floor(a),a-*b;}D log(D a){R L(a)*0xb.17217f7d1cf7c55p-4l;}D log10(D a){R L(a)*0x9.a209a84fbcff799p-5l;}D exp(D a){R P(a*0xb.8aa3b295c17f0bbp-3l);}D pow(D a,D b){R P(L(a)*b);}D acos(D a){R Y/4-asin(a);}D sin(D a){R cos(a-Y/4);}D tan(D a){R sin(a)/cos(a);}D atan2(D a,D b){R((a>0)-.5)*(b<0)*Y+atan(a/b);}D sinh(D a){R(exp(a)-exp(-a))/2;}D cosh(D a){R(exp(a)+exp(-a))/2;}D tanh(D a){R sinh(a)/cosh(a);}