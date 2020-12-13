#ifndef DRINK_H
#define DRINK_H
#include <string>
#include "menuitem.h"
using namespace std;

class Drink: public MenuItem {
  public:
	Drink() {}; // инициализация
	Drink(const Drink& other); // копирование
	Drink(const string& name, const int& price, const int& amount, const int& portion_size, const string& portion_size_unit);
	string getItem() const override;
	string getClassType() const override;
	void print(ostream& stream, const MenuItem& menuitem) const override;
	void read(istream& stream, MenuItem& menuitem) override;
    map<string,string> getFull() const override;
  private:

};

#endif // DRINK_H

// Напитки из меню
