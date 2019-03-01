/* importance of Encapsulation */

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

class ColdPatient
{
public:
	void TakeSinivelCap(const SinivelCap &cap) const {cap.Take();}
	void TakeSneezeCap(const SneezeCap &cap) const {cap.Take();}
	void TakeSnuffleCap(const SnuffleCap &cap) const {cap.Take();}
};

int main(void)
{
	SinivelCap scap;
	SneezeCap zcap;	
	SnuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap); //Cold always bring runny nose, sneeze and congestion. -> which makes this procedure too complicated! -> make it into one pill 'CONTAC600'	
	sufferer.TakeSneezeCap(zcap);	
	sufferer.TakeSnuffleCap(ncap);
	return 0;
}
