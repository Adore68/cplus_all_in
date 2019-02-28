/* include condition that money cannnot be less than 0 */

#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE=price;
		numOfApples=num;
		myMoney=money;
	}
	int SaleApples(int money)
	{
		if(money<0)
		{
			cout<<"wrong information! money cannot be minus"<<endl;
			return 0;
		}
		int num=money/APPLE_PRICE;
		numOfApples-=num;
		myMoney+=money;
		return num;
	}
	void ShowSalesResult()
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
	void InitMembers(int money)
	{
		myMoney=money;
		numOfApples=0;
	}
	void BuyApples(FruitSeller &seller, int money)
	{
		if(money<0)
		{
			cout<<"money cannot be less than 0"<<endl;
			return;
		}

		numOfApples+=seller.SaleApples(money);
		myMoney-=money;
	}
	void ShowBuyResult()
	{
		cout<<"current cash: "<<myMoney<<endl;
		cout<<"number of apples: "<<numOfApples<<endl<<endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout<<"Seller's current state"<<endl;
	seller.ShowSalesResult();
	cout<<"Buyer's current state"<<endl;
	buyer.ShowBuyResult();
	return 0;
}
