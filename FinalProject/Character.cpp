/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for the Character class
***************************************************************************************/

#include "Character.hpp"
#include <cstdlib>
#include <string>
#include <iostream>

using std::rand;
using std::string;
using std::find;

/*******************************************************************************
** Description: Character::Character() default constructor for Character
*********************************************************************************/
Character::Character()
{
    this->armor = 10;
    this->strength = 20;
    this->name = "Character";
}

/*******************************************************************************
** Description: Character::~Character() destructor method
*********************************************************************************/
Character::~Character()
{
}

/*******************************************************************************
** Description: Character::attackAction() returns a random integer between
**              values of 1 and 20 for the number of sides of a die.
*********************************************************************************/
int Character::attackAction()
{
    int die = rand() % 20 + 1;
    return die;
}

/*******************************************************************************
** Description: Character::defendAction() returns a random integer between
**              values of 1 and 10 for the number of sides of a die.
*********************************************************************************/
int Character::defendAction()
{
    return rand() % 10 + 1;
}

/*******************************************************************************
** Description: Character::getStrength() returns strength member variable
*********************************************************************************/
int Character::getStrength()
{
    return this->strength;
}

/*******************************************************************************
** Description: Character::setStrength() sets the strength member variable
*********************************************************************************/
void Character::setStrength(int num)
{
    this->strength = num;
}

/*******************************************************************************
** Description: Character::getArmor() returns Armor member variable
*********************************************************************************/
int Character::getArmor()
{
    return this->armor;
}

/*******************************************************************************
** Description: Character:getName() returns the name of the Barbarian
*********************************************************************************/
string Character::getName()
{
    return this->name;
}

/*******************************************************************************
** Description: Character:setName(string) sets the name of the Character
*********************************************************************************/
void Character::setName(string n)
{
    this->name = n;
}

/*******************************************************************************
** Description: Character:useHealthPotion() uses health potion if there is
**          one available and will remove it from the inventory
*********************************************************************************/
void Character::useHealthPotion()
{
    for (int i=0; i < inventory.size(); i++)
    {
        
    }
}
