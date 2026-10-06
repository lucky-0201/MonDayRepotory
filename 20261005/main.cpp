#include<iostream>
#include<cstdlib>
#include<ctime>
#include"game.h"
using namespace std;

int main()
{
	
	srand((unsigned int)time(NULL));
	Game game;

	game.GameStart();
	return 0;
}