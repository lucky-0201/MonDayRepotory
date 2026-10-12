#pragma once
#include"Character.h"
class Player:public Character 
{
public:
	Player(string Player_name);

	void Attack() override;
};

