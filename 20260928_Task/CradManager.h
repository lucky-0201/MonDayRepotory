#pragma once
#include "Config.h"
class CradManager
{
private:
	int cards[CARD_TOTAL];
	int cardCount;
public:
	CradManager();

	void CreateCards();
	void ShuffleCards();
	int DrawCard();

	int GetCardCount();
};