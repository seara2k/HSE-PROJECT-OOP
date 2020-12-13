#include "menu.h"



Menu::Menu(const Menu& other) {
	this->foods = other.foods;
	this->drinks = other.drinks;
}
Menu::~Menu() {
	for (auto &item : getFoods()) {
		delete item;
	}
	for (auto &item : getDrinks()) {
		delete item;
	}
}
vector<Food*> Menu::getFoods() const {
	return foods;
}
vector<Drink*> Menu::getDrinks() const {
	return drinks;
}
void Menu::printMenu() const {
	for (const auto &item : getFoods()) {
        cout << item->getItem() << endl;
	}
	for (const auto &item : getDrinks()) {
        cout << item->getItem() << endl;
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

void Menu::deleteFood(const int &number) {
	delete foods[number - 1];
	foods.erase(foods.begin() + number - 1);
}
void Menu::deleteDrink(const int &number) {
	delete drinks[number - 1];
	drinks.erase(drinks.begin() + - 1);
}
