/************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for HomeSpace class
***************************************************************/

#ifndef HomeSpace_hpp
#define HomeSpace_hpp

#include <stdio.h>
#include "Space.hpp"

class HomeSpace : Space
{
private:
    int healCounter;
    Space *top;
    Space *bottom;
    Space *left;
    Space *right;
    Space *currentSpace;
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
};

#endif /* HomeSpace_hpp */
