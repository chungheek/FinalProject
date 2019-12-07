/***************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for SpaceShip class
******************************************************************/

#include "SpaceShip.hpp"

/****************************************************************************************
** Description: SpaceShip::getTop() returns the Top space  of the current space
*******************************************************************************************/
Space *SpaceShip::getTop()
{
    return this->top;
}

/*************************************************************************************
** Description: SpaceShip::setTop() sets the Top space of the current space
***************************************************************************************/
void SpaceShip::setTop(Space* space)
{
    this->top = space;
}

/************************************************************************************************
** Description: SpaceShip::getBottom() returns the Bottom space of the current space
**************************************************************************************************/
Space *SpaceShip::getBottom()
{
    return this->bottom;
}

/********************************************************************************************
** Description: SpaceShip::setBottom() sets the Bottom space of the current space
**********************************************************************************************/
void SpaceShip::setBottom(Space* space)
{
    this->bottom = space;
}

/****************************************************************************************
** Description: SpaceShip::getLeft() returns the Left space of the current space
******************************************************************************************/
Space *SpaceShip::getLeft()
{
    return this->left;
}

/*************************************************************************************
** Description: SpaceShip::setLeft() sets the Left space of the current space
***************************************************************************************/
void SpaceShip::setLeft(Space* space)
{
    this->left = space;
}

/********************************************************************************************
** Description: SpaceShip::getRight() returns the Right space of the current space
**********************************************************************************************/
Space *SpaceShip::getRight()
{
    return this->right;
}

/****************************************************************************************
** Description: SpaceShip::setRight() sets the Right space of the current space
******************************************************************************************/
void SpaceShip::setRight(Space* space)
{
    this->right = space;
}

/********************************************************************************************
** Description: SpaceShip::getCurrentSpace() returns the current space
**********************************************************************************************/
Space *SpaceShip::getCurrentSpsace()
{
    return this->currentSpace;
}

/********************************************************************************************
** Description: SpaceShip::setCurrentSpace() sets the current space
**********************************************************************************************/
void SpaceShip::setCurrentSpace(Space* space)
{
    this->currentSpace = space;
}

/********************************************************************************************
** Description: SpaceShip::getSpaceName() gets the current space name
**********************************************************************************************/
std::string SpaceShip::getSpaceName()
{
    return this->spaceName;
}

/********************************************************************************************
** Description: SpaceShip::setSpaceName() sets the name of the current space
**********************************************************************************************/
void SpaceShip::setSpaceName(std::string name)
{
    this->spaceName = name;
}
