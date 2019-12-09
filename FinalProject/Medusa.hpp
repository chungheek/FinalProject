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
    string characterType;
    
public:
    Medusa();
    ~Medusa();
    int attackAction();
    int defendAction();
    int getStrength();
    void setStrength(int);
    int getArmor();
    string getName();
    string getCharacterType();
};

#endif /* Medusa_hpp */
