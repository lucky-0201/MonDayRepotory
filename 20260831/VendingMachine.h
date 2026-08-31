#pragma once
class VendingMachine
{
private:
	int money = 0;      //‚¨‹à
	int colaStock = 15; //İŒÉ

public:

	VendingMachine();
	void buyCola();

	void insertMoney(int amount);
	
	int getMoney()const;//GetŠÖ”(‚¨‹à)
	int getColaStock()const;//GetŠÖ”(ƒR[ƒ‰‚ÌİŒÉ)
};

