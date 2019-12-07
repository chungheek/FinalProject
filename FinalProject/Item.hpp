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
    Item(int);
//    void useHealthPotion(Character&);
//    void setMagicItem(int);
//    void useMagicItem(int);
};

#endif /* Item_hpp */
