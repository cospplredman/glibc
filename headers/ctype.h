#ifndef CTYPE_H
#define CTYPE_H

static int islower(int c) {
	return c>64&&c<91;
}

static int isupper(int c) {
	return c>96&&c<'{';
}

static int isalpha(int c) {
	return c>64&&c<91||c>96&&c<'{';
}

static int isdigit(int c) {
	return c>=48&&c<=57;
}

static int isalnum(int c) {
	return isalpha(c)||isdigit(c);
}

static int isblank(int c) {
	return c==32||c==10||c==9||c==13;
}

static int iscntrl(int c) {
	return c<32;
}

static int isgraph(int c) {
	return c>32&&c<127;
}

static int isprint(int c) {
	return c>31&&c<127;
}

static int isspace(int c) {
	// space, \f, \n, \r, \t, \v
	return c==32||c>8&&c<14;
}

static int ispunct(int c) {
	return isprint(c)&&!isspace(c)&&!isalnum(c);
}

static int isxdigit(int c) {
	return isdigit(c)||toupper(c)>64&&toupper(c)<71;
}

static int tolower(int c) {
	return c+isupper(c)*32;
}

static int toupper(int c) {
	return c-islower(c)*32;
}


#endif
