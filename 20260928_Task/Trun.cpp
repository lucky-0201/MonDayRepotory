#include "Trun.h"
#include<iostream>
#include"Config.h"
using namespace std;

bool Trun::PlayPlayerTrun(Player* player, CradManager* cardManager)
{
	while (true)
	{
		cout << "\n===============================================\n";
		cout << "PlayerTrun\n";
		cout << "\n===============================================\n";

		player->ShowStatus();
		if (player->GetTotal()==TARGET_SCORE)
		{
			cout << "\nPlayer's Total : 21\n";
			return true;
		}

		cout << "\nカードを引きますか？\n";
		cout << INPUT_YES << ":Yes";
		cout << INPUT_NO << ":No";

		int input;

		cin >> input;

		//カード引かない
		if (input == INPUT_NO)
		{
			cout << "\nカードを引きません";
			return true;
		}

		if (input == INPUT_YES)
		{
			int card = cardManager->DrawCard();
			cout << "\nPlayerがカードを引きました\n";
			cout << "\n引いたカード" << card << endl;

			player->PlayerAddCard(card);

			player->ShowStatus();
		}

		if (player->GetTotal() >= BUST_SCORE)
		{
			cout << "\nplayerはバーストしました\n";
			return false;
		}
	}
}