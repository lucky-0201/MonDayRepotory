#include<iostream>
#include<cstdlib>
#include<ctime>
#include"game.h"
using namespace std;

int main(void)
{
	//—”‚Ì‰Šú‰»
	srand(static_cast<unsigned int>(time(nullptr)));

	//ƒQ[ƒ€‚Ì‰Šú‰»
	Game game;

	game.Start();
	return 0;
}