#include "Prac2_Enemy.h"
#include<iostream>


using namespace std;

Prac2_Enemy::Prac2_Enemy(const string &name):Name(name),hp(100)
{
	cout << name <<"“G‚ð¶¬‚µ‚Ü‚µ‚½" << endl;

}



Prac2_Enemy::~Prac2_Enemy()
{
	cout << Name << "“G‚ð”jŠü‚µ‚Ü‚µ‚½" << endl;
}



void Prac2_Enemy::Draw()const
{
	cout << "–¼‘O:" << Name << endl;
	cout << "HP:" << hp << endl;
}


int Prac2_Enemy::GetHp()const
{
	return hp;
}