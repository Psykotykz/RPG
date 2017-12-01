#pragma once
#include <string>
#include "Character.h"

class Weapon : public Character
{
public:
    Weapon();
    ~Weapon();
private:
    std::string wType;
    int dmg;
};

