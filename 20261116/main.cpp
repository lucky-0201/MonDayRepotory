#include<iostream>
#include"Enemy.h"
#include<memory>


using namespace std;

int main(void)
{
	shared_ptr<Enemy> enemy = make_shared<Enemy>("ドラゴン");

	enemy->Draw();

	cout << "所有者の数" << enemy.use_count() << endl;

	{
		shared_ptr<Enemy> enemB = enemy;

		//コピー
		cout << "コピー後の数" << enemy.use_count() << endl;

		enemB->Draw();
	}

	return 0;
}