#ifndef MENUITEM_H
#define MENUITEM_H
#include <string>

class MenuItem { //abstract
public:
    MenuItem();
    MenuItem(MenuItem& other);
    std::string getName();
    int getPrice();
	virtual int getServing() = 0;
    void setName(std::string& name);
    void setPrice(int& price);
	virtual void setServing() = 0;

private:
	int price;
    std::string name;
    int amount;
	int serving;
};

#endif // MENUITEM_H

// Еда или напиток из меню
