/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for Vampire class
***************************************************************************************/

#include "Vampire.hpp"
#include <cstdlib>
#include <string>
#include <iostream>

using std::rand;

/*******************************************************************************
** Description: Vampire::Vampire() default constructor for Vampire
*********************************************************************************/
Vampire::Vampire()
{
    this->armor = 1;
    this->strength = 18;
    this->name = "Vampire";
    this->characterType = "Monster";
}

/*******************************************************************************
** Description: Vampire::~Vampire() destructor method
*********************************************************************************/
Vampire::~Vampire()
{
}

/*******************************************************************************
** Description: Vampire::attackAction() returns a random integer between
**              values of 1 and 12 for the number of sides of a die.
*********************************************************************************/
int Vampire::attackAction()
{
    int die = rand() % 12 + 1;
    return die;
}

/*******************************************************************************
** Description: Vampire::defendAction() returns a random integer between
**              values of 1 and 6 for the number of sides of a die. *Charm
**              has a 50% chance of not being attacked (total dmg = 0)
*********************************************************************************/
int Vampire::defendAction()
{
    int result = 0;
    int chance = rand() % 2 + 1;
    if (chance == 1)
    {
        result = 100;
    }
    else
    {
        int die = rand() % 6 + 1;
        result = die;
    }
    return result;
}

/*******************************************************************************
** Description: Vampire::getStrength() returns strength member variable
*********************************************************************************/
int Vampire::getStrength()
{
    return this->strength;
}

/*******************************************************************************
** Description: Vampire::setStrength() sets strength member variable
*********************************************************************************/
void Vampire::setStrength(int num)
{
    this->strength = num;
}

/*******************************************************************************
** Description: Vampire::getArmor() returns Armor member variable
*********************************************************************************/
int Vampire::getArmor()
{
    return this->armor;
}

/*******************************************************************************
** Description: Vampire:getName() returns the name of the Barbarian
*********************************************************************************/
std::string Vampire::getName()
{
    return this->name;
}

/*******************************************************************************
** Description: Vampire:getCharacterType() returns "Monster" as type
*********************************************************************************/
std::string Vampire::getCharacterType()
{
    return this->characterType;
}
