#ifndef FOOD_H
#define FOOD_H
#include "menuitem.h"

class Food: public MenuItem {
  public:
	Food() {};
	Food(Food& other);
	std::string getItem() const override;
  private:
	int time_to_cook;
};

#endif // FOOD_H

// Еда из меню
