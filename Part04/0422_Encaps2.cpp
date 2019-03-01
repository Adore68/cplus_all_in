/* right way for encapsulation */

#include <iostream>
using namespace std;

class SinivelCap
{
public:
	void Take() const {cout<<"capsule for runny nose"<<endl;}
};

class SneezeCap
{
public:
	void Take() const {cout<<"capsule for sneeze"<<endl;}
};

class SnuffleCap
{
public:
 	void Take() const {cout<<"capsule to relieve congestion"<<endl;}
};

class CONTAC600 //encapsulated class
{
private:
	SinivelCap sin;	
	SneezeCap sne;
	SnuffleCap snu;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

class ColdPatient
{
public:
	void TakeCONTAC600(const CONTAC600 &cap) const { cap.Take(); } //much easier!
};

int main(void)
{
	CONTAC600 cap;
	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);
	return 0;
}
