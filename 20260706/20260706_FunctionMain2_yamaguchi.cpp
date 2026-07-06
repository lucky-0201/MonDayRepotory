#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_HeaderMain2_yamaguchi.h"
using namespace std;

//入力関数
int InputCheck(int min,int max)
{
	int Input;
	while (true)
	{
		cin >> Input;

		if (min > Input || max < Input)
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

//
void Exp(int &)
{

}

//ゲーム関数
void Game()
{
	//変数
	int player;
	int CPU;
	int jug;
	int Ex;
	int Lv = 0;
	int Exp = 0;

	//乱数初期化
	srand((unsigned int)time(NULL));

	//
	cout << "CPUとじゃんけんを行いましょう。\n出す手の選択は、「ぐー：0」「ちょき：1」「ぱー：2」とします。" << endl;
	cout << "=====================================================================\n";
	Lv += 1;
	cout << "Lv:" << Lv << endl;
	cout << "EXP:" << Exp << endl;
	cout << "======================================================================\n";
	cout << " グー 0：チョキ 1：パー :2" << endl;
	player = InputCheck(MIN,MAX);

	cout << "CPU:" << endl;
}
