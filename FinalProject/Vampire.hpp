/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for Vampire class
***************************************************************************************/

#ifndef Vampire_hpp
#define Vampire_hpp

#include "Character.hpp"
#include <string>

using std::string;

class Vampire : public Character
{
private:
    int armor;
    int strength;
    string name;
    string characterType;
    
public:
    Vampire();
    ~Vampire();
    int attackAction();
    int defendAction();
    int getStrength();
    void setStrength(int);
    int getArmor();
    string getName();
    string getCharacterType();
};

#endif /* Vampire_hpp */
