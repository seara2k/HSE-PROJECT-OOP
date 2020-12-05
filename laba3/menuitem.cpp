#include "menuitem.h"

MenuItem::MenuItem(const MenuItem& other) {
	this->price = other.price;
	this->name = other.name;
	this->amount = other.amount;
}
std::string MenuItem::getName() const {
	return name;
}
int MenuItem::getPrice() const {
	return price;
}
void MenuItem::setName(const std::string& name) {
	this->name = name;
}
void MenuItem::setPrice(const int& price) {
	this->price = price;
}

