/***************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for MonsterSpace class
******************************************************************/

#include "MonsterSpace.hpp"

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
Space *MonsterSpace::getCurrentSpsace()
{
    return this->currentSpace;
}

/********************************************************************************************
** Description: MonsterSpace::setCurrentSpace() sets the current space
**********************************************************************************************/
void MonsterSpace::setCurrentSpace(Space* space)
{
    this->currentSpace = space;
}

/********************************************************************************************
** Description: MonsterSpace::getSpaceName() gets the current space name
**********************************************************************************************/
std::string MonsterSpace::getSpaceName()
{
    return this->spaceName;
}

/********************************************************************************************
** Description: MonsterSpace::setSpaceName() sets the name of the current space
**********************************************************************************************/
void MonsterSpace::setSpaceName(std::string name)
{
    this->spaceName = name;
}
