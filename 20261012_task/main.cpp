#include<iostream>
#include"Character.h"
#include"Enemy.h"
#include"Player.h"
#include"Boss.h"

using namespace std;

//コンストラクタ
Player player("");
Enemy enemy("");
Boss boss("");

int main(void)
{
	
	Character character("name");
	string playerName;
	string enemyName;
	string BossName;

	cout << character.GetName() << endl;
	cout << "名前を入力してください" << endl;
	cout << "勇者：" << endl;
	cin >> playerName;
	
	cout << "魔物：" << endl;
	cin >> enemyName;

	cout << "魔王：" << endl;
	cin >> BossName;

	character.Attack();
	player.Attack();
	enemy.Attack();
	boss.Attack();

	return 0;
}