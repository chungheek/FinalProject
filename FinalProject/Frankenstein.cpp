/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for Frankenstein class
***************************************************************************************/

#include "Frankenstein.hpp"
#include <cstdlib>
#include <iostream>

using std::rand;

/*******************************************************************************
** Description: Frankenstein::Frankenstein() default constructor for Frankenstein
*********************************************************************************/
Frankenstein::Frankenstein()
{
    this->armor = 5;
    this->strength = 13;
    this->name = "Frankenstein";
}

/*******************************************************************************
** Description: Mesdusa::~Frankenstein() destructor method
*********************************************************************************/
Frankenstein::~Frankenstein()
{
}

/*******************************************************************************
** Description: Frankenstein::attackAction() returns (a random integer
**              between values of 1 and 6) to represent 1d6.
*********************************************************************************/
int Frankenstein::attackAction()
{
    int die = rand() % 6 + 1;
    return die;
}

/*******************************************************************************
** Description: Frankenstein::defendAction()  returns a random integer
**              between values of 1 and 6) to reprsent 1d6
*********************************************************************************/
int Frankenstein::defendAction()
{
    int die = rand() % 6 + 1;
    return die;
}

/*******************************************************************************
** Description: Frankenstein::getStrength() returns strength member variable
*********************************************************************************/
int Frankenstein::getStrength()
{
    return this->strength;
}

/*******************************************************************************
** Description: Frankenstein::getArmor() returns Armor member variable
*********************************************************************************/
int Frankenstein::getArmor()
{
    return this->armor;
}

/*******************************************************************************
** Description: Frankenstein:getName() returns the name of the Barbarian
*********************************************************************************/
std::string Frankenstein::getName()
{
    return this->name;
}
