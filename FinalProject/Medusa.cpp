/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for Medusa class
***************************************************************************************/

#include "Medusa.hpp"
#include <cstdlib>
#include <iostream>

using std::rand;

/*******************************************************************************
** Description: Medusa::Medusa() default constructor for Medusa
*********************************************************************************/
Medusa::Medusa()
{
    this->armor = 3;
    this->strength = 12;
    this->name = "Medusa";
}

/*******************************************************************************
** Description: Mesdusa::~Medusa() destructor method
*********************************************************************************/
Medusa::~Medusa()
{
}

/*******************************************************************************
** Description: Medusa::attackAction() returns (a random integer
**              between values of 1 and 6) +  (a random integer between
**              between values of 1 and 6) to represent 2d6. *Glare means
**              that if the roll adds up to 12, then it should turn opponent into
**              stone and total dmg should be 50. It's possible our MainChar
**              can survive this.
*********************************************************************************/
int Medusa::attackAction()
{
    int die = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int roll = die + die2;
    if(roll == 12)
    {
        return 50;
    }
    else
    {
        return roll;
    }
}

/*******************************************************************************
** Description: Medusa::defendAction()  returns a random integer
**              between values of 1 and 6) to reprsent 1d6
*********************************************************************************/
int Medusa::defendAction()
{
    int die = rand() % 6 + 1;
    return die;
}

/*******************************************************************************
** Description: Medusa::getStrength() returns strength member variable
*********************************************************************************/
int Medusa::getStrength()
{
    return this->strength;
}

/*******************************************************************************
** Description: Medusa::setStrength() sets strength member variable
*********************************************************************************/
void Medusa::setStrength(int num)
{
    this->strength = num;
}

/*******************************************************************************
** Description: Medusa::getArmor() returns Armor member variable
*********************************************************************************/
int Medusa::getArmor()
{
    return this->armor;
}

/*******************************************************************************
** Description: Medusa:getName() returns the name of the Barbarian
*********************************************************************************/
std::string Medusa::getName()
{
    return this->name;
}

/*******************************************************************************
** Description: Medusa:getCharacterType() returns "Monster" as type
*********************************************************************************/
std::string Medusa::getCharacterType()
{
    return this->characterType;
}
