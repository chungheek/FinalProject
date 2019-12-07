/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for WereWolf class
***************************************************************************************/

#ifndef WereWolf_hpp
#define WereWolf_hpp

#include <string>

using std::string;

class WereWolf
{
private:
    int armor;
    int strength;
    string name;

public:
    WereWolf();
    ~WereWolf();
    int attackAction();
    int defendAction();
    int getStrength();
    int getArmor();
    string getName();
};
#endif /* WereWolf_hpp */
