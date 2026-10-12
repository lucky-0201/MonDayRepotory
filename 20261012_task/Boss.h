#pragma once
#include"Character.h"
class Boss:public Character 
{
public:
	Boss(string Boss_name);

	void Attack() override;
};

