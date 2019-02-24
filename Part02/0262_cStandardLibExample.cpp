#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	const char *str1="ABC 123 ";
	const char *str2="DEF 456 ";
	char str3[50];

	cout<<strlen(str1)<<endl; //8 (including space)
	cout<<strlen(str2)<<endl; //8
	strcpy(str3, str1);
	strcat(str3, str2);
	cout<<str3<<endl; //ABC 123 DEF 456

	if(strcmp(str1, str2)==0)
		cout<<"same strings."<<endl;
	else
		cout<<"strings aren't same."<<endl; // strings aren't same
	return 0;
}
