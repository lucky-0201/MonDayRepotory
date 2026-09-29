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

		if (player->GetTotal() >= BURST_SCORE)
		{
			cout << "\nplayerはバーストしました\n";
			return false;
		}
	}
}

void Trun::PlayCpuTrun(Player* player, CPU* cpu, CradManager* cardManager)
{
	cout << "\n===========================\n";
	cout << "CPU Turn\n";
	cout << "===========================\n";
	player->ShowStatus();
	cpu->ShowCard();

	while (true)
	{
		if (cpu->GetTotal() == TARGET_SCORE)
		{
			cout << "CPU'S Total: 21 \n";
			break;
		}


		if (cpu->GetTotal() >= BURST_SCORE)
		{
			cout << "\nCPUはバーストしました\n";
			break;
		}


		if (cpu->GetTotal() <= CPU_LIMIT_CARD)
		{
			cout << "\nCPUは15以下なのでカードを引きます。\n";
		}
		else if (cpu->GetTotal() < player->GetTotal())
		{
			cout << "CPUはPlayerより小さいのでカードを引きます。" << endl;
		}
		else
		{
			cout << "CPUはPlayer以上になりました。" << endl;
			cout << "CPUはカードを引きません。" << endl;

			break;
		}

		//カードを取得
		int card = cardManager->DrawCard();
		cout << "\nCPUがカードを引きました\n";
		cout << "引いたカード:" << card << endl;
		//CPUに引いたカードを追加
		cpu->CPUAddCard(card);
		cpu->ShowCard();
	}
}