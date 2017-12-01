#pragma once
#include <string>

#include "Warrior.h"
#include "Priest.h"
#include "Rogue.h"

class Character : public Warrior , public Priest , public Rogue
{
public:
    Character();
    ~Character();

    Character::Character(std::string className,std::string classType,int h,int v,int e,int s, int d,int i,int w,bool alive);
     
	 
////////////////////////////////////////////////////////////////////////////////////////
//SETTERS
////////////////////////////////////////////////////////////////////////////////////////
	 
	 void setClass();
     void setAlive();
	 void setDeath();
	 void setMoves();
	 void setHP();
	 void setLevel();
	 void levelUp();
	 void setCharName(std::string x);
	 void setClassName(std::string x);
	 void setVit(int x); 
	 void setEnd(int x); 
	 void setStr(int x); 
	 void setDex(int x); 
	 void setIntel(int x);
	 void setWis(int x); 
     void MoveNorth();
     void MoveSouth();
     void MoveWest();
     void MoveEast();

////////////////////////////////////////////////////////////////////////////////////////
//GETTERS
////////////////////////////////////////////////////////////////////////////////////////
	 
	 std::string getClass();
	 std::string getName() const;
	 int getLevel()const;
	 bool getAlive()const; 
	 int getHP()const; 
	 int getVit()const;
	 int getEnd()const; 
	 int getStr()const; 
	 int getDex()const; 
	 int getInt()const; 
	 int getWis()const; 
	 int getMoves()const;
	 int getloc()const;

private: 

    std::string charName_;
    std::string className_;
    int level_;
    int health_;
    int vit_;
    int end_;
    int str_;
    int dex_;
    int intel_;
    int wis_;
	bool isAlive_ = true;
	int Moves_ = 0;
	int curr_Exp = 0;
    int VertLoc = 0;
    int HorzLoc = 0;
};






