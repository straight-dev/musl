#include "pthread_impl.h"

extern void *STRAIGHT_tp;

int __set_thread_area(void *p)
{
	STRAIGHT_tp = p;
	return 0;
}
