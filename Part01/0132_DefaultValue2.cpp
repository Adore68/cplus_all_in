#include <iostream>
/*function declaration in front
define funtion later

<funtion>
int            main            (void)       {
 |               |                |
return value   function name    input value
*/
int Adder(int num1=1, num2=2); //Default value in funciton declaration

int main(void)
{
	std::cout<<Adder()<<std::endl;
	std::cout<<Adder(5)<<std::endl;
	std::cout<<Adder(3,5)<<std::endl;
	return 0;
}

int Adder(int num1, int num2) //function definition
{
	return num1+num2;
}
