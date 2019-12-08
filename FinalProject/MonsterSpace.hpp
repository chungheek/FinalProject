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
    Space *currentSpace;
    string spaceName;
    Character *monster;
    
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
    Space *getCurrentSpsace();
    void setCurrentSpace(Space*);
    string getSpaceName();
};

#endif /* MonsterSpace_hpp */
