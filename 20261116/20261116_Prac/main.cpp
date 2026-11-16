#include<iostream>
#include<memory>

#include"Enemy.h"

using namespace std;

int main(void)
{
	shared_ptr<Enemy> enemy = make_shared<Enemy>("ƒXƒ‰ƒCƒ€");

	enemy->ShowStatus();

	cout << "Œ»Ý‚ÌŠ—LŽÒ‚Ì”‚Í" << enemy.use_count() << endl;

	return 0;
}