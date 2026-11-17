#pragma once
#include<string>

using namespace std;

class Enemy
{
private:
	int hp;

public:
	Enemy();
	~Enemy();

	void TakeDamage(int damege);

	int GetHp()const;

	bool isAlive()const;
};

