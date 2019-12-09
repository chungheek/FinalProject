/***************************************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Header file for Menu class
***************************************************************************************/

#ifndef Menu_hpp
#define Menu_hpp

#include <string>
using std::string;

class Menu
{
private:
public:
    int menu();
    int play();
    int integerValidator();
    string stringValidator();
    int yesOrNo();
    void printMap(int);
};
#endif /* Menu_hpp */
