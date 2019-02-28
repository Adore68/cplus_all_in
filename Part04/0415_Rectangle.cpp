#include <iostream>
#include "0404_Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point &ul, const Point &lr)
{
	if(ul.GetX()>lr.GetX() || ul.GetY()>lr.GetY())
	{
		cout<<"wrong position information sent"<<endl;
		return false;
	}
	upLeft=ul;
	lowRight=lr;
	return true;
}

void Rectangle::ShowRecInfo() const
{
	cout<<"up left: "<<'['<<upLeft.GetX()<<", "<<upLeft.GetY()<<']'<<endl;
	cout<<"low right: "<<'['<<lowRight.GetX()<<", "<<lowRight.GetY()<<']'<<endl<<endl;
}
