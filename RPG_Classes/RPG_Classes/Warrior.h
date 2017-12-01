#pragma once

#include <string>
class Warrior
{
public:
    Warrior();
    ~Warrior();

    //Warrior::Warrior(std::string Class, std::string wep, std::string arm);



    //Getters for Class type
   // std::string getWepType()const {
       // return weapon;
       //} 
    virtual std::string getCName()const {
        return cClass;
    }//
    //Getters for stats
    virtual int getVit()const {
        return 5;
    }
    virtual int getEnd()const {
        return 4;
    }
    virtual int getStr()const {
        return 5;
    }
    virtual int getDex()const {
        return 2;
    }
    virtual int getInt()const {
        return 2;
    }
    virtual int getWis()const {
        return 2;
    }



private:
    std::string cClass{"Warrior"};

};

