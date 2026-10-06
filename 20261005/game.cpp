#include "game.h"
#include"Config.h"
#include<iostream>
using namespace std;

void Game::GameStart()
{
	cout << "==========================================\n" << endl;
	cout << "ゲームスタート\n" << endl;
	cout << "==========================================\n" << endl;

	while (true)
	{
		cout << "【プレイヤーターン】 1:攻撃 2:回復" << endl;
		player.ShowStatas();
		player.PlayerAction(enemy);

		

		cout << "【エネミーターン】 1:攻撃 2:回復" << endl;
		enemy.ShowStatas();
		enemy.EnemyAction(player);

		if (player.IsAlive() == 0)
		{
			cout << "デュルーでゅでゅでゅー　敗・北" << endl;
			break;
		}
		else if (enemy.IsAlive() == Config::DEAD_HP)
		{
			cout << "パッパカパー　勝利!!"	<< endl;
			break;
		}
	}
	

}