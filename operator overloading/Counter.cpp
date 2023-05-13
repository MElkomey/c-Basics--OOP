#include "Counter.h"

Counter::Counter():counter(0){
}

Counter::Counter(int c):counter(c)
{
}
Counter::~Counter()
{
}
int Counter::get_counter()
{
	return counter;
}
