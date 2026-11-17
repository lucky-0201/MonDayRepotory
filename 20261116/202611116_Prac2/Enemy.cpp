#include "Enemy.h"

#include<iostream>

//コンストラクト
Enemy::Enemy():hp(100)
{
	cout << "敵を生成しました" << endl;
}

//デストラクタ
Enemy::~Enemy()
{
	cout << "敵が破棄されました" << endl;
}


//ダメージ関数
void Enemy::TakeDamage(int damege)
{
	
	//敵のHPからダメージ分を引く
	hp -= damege;

	//敵のHPが０以下になると、強制的に０にする
	if (hp < 0)
	{
		hp = 0;
	}

}


//HPゲット関数
int Enemy::GetHp() const
{
	//HPの場所まで戻す
	return hp;
}


//生存判定関数
bool Enemy::isAlive() const
{
	return hp > 0;
}