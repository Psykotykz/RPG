#include "Character.h"
#include<iostream>

// Standard Constructor
Character::Character() {
}

//Custom Constructor
Character::Character(std::string className, std::string classType, int h, int v, int e, int s, int d, int i, int w, bool alive)
	:charName_{ className }, className_{ classType }, health_{ h }, vit_{ v }, end_{ e }, str_{ s }, dex_{ d }, intel_{ i }, wis_{ w }, isAlive_{ alive }
{

}

// Destructor
Character::~Character() 
{
}

////////////////////////////////////////////////////////////////////////////////////////
//SETTERS
////////////////////////////////////////////////////////////////////////////////////////
void Character::setAlive() {
	isAlive_ = true;
}
void Character::setDeath() {
	isAlive_  = false;
}

void Character::setMoves() {
	Moves_ += 1;
}
void Character::setHP() {
	health_ = vit_ * 10;
}
void Character::setLevel() {
	level_ = 1;
}
void Character::levelUp() {
	level_ += 1;
}
void Character::setCharName(std::string x) {
	charName_ = x;
}
void Character::setClassName(std::string classN) {
	className_ = classN;
}

void Character::setVit(int x) {
	vit_ = x;
}
void Character::setEnd(int x) {
	end_ = x;
}
void Character::setStr(int x) {
	str_ = x;
}
void Character::setDex(int x) {
	dex_ = x;
}
void Character::setIntel(int x) {
	intel_ = x;
}
void Character::setWis(int x) {
	wis_ = x;
}
void Character::MoveNorth() {
    VertLoc += 1;
}
void Character::MoveSouth() {
    VertLoc -= 1;
}
void Character::MoveWest() {
    HorzLoc -= 1;
}
void Character::MoveEast() {
    HorzLoc += 1;
}
////////////////////////////////////////////////////////////////////////////////////////
//GETTERS
////////////////////////////////////////////////////////////////////////////////////////
std::string Character::getClass() {
	return className_;
};

std::string Character::getName() const {
	return charName_;
};

int Character::getLevel()const {
	return level_;
}

bool Character::getAlive() const{
	return isAlive_;
}
int Character::getHP()const {
	return health_;
}
int Character::getVit()const {
	return vit_;
}
int Character::getEnd()const {

	return end_;
}
int Character::getStr()const {
	return str_;
}
int Character::getDex()const {
	return dex_;
}
int Character::getInt()const {
	return intel_;
}
int Character::getWis()const {
	return wis_;
}
int Character::getMoves()const {
	return Moves_;
}
int Character::getloc()const {
	return HorzLoc;
	return VertLoc;
}



////////////////////////////////////////////////////////////////////////////////////////
// SETTING THE CLASS
////////////////////////////////////////////////////////////////////////////////////////
void Character::setClass() {
   
    std::string CTemp;
    std::cout << "Could you enter a name for your character." <<std::endl;
    std::cin >> CTemp;
    Character::setCharName(CTemp);
    CTemp = "";
    
    std::cout << "Please enter a type of class you wish to play as. (Warrior, Priest or Rogue)" << std::endl;
    std::cin >> CTemp;


    if (CTemp == Warrior::getCName()) {
        CTemp = "";

        Character::setClassName(Warrior::getCName());
        
        Character::setVit(Warrior::getVit());
        Character::setEnd(Warrior::getEnd());
        Character::setStr(Warrior::getStr());
        Character::setDex(Warrior::getDex());
        Character::setIntel(Warrior::getInt());
        Character::setWis(Warrior::getWis());
        Character::setHP();
        Character::setLevel(); 
        

        std::cout << "Name: " << Character::getName() << std::endl;
        std::cout << "Class: " <<Character::getClass()  << std::endl;
        std::cout << "Level: " << Character::getLevel() << std::endl;
        std::cout << "Health: " << Character::getHP() << std::endl;
        std::cout << "Vitality: " << Character::getVit() << std::endl;
        std::cout << "Endurance: " << Character::getEnd() << std::endl;
        std::cout << "Strength: " << Character::getStr() << std::endl;
        std::cout << "Dexterity: " << Character::getDex() << std::endl;
        std::cout << "Intelligence: " <<Character::getInt() << std::endl;
        std::cout << "Wisdom: " << Character::getWis() << std::endl;

        system("Pause");
    }
    else if (CTemp == Priest::getCName()) {
        CTemp = "";


        Character::setClassName(Priest::getCName());
        Character::setVit(Priest::getVit());
        Character::setEnd(Priest::getEnd());
        Character::setStr(Priest::getStr());
        Character::setDex(Priest::getDex());
        Character::setIntel(Priest::getInt());
        Character::setWis(Priest::getWis());
        Character::setHP();
        Character::setLevel();

        std::cout << "Name: " << Character::getName() << std::endl;
        std::cout << "Class: " << Character::getClass() << std::endl;
        std::cout << "Level: " << Character::getLevel() << std::endl;
        std::cout << "Health: " << Character::getHP() << std::endl;
        std::cout << "Vitality: " << Character::getVit() << std::endl;
        std::cout << "Endurance: " << Character::getEnd() << std::endl;
        std::cout << "Strength: " << Character::getStr() << std::endl;
        std::cout << "Dexterity: " << Character::getDex() << std::endl;
        std::cout << "Intelligence: " << Character::getInt() << std::endl;
        std::cout << "Wisdom: " << Character::getWis() << std::endl;
        system("Pause");
    }
    else if (CTemp == Rogue::getCName()) {

        CTemp = "";

        Character::setClassName(Rogue::getCName());
        Character::setVit(Rogue::getVit());
        Character::setEnd(Rogue::getEnd());
        Character::setStr(Rogue::getStr());
        Character::setDex(Rogue::getDex());
        Character::setIntel(Rogue::getInt());
        Character::setWis(Rogue::getWis());
        Character::setHP();
        Character::setLevel();

        std::cout << "Name: " << Character::getName() << std::endl;
        std::cout << "Class: " << Character::getClass() << std::endl;
        std::cout << "Level: " << Character::getLevel() << std::endl;
        std::cout << "Health: " << Character::getHP() << std::endl;
        std::cout << "Vitality: " << Character::getVit() << std::endl;
        std::cout << "Endurance: " << Character::getEnd() << std::endl;
        std::cout << "Strength: " << Character::getStr() << std::endl;
        std::cout << "Dexterity: " << Character::getDex() << std::endl;
        std::cout << "Intelligence: " << Character::getInt() << std::endl;
        std::cout << "Wisdom: " << Character::getWis() << std::endl;
        system("Pause");
    }
    else {
        std::cout << "You need to select a class" << std::endl;
        setClass();
    }
}
