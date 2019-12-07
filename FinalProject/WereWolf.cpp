/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for WereWolf class
***************************************************************************************/

#include "WereWolf.hpp"
#include <cstdlib>
#include <string>
#include <iostream>

using std::rand;

/*******************************************************************************
** Description: WereWolf::WereWolf() default constructor for WereWolf
*********************************************************************************/
WereWolf::WereWolf()
{
    this->armor = 1;
    this->strength = 18;
    this->name = "WereWolf";
}

/*******************************************************************************
** Description: WereWolf::~WereWolf() destructor method
*********************************************************************************/
WereWolf::~WereWolf()
{
}

/*******************************************************************************
** Description: WereWolf::attackAction() returns a random integer between
**              values of 1 and 7 for the number of sides of a die.
*********************************************************************************/
int WereWolf::attackAction()
{
   return rand() % 7 + 1;
}

/*******************************************************************************
** Description: WereWolf::defendAction() returns a random integer between
**              values of 1 and 2 for the number of sides of a die.
*********************************************************************************/
int WereWolf::defendAction()
{
    return rand() % 2 + 1;
}

/*******************************************************************************
** Description: WereWolf::getStrength() returns strength member variable
*********************************************************************************/
int WereWolf::getStrength()
{
    return this->strength;
}

/*******************************************************************************
** Description: WereWolf::getArmor() returns Armor member variable
*********************************************************************************/
int WereWolf::getArmor()
{
    return this->armor;
}

/*******************************************************************************
** Description: WereWolf:getName() returns the name of the Barbarian
*********************************************************************************/
std::string WereWolf::getName()
{
    return this->name;
}
