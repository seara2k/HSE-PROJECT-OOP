#include "drink.h"
Drink::Drink(Drink& other) {
	this->name = other.name;
	this->price = other.price;
	this->amount = other.amount;
	this->portion_size = other.portion_size;
	this->portion_size_unit = other.portion_size_unit;
}
Drink::Drink(const std::string& name, const int& price, const int& amount, const int& portion_size, const std::string& portion_size_unit) {
	this->name = name;
	this->price = price;
	this->amount = amount;
	this->portion_size = portion_size;
	this->portion_size_unit = portion_size_unit;
}
std::string Drink::getItem() const {
	return getName() + ' ' + std::to_string(getPrice()) + ' ' + std::to_string(getAmount()) + ' ' + std::to_string(getPortionSize()) + ' ' + getPortionSizeUnit();
}