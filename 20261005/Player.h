#pragma once
#include"Char.h"

class Player:public Char
{
private:
	
public:
	Player();

	void PlayerAction(Char &target);
};

