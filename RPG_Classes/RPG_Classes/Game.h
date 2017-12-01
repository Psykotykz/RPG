#pragma once
#include <iostream>
#include "Character.h"
#include "Enemy.h"
class Game 
{
public:
    Game();
	
    ~Game();

	void Play();
	void Move(Character &player);
	void Event(Character &player);
	void EnemySpawn(Character &player, Enemy &enemy);
    int RandNum();

private:
	Character Player_;
	Enemy Enemy_;
	int ExperiencePoint;
};

