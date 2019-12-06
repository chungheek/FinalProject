/***************************************************************************************
** Author: Chunghee Kim
** Date: 11/15/2019
** Description: Header file for Character class
***************************************************************************************/

#ifndef Character_hpp
#define Character_hpp

#include <iostream>

class Character
{
private:
    int armor;
    int strength;
    std::string name;
public:
    Character();
    ~Character();
    int attackAction();
    int defendAction();
    int getStrength();
    void setStrength(int);
    int getArmor();
    std::string getName();
    void setName(std::string);
};

#endif /* Character_hpp */
