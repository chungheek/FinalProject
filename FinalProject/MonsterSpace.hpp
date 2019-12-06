/*******************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for MonsterSpace class
**********************************************************/

#ifndef MonsterSpace_hpp
#define MonsterSpace_hpp

#include <stdio.h>
#include "Space.hpp"

class MonsterSpace : Space
{
private:
    Space *top;
    Space *bottom;
    Space *left;
    Space *right;
    Space *currentSpace;
public:
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

#endif /* MonsterSpace_hpp */
