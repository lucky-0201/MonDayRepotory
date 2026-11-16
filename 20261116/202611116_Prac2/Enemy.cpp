#include "Enemy.h"

#include<iostream>

Enemy::Enemy(const string& name):name(name),hp(hp)
{
	cout << "“G‚ð¶¬‚µ‚Ü‚µ‚½" << endl;
}

Enemy::~Enemy()
{
	cout << "“G‚ª”jŠü‚³‚ê‚Ü‚µ‚½" << endl;
}

void Enemy::TakeDamage(int damege)
{
	if (!isAlive())
	{
		return;
	}

	hp -= damege;

	if (hp < 0)
	{
		hp = 0;
	}

}

int Enemy::GetHp() const
{
	return hp;
}

bool Enemy::isAlive() const
{
	return hp > 0;
}