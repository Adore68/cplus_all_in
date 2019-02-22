/*
function declaration & definition + namespace

### how to seperate files?
1. header file - function declarations except main function
2. source file1 - function definition except main function
3. source file2 - only main function
*/


#include <iostream>
//function declaration
namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

//funtion definition
void BestComImpl::SimpleFunc(void)
{
	std::cout<<"function of BestCom"<<std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout<<"function of ProgCom"<<std::endl;
}

