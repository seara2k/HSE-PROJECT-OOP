#ifndef MENU_H
#define MENU_H
#include <vector>
#include "drink.h"
#include "food.h"
#include <iostream>
using namespace std;

class Menu {
  public:
	Menu() {};
	Menu(const Menu& other);
	~Menu();
    vector<Food*> getFoods() const;
    vector<Drink*> getDrinks() const;
	void printMenu() const;

	void addFood(Food *food);
	void addDrink(Drink *drink);

	void deleteFood(const int &number);
	void deleteDrink(const int &number);

  private:
    vector<Food*> foods;
    vector<Drink*> drinks;

};

#endif // MENU_H

// Меню
