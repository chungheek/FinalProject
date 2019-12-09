/************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for HomeSpace class
***************************************************************/

#ifndef HomeSpace_hpp
#define HomeSpace_hpp

#include "Space.hpp"
#include "Character.hpp"
#include "MainCharacter.hpp"
#include "Item.hpp"
#include <string>

using std::string;

class HomeSpace : public Space
{
private:
    int healCounter;
    Space *top;
    Space *bottom;
    Space *left;
    Space *right;
    string spaceName;
    string spaceType;
    int counter;
    Item item;
    Item jetFuel;
    
public:
    HomeSpace();
    ~HomeSpace();
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
    void performSpaceAction(MainCharacter&);
    Item getItem();
    void setItem(Item&);
    Item getJetFuel();
    void setJetFuel(Item&);
};

#endif /* HomeSpace_hpp */
