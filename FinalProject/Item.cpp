/***************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for Item class
******************************************************************/

#include "Item.hpp"
#include "Character.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

/*******************************************************************************
** Description: Item::Item(int) default constructor for Item class object
*********************************************************************************/
Item::Item(int num)
{
    if (num == 1)
    {
        jetFuel = 1;
        healthPotion = 0;
        magicItem = 0;
        name = "Jet Fuel";
        
    }
    if (num == 2)
    {
        jetFuel = 0;
        healthPotion = 1;
        magicItem = 0;
        name = "Health Potion";
    }
    if (num == 3)
    {
        jetFuel = 0;
        healthPotion = 0;
        magicItem = 1;
        name = "Magic Item";
        
    }
}

/*******************************************************************************
** Description: Item::getItemName() gets the item's name
*********************************************************************************/
string Item::getItemName()
{
    return this->name;
}
