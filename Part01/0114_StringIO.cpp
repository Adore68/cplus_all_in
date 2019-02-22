#include <iostream>
/*input string in array*/
int main(void)
{
	char name[100];
	char lang[200];

	std::cout<<"what is your name? ";
	std::cin>>name;
	
	std::cout<<"Which programming language do you like?  ";
	std::cin>>lang;

	std::cout<<"My name is "<<name;
	std::cout<<"My favorite programming language is "<<lang<<std::endl;
	return 0;
}
