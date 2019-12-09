/***************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for MonsterSpace class
******************************************************************/

#include "MonsterSpace.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;


/****************************************************************************************
** Description: MonsterSpace::MonsterSpace(Character) default constructor that
**          takes in a monster character and that character is used for that space
*******************************************************************************************/
MonsterSpace::MonsterSpace(Character *monst, MainCharacter& main, string name)
{
    this->spaceName = name;
    this->monster = monst;
    this->mainCharacter = main;
    this->spaceType = "MonsterSpace";
    this->counter = 0;
}

/****************************************************************************************
** Description: MonsterSpace::MonsterSpace(Character) default destructor
*******************************************************************************************/
MonsterSpace::~MonsterSpace()
{
}

/****************************************************************************************
** Description: MonsterSpace::getTop() returns the Top space  of the current space
*******************************************************************************************/
Space *MonsterSpace::getTop()
{
    return this->top;
}

/*************************************************************************************
** Description: MonsterSpace::setTop() sets the Top space of the current space
***************************************************************************************/
void MonsterSpace::setTop(Space* space)
{
    this->top = space;
}

/************************************************************************************************
** Description: MonsterSpace::getBottom() returns the Bottom space of the current space
**************************************************************************************************/
Space *MonsterSpace::getBottom()
{
    return this->bottom;
}

/********************************************************************************************
** Description: MonsterSpace::setBottom() sets the Bottom space of the current space
**********************************************************************************************/
void MonsterSpace::setBottom(Space* space)
{
    this->bottom = space;
}

/****************************************************************************************
** Description: MonsterSpace::getLeft() returns the Left space of the current space
******************************************************************************************/
Space *MonsterSpace::getLeft()
{
    return this->left;
}

/*************************************************************************************
** Description: MonsterSpace::setLeft() sets the Left space of the current space
***************************************************************************************/
void MonsterSpace::setLeft(Space* space)
{
    this->left = space;
}

/********************************************************************************************
** Description: MonsterSpace::getRight() returns the Right space of the current space
**********************************************************************************************/
Space *MonsterSpace::getRight()
{
    return this->right;
}

/****************************************************************************************
** Description: MonsterSpace::setRight() sets the Right space of the current space
******************************************************************************************/
void MonsterSpace::setRight(Space* space)
{
    this->right = space;
}

/********************************************************************************************
** Description: MonsterSpace::getCurrentSpace() returns the current space
**********************************************************************************************/
Space *MonsterSpace::getCurrentSpace()
{
    return this;
}

/********************************************************************************************
** Description: MonsterSpace::getSpaceName() gets the current space name
**********************************************************************************************/
std::string MonsterSpace::getSpaceName()
{
    return this->spaceName;
}

/********************************************************************************************
** Description: MonsterSpace::getSpaceType() returns the type of current space
**********************************************************************************************/
string MonsterSpace::getSpaceType()
{
    return this->spaceType;
}

/********************************************************************************************
** Description: MonsterSpace::getCounter returns the counter member variable
**********************************************************************************************/
int MonsterSpace::getCounter()
{
    return this->counter;
}

/********************************************************************************************
** Description: MonsterSpace::performSpaceAction() returns the type of current space
**********************************************************************************************/
void MonsterSpace::performSpaceAction()
{
    combatGame();
}

/********************************************************************************
** Description: combatGame() starts and implements the Fantasy Combat Game
**         this game is refactored so it will only return the winner of the
**         game and not print any of the intricate details of each round.
**********************************************************************************/
void MonsterSpace::combatGame()
{
    cout << "You are challenging " << monster->getName() << endl;
    
    int totalDamage = 0;
       
    while(true)
    {
       int attack = 0;
       int defend = 0;
       int armor = 0;
       int newStrength = 0;
       // Where player 1 attacks
       attack = mainCharacter.attackAction();
       defend = monster->defendAction();
       armor = monster->getArmor();
       totalDamage = attack - defend - armor;
       if(totalDamage<=0){totalDamage=0;};
       newStrength = monster->getStrength() - totalDamage;
       monster->setStrength(newStrength);
       if(monster->getStrength() <= 0)
       {
           //cout << "Player 2's strength is at 0, Player 1 has won the round!" << endl;

           cout << mainCharacter.getName() << " won!" << endl;
           cout << "Current Strength: " << mainCharacter.getStrength() << endl;
           break;
       }
      // Where Player 2 attacks
       attack = monster->attackAction();
       defend = mainCharacter.defendAction();
       armor = mainCharacter.getArmor();
       totalDamage = attack - defend - armor;
       if(totalDamage<=0){totalDamage=0;};
       newStrength = mainCharacter.getStrength() - totalDamage;
       mainCharacter.setStrength(newStrength);
       if(mainCharacter.getStrength() <= 0)
       {
           //cout << "Player 1's strength is at 0, Player 2 has won the round!" << endl;

           cout << monster->getName() << " won!" << endl;
           cout << "You have died!" << endl;
           break;
       }
    }
}
