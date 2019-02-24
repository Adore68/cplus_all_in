/* review */

#include <iostream>
using namespace std;

int main(void)
{
	const int num=12;
	const int *ptr=&num; //const pointer pointing num
	const int *(&ref)=ptr; //const reference refering to pointer

	cout<<*ptr<<endl; //12
	cout<<*ref<<endl; //12
	
	cout<<&ptr<<endl; //0x7ffee68e9620
	cout<<&ref<<endl; //0x7ffee68e9620
	return 0;
}
