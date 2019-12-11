/*************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for Space abstract
**      base class.
***************************************************/

#ifndef Space_h
#define Space_h

#include "Character.hpp"
#include <string>

using std::string;

class Space
{
protected:
    Space *top;
    Space *bottom;
    Space *left;
    Space *right;
    Space *currentSpace;
    string spaceName;
    string spaceType;
    int counter;
    Item item;
    Item jetFuel;
    
public:
    virtual ~Space() = default;
    virtual Space *getTop() = 0;
    virtual void setTop(Space*) = 0;
    virtual Space *getBottom() = 0;
    virtual void setBottom(Space*) = 0;
    virtual Space *getLeft() = 0;
    virtual void setLeft(Space*) = 0;
    virtual Space *getRight() = 0;
    virtual void setRight(Space*) = 0;
    virtual Space *getCurrentSpace() = 0;
    virtual string getSpaceName() = 0;
    virtual string getSpaceType() = 0;
    virtual int getCounter() = 0;
    virtual void performSpaceAction() = 0;
    virtual Item getItem() = 0;
    virtual void setItem(Item&) = 0;
    virtual Item getJetFuel() = 0;
    virtual void setJetFuel(Item&) = 0;
};

#endif /* Space_h */
