#include <iostream>
#include "0402_Point.h"
#include "0404_Rectangle.h"
using namespace std;

int main(void)
{
	Point pos1;
	if(!pos1.InitMembers(-2, 4))
		cout<<"Initializaiton failed"<<endl;
	if(!pos1.InitMembers(2,4))
		cout<<"Initialization failed"<<endl;

	Point pos2;
	if(!pos2.InitMembers(5, 9))
		cout<<"Rectangular initialization failed"<<endl;
	
	Rectangle rec;
	if(!rec.InitMembers(pos2, pos1))
		cout<<"Rectanglular initialization failed"<<endl;

	if(!rec.InitMembers(pos1, pos2))
		cout<<"Rectangular initialization failed"<<endl;

	rec.ShowRecInfo();	
	return 0;
}
