#pragma once
#include <string>
class Rogue
{
public:
    Rogue();
    ~Rogue();

    Rogue::Rogue(std::string Class, std::string wep, std::string arm);

    //Getters for Class Type
    std::string getCName()const {
        return cClass;
    }//
     //Getters for stats
    int getVit()const {
        return vit;
    }
    int getEnd()const {
        return end;
    }
    int getStr()const {
        return str;
    }
    int getDex()const {
        return dex;
    }
    int getInt()const {
        return intel;
    }
    int getWis()const {
        return wis;
    }

private:
    std::string cClass{"Rogue"};
    int vit{ 3 };
    int end{ 4 };
    int str{ 3 };
    int dex{ 5 };
    int intel{ 2 };
    int wis{ 3 };
};

