#include <iostream>

int main(void)
{
	int val1;
	std::cout<<"first number: ";
	std::cin>>val1; // "cin>>" for data input 
	
	int val2;	
	std::cout<<"second number: ";
	std::cin>>val2;

	int result=val1+val2;
	std::cout<<"result: "<<result<<std::endl;
	return 0;
}
