#ifndef MENU_H
#define MENU_H
#include <vector>
#include "drink.h"
#include "menuitem.h"
#include "food.h"
#include <iostream>
using namespace std;

class Menu {
  public:
	Menu() {};
	Menu(const Menu& other);
	~Menu();

	vector<MenuItem*> getItems() const;
	MenuItem* getItem(const int &number);

	friend ostream& operator<<(ostream& stream, const Menu& menu);

	void addItem(MenuItem* menuitem);
	void deleteItem(const int &number);

  private:
	vector<MenuItem*> items;

};
ostream& operator<<(ostream& stream, const Menu& menu);
#endif // MENU_H

// Меню
