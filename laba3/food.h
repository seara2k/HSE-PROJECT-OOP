#ifndef FOOD_H
#define FOOD_H
#include "menuitem.h"

class Food: public MenuItem {
  public:
	Food() {};
	Food(Food& other);
	Food(const std::string& name, const int& price, const int& amount, const int& portion_size, const std::string& portion_size_unit, const int& time_to_cook);
	int getTimeToCook() const;
	void setTimeToCook(const int& time_to_cook);
	std::string getItem() const override;

  private:
	int time_to_cook;
};

#endif // FOOD_H

// Еда из меню
