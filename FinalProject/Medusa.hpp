/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for Medusa class
***************************************************************************************/

#ifndef Medusa_hpp
#define Medusa_hpp

#include "Character.hpp"
#include <string>

using std::string;

class Medusa : public Character
{
private:
    int armor;
    int strength;
    string name;
public:
    Medusa();
    ~Medusa();
    int attackAction();
    int defendAction();
    int getStrength();
    int getArmor();
    string getName();
};

#endif /* Medusa_hpp */
