#pragma once
#include<string>

using namespace std;

class Prac2_Enemy
{
private:

	string Name;
	int hp;

public:
	Prac2_Enemy(const string& name);
	~Prac2_Enemy();

	//void ShowEnemy(const Prac2_Enemy& enemy);

	void Draw()const;

	int GetHp() const;


};

