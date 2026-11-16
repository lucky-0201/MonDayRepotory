#include "Enemy.h"
#include<iostream>

Enemy::Enemy(const string &name):name(name),hp(100)
{
	cout << name << "‚ªoŒ»‚µ‚Ü‚µ‚½" << endl;
}

Enemy::~Enemy()
{
	cout << name << "‚ª”jŠü‚³‚ê‚Ü‚µ‚½" << endl;
}

void Enemy::ShowStatus()
{
	cout << "EnemyName:" << name << endl;
	cout << "EnemyHP:" << hp << endl;
}