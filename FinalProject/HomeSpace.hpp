/************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for HomeSpace class
***************************************************************/

#ifndef HomeSpace_hpp
#define HomeSpace_hpp

#include "Space.hpp"
#include "Character.hpp"
#include <string>

using std::string;

class HomeSpace : Space
{
private:
    int healCounter;
    Space *top;
    Space *bottom;
    Space *left;
    Space *right;
    Space *currentSpace;
    string spaceName;
    
public:
    void heal(Character&);
    Space *getTop();
    void setTop(Space*);
    Space *getBottom();
    void setBottom(Space*);
    Space *getLeft();
    void setLeft(Space*);
    Space *getRight();
    void setRight(Space*);
    Space *getCurrentSpsace();
    void setCurrentSpace(Space*);
    string getSpaceName();
    void setSpaceName(string);
};

#endif /* HomeSpace_hpp */
