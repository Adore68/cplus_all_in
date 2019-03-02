#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	FruitSeller(int price, int num, int money)
	{
		APPLE_PRICE=price;
		numOfApples=num;
		myMoney=money;
	}
	int SaleApples(int money)
	{
		int num=money/APPLE_PRICE;
		numOfApples-=num;
		myMoney+=money;
		return 0;
	}
	void ShowSalesResult() const
	{
		cout<<"left apples: "<<numOfApples<<endl;
		cout<<"sales revenue: "<<myMoney<<endl<<endl;
	}
};

class FruitBuyer
{
private:
	int myMoney;
	int numOfApples;
public:
	FruitBuyer(int money)
	{
		myMoney=money;
		numOfApples=0;
	}
	void BuyApples(FruitSeller &seller, int money)
	{
		numOfApples+=seller.SaleApples(money);
		myMoney-=money;
	}
	void ShowBuyResult() const
	{
		cout<<"current money: "<<myMoney<<endl;	
		cout<<"number of apples: "<<numOfApples<<endl<<endl;
	}
};

int main(void)
{
	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000);
	buyer.BuyApples(seller, 2000);

	cout<<"current fruit seller state: "<<endl;
	seller.ShowSalesResult();
	cout<<"current fruit buyer state: "<<endl;
	buyer.ShowBuyResult();
	return 0;
}
