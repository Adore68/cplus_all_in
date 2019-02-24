/* malloc & free -> related to heap memory */

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char * MakeStrAdr(int len)
{
	char * str=(char*)malloc(sizeof(char)*len); //allocating array in heap to store strings
	return str;
}

int main(void)
{
	char * str=MakeStrAdr(20);
	strcpy(str, "Studying c++");	
	cout<<str<<endl;	
	free(str);	
	return 0;
}
