/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for Character class
***************************************************************************************/

#ifndef Character_hpp
#define Character_hpp

#include "Item.hpp"
#include <iostream>
#include <vector>
#include <string>

using std::string;

class Character
{
protected:
    int armor;
    int strength;
    string name;
    string characterType;
    
public:
    virtual ~Character() = default;
    virtual int attackAction() = 0;
    virtual int defendAction() = 0;
    virtual int getStrength() = 0;
    virtual void setStrength(int) = 0;
    virtual int getArmor() = 0;
    virtual string getName() = 0;
    virtual string getCharacterType() = 0;
};

#endif /* Character_hpp */
