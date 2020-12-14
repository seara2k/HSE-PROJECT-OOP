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


	void addItem(MenuItem* menuitem);
	void deleteItem(const int &number);

	void getFromFile(const string& path) const;

	friend istream& operator>>(istream& stream, Menu& menu);
	friend ostream& operator<<(ostream & stream, const Menu & menu);

  private:
	vector<MenuItem*> items;

};
istream& operator>>(istream& stream, Menu& menu);
ostream& operator<<(ostream& stream, const Menu& menu);
#endif // MENU_H

//
