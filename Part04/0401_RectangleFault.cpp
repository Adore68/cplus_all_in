/* what happens if member variable of class Point is declared public? 

problem with this code: you can' find mistake when point is not between 0 to 100 
or upleft is smaller than lowright. (this code is about making rectangle)
-> fix with making access only in restricted way*/

#include <iostream>
using namespace std;

class Point
{
	public:
		int x;
		int y;
};

class Rectangle
{
public:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo()
	{
		cout<<"up left: "<<'['<<upLeft.x<<", "<<upLeft.y<<']'<<endl;
		cout<<"low right: "<<'['<<lowRight.x<<", "<<lowRight.y<<']'<<endl<<endl;
	}
};

int main(void)
{
	Point pos1={-1, 4};
	Point pos2={5, 9};
	Rectangle rec={pos2, pos1};
	rec.ShowRecInfo();	
	return 0;
}
