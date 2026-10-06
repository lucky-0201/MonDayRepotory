#include "Enemy.h"
#include "Config.h"

#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

Enemy::Enemy() :Char() {}

void Enemy::EnemyAction(Char& target)
{
	int ranAkt = rand () % Config::ENEMY_ACTION + 1;
	int enemyAkt = ranAkt;

	if (enemyAkt == Config::INPUT_MIN)
	{
		Attack(target);
	}
	else if (enemyAkt == Config::INPUT_MAX)
	{
		Heal();
	}
}