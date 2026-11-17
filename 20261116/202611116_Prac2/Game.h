#pragma once
#include<memory>
#include<vector>


#include"Enemy.h"

class Enemy;

class Game
{
private:
	vector<shared_ptr<Enemy> > enemys;

	void InitEnemy();


	void ShowEnemy()const;

	void AttackEnemy();

	bool isGameClear() const;

public:
	void Run();

};

