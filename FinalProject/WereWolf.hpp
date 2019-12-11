/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for WereWolf class
***************************************************************************************/

#ifndef WereWolf_hpp
#define WereWolf_hpp

#include "Character.hpp"
#include <string>

using std::string;

class WereWolf : public Character
{
private:
    int armor;
    int strength;
    string name;
    string characterType;

public:
    WereWolf();
    ~WereWolf();
    int attackAction();
    int defendAction();
    int getStrength();
    void setStrength(int);
    int getArmor();
    string getName();
    string getCharacterType();
};
#endif /* WereWolf_hpp */
