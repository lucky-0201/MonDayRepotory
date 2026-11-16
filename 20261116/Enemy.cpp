#include "Enemy.h"

using namespace std;

Enemy::Enemy(const std::string& name) :name(name), hp(100)
{
	cout << name << "‚ªoŒ»‚µ‚½" << endl;
}

Enemy::~Enemy()
{
	cout << name << "‚Í”jŠü‚³‚ê‚Ü‚µ‚½" << endl;
}

void Enemy::Draw() const
{
	cout << "–¼‘OF" << name << endl;

	cout << "HP:" << hp << endl;
}