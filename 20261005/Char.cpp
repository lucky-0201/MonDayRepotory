#include "Char.h"
#include"Config.h"

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

//コンストラクタ
Char::Char()
{
	hp = Config::MAX_HP;

	attack = rand() % (Config::MAX_STARTS - Config::MIN_STARTS + 1) + Config::MIN_STARTS;
	protect = rand() % (Config::MAX_STARTS - Config::MIN_STARTS + 1) + Config::MIN_STARTS;
	evasion = rand() % (Config::MAX_STARTS - Config::MIN_STARTS + 1) + Config::MIN_STARTS;
}

void Char::ShowStatas()
{
	cout << "HP：" << hp << endl;
	cout << "攻撃力：" << attack << endl;
	cout << "防御力：" << protect << endl;
	cout << "回避力：" << evasion << endl;
}

void Char::Attack(Char &target)
{
	//ランダム攻撃
	int ramAtk = rand() % (Config::MAX_RANDOW - Config::MIN_RANDOW + 1) + Config::MIN_RANDOW;
	int attackP = attack + ramAtk;
	cout << "攻撃値は" << attackP << endl;

	//回避判定
	if (attackP <= target.evasion)
	{
		cout << "攻撃を回避しました。" << endl;
		cout << "ダメージは０です" << endl;
	}
	else
	{
		//ダメージ計算
		int damege = attackP - target.protect;

		if (damege < 0)
		{
			damege = 0;
		}

		target.hp -= damege;

		cout << "攻撃成功！ ダメージ；"<< damege << "与えました。" << endl;

		//生存判定
		if (target.hp < Config::DEAD_HP)
		{
			target.hp = 0;
		}
	}
}

//回復
void Char::Heal()
{
	int ranHeal = rand() % (Config::MAX_RANDOW - Config::MIN_RANDOW + 1) + Config::MIN_RANDOW;
	hp += ranHeal;

	if (hp > Config::MAX_HP)
	{
		hp = Config::MAX_HP;
	}

	cout << "HPを" << ranHeal <<  "回復しましta" << endl;
}

bool Char::IsAlive()
{
	return hp > Config::DEAD_HP;
}

int Char::GetHp()
{
	return hp;
}