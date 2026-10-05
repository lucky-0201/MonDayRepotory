#include "Char.h"
#include<iostream>
#include"Config.h"

using namespace std;



void Char::HP()
{
	int hp = CHAR_HP;
	if (hp > 100)
	{
		hp = 100;
	}
	else if (hp < 0)
	{
		hp = 0;
	}
}

void Char::ShowStatas()
{
	attack = rand() % ATTACK_ABILITY + MIN_NUMBER;
	protect = rand() % PROTECT_ABILITY + MIN_NUMBER;
	evasion = rand() % EVASION_ABILITY + MIN_NUMBER;
	cout << "UŒ‚—Í" << attack << endl;
	cout << "–hŒä—Í" << protect << endl;
	cout << "‰ñ”ð—Í" << evasion << endl;
}