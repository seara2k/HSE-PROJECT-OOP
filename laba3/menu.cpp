#include "menu.h"

Menu::Menu(const Menu& other) {
    this->items = other.items;
}
Menu::~Menu() {
    for (size_t i = 0; i < getItems().size(); ++i) {
        deleteItem(i);
    }
}

vector<MenuItem*> Menu::getItems() const {
    return items;
}
MenuItem* Menu::getItem(const int &number) {
    return items[number];
}


void Menu::addItem(MenuItem* menuitem) {
    items.push_back(menuitem);

}
void Menu::deleteItem(const int &number) {
    if (number <= getItems().size()) {
        delete items[number];
        items[number] = nullptr;
        items.erase(items.begin() + number);
    }
}

istream& operator>>(istream& stream, Menu& menu) {

    while (stream) {
        string type;
        stream >> type;
        if (type == "DRINK") {
            Drink temp;
            stream >> temp;
            Drink *drink = new Drink(temp);
            menu.addItem(drink);

        } else if (type == "FOOD") {
            Food temp;
            stream >> temp;
            Food *food = new Food(temp);
            menu.addItem(food);
            stream.ignore(1);
        }
    }
    return stream;
}
ostream& operator<<(ostream& stream, const Menu& menu) {
    size_t n = 0;
    for (const auto &item : menu.getItems()) {
        ++n;
        if (n == menu.getItems().size())
            stream << item->getClassType() << " " << item->getItem();
        else
            stream << item->getClassType() << " " << item->getItem() << endl;

    }
    return stream;
}
