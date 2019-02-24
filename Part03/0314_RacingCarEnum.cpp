/* using enum and namespace 
emun: enumerated type which is related set of constant */

#include <iostream>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN	=20;
		MAX_SPD 200
		FUEL_STEP   2
		ACC_STEP    10
		BRK_STEP    10
	}
};
struct Car
{
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState()
	{
		cout<<"gamer ID: "<<gamerID<<endl;
		cout<<"fuel gauge: "<<fuelGauge<<"%"<<endl;
		cout<<"current speed: "<<curSpeed<<"km/s"<<endl<<endl;
	}

	void Accel()
	{
		if(fuelGauge<=0)
			return;
		else
			fuelGauge-=FUEL_STEP;

		if(curSpeed+ACC_STEP>=MAX_SPD)
		{
			curSpeed=MAX_SPD;
			return;
		}

		curSpeed+=ACC_STEP;
	}

	void Break()
	{
		if(curSpeed<BRK_STEP)
		{
			curSpeed=0;
			return;
		}

		curSpeed-=BRK_STEP;
	}

};


int main(void)
{
	Car run99={"run99", 100, 0};
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77={"sped77", 100, 0};
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();
	return 0;
}
