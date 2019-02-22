/*pointer and reference*/

#include <iostream>
using namespace std;

int main(void)
{
	int num=12;
	int *ptr=&num;
	int **dptr=&ptr;

	int &ref=num;
	int *(&pref)=ptr;
	int **(&dpref)=dptr;

	cout<<ref<<endl;
	cout<<*pref<<endl;
	cout<<**dpref<<endl; //all 12
	return 0;
}
