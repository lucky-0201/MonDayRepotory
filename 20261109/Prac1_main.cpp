#include<iostream>
#include"Prac1_Enemy.h"

using namespace std;

int main()
{
	unique_ptr<Prac1_Enemy> enemy = make_unique<Prac1_Enemy> ();

	enemy->Update();
	enemy->Draw();



	return 0;
}