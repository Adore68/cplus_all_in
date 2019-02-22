/*Reference*/

#include <iostream>
using namespace std;

int main(void)
{
	int num1=1020;
	int &num2=num1; //num1 and num2 are pointing same memory space! 

	num2=3047;
	cout<<"VAL: "<<num1<<endl;
	cout<<"REF: "<<num2<<endl; //both 3027

	cout<<"VAL: "<<&num1<<endl;
	cout<<"REF: "<<&num2<<endl; //both same
	return 0;
}
