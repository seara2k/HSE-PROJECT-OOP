#ifndef DRINK_H
#define DRINK_H
#include "menuitem.h"

class Drink: public MenuItem {
  public:
	Drink() {}; // инициализация
	Drink(const Drink& other); // копирование
	Drink(const std::string& name, const int& price, const int& amount, const int& portion_size, const std::string& portion_size_unit);
	std::string getItem() const override;
  private:

};

#endif // DRINK_H

// Напитки из меню
