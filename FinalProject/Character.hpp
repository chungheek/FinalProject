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

using std::vector;
using std::string;

class Character
{
private:
    int armor;
    int strength;
    string name;
    vector<Item> inventory;
    
public:
    Character();
    ~Character();
    int attackAction();
    int defendAction();
    int getStrength();
    void setStrength(int);
    int getArmor();
    string getName();
    void setName(string);
    void useHealthPotion();
};

#endif /* Character_hpp */
