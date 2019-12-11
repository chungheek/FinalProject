/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for the MainCharacter class
***************************************************************************************/

#include "MainCharacter.hpp"
#include "Menu.hpp"
#include <cstdlib>
#include <string>
#include <iostream>

using std::rand;
using std::string;
using std::find;
using std::cout;
using std::cin;
using std::endl;

/*******************************************************************************
** Description: MainCharacter::MainCharacter() default constructor for MainCharacter
*********************************************************************************/
MainCharacter::MainCharacter()
{
    this->armor = 5;
    this->strength = 5;
    this->name = "MainCharacter";
    this->inventory.reserve(10);
    this->characterType = "Main";
    this->stillAlive = true;
}

/*******************************************************************************
** Description: MainCharacter::~MainCharacter() destructor method
*********************************************************************************/
MainCharacter::~MainCharacter()
{
}

/*******************************************************************************
** Description: MainCharacter::attackAction() returns a random integer between
**              values of 1 and 7 for the number of sides of a die.
*********************************************************************************/
int MainCharacter::attackAction()
{
    int die = rand() % 8 + 1;
    return die;
}

/*******************************************************************************
** Description: MainCharacter::defendAction() returns a random integer between
**              values of 1 and 7 for the number of sides of a die.
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
** Description: MainCharacter::getName() returns the name of the Barbarian
*********************************************************************************/
string MainCharacter::getName()
{
    return this->name;
}

/*******************************************************************************
** Description: MainCharacter::setName(string) sets the name of the MainCharacter
*********************************************************************************/
void MainCharacter::setName(string n)
{
    this->name = n;
}

/*******************************************************************************
** Description: MainCharacter::useHealthPotion() uses health potion if there is
**          one available and will remove it from the inventory
*********************************************************************************/
void MainCharacter::useHealthPotion()
{
    if(inventory.empty())
    {
        cout << "Inventory is empty! No health potions!" << endl;
    }
    else
    {
        for (int i=0; i < inventory.size(); i++)
        {
            if(inventory[i].getItemName() == "Health Potion")
            {
                setStrength(getStrength() + 5);
                inventory.erase(inventory.begin() + i);
                cout << "Used health potion +5 to strength" << endl;
                return;
            }
        }
        cout << "There are no Health Potions in the inventory" << endl;
        
    }
}

/*******************************************************************************
** Description: MainCharacter::getCurrentSpace() returns the current
**      space and all its properties.
*********************************************************************************/
Space* MainCharacter::getCurrentSpace()
{
    return this->currentSpace;
}

/*******************************************************************************
** Description: MainCharacter::setCurrentSpace() sets the current
**      space to a specific space and all its properties.
*********************************************************************************/
void MainCharacter::setCurrentSpace(Space *space)
{
    this->currentSpace = space;
}

/*******************************************************************************
** Description: MainCharacter::printInventory() prints inventory list out
*********************************************************************************/
void MainCharacter::printInventory()
{
    if(!inventory.empty())
    {
        for(int i=0; i < inventory.size(); i++)
        {
            cout << (i+1) << ". " << inventory[i].getItemName() << endl;
        }
    }
    else
    {
        cout << "There are no items in your inventory" << endl;
    }
}

/*******************************************************************************
** Description: MainCharacter::useJetFuel() will return true if there's
**          enough jet fuel in the Inventory
*********************************************************************************/
bool MainCharacter::useJetFuel()
{
    int fuelCount = 0;
    bool useFuel = false;
    for (int i=0; i < inventory.size(); i++)
    {
        if(inventory[i].getItemName() == "Jet Fuel")
        {
            fuelCount++;
        }
    }
    if(fuelCount >= 4)
    {
        cout << "You have enough Jet Fuel!" << endl;
        useFuel = true;
    }
    else
    {
        useFuel = false;
    }
    return useFuel;
}

/**********************************************************************************
** Description: MainCharacter::storeItem() will allow a user to store an item.
**          The capacity of inventory is set to 10.
************************************************************************************/
void MainCharacter::storeItem(Item &item)
{
    if(inventory.size() < 10)
    {
        inventory.push_back(item);
    }
    else
    {
        cout << "There is no more space in your inventory!" << endl;
    }
}

/****************************************************************************************
** Description: MainCharacter::removeItem() will allow a user to remove an item
*****************************************************************************************/
void MainCharacter::removeItem()
{
    Menu menu;
    if(!inventory.empty())
    {
        cout << "Please select an Item to remove: " << endl;
        for(int i=0; i < inventory.size(); i++)
        {
            cout << (i+1) << ". " << inventory[i].getItemName() << endl;
        }
        
        int size = static_cast<int>(inventory.size());
        int selection = menu.integerValidator(1, size);

        cout << "Removing  " << inventory[selection-1].getItemName() << endl;
        inventory.erase(inventory.begin() + (selection-1));
    }
    else
    {
        cout << "The Inventory is empty! No items to remove!" << endl;
    }
}

/*****************************************************************************************
** Description: MainCharacter::getStillAlive() will return a boolean indicating whether
**          or not the mainCharacter is still alive.
******************************************************************************************/
bool MainCharacter::getStillAlive()
{
    return this->stillAlive;
}

/*****************************************************************************************
** Description: MainCharacter::setStillAlive() will set stillAlive to a new boolean
******************************************************************************************/
void MainCharacter::setStillAlive(bool alive)
{
    this->stillAlive = alive;
}
