#include <iostream>
/*Default value in function parameter*/
int Adder(int num1=1, int num2=2)
{
	return num1+num2;
}

int main(void)
{
	std::cout<<Adder()<<std::endl; //3
	std::cout<<Adder(5)<<std::endl; //7
	std::cout<<Adder(3,5)<<std::endl; //8	
	return 0;
}
