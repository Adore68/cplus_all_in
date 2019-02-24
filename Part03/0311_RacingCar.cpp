#include <iostream>
using namespace std;

#define ID_LEN	20
#define MAX_SPD	200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

struct Car
{
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;
};

void ShowCarState(const Car &car) // function only showing car state -> used const reference for parameter
{
	cout<<"gamer ID: "<<car.gamerID<<endl;
	cout<<"fuel gauge: "<<car.fuelGauge<<"%"<<endl;
	cout<<"current speed: "<<car.curSpeed<<"km/s"<<endl<<endl;
}

void Accel(Car &car)
{
	if(car.fuelGauge<=0)
		return;
	else
		car.fuelGauge-=FUEL_STEP;

	if(car.curSpeed+ACC_STEP>=MAX_SPD)
	{
		car.curSpeed=MAX_SPD;
		return;
	}
	
	car.curSpeed+=ACC_STEP;
	}

void Break(Car &car)
{
	if(car.curSpeed<BRK_STEP)
	{
		car.curSpeed=0;
		return;
	}

	car.curSpeed-=BRK_STEP;
}

int main(void)
{
	Car run99={"run99", 100, 0};
	Accel(run99);
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);

	Car sped77={"sped77", 100, 0};
	Accel(sped77);	
	Break(sped77);
	ShowCarState(sped77);
	return 0;
}


/*
result->


gamer ID: run99
fuel gauge: 96%
current speed: 20km/s

gamer ID: run99
fuel gauge: 96%
current speed: 10km/s

gamer ID: sped77
fuel gauge: 98%
current speed: 0km/s */


/*
problem ->

function ShowCarState, Accel, Break is related to struct Car
and should be called related to struct Car.

how to make these function only related to struct Car? */
