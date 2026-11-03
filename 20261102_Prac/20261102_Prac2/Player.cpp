#include "Player.h"
#include"Config.h"
#include"Enemy.h"

#include<iostream>

using namespace std;

Player::Player():Character (Config::INITIAL_HP)
{
	
}

void Player::Attack(Enemy &enemy,int damage)
{
	enemy.TakeDamaege(damage);

	cout << "敵に" << damage<< endl;
} 

void Player::Defense()
{

	cout << " プレイヤーは " << Config::DEFENSE_VALUE << " 防いだ！ " << endl;
}

void Player::Heal()
{
	Character::Healing(Config::HEAL_VALUE);

	cout << " プレイヤーは " << Config::HEAL_VALUE << " 回復した！ " << endl;
}