#pragma once
#include<string>

using namespace std;

class Enemy
{
private:
	int hp;

public:

	//コンストラクト
	Enemy();

	//デストラクタ
	~Enemy();

	//ダメージを与える
	void TakeDamage(int damege);

	//HPゲット関数
	int GetHp()const;

	//生存しているかを判定
	bool isAlive()const;
};

