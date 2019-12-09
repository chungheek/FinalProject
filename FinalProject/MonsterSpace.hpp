/*******************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for MonsterSpace class
**********************************************************/

#ifndef MonsterSpace_hpp
#define MonsterSpace_hpp

#include "Space.hpp"
#include "Character.hpp"
#include <string>

using std::string;

class MonsterSpace : public Space
{
private:
    Space *top;
    Space *bottom;
    Space *left;
    Space *right;
    string spaceName;
    string spaceType;
    Character *monster;
    int counter;
    
public:
    MonsterSpace(Character*, string);
    ~MonsterSpace();
    Space *getTop();
    void setTop(Space*);
    Space *getBottom();
    void setBottom(Space*);
    Space *getLeft();
    void setLeft(Space*);
    Space *getRight();
    void setRight(Space*);
    Space *getCurrentSpace();
    string getSpaceName();
    string getSpaceType();
    int getCounter();
    void performSpaceAction();
};

#endif /* MonsterSpace_hpp */
