#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	void Init(int x, int y)
	{
		xpos=x;
		ypos=y;
	}
	void ShowPointInfo() const
	{
		cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
	}
};

class Circle
{
private:
	int rad;	
	Point center;
public:
	void Init(int x, int y, int r)
	{
		rad=r;
		center.Init(x, y);
	}
	void ShowCircleInfo() const
	{
		cout<<"radius: "<<rad<<endl;
		center.ShowPointInfo();
	}
};


class Ring
{
public:
	Circle inCircle;
	Circle outCircle;	
public:
	void Init(int inX, int inY, int inR, int outX, int outY, int outR)
	{
		inCircle.Init(inX, inY, inR);
		outCircle.Init(outX, outY, outR);
	}
	void ShowRingInfo() const
	{
		cout<<"Inner Circle Info..."<<endl;
		inCircle.ShowCircleInfo();
		cout<<"Outter Circle Info..."<<endl;
		outCircle.ShowCircleInfo();
	}
};

int main(void)
{
	Ring ring;	
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();	
	return 0;
}
