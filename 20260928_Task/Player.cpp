#include "Player.h"
#include<iostream>
using namespace std;

Player::Player()
{
	total = 0;
}

void Player::PlayerAddCard(int card)
{
	total += card;
}

int Player::GetTotal()
{
	return total;
}

void Player::ShowStatus()
{
	cout << "player‚Ì‡Œv‚Í"<< total << endl;
}