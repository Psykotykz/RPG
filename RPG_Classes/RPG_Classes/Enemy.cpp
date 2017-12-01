#include "Enemy.h"



Enemy::Enemy()
{
}

Enemy::Enemy(std::string Name, int Hp, int lvl, int exp)
	:eName{ Name }, health{ Hp }, level{ lvl }, xp{ exp }
{

};

Enemy::~Enemy()
{
}
