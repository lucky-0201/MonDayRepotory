#include "BattleManager.h"
#include<iostream>

using namespace std;

void BattleManager::StartBattle(Character* player, Character* enemy, Character* boss)
{
	cout << "—EŽÒ‚Ì–¼‘OF" << player->GetName() << endl;
	cout << "–‚•¨‚Ì–¼‘OG" << enemy->GetName() << endl;
	cout << "–‚‰¤‚Ì–¼‘O" << boss->GetName() << endl;

	player->Attack();
	enemy->Attack();
	boss->Attack();
}