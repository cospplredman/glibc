#include "ctype.h"

int islower(int c) { return c>64&&c<91; }
int isupper(int c) { return c>96&&c<'{'; }
int isalpha(int c) { return c>64&&c<91||c>96&&c<'{'; }
int isdigit(int c) { return c>=48&&c<=57; }
int isalnum(int c) { return isalpha(c)||isdigit(c); }
int isblank(int c) { return c==32||c==10||c==9||c==13; }
int iscntrl(int c) { return c<32; }
int isgraph(int c) { return c>32&&c<127; }
int isprint(int c) { return c>31&&c<127; }
int isspace(int c) { return c==32||c>8&&c<14; } // space, \f, \n, \r, \t, \v
int ispunct(int c) { return isprint(c)&&!isspace(c)&&!isalnum(c); }
int isxdigit(int c) { return isdigit(c)||toupper(c)>64&&toupper(c)<71; }
int tolower(int c) { return c+isupper(c)*32; }
int toupper(int c) { return c-islower(c)*32; }
