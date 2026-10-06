#pragma once

class Char
{
private:
	
protected:
	int hp;
	int attack;
	int protect;
	int evasion;

public:
	Char();

	void ShowStatas();

	void Attack(Char &target);

	void Heal();

	bool IsAlive();

	int GetHp();
};