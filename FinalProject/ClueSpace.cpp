/************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for ClueSpace class
***************************************************************/

#include "ClueSpace.hpp"
#include <string>

using std::string;

/****************************************************************************************
** Description: ClueSpace::ClueSpace(string) default constructor and sets name
**          to the given string.
*******************************************************************************************/
ClueSpace::ClueSpace(string name)
{
    this->spaceName = name;
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
Space *ClueSpace::getCurrentSpsace()
{
    return this->currentSpace;
}

/********************************************************************************************
** Description: ClueSpace::setCurrentSpace() sets the current space
**********************************************************************************************/
void ClueSpace::setCurrentSpace(Space* space)
{
    this->currentSpace = space;
}

/********************************************************************************************
** Description: ClueSpace::getSpaceName() gets the current space name
**********************************************************************************************/
string ClueSpace::getSpaceName()
{
    return this->spaceName;
}

/********************************************************************************************
** Description: ClueSpace::setSpaceName() sets the name of the current space
**********************************************************************************************/
void ClueSpace::setSpaceName(string name)
{
    this->spaceName = name;
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
