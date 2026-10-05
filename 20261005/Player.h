#pragma once
#include"Char.h"
#include<iostream>
#include<string>
class Player:public Char
{
private:
	int choice;
public:
	Player(int Hp, int Akt, int Pro, int Eva);

	int Choice();
};

