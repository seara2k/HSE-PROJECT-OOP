#include "drink.h"

Drink::Drink() {
	this->name = "UNKNOWN";
	this->price = 0;
	this->amount = 0;
	this->portion_size = 0;
	this->portion_size_unit = "UNKNOWN";
}
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

void Drink::print(ostream& stream) const {
	stream << getItem();
}

void Drink::read(istream & stream) {
	string new_name;
	int new_price;
	int new_amount;
	int new_portion_size;
	string new_portion_size_unit;
	stream >> new_name >> new_price >> new_amount >> new_portion_size >> new_portion_size_unit;
	*this = Drink(new_name, new_price, new_amount, new_portion_size, new_portion_size_unit);
}

map<string, string> Drink::getFull() const {
	map<string, string> temp;
	temp["1  Name"] = getName();
	temp["2  Type"] = getClassType();
	temp["3  Price"] = to_string(getPrice());
	temp["4  Amount"] = to_string(getAmount());
	temp["5  Portion Size"] = to_string(getPortionSize());
	temp["6  Portion size unit"] = getPortionSizeUnit();
	return temp;
}

