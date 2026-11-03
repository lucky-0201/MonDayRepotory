#pragma once
#include"Config.h"
#include"Character.h"
#include"Enemy.h"


class Enemy;

class Player:public Game::Character
{
public:

	Player();

	void Attack(Enemy &enemy,int damage);

	void Defense();

	void Heal();

	int InputChoice();


};

