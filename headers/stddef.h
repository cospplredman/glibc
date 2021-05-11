#ifndef STDDEF_H
#define STDDEF_H

#define NULL (void*)0

typedef typeof(NULL - NULL) ptrdiff_t;
typedef typeof(sizeof(0)) size_t;
typedef typeof(*L"") wchar_t;

#endif
