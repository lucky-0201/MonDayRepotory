#include<iostream>
#include"Character.h"
#include"BattleManager.h"

using namespace std;

int main(void)
{
	//コンストラクタ
	Character character("name");
	cout << character.GetName() << endl;

	character.Attack();
	return 0;
}