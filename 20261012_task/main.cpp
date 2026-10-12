#include<iostream>
#include"Character.h"

using namespace std;

//コンストラクタ
Character character("name");

int main(void)
{
	cout << character.GetName() << endl;;

	character.Attack();

	return 0;
}