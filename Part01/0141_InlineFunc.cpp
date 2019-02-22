#include <iostream>

/* inline function is function-like-macro
#define SQUARE(x) ((x)*(x)) ->macro. but difficult to define
how to make inline funtion*/

inline int SQUARE(int x)
{
	return x*x;
}

int main(void)
{
	std::cout<<SQUARE(5)<<std::endl;
	std::cout<<SQUARE(12)<<std::endl;
	return 0;
}
