#include<iostream>
using namespace std;

namespace player
{
	void ShowStatus()
	{
		cout << "ƒvƒŒƒCƒ„[–¼" << endl;
	}
}

namespace enemy
{
	void ShowStatus()
	{
		cout << "“G–¼" << endl;
	}
}

int main()
{
	player::ShowStatus();
	enemy::ShowStatus();

	return 0;
}