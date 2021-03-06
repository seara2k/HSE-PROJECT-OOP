#ifndef FOOD_H
#define FOOD_H
#include <string>
#include "menuitem.h"

class Food: public MenuItem {
  public:
	Food();
	Food(const Food& other);
	Food(const string& name, const int& price, const int& amount, const int& portion_size, const string& portion_size_unit, const int& time_to_cook);

    int getTimeToCook() const override;
    void setTimeToCook(const int& time_to_cook) override;

	string getItem() const override;
	string getClassType() const override;

	void print(ostream& stream) const override;
	void read(istream& stream) override;

	map<string, string> getFull() const override;

  private:
	int time_to_cook;
};

#endif // FOOD_H

//
