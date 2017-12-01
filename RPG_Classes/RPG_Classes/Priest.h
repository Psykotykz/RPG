#pragma once
#include <string>
class Priest
{
public:
    Priest();
    ~Priest();

    Priest::Priest(std::string Class, std::string wep, std::string arm);

    void setCType(std::string classType) {
        cType = classType;
    } //

    std::string getCType()const {
        return cType;
    } //

    void setWeapon(std::string wType) {
        weapon = wType;
    } //

    std::string getWepType()const {
        return weapon;
    } //

    std::string getArmType()const {
        return armour;
    } //
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
    std::string cClass{"Priest"};
    std::string cType{"Healer"};
    std::string weapon;
    std::string armour{"Cloth"};
    int vit{ 3 };
    int end{ 2 };
    int str{ 3 };
    int dex{ 2 };
    int intel{ 5 };
    int wis{ 5 };
    
};

