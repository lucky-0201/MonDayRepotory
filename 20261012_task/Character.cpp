#include "Character.h"
#include<iostream>

Character::Character(string name)
{
	this->name = name;
}

string Character::GetName()
{
	return name;
}

void Character::Attack()
{
	cout << "UŒ‚‚µ‚Ü‚µ‚½" << endl;
}