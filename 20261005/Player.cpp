#include "Player.h"
#include"Config.h"

#include<iostream>
using namespace std;

//コンストラクタ
Player::Player() :Char() { }

//プレイヤーの行動
void Player::PlayerAction(Char &target)
{
	int choice;

	while(true)
	{
		cin >> choice;

		if (Config::INPUT_MAX < choice || Config::INPUT_MIN > choice)
		{
			cout << "入力に誤りがあります。再度入力してください" << endl;
		}
		else
		{
			break;
		}
	}

	if (choice == Config::INPUT_MIN)
	{
		Attack(target);
	}
	else if (choice == Config::INPUT_MAX)
	{
		Heal();
	}
}
