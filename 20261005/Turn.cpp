#include "Turn.h"

Turn::Turn(Player *p,Enemy *e)
{
	player = p;
	enemy = e;
}

void Turn::Execute()
{
	player->PlayerAction(*enemy);

	if (!enemy->IsAlive())
	{
		return;
	}

	enemy->EnemyAction(*player);
}