#include<iostream>
#include"20260706_Header1_yamaguchi.h"
using namespace std;

//入力関数
int InputCheck(int min,int max)
{
	int Input;

	//入力チェック
	while (true)
	{
		cin >> Input;
		if (min > Input || Input > max)
		{
			cout << "入力に誤りがあります。再度入力してください。" << endl;
		}
		else
		{
			break;
		}
	}

	return Input;
}

//HP関数
void Heal(int &HP)
{
	HP += 20;
	cout << "HPを20回復させました。" << endl;
}

//回復関数
void Game()
{
	//変数
	int playerHp = playerHP;
	int choice;

	cout << "プレイヤーが回復するかどうかを選択させます。\n「Yes：1」「No：2」" << endl;
	
	choice = InputCheck(MIN,MAX);
	
	if (choice == 1)
	{
		Heal(playerHp);
	}
	else
	{
		playerHp;
	}

	//回復表示
	cout << "HPは" << playerHp << endl;
}