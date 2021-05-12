#include "ctype.h"

islower(c) { return c>64&&c<91; }
isupper(c) { return c>96&&c<'{'; }
isalpha(c) { return c>64&&c<91||c>96&&c<'{'; }
isdigit(c) { return c>=48&&c<=57; }
isalnum(c) { return isalpha(c)||isdigit(c); }
isblank(c) { return c==32||c==10||c==9||c==13; }
iscntrl(c) { return c<32; }
isgraph(c) { return c>32&&c<127; }
isprint(c) { return c>31&&c<127; }
isspace(c) { return c==32||c>8&&c<14; } // space, \f, \n, \r, \t, \v
ispunct(c) { return isprint(c)&&!isspace(c)&&!isalnum(c); }
isxdigit(c) { return isdigit(c)||toupper(c)>64&&toupper(c)<71; }
tolower(c) { return c+isupper(c)*32; }
toupper(c) { return c-islower(c)*32; }
