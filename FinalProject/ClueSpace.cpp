/************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for ClueSpace class
***************************************************************/

#include "ClueSpace.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

/****************************************************************************************
** Description: ClueSpace::ClueSpace(string) default constructor and sets name
**          to the given string.
*******************************************************************************************/
ClueSpace::ClueSpace(string name, string c)
{
    this->spaceName = name;
    this->clue = c;
    this->spaceType = "ClueSpace";
    this->counter = 0;
}

/****************************************************************************************
** Description: ClueSpace::~ClueSpace(string) destructor for ClueSpace object
*******************************************************************************************/
ClueSpace::~ClueSpace()
{
}

/****************************************************************************************
** Description: ClueSpace::getTop() returns the Top space  of the current space
*******************************************************************************************/
Space *ClueSpace::getTop()
{
    return this->top;
}

/*************************************************************************************
** Description: ClueSpace::setTop() sets the Top space of the current space
***************************************************************************************/
void ClueSpace::setTop(Space* space)
{
    this->top = space;
}

/************************************************************************************************
** Description: ClueSpace::getBottom() returns the Bottom space of the current space
**************************************************************************************************/
Space *ClueSpace::getBottom()
{
    return this->bottom;
}

/********************************************************************************************
** Description: ClueSpace::setBottom() sets the Bottom space of the current space
**********************************************************************************************/
void ClueSpace::setBottom(Space* space)
{
    this->bottom = space;
}

/****************************************************************************************
** Description: ClueSpace::getLeft() returns the Left space of the current space
******************************************************************************************/
Space *ClueSpace::getLeft()
{
    return this->left;
}

/*************************************************************************************
** Description: ClueSpace::setLeft() sets the Left space of the current space
***************************************************************************************/
void ClueSpace::setLeft(Space* space)
{
    this->left = space;
}

/********************************************************************************************
** Description: ClueSpace::getRight() returns the Right space of the current space
**********************************************************************************************/
Space *ClueSpace::getRight()
{
    return this->right;
}

/****************************************************************************************
** Description: ClueSpace::setRight() sets the Right space of the current space
******************************************************************************************/
void ClueSpace::setRight(Space* space)
{
    this->right = space;
}

/********************************************************************************************
** Description: ClueSpace::getCurrentSpace() returns the current space
**********************************************************************************************/
Space *ClueSpace::getCurrentSpace()
{
    return this;
}

/********************************************************************************************
** Description: ClueSpace::getSpaceName() gets the current space name
**********************************************************************************************/
string ClueSpace::getSpaceName()
{
    return this->spaceName;
}

/********************************************************************************************
** Description: ClueSpace::getSpaceType() returns the type of current space
**********************************************************************************************/
string ClueSpace::getSpaceType()
{
    return this->spaceType;
}

/********************************************************************************************
** Description: ClueSpace::getClue() retrieves the clue of the current space
**********************************************************************************************/
string ClueSpace::getClue()
{
    return this->clue;
}

/********************************************************************************************
** Description: ClueSpace::setClue() sets the clue of the current space
**********************************************************************************************/
void ClueSpace::setClue(string clue)
{
    this->clue = clue;
}

/********************************************************************************************
** Description: ClueSpace::getCounter returns the counter member variable
**********************************************************************************************/
int ClueSpace::getCounter()
{
    return this->counter;
}

/********************************************************************************************
** Description: ClueSpace::performSpaceAction() does a space action. Gives a player
**         information and clues to escape the planet.
**********************************************************************************************/
void ClueSpace::performSpaceAction()
{
    cout << getClue() << endl;
}
