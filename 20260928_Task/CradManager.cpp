#include<iostream>
#include<ctime>
#include<cstdlib>
#include"CradManager.h"
using namespace std;


CradManager::CradManager()
{
	cardCount = CARD_TOTAL;
}

void CradManager::CreateCards()
{
	int index = 0;
	//カード作成
	for (int number = MIN_CARD;number < MAX_CARD;number++)
	{
		for (int i = 0;i < SAME_CARD;i++)
		{
			cards[index] = i;
			index++;
		}
	}
	
	cardCount = CARD_TOTAL;

}

void CradManager::ShuffleCards()
{
	//シャッフル
	for (int j = 0; j < CARD_TOTAL; j++)
	{
		int rumdIndex = j + rand() % (CARD_TOTAL - j);
		int temp = cards[j];
		cards[j] = cards[rumdIndex];
		cards[rumdIndex] = temp;
	}
}

int CradManager::DrawCard()
{
	int card = cards[0];

	for (int i = 0;i < cardCount - 1;i++)
	{
		cards[i] = cards[i + 1];
	}

	cardCount--;

	return card;
}

int CradManager::GetCardCount()
{
	return cardCount;
}