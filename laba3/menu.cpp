#include "menu.h"



Menu::Menu(const Menu& other) {
	this->foods = other.foods;
	this->drinks = other.drinks;
}
std::vector<Food*> Menu::getFoods() const {
	return foods;
}
std::vector<Drink*> Menu::getDrinks() const {
	return drinks;
}
void Menu::printMenu() const {
	for (const auto &item : getFoods()) {
		std::cout << item->getItem() << std::endl;
	}
	for (const auto &item : getDrinks()) {
		std::cout << item->getItem() << std::endl;
	}
}

void Menu::addFood(Food *food) {
	Food *new_food = new Food(*food);
	foods.push_back(new_food);

}
void Menu::addDrink(Drink *drink) {
	Drink *new_drink = new Drink(*drink);
	drinks.push_back(new_drink);

}