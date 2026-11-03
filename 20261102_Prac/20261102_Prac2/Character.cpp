#include"Character.h"
#include"Config.h"

#include<iostream>

using namespace std;

namespace Game
{
	Character::Character(int initialhp)
	{
		hp = initialhp;


	}

	void Character::Attack(Character& target)
	{
		target.TakeDamaege(damage);
	}

	void Character::Defens(int defens)
	{
		

		damage -= defens;
	}

	void Character::Healing(int heal)
	{
		

		hp += heal;

		if (hp > Config::MAX_HP)
		{
			hp = Config::MAX_HP;
		}
	}

	int Character::GetHp()
	{
		return hp;
	}

	void Character::TakeDamaege(int damege)
	{
		

		hp -= damege;

		if (hp < Config::MIN_HP)
		{
			hp = Config::MIN_HP;
		}
	}
}
