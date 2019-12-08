/************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for HomeSpace class
***************************************************************/

#ifndef ClueSpace_hpp
#define ClueSpace_hpp

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
    Space *currentSpace;
    string spaceName;
    
public:
    ClueSpace(string);
    ~ClueSpace();
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
    string getClue();
    void setClue(string);
};

#endif /* ClueSpace_hpp */
