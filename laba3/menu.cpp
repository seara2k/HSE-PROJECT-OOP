#include "menu.h"



Menu::Menu(const Menu& other) {
	this->items = other.items;
}
Menu::~Menu() {
	for (auto &item : items) {
		delete item;
	}
}
vector<MenuItem*> Menu::getItems() const {
	return items;
}

MenuItem* Menu::getItem(const int &number) {
	return items[number];
}

ostream& operator<<(ostream& stream, const Menu& menu) {
	for (const auto &item : menu.getItems()) {
		cout << item->getClassType() << ": " << item->getItem() << endl;
	}
	return stream;
}

void Menu::addItem(MenuItem* menuitem) {
	items.push_back(menuitem);

}

void Menu::deleteItem(const int &number) {
	delete items[number];
	items.erase(items.begin() + number);
}
