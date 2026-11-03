#include "Enemy.h"
#include"Config.h"
#include"Player.h"

#include<iostream>

using namespace std;

Enemy::Enemy():Character(Config::INITIAL_HP)
{

}

void Enemy::Attack(Player &player,int damage)
{
	player.TakeDamaege(damage);

	cout << " プレイヤーに " << damage<< " ダメージ！ " << endl;
}

void Enemy::Defense()
{
	

	cout <<  " 敵は防御した！ " << endl;
}