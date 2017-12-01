#pragma once
#include "Troll.h"
#include "Goblin.h"
#include <string>


class Enemy 
{
private:
	std::string eName;
	int health;
	int atkDmg;
	int level;
	int xp;
public:
	Enemy();
	Enemy::Enemy(std::string Name, int Hp, int lvl, int exp);
	~Enemy();
};

