/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for Menu class
***************************************************************************************/

#include "Menu.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::streamsize;
using std::setprecision;
using std::getline;
using std::istream;

/***********************************************************************
** Description: Menu::characterSelect prompts user to select
**          a character to play
*************************************************************************/
int Menu::menu()
{
    int num;
    cout << "| Please select an action |" << endl;
    cout << "---------------------------" << endl;
    cout << "| 1. Go up                |" << endl;
    cout << "| 2. Go down              |" << endl;
    cout << "| 3. Go left              |" << endl;
    cout << "| 4. Go right             |" << endl;
    cout << "| 5. Print Map            |" << endl;
    cout << "| 6. Print Inventory      |" << endl;
    cout << "| 7. Remove Item          |" << endl;
    cout << "| 8. Use Health Potion    |" << endl;
    cout << "| 9. Get current strength |" << endl;
    cout << "---------------------------" << endl;
    
    bool trueOrFalse = false;
    do
    {
        cin >> num;
        if (num <= 0 || num >= 10 || cin.get() != '\n' || cin.fail())
        {
            cout << "Try again! Please select one of the following options:" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "---------------------------" << endl;
            cout << "| 1. Go up                |" << endl;
            cout << "| 2. Go down              |" << endl;
            cout << "| 3. Go left              |" << endl;
            cout << "| 4. Go right             |" << endl;
            cout << "| 5. Print Map            |" << endl;
            cout << "| 6. Print Inventory      |" << endl;
            cout << "| 7. Remove Item          |" << endl;
            cout << "| 8. Use Health Potion    |" << endl;
            cout << "| 9. Get current strength |" << endl;
            cout << "---------------------------" << endl;
        }
        else
        {
            trueOrFalse = true;
        }
    }while(trueOrFalse != true);
    
    return num;
}

/**********************************************************************************
** Description: Menu::play() prompts the user to play the game again
***********************************************************************************/
int Menu::play()
{
    int yOrN;
       cout << "1. Play" << endl;
       cout << "2. Exit" << endl;
       bool trueOrFalse = false;
       do
       {
          cin >> yOrN;
          if (yOrN <= 0 || yOrN >= 3 || cin.get() != '\n' || cin.fail())
          {
              cout << "Try again! 1. Play or 2. Exit" << endl;
              cin.clear();
              cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
          }
          else
          {
              trueOrFalse = true;
          }
       }while(trueOrFalse != true);
    
    return yOrN;
}

/**********************************************************************************
** Description: Menu::playAgain() prompts the user to play the game again
***********************************************************************************/
int Menu::playAgain()
{
    int yOrN;
       cout << "1. Play again?" << endl;
       cout << "2. Exit game" << endl;
       bool trueOrFalse = false;
       do
       {
          cin >> yOrN;
          if (yOrN <= 0 || yOrN >= 3 || cin.get() != '\n' || cin.fail())
          {
              cout << "Try again! 1. Play again or 2. Exit game" << endl;
              cin.clear();
              cin.ignore(numeric_limits<streamsize>::max(), '\n');
          }
          else
          {
              trueOrFalse = true;
          }
       }while(trueOrFalse != true);
    
    return yOrN;
}

/***********************************************************************
** Description: Menu::integerValidator prompts user to select
**          an integer and will not allow for anything else.
*************************************************************************/
int Menu::integerValidator()
{
    int val;
    bool trueOrFalse = false;
    //cout << "Please enter an integer" << endl;
    do
    {
        cin >> val;
        if(cin.fail() || cin.get() != '\n')
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Try again! Please enter an integer" << endl;
        }
        else
        {
            trueOrFalse = true;
        }
    }while(trueOrFalse != true);
    return val;
}

/***********************************************************************
** Description: Menu::integerValidator(low, high) prompts user to
**         select an integer between low and high numbers.
*************************************************************************/
int Menu::integerValidator(int low, int high)
{
    int val;
    bool trueOrFalse = false;
    do
    {
        cin >> val;
        if(cin.fail() || cin.get() != '\n' || (val < low || val > high))
        {
            cin.clear();
            cout << "Try again! Please enter an integer between " << low << " and " << high << endl;
        }
        else
        {
            trueOrFalse = true;
        }
    }while(trueOrFalse != true);
    return val;
}

/**********************************************************************************
** Description: Menu::stringValidator() if anything but a string is entered
**          the function will prompt the user to retry.
***********************************************************************************/
string Menu::stringValidator()
{
    string str;
    bool trueOrFalse = false;
       do
       {
           cin >> str;
           if(cin.fail() || cin.get() != '\n')
           {
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max(), '\n');
               cout << "Try again! Please enter a strings" << endl;
           }
           else
           {
               trueOrFalse = true;
           }
       }while(trueOrFalse != true);
       return str;
}

/**************************************************************************************
** Description: Menu::yesOrNo() prompts the user to enter 1 or 2 for yes or no
****************************************************************************************/
int Menu::yesOrNo()
{
    int yOrN;
       bool trueOrFalse = false;
       do
       {
          cin >> yOrN;
          if (yOrN <= 0 || yOrN >= 3 || cin.get() != '\n' || cin.fail())
          {
              cout << "Try again! 1. Yes or 2. No" << endl;
              cin.clear();
              cin.ignore(numeric_limits<streamsize>::max(), '\n');
          }
          else
          {
              trueOrFalse = true;
          }
       }while(trueOrFalse != true);
    
    return yOrN;
}

/**************************************************************************************
** Description: Menu::printMap() prints out the map
****************************************************************************************/
void Menu::printMap(int num)
{
    if (num == 1)
    {
        cout << "|--------------------------------------------------------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Vampire's     |    Crash Site   |       Woods      |" << endl;
        cout << "|      Castle       |      [Home]     |                  |" << endl;
        cout << "|                   |         X       |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Town C42            Town A42          Town B42     |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Medusa's      |    Spaceship    |  Frankenstein's  |" << endl;
        cout << "|       Cave        |                 |       Lab        |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|--------------------------------------------------------|" << endl;
    }
    if (num == 2)
    {
        cout << "|--------------------------------------------------------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Vampire's     |    Crash Site   |       Woods      |" << endl;
        cout << "|      Castle       |      [Home]     |                  |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Town C42            Town A42          Town B42     |" << endl;
        cout << "|                   |        X        |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Medusa's      |    Spaceship    |  Frankenstein's  |" << endl;
        cout << "|       Cave        |                 |       Lab        |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|--------------------------------------------------------|" << endl;
    }
    if (num == 3)
    {
        cout << "|--------------------------------------------------------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Vampire's     |    Crash Site   |       Woods      |" << endl;
        cout << "|      Castle       |      [Home]     |                  |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Town C42            Town A42          Town B42     |" << endl;
        cout << "|        X          |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Medusa's      |    Spaceship    |  Frankenstein's  |" << endl;
        cout << "|       Cave        |                 |       Lab        |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|--------------------------------------------------------|" << endl;
    }
    if (num == 4)
    {
        cout << "|--------------------------------------------------------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Vampire's     |    Crash Site   |       Woods      |" << endl;
        cout << "|      Castle       |      [Home]     |                  |" << endl;
        cout << "|        X          |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Town C42            Town A42          Town B42     |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Medusa's      |    Spaceship    |  Frankenstein's  |" << endl;
        cout << "|       Cave        |                 |       Lab        |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|--------------------------------------------------------|" << endl;
    }
    if (num == 5)
    {
        cout << "|--------------------------------------------------------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Vampire's     |    Crash Site   |       Woods      |" << endl;
        cout << "|      Castle       |      [Home]     |                  |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Town C42            Town A42          Town B42     |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Medusa's      |    Spaceship    |  Frankenstein's  |" << endl;
        cout << "|       Cave        |                 |       Lab        |" << endl;
        cout << "|        X          |                 |                  |" << endl;
        cout << "|--------------------------------------------------------|" << endl;
    }
    if (num == 6)
    {
        cout << "|--------------------------------------------------------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Vampire's     |    Crash Site   |      Woods       |" << endl;
        cout << "|      Castle       |      [Home]     |                  |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Town C42            Town A42          Town B42     |" << endl;
        cout << "|                   |                 |         X        |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Medusa's      |    Spaceship    |  Frankenstein's  |" << endl;
        cout << "|       Cave        |                 |       Lab        |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|--------------------------------------------------------|" << endl;
    }
    if (num == 7)
    {
        cout << "|--------------------------------------------------------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Vampire's     |    Crash Site   |       Woods      |" << endl;
        cout << "|      Castle       |      [Home]     |         X        |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Town C42            Town A42          Town B42     |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Medusa's      |    Spaceship    |  Frankenstein's  |" << endl;
        cout << "|       Cave        |                 |       Lab        |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|--------------------------------------------------------|" << endl;
    }
    if (num == 8)
    {
        cout << "|--------------------------------------------------------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Vampire's     |    Crash Site   |      Woods       |" << endl;
        cout << "|      Castle       |      [Home]     |                  |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Town C42            Town A42          Town B42     |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Medusa's      |    Spaceship    |  Frankenstein's  |" << endl;
        cout << "|       Cave        |                 |       Lab        |" << endl;
        cout << "|                   |                 |        X         |" << endl;
        cout << "|--------------------------------------------------------|" << endl;
    }
    if (num == 9)
    {
        cout << "|--------------------------------------------------------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Vampire's     |    Crash Site   |      Woods       |" << endl;
        cout << "|      Castle       |      [Home]     |                  |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Town C42            Town A42          Town B42     |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|------    ---------|-------    ------|-------    -------|" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|     Medusa's      |    Spaceship    |  Frankenstein's  |" << endl;
        cout << "|       Cave        |        X        |       Lab        |" << endl;
        cout << "|                   |                 |                  |" << endl;
        cout << "|--------------------------------------------------------|" << endl;
    }
}
