#include <iostream>
using namespace std;

/* call by value
void SwapByValue(int num1, int num2)
{
	int temp=num1;
	num1=num2;
	num2=temp;
}
*/

/* call by reference */
void SwapByRef(int *ptr1, int *ptr2)
{
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}

/* call by reference using reference*/
void SwapByRef2(int &ref1, int &ref2) // using void SwapByRef2(const int &ref1, const int &ref2) is better
{
	int temp=ref1;	
	ref1=ref2;	
	ref2=temp;
}


int main(void)
{
	int val1=10;	
	int val2=20;
	//SwapByValue(val1, val2); -> doesn't change
	//SwapByRef(&val1, &val2); -> do it this way
	SwapByRef2(val1, val2); //-> this way works too but be carefull not to change value with reference. 
	cout<<"val1: "<<val1<<endl;	
	cout<<"val2: "<<val2<<endl;	
	return 0;
}

