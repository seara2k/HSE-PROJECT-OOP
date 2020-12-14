#include <iostream>
#include <vector>
#include <map>
using namespace std;
#include "people.h"
#include "menu.h"
#include "mainwindow.h"
#include <QApplication>
#include <cassert>

int main(int argc, char *argv[]) {
	Food fish("name", 10, 20, 30, "ml", 500);
	Food fish2(fish);
	fish.setName("name2");
	fish.setPrice(100);
	fish.setAmount(200);
	fish.setPortionSize(300);
	fish.setPortionSizeUnit("litres");
	fish.setTimeToCook(5000);

	assert(fish.getName() == "name2");
	assert(fish.getPrice() == 100);
	assert(fish.getAmount() == 200);
	assert(fish.getPortionSize() == 300);
	assert(fish.getTimeToCook() == 5000);
	assert(fish.getPortionSizeUnit() == "litres");

	assert(fish2.getName() == "name");
	assert(fish2.getPrice() == 10);
	assert(fish2.getAmount() == 20);
	assert(fish2.getPortionSize() == 30);
	assert(fish2.getTimeToCook() == 500);
	assert(fish2.getPortionSizeUnit() == "ml");



	Drink cola("name", 10, 20, 30, "ml");
	Drink cola2(cola);

	cola.setName("name2");
	cola.setPrice(100);
	cola.setAmount(200);
	cola.setPortionSize(300);
	cola.setPortionSizeUnit("litres");

	Food *ptr = new Food(fish);
	Food *ptr2 = new Food(fish2);
	Drink *ptr3 = new Drink(cola);
	Drink *ptr4 = new Drink(cola2);

	Menu menu;
	menu.addItem(ptr);
	menu.addItem(ptr2);
	menu.addItem(ptr3);
	menu.addItem(ptr4);
	menu.deleteItem(0);
	menu.deleteItem(0);
	menu.deleteItem(0);
	menu.deleteItem(0);
	assert(menu.getItems().size() == 0);

	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
