#include <iostream>
#include <vector>
#include <map>
using namespace std;
#include "food.h"
#include "menuitem.h"
#include "drink.h"
#include "menu.h"
int main() {
	Food fish("name", 10, 20, 30, "ml", 500);
	Food fish2(fish);
	// cout << fish.getItem() << endl;
	// cout << fish2.getItem() << endl;
	// cout << "////////////////////////" << endl;
	fish.setName("name2");
	fish.setPrice(100);
	fish.setAmount(200);
	fish.setPortionSize(300);
	fish.setPortionSizeUnit("litres");
	fish.setTimeToCook(5000);
	// cout << fish.getItem() << endl;
	// cout << fish2.getItem() << endl;
	// cout << "////////////////////////" << endl;

	// cout <<  "DRINK" << endl;
	Drink cola("name", 10, 20, 30, "ml");
	Drink cola2(cola);
	// cout << cola.getItem() << endl;
	// cout << cola2.getItem() << endl;
	// cout << "////////////////////////" << endl;
	cola.setName("name2");
	cola.setPrice(100);
	cola.setAmount(200);
	cola.setPortionSize(300);
	cola.setPortionSizeUnit("litres");
	// cout << cola.getItem() << endl;
	// cout << cola2.getItem() << endl;
	// cout << "////////////////////////" << endl;


	Food *ptr = &fish;
	Food *ptr2 = &fish2;
	Drink *ptr3 = &cola;
	Drink *ptr4 = &cola2;
	// cout << "VECTOR" << endl;
	// std::vector<MenuItem*> test;
	// test.push_back(ptr);
	// test.push_back(ptr2);
	// test.push_back(ptr3);
	// test.push_back(ptr4);

	// for (const auto &item : test) {
	// 	cout << item->getItem() << endl;
	// }


	Menu menu;
	menu.addFood(ptr);
	menu.addFood(ptr2);
	menu.addDrink(ptr3);
	menu.addDrink(ptr4);
	menu.printMenu();


	return 0;
}