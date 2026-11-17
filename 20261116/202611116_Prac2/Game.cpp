#include "Game.h"
#include<iostream>
#include<limits>


void Game::InitEnemy()
{
	for (int i = 0; i < 3; i++)
	{
		enemys.push_back(std::make_shared<Enemy>());
	}
}

void Game::ShowEnemy() const
{
	std::cout << "“G:\n";
	for (int i = 0; i < enemys.size(); i++)
	{
		if (enemys[i]->isAlive())
		{
			std::cout << "“G" << i + 1 << "HP:"
				<< enemys[i]->GetHp() << "\n";
		}
		else
		{
			std::cout << "Œ‚”jÏ‚Ý\n";
		}
	}
}

void Game::AttackEnemy()
{
	int target;
	std::cout << "UŒ‚‚·‚é“G‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢B(1`3)\n";

	if (!(std::cin >> target))
	{
		std::cout << "”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		return;

	}

	if (target < 1 || target > 3)
	{
		std::cout << "“ü—Í‚µ‚½”Žš‚Í‘I‘ðo—ˆ‚Ü‚¹‚ñBÄ“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n";
		return;
	}

	std::shared_ptr<Enemy> targetEnemy = enemys[target - 1];

	if (!targetEnemy->isAlive())
	{
		std::cout << "‚±‚Ì“G‚Í‚·‚Å‚É“|‚³‚ê‚Ä‚¢‚Ü‚·B\n";
		return;
	}

	std::cout << "UŒ‚‚·‚é“G‚ÍA" << target << "\n";

	targetEnemy->TakeDamage(30);
	std::cout << "“G" << target << "‚Éí“¬ƒ_ƒ[ƒW"
		<< 30 << "‚ð—^‚¦‚Ü‚µ‚½B\n";

}

bool Game::isGameClear() const
{
	for (const auto& enemy : enemys)
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
	InitEnemy();

	while (true)
	{
		ShowEnemy();
		AttackEnemy();
		if (isGameClear())
		{
			std::cout << "GamerClear\n";
			break;
		}
	}
}