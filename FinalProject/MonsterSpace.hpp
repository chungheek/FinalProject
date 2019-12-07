/*******************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for MonsterSpace class
**********************************************************/

#ifndef MonsterSpace_hpp
#define MonsterSpace_hpp

#include "Space.hpp"
#include <string>

using std::string;

class MonsterSpace : Space
{
private:
    Space *top;
    Space *bottom;
    Space *left;
    Space *right;
    Space *currentSpace;
    string spaceName;
    
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
    string getSpaceName();
    void setSpaceName(string);
};

#endif /* MonsterSpace_hpp */
