#include <iostream>
#include "0436_Rectangle.h"
using namespace std;

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
			:upLeft(x1, y1), lowRight(x2, y2) //member initializer
{
	//empty
}

void Rectangle::ShowRecInfo() const
{
	cout<<"up left: "<<'['<<upLeft.GetX()<<", "<<upLeft.GetY()<<']'<<endl;
	cout<<"low right: "<<'['<<lowRight.GetX()<<", "<<lowRight.GetY()<<']'<<endl;
}
	
