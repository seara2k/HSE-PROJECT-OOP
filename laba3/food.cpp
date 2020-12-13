#include "food.h"

Food::Food(const Food& other) {
	this->name = other.name;
	this->price = other.price;
	this->amount = other.amount;
	this->portion_size = other.portion_size;
	this->portion_size_unit = other.portion_size_unit;
	this->time_to_cook = other.time_to_cook;
}
Food::Food(const string& name, const int& price, const int& amount, const int& portion_size, const string& portion_size_unit, const int& time_to_cook) {
	this->name = name;
	this->price = price;
	this->amount = amount;
	this->portion_size = portion_size;
	this->portion_size_unit = portion_size_unit;
	this->time_to_cook = time_to_cook;
}
int Food::getTimeToCook() const {
	return time_to_cook;
}
void Food::setTimeToCook(const int& time_to_cook) {
	this->time_to_cook = time_to_cook;
}
string Food::getItem() const {
	return getName() + ' ' + to_string(getPrice()) + ' ' + to_string(getAmount()) + ' ' + to_string(getPortionSize()) + ' ' + getPortionSizeUnit() + ' ' + to_string(getTimeToCook());
}
string Food::getClassType() const {
	return "FOOD";
}

void Food::print(ostream& stream, const MenuItem& menuitem) const {
	stream << getItem();
}
void Food::read(istream& stream, MenuItem& menuitem) {
	string new_name;
	int new_price;
	int new_amount;
	int new_portion_size;
	string new_portion_size_unit;
	int new_time_to_cook;
	stream >> new_name >> new_price >> new_amount >> new_portion_size >> new_portion_size_unit >> new_time_to_cook;
	menuitem = Food(new_name, new_price, new_amount, new_portion_size, new_portion_size_unit, new_time_to_cook);
}
