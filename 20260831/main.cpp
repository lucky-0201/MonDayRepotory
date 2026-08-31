#include<iostream>
#include"VendingMachine.h"

using namespace std;

int main()
{
	//コンストラクタ
	VendingMachine machine;
	cout << "お金を投入してください。\n";
	int insertmoney;


	cin >> insertmoney;

	machine.insertMoney(insertmoney);
	machine.buyCola();

	
	cout << "残金" << machine.getMoney() << "円" << endl;
	cout << "残りのコーラは" << machine.getColaStock()<< "本" << endl;


	return 0;
}