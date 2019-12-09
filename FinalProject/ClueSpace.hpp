/************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for HomeSpace class
***************************************************************/

#ifndef ClueSpace_hpp
#define ClueSpace_hpp

#include "Character.hpp"
#include "Space.hpp"
#include <string>

using std::string;

class ClueSpace : public Space
{
private:
    string clue;
    Space *top;
    Space *bottom;
    Space *left;
    Space *right;
    string spaceName;
    string spaceType;
    int counter;
    
public:
    ClueSpace(string,string);
    ~ClueSpace();
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
    string getClue();
    void setClue(string);
    int getCounter();
    void performSpaceAction();
};

#endif /* ClueSpace_hpp */
