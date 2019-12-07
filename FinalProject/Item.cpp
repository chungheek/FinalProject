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
        name = "JetFuel";
        
    }
    if (num == 2)
    {
        jetFuel = 0;
        healthPotion = 1;
        magicItem = 0;
        name = "HealthPotion";
    }
    if (num == 3)
    {
        jetFuel = 0;
        healthPotion = 0;
        magicItem = 1;
        name = "MagicItem";
        
    }
}

///*******************************************************************************
//** Description: Item::useHealthPotion() if the item is a healthPotion and
//**         if the character wishes to use it then it will give back health
//*********************************************************************************/
//void Item::useHealthPotion(Character &character)
//{
//    if (healthPotion > 0  && name == "HealthPotion")
//    {
//        int strength = character.getStrength();
//        character.setStrength(strength + 5);
//        healthPotion--;
//    }
//    if (healthPotion <= 0 && name == "HealthPotion")
//    {
//        cout << "No health potions are available to use" << endl;
//    }
//    else
//    {
//        cout << "This item is not a health potion" << endl;
//    }
//}
