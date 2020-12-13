#include "menuitem.h"

MenuItem::MenuItem(const MenuItem& other) {
	this->name = other.name;
	this->price = other.price;
	this->amount = other.amount;
	this->portion_size = other.portion_size;
	this->portion_size_unit = other.portion_size_unit;
}

MenuItem::MenuItem(const string& name, const int& price, const int& amount, const int& portion_size, const string& portion_size_unit) {
	this->name = name;
	this->price = price;
	this->amount = amount;
	this->portion_size = portion_size;
	this->portion_size_unit = portion_size_unit;
}

string MenuItem::getName() const {
	return name;
}
int MenuItem::getPrice() const {
	return price;
}
int MenuItem::getAmount() const {
	return amount;
}
int MenuItem::getPortionSize() const {
	return portion_size;
}
string MenuItem::getPortionSizeUnit() const {
	return portion_size_unit;
}

void MenuItem::setName(const string& name) {
	this->name = name;
}
void MenuItem::setPrice(const int& price) {
	this->price = price;
}
void MenuItem::setAmount(const int& amount) {
	this->amount = amount;
}
void MenuItem::setPortionSize(const int& portion_size) {
	this->portion_size = portion_size;
}
void MenuItem::setPortionSizeUnit(const string& portion_size_unit) {
	this->portion_size_unit = portion_size_unit;
}

ostream& operator<<(ostream& stream, const MenuItem& menuitem) {
	menuitem.print(stream);
	return stream;
}
istream& operator>>(istream& stream, MenuItem& menuitem) {
	menuitem.read(stream);
	return stream;
}
