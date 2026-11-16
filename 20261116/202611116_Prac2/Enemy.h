#pragma once
#include<string>

using namespace std;

class Enemy
{
private:
	string name;
	int hp;

public:
	Enemy(const string &name);
	~Enemy();

	void TakeDamage(int damege);

	int GetHp()const;

	bool isAlive()const;
};

