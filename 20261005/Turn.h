#pragma once

#include"Player.h"
#include"Enemy.h"

class Turn
{
private:
	Player* player;
	Enemy* enemy;

public:
	Turn(Player *p,Enemy *e);

	void Execute();
};

