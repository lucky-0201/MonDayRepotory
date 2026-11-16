#include "Game.h"
#include"Enemy.h"

#include<iostream>
#include<limits>

void Game::CreateEnemy()
{
	for (int i = 0;i < 3;i++)
	{
		enemy.push_back(make_shared<Enemy>("“G",100));
	}
}

void Game::ShowEnemy()const
{
	cout << "===========“G‚ÌHP========" << endl;

	for (rsize_t i = 0;i < enemy.size();++i)
	{
		cout << "“G" << i + 1 << ":" << enemy[i]->GetHp();

		if (!enemy[i]->isAlive())
		{
			cout << "Œ‚”j" << endl;

		}

		cout << endl;
	}
}

void Game::AttackEnemy(int targetNumber)
{
	targetNumber -= 1;

	if (targetNumber < 0 || targetNumber > static_cast<int>(enemy.size()))
	{
		cout << "‚»‚Ì“G‚ðƒ^[ƒQƒbƒg‰»‚Å‚«‚Ü‚¹‚ñ";

		return;
	}

	enemy[targetNumber]->TakeDamage(30);
	cout << "“G" << targetNumber + 1 << "‚É‚R‚Oƒ_ƒ[ƒW‚ð—^‚¦‚Ü‚µ‚½";
}

bool Game::isAllEnemy() const
{
	for (const auto &enemy : enemy)
	{
		if (enemy->isAlive())
		{
			return false;
		}
	}

	return true;
}

void Game::Run()
{
	CreateEnemy();

	while (true)
	{

	}
}