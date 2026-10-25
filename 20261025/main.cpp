#include<iostream>
#include"Character.h"
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"


using namespace std;

int main(void)
{
	Player player;
	Enemy enemy;
	Boss boss;

	Character* charactor[3](&player,&enemy,&boss);

	for (int i = 0;i < 3;i++)
	{
		charactor[i]->Attack();
	}

	return 0;
}