/************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for HomeSpace class
***************************************************************/
#include "HomeSpace.hpp"
#include "Character.hpp"

/****************************************************************************************
** Description: HomeSpace::getTop() returns the Top space  of the current space
*******************************************************************************************/
Space *HomeSpace::getTop()
{
    return this->top;
}

/*************************************************************************************
** Description: HomeSpace::setTop() sets the Top space of the current space
***************************************************************************************/
void HomeSpace::setTop(Space* space)
{
    this->top = space;
}

/************************************************************************************************
** Description: HomeSpace::getBottom() returns the Bottom space of the current space
**************************************************************************************************/
Space *HomeSpace::getBottom()
{
    return this->bottom;
}

/********************************************************************************************
** Description: HomeSpace::setBottom() sets the Bottom space of the current space
**********************************************************************************************/
void HomeSpace::setBottom(Space* space)
{
    this->bottom = space;
}

/****************************************************************************************
** Description: HomeSpace::getLeft() returns the Left space of the current space
******************************************************************************************/
Space *HomeSpace::getLeft()
{
    return this->left;
}

/*************************************************************************************
** Description: HomeSpace::setLeft() sets the Left space of the current space
***************************************************************************************/
void HomeSpace::setLeft(Space* space)
{
    this->left = space;
}

/********************************************************************************************
** Description: HomeSpace::getRight() returns the Right space of the current space
**********************************************************************************************/
Space *HomeSpace::getRight()
{
    return this->right;
}

/****************************************************************************************
** Description: HomeSpace::setRight() sets the Right space of the current space
******************************************************************************************/
void HomeSpace::setRight(Space* space)
{
    this->right = space;
}

/********************************************************************************************
** Description: HomeSpace::getCurrentSpace() returns the current space
**********************************************************************************************/
Space *HomeSpace::getCurrentSpsace()
{
    return this->currentSpace;
}

/********************************************************************************************
** Description: HomeSpace::setCurrentSpace() sets the current space
**********************************************************************************************/
void HomeSpace::setCurrentSpace(Space* space)
{
    this->currentSpace = space;
}

/********************************************************************************************
** Description: HomeSpace::getSpaceName() gets the current space name
**********************************************************************************************/
std::string HomeSpace::getSpaceName()
{
    return this->spaceName;
}

/********************************************************************************************
** Description: HomeSpace::setSpaceName() sets the name of the current space
**********************************************************************************************/
void HomeSpace::setSpaceName(std::string name)
{
    this->spaceName = name;
}
