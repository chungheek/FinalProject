/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for the MainCharacter class
***************************************************************************************/

#include "MainCharacter.hpp"
#include <cstdlib>
#include <string>
#include <iostream>

using std::rand;
using std::string;
using std::find;

/*******************************************************************************
** Description: MainCharacter::MainCharacter() default constructor for MainCharacter
*********************************************************************************/
MainCharacter::MainCharacter()
{
    this->armor = 10;
    this->strength = 20;
    this->name = "MainCharacter";
}

/*******************************************************************************
** Description: MainCharacter::~MainCharacter() destructor method
*********************************************************************************/
MainCharacter::~MainCharacter()
{
}

/*******************************************************************************
** Description: MainCharacter::attackAction() returns a random integer between
**              values of 1 and 20 for the number of sides of a die.
*********************************************************************************/
int MainCharacter::attackAction()
{
    int die = rand() % 7 + 1;
    return die;
}

/*******************************************************************************
** Description: MainCharacter::defendAction() returns a random integer between
**              values of 1 and 10 for the number of sides of a die.
*********************************************************************************/
int MainCharacter::defendAction()
{
    return rand() % 7 + 1;
}

/*******************************************************************************
** Description: MainCharacter::getStrength() returns strength member variable
*********************************************************************************/
int MainCharacter::getStrength()
{
    return this->strength;
}

/*******************************************************************************
** Description: MainCharacter::setStrength() sets the strength member variable
*********************************************************************************/
void MainCharacter::setStrength(int num)
{
    this->strength = num;
}

/*******************************************************************************
** Description: MainCharacter::getArmor() returns Armor member variable
*********************************************************************************/
int MainCharacter::getArmor()
{
    return this->armor;
}

/*******************************************************************************
** Description: MainCharacter:getName() returns the name of the Barbarian
*********************************************************************************/
string MainCharacter::getName()
{
    return this->name;
}

/*******************************************************************************
** Description: MainCharacter:setName(string) sets the name of the MainCharacter
*********************************************************************************/
void MainCharacter::setName(string n)
{
    this->name = n;
}

/*******************************************************************************
** Description: MainCharacter:useHealthPotion() uses health potion if there is
**          one available and will remove it from the inventory
*********************************************************************************/
void MainCharacter::useHealthPotion()
{
    for (int i=0; i < inventory.size(); i++)
    {
        
    }
}

/*******************************************************************************
** Description: MainCharacter:getCurrentSpace() returns the current
**      space and all its properties.
*********************************************************************************/
Space* MainCharacter::getCurrentSpace()
{
    return this->currentSpace;
}

/*******************************************************************************
** Description: MainCharacter:setCurrentSpace() sets the current
**      space to a specific space and all its properties.
*********************************************************************************/
void MainCharacter::setCurrentSpace(Space *space)
{
    this->currentSpace = space;
}
