/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for MainCharacter class
***************************************************************************************/

#ifndef MainCharacter_hpp
#define MainCharacter_hpp

#include "Character.hpp"
#include "Item.hpp"
#include "Space.hpp"
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

class MainCharacter : public Character
{
private:
    int armor;
    int strength;
    string name;
    vector<Item> inventory;
    Space *currentSpace;
    
public:
    MainCharacter();
    ~MainCharacter();
    int attackAction();
    int defendAction();
    int getStrength();
    void setStrength(int);
    int getArmor();
    string getName();
    void setName(string);
    void useHealthPotion();
    Space *getCurrentSpace();
    void setCurrentSpace(Space*);
};

#endif /* MainCharacter_hpp */
