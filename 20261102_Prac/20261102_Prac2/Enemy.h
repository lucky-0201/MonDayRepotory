#pragma once
#include"Character.h"
#include"Player.h"


class Player;

class Enemy:public Game::Character
{

public:

	Enemy();

	void Attack(Player &player,int damage);

	void Defense();


};

