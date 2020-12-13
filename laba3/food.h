#ifndef FOOD_H
#define FOOD_H
#include <string>
#include "menuitem.h"

class Food: public MenuItem {
  public:
	Food() {};
	Food(const Food& other);
	Food(const MenuItem& other);
    Food(const string& name, const int& price, const int& amount, const int& portion_size, const string& portion_size_unit, const int& time_to_cook);
	int getTimeToCook() const;
	void setTimeToCook(const int& time_to_cook);
    string getItem() const override;
    string getClassType() const override;
    void print(ostream& stream, const MenuItem& menuitem) const override;
    void read(istream& stream, MenuItem& menuitem) override;


  private:
	int time_to_cook;
};

#endif // FOOD_H

// Еда из меню
