#include<iostream>
#include<memory>
#include"Prac2_Enemy.h"

using namespace std;

void ShowEnemy(const Prac2_Enemy& enemy);

void ShowEnemy(const Prac2_Enemy& enemy)
{
	cout << "ä÷êîì‡ÇÃìGÇï\é¶" << endl;
	enemy.Draw();
}

int main(void)
{

	unique_ptr<Prac2_Enemy> enemy = make_unique<Prac2_Enemy>("ê‘");

	cout << "ìGÇê∂ê¨ÇµÇ‹ÇµÇΩ" << endl;
	
	enemy->Draw();

	ShowEnemy(*enemy);

	cout << "ä÷êîåƒÇ—èoÇµå„" << endl;
	enemy->Draw();

	return 0;
}