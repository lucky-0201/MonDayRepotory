#include "CPU.h"
#include<iostream>
using namespace std;

CPU::CPU()
{
	Total = 0;
}

void CPU::CPUAddCard(int card)
{
	Total += card;
}

int CPU::GetTotal()
{
	return Total;
}

void CPU::ShowCard()
{
	cout << "CP‚t‚Ì‡Œv‚Í" << Total << endl;
}