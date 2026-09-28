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
	void Shuffleards();
	int DrawCard();

	int GetCardCount();
};