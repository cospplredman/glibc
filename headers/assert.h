#ifndef ASSERT_H
#define ASSERT_H
#ifdef NDEBUG
#define assert(_) ((void)0)
#else
#define __ib(_) #_
#define __ic(_) __ib(_)
#define assert(_) (_)||(fputs(#_ __FILE__ __ic(__LINE__)),abort(),0)
#endif
#endif
