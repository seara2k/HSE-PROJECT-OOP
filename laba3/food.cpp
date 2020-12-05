#include "food.h"

Food::Food(Food& other) {
	this->price = other.price;
	this->name = other.name;
	this->amount = other.amount;
	this->time_to_cook = other.time_to_cook;
}

std::string Food::getItem() const {
	return std::to_string(price) + ' ' + name + ' ' + std::to_string(amount) + ' ' + std::to_string(time_to_cook);
}
