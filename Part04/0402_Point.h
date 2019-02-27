/* information hiding */

#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private: //cannot change x, y arbitrarily
	int x;
	int y;

public:
	bool InitMembers(int xpos, int ypos);

	int GetX() const;
	bool SetX(int xpos); // these are called "access function". used when member variables are declared private and tried to access outside class
	
	int GetY() const;
	bool SetY(int ypos);
};
#endif
