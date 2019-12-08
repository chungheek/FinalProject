/***************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for SpaceShip class
******************************************************************/
#ifndef SpaceShip_hpp
#define SpaceShip_hpp

#include "Space.hpp"
#include <string>

using std::string;

class SpaceShip : public Space
{
private:
    Space *top;
    Space *bottom;
    Space *left;
    Space *right;
    Space *currentSpace;
    string spaceName;
    
public:
    SpaceShip();
    ~SpaceShip();
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

#endif /* SpaceShip_hpp */
