#include "Game.h"
#include<iostream>
#include<limits>

//初期化
void Game::InitEnemy()
{
	//複数の敵を生成する
	//複数の敵オブジェクトをVectorに入れる
	for (int i = 0; i < 3; i++)
	{
		//Vectorの後ろから入れる
		enemys.push_back(std::make_shared<Enemy>());
	}
}

//敵の情報を表示
void Game::ShowEnemy() const
{
	//敵のＨＰを順番に表示する
	std::cout << "敵:\n";
	for (int i = 0; i < enemys.size(); i++)
	{

		//敵に生存フラグがあれば表示
		if (enemys[i]->isAlive())
		{
			std::cout << "敵" << i + 1 << "HP:"
				<< enemys[i]->GetHp() << "\n";
		}
		else//違えば「撃破済み」と表示
		{
			std::cout << "撃破済み\n";
		}
	}
}


//敵に攻撃する関数
void Game::AttackEnemy()
{
	//標的を決める
	int target;
	std::cout << "攻撃する敵を選択してください。(1～3)\n";

	//数字以外が入力されたらリターン
	if (!(std::cin >> target))
	{
		std::cout << "数字を入力してください\n";

		//入力エラー状態を解除
		std::cin.clear();
		
		//入力を残っている文字を消す
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		return;

	}

	//1~3以外の数字が入力されたら、再入力を要求
	if (target < 1 || target > 3)
	{
		std::cout << "入力した数字は選択出来ません。再度入力してください。\n";
		return;
	}

	//選択した敵を選択オブジェクトとします。
	std::shared_ptr<Enemy> targetEnemy = enemys[target - 1];

	//生存確認
	if (!targetEnemy->isAlive())
	{
		//生存フラグがfalseだったら
		std::cout << "この敵はすでに倒されています。\n";
		return;
	}

	std::cout << "攻撃する敵は、" << target << "\n";

	//攻撃する敵を選択してダメージを追加
	targetEnemy->TakeDamage(30);
	std::cout << "敵" << target << "に戦闘ダメージ"
		<< 30 << "を与えました。\n";

}



//ゲームクリアしているかどうかを判定
bool Game::isGameClear() const
{

	//Vectorにある情報をすべて吐き出してください
	for (const auto& enemy : enemys)
	{

		//残っているオブジェクトが1つれもあれば
		if (enemy->isAlive())
		{
			return false;
		}
	}

	//なければ
	return true;
}

//ゲーム起動
void Game::Run()
{
	//初期化
	InitEnemy();

	//ゲームループ
	while (true)
	{
		//表示
		ShowEnemy();

		//攻撃
		AttackEnemy();

		//クリアフラグ
		if (isGameClear())
		{
			std::cout << "GamerClear\n";
			break;
		}
	}
}