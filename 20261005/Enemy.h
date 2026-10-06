#pragma once
#include "Char.h"
class Enemy :public Char
{
public:
	/// <summary>
	/// Enemyコンストラクタ
	/// </summary>
	Enemy();

	/// <summary>
	/// 敵の行動
	/// </summary>
	/// <param name="target">対象キャラクター</param>
	void EnemyAction(Char& target);
};

