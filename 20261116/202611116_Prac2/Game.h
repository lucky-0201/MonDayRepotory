#pragma once
#include<memory>
#include<vector>


#include"Enemy.h"

class Enemy;

class Game
{
private:
	vector<shared_ptr<Enemy> > enemys;

	//初期化
	void InitEnemy();

	//表示
	void ShowEnemy()const;

	//攻撃
	void AttackEnemy();


	//ゲームクリアしているか判定
	bool isGameClear() const;

public:
	//起動
	void Run();

};

