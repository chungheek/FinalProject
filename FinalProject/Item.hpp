/***************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for Item class
******************************************************************/

#ifndef Item_hpp
#define Item_hpp

#include <string>

using std::string;

class Item
{
private:
    int jetFuel;
    int healthPotion;
    int magicItem;
    string name;
    
public:
    Item();
    Item(int);
    string getItemName();
};

#endif /* Item_hpp */
