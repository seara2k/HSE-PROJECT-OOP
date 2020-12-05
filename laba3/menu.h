#ifndef MENU_H
#define MENU_H
#include <vector>
#include "drink.h"
#include "food.h"
#include <iostream>
class Menu {
  public:
	Menu() {};
	Menu(const Menu& other);
	std::vector<Food*> getFoods() const;
	std::vector<Drink*> getDrinks() const;
	void printMenu() const;

	void addFood(Food *food);
	void addDrink(Drink *drink);

  private:
	std::vector<Food*> foods;
	std::vector<Drink*> drinks;

};

#endif // MENU_H

// Меню
