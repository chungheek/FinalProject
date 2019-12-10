/************************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Main file for MonsterPlanet is a turn based strategy game that is
**          inspired by OSU CS162's Fantasy Combat assignment and theme's from
**          HitchHiker's Guide to the Galaxy. This is a survival/strategy game and the
**          point is to not be killed by one of the monster's and safely escape on a
**          a spaceship.
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
using std::getline;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void performSpaceAction(MainCharacter&, bool&);
void slow_print(const string&, unsigned int);

int main()
{
    Menu menu;
    int yOrN = menu.play();
    bool keepPlaying = true;
    while (keepPlaying && yOrN == 1)
    {
        string message = "Welcome to Monster Planet...You have crash landed on this nightmare of a planet and must find a way to escape this estranged world...You were surveying the planet before crashing so use the map that you laid out to help you escape...\n";
        slow_print(message, 0);
        
        // Istantiate MainCharacter class object
        MainCharacter mainCharacter;
        cout << "Please select a name for your character: " << endl;
        string mainCharactName = menu.stringValidator();
        mainCharacter.setName(mainCharactName);
        
        // Istantiate the spaces and the necessary monsters to construct the map
        Space *homeSpace = new HomeSpace();
        
        Character *vampire = new Vampire();
        Space *vampireCastle = new MonsterSpace(vampire, mainCharacter, "Vampire's Castle");
        Character *medusa = new Medusa();
        Space *medusaCave = new MonsterSpace(medusa, mainCharacter, "Medusa's cave");
        Character *wereWolf = new WereWolf();
        Space *woods = new MonsterSpace(wereWolf, mainCharacter, "Woods");
        Character *frankenstein = new Frankenstein();
        Space *frankensteinLab = new MonsterSpace(frankenstein, mainCharacter, "Frankenstein's Lab");
        
        Space *townA42 = new ClueSpace("A42", "Welcome to town A42! As you can see there seems to be a spaceship on the map. Perhaps you can use that to escape? It's rumoured that the monsters withold jetfuel...\n Fun Fact: the towns people of A42 love Caesar Salad");
        Space *townB42 = new ClueSpace("B42", "Welcome to town B42, we are in need of your help! The big wolf in the woods and frankenstein's monster terrorizes both sides of the city! Please help us defeat them!\n Fun Fact: the towns people of B42 love the fact that there are NINE realms on Monster Planet...just not the monsters part...");
        Space *townC42 = new ClueSpace("C42", "Welcome to town C42, the Vampire and Medusa completely rule these lands and we need help! Please help us defeat them! But be warned they are incredibly strong!\n Fun Fact: the towns people of C42 were masters of encryption, but they do not share their secrets with anyone.");
        
        Space *spaceShip = new SpaceShip();
        
        // Setup the items, spaces, and the map
        Item healthB42(2);
        Item healthC42(2);
        
        Item jetFuelWw(1);
        Item jetFuelFr(1);
        Item jetFuelVamp(1);
        Item jetFuelMed(1);
        
        
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
        townB42->setItem(healthB42);
        
        townC42->setTop(vampireCastle);
        townC42->setBottom(medusaCave);
        townC42->setRight(townA42);
        townC42->setLeft(nullptr);
        townC42->setItem(healthC42);
        
        vampireCastle->setBottom(townC42);
        vampireCastle->setTop(nullptr);
        vampireCastle->setLeft(nullptr);
        vampireCastle->setRight(nullptr);
        vampireCastle->setJetFuel(jetFuelVamp);
        
        medusaCave->setTop(townC42);
        medusaCave->setBottom(nullptr);
        medusaCave->setLeft(nullptr);
        medusaCave->setRight(nullptr);
        medusaCave->setJetFuel(jetFuelMed);
        
        woods->setBottom(townB42);
        woods->setTop(nullptr);
        woods->setLeft(nullptr);
        woods->setRight(nullptr);
        woods->setJetFuel(jetFuelWw);
        
        frankensteinLab->setTop(townB42);
        frankensteinLab->setBottom(nullptr);
        frankensteinLab->setLeft(nullptr);
        frankensteinLab->setRight(nullptr);
        frankensteinLab->setJetFuel(jetFuelFr);
        
        spaceShip->setTop(townA42);
        spaceShip->setBottom(nullptr);
        spaceShip->setLeft(nullptr);
        spaceShip->setRight(nullptr);
        
        // Start out at the crash site or at [Home]
        mainCharacter.setCurrentSpace(homeSpace);
        string message2 = mainCharacter.getName() + ", please use the map to gain clues and figure out how to leave this land.\n";
        slow_print(message2, 0);
        
        while(keepPlaying)
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
                    performSpaceAction(mainCharacter, keepPlaying);
                   
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
                    performSpaceAction(mainCharacter, keepPlaying);
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
                    performSpaceAction(mainCharacter, keepPlaying);
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
                    performSpaceAction(mainCharacter, keepPlaying);
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
            if(mainMenu == 6)
            {
                mainCharacter.printInventory();
            }
            if(mainMenu == 7)
            {
                mainCharacter.removeItem();
            }
        }
        yOrN = menu.playAgain();
       
        delete homeSpace;
        homeSpace = nullptr;
        delete vampire;
        vampire = nullptr;
        delete vampireCastle;
        vampireCastle = nullptr;
        delete medusa;
        medusa = nullptr;
        delete medusaCave;
        medusaCave = nullptr;
        delete wereWolf;
        wereWolf = nullptr;
        delete woods;
        woods = nullptr;
        delete frankenstein;
        frankenstein = nullptr;
        delete frankensteinLab;
        frankensteinLab = nullptr;
        delete townA42;
        townA42 = nullptr;
        delete townB42;
        townB42 = nullptr;
        delete townC42;
        townC42 = nullptr;
        delete spaceShip;
        spaceShip = nullptr;
    }
    
    
    cout << "Exiting game, goodbye" << endl;
    
    return 0;
}


/********************************************************************************************************
** Description: performAction() helper function performs the space action of the current space
*********************************************************************************************************/
void performSpaceAction(MainCharacter &mainCharacter, bool& play)
{
    Menu menu;
    if(mainCharacter.getCurrentSpace()->getSpaceType() == "HomeSpace")
    {
       mainCharacter.getCurrentSpace()->performSpaceAction();
    }
    if(mainCharacter.getCurrentSpace()->getSpaceType() == "ClueSpace")
    {
       mainCharacter.getCurrentSpace()->performSpaceAction();
    }
    if(mainCharacter.getCurrentSpace()->getSpaceType() == "MonsterSpace")
    {
       mainCharacter.getCurrentSpace()->performSpaceAction();
       if(mainCharacter.getStillAlive() == false)
       {
           cout << "The game is over" << endl;
           play = false;
       }
       if(mainCharacter.getCurrentSpace()->getCounter() <= 1 && mainCharacter.getStillAlive() == true)
       {
           cout << "The monster dropped some Jet Fuel!" << endl;
           Item jetFuel = mainCharacter.getCurrentSpace()->getJetFuel();
           mainCharacter.storeItem(jetFuel);
       }
    }
    if(mainCharacter.getCurrentSpace()->getSpaceType() == "SpaceshipSpace")
    {
        string deciphered;
        mainCharacter.getCurrentSpace()->performSpaceAction();
        if(mainCharacter.useJetFuel())
        {
            cout << "Would you like to deciper it? 1. Yes or 2. No?" << endl;
            int yOrN = menu.yesOrNo();
            if(yOrN == 1)
            {
                cout << "Please enter something: " << endl;
                getline(cin,deciphered);
                if(deciphered == "so long and thanks for all the fish")
                {
                    cout << "You have successfully escaped Monster Planet! Thank you for playing!" << endl;
                    play = false;
                }
                else
                {
                    cout << "Incorrect!" << endl;
                }
            }
        }
    }
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

