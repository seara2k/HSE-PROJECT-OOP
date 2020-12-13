#include "drink.h"
Drink::Drink(const Drink& other) {
	this->name = other.name;
	this->price = other.price;
	this->amount = other.amount;
	this->portion_size = other.portion_size;
	this->portion_size_unit = other.portion_size_unit;
}
Drink::Drink(const string& name, const int& price, const int& amount, const int& portion_size, const string& portion_size_unit) {
	this->name = name;
	this->price = price;
	this->amount = amount;
	this->portion_size = portion_size;
	this->portion_size_unit = portion_size_unit;
}
string Drink::getItem() const {
	return getName() + ' ' + to_string(getPrice()) + ' ' + to_string(getAmount()) + ' ' + to_string(getPortionSize()) + ' ' + getPortionSizeUnit();
}
string Drink::getClassType() const {
	return "DRINK";
}
void Drink::print(ostream& stream, const MenuItem& menuitem) const {
	stream << getItem();
}
void Drink::read(istream & stream, MenuItem & menuitem) {
	string new_name;
	int new_price;
	int new_amount;
	int new_portion_size;
	string new_portion_size_unit;
	stream >> new_name >> new_price >> new_amount >> new_portion_size >> new_portion_size_unit;
	menuitem = Drink(new_name, new_price, new_amount, new_portion_size, new_portion_size_unit);
}

