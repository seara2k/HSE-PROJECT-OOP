#ifndef MENU_H
#define MENU_H
#include <vector>
#include "drink.h"
#include "food.h"

class Menu {
public:
    Menu();
    Menu(Menu& other);
    std::vector<Food> getFood();
    std::vector<Drink> getDrink();

    void addFood();
    void addDrink();

private:
    std::vector<Food> food;
    std::vector<Drink> drinks;

};

#endif // MENU_H

// Меню
