/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for Frankenstein class
***************************************************************************************/

#ifndef Frankenstein_hpp
#define Frankenstein_hpp

#include "Character.hpp"
#include <string>

using std::string;

class Frankenstein : public Character
{
private:
    int armor;
    int strength;
    string name;
    
public:
    Frankenstein();
    ~Frankenstein();
    int attackAction();
    int defendAction();
    int getStrength();
    int getArmor();
    string getName();
};

#endif /* Frankenstein_hpp */
