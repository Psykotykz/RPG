#pragma once
#include <string>

class Troll
{
private:
	std::string eName { "Troll" };
	int health;
	int atkDmg = rand() % 5;
	int level;
	int xp = 5;

public:
	Troll();
	~Troll();

	void set_level(int x) { level = x; }
	void set_HP() { health = 10 * level ; }
	void set_dmg() { atkDmg *= level; }

	std::string getName()const { return eName;}
	int getDmg() const {
		return atkDmg;
	}
	int getHP()const {
		return health;
	}



};

