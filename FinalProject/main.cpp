/************************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Main file for MonsterPlanet takes in the following classes:
************************************************************************************************/

#include <iostream>
#include "Space.hpp"
#include "HomeSpace.hpp"
#include "ClueSpace.hpp"
#include "MonsterSpace.hpp"
#include "SpaceShip.hpp"
#include "Character.hpp"
#include "Vampire.hpp"
#include "WereWolf.hpp"
#include "Medusa.hpp"
#include "Frankenstein.hpp"
#include "MainCharacter.hpp"
#include "Menu.hpp"
#include <thread>
#include <chrono>
#include <cstdlib>
#include <string>
#include <iostream>

using std::rand;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::flush;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void slow_print(const string&, unsigned int);

int main() {
    Menu menu;
    int yOrN = menu.play();
    while (true && yOrN == 1)
    {
        string message = "Welcome to Monster Planet...You have crash landed on this nightmare of a planet and must find a way to escape this estranged world....\n";
        slow_print(message, 30);
        
        // Istantiate the spaces and the necessary monsters to construct the map
        Space *homeSpace = new HomeSpace();
        
        Character *vampire = new Vampire();
        Space *vampireCastle = new MonsterSpace(vampire, "Vampire's Castle");
        Character *medusa = new Medusa();
        Space *medusaCave = new MonsterSpace(medusa, "Medusa's cave");
        Character *wereWolf = new WereWolf();
        Space *woods = new MonsterSpace(wereWolf, "Woods");
        Character *frankenstein = new Frankenstein();
        Space *frankensteinLab = new MonsterSpace(frankenstein, "Frankenstein's Lab");
        
        Space *townA42 = new ClueSpace("A42");
        Space *townB42 = new ClueSpace("B42");
        Space *townC42 = new ClueSpace("C42");
        
        Space *spaceShip = new SpaceShip();
        
        // Setup the map
        homeSpace->setBottom(townA42);
        homeSpace->setTop(nullptr);
        homeSpace->setLeft(nullptr);
        homeSpace->setRight(nullptr);
        
        townA42->setTop(homeSpace);
        townA42->setLeft(townC42);
        townA42->setRight(townB42);
        townA42->setBottom(spaceShip);
        
        townB42->setTop(woods);
        townB42->setLeft(townA42);
        townB42->setBottom(frankensteinLab);
        townB42->setRight(nullptr);
        
        townC42->setTop(vampireCastle);
        townC42->setBottom(medusaCave);
        townC42->setRight(townA42);
        townC42->setLeft(nullptr);
        
        vampireCastle->setBottom(townC42);
        vampireCastle->setTop(nullptr);
        vampireCastle->setLeft(nullptr);
        vampireCastle->setRight(nullptr);
        
        medusaCave->setTop(townC42);
        medusaCave->setBottom(nullptr);
        medusaCave->setLeft(nullptr);
        medusaCave->setRight(nullptr);
        
        woods->setBottom(townB42);
        woods->setTop(nullptr);
        woods->setLeft(nullptr);
        woods->setRight(nullptr);
        
        frankensteinLab->setTop(townB42);
        frankensteinLab->setBottom(nullptr);
        frankensteinLab->setLeft(nullptr);
        frankensteinLab->setRight(nullptr);
        
        spaceShip->setTop(townA42);
        spaceShip->setBottom(nullptr);
        spaceShip->setLeft(nullptr);
        spaceShip->setRight(nullptr);
        
        MainCharacter mainCharacter;
        cout << "Please select a name for your character: " << endl;
        string mainCharactName = menu.stringValidator();
        mainCharacter.setName(mainCharactName);
        mainCharacter.setCurrentSpace(homeSpace);
        string message2 = mainCharacter.getName() + ", please use the map to gain clues and figure out how to leave this land.\n";
        slow_print(message2, 30);
        
        while(true)
        {
            int mainMenu = menu.menu();
            if(mainMenu == 1)
            {
                if(mainCharacter.getCurrentSpace()->getTop() == nullptr)
                {
                    cout << "Can not go top! Choose again." << endl;
                }
                else
                {
                    mainCharacter.setCurrentSpace(mainCharacter.getCurrentSpace()->getTop());
                }
            }
            if(mainMenu == 2)
            {
                if(mainCharacter.getCurrentSpace()->getBottom() == nullptr)
                {
                    cout << "Can not go down! Choose again." << endl;
                }
                else
                {
                    mainCharacter.setCurrentSpace(mainCharacter.getCurrentSpace()->getBottom());
                }
            }
            if(mainMenu == 3)
            {
                if(mainCharacter.getCurrentSpace()->getLeft() == nullptr)
                {
                    cout << "Can not go left! Choose again." << endl;
                }
                else
                {
                    mainCharacter.setCurrentSpace(mainCharacter.getCurrentSpace()->getLeft());
                }
            }
            if(mainMenu == 4)
            {
                if(mainCharacter.getCurrentSpace()->getRight() == nullptr)
                {
                    cout << "Can not go right! Choose again." << endl;
                }
                else
                {
                    mainCharacter.setCurrentSpace(mainCharacter.getCurrentSpace()->getRight());
                }
            }
            if(mainMenu == 5)
            {
                string spaceName = mainCharacter.getCurrentSpace()->getSpaceName();
                if(spaceName == "Home")
                {
                    menu.printMap(1);
                }
                if(spaceName == "A42")
                {
                    menu.printMap(2);
                }
                if(spaceName == "C42")
                {
                    menu.printMap(3);
                }
                if(spaceName == "Vampire's Castle")
                {
                    menu.printMap(4);
                }
                if(spaceName == "Medusa's cave")
                {
                    menu.printMap(5);
                }
                if(spaceName == "B42")
                {
                    menu.printMap(6);
                }
                if(spaceName == "Woods")
                {
                    menu.printMap(7);
                }
                if(spaceName == "Frankenstein's Lab")
                {
                    menu.printMap(8);
                }
                if(spaceName == "Space Ship")
                {
                    menu.printMap(9);
                }
                
            }
            
        }
        
    }
    
    
    
    
    return 0;
}


/************************************************************************************************
** Description: slow_print() is a function taken from the following website:
**          https://nodehead.com/c-how-to-console-typewriter-effect/
**          It is used to simulate a typewriter afffect for my specific game.
************************************************************************************************/
void slow_print(const string& message, unsigned int millis_per_char)
{
    for(const char c : message)
    {
        cout << c << flush;
        sleep_for(milliseconds(millis_per_char));
    }
}

