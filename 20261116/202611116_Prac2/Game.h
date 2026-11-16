#pragma once
#include<memory>
#include<vector>


#include"Enemy.h"

class Enemy;

class Game
{
private:
	vector<shared_ptr<Enemy> > enemy;

	void CreateEnemy();

	void ShowEnemy()const;

	void AttackEnemy(int targetNumber);

	bool isAllEnemy() const;

public:
	void Run();

};

