#include <iostream>
#include <vector>
#include <map>
using namespace std;
#include "people.h"
#include "menu.h"
#include "restaurant.h"
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


    Visitor garik;
    garik.setName("garik");
    garik.setName("uebkovich");
    Worker work1, work2, work3, temp;
    work1.setName("worker 1");
    work2.setName("worker 2");
    work3.setName("worker 3");

    work1.setProf(1);
    work2.setProf(2);
    work3.setProf(3);

    work1.setState(1);
    work2.setState(1);
    work3.setState(1);


    // тестирование Worker
    People people;
    people.addWorker(work1);
    people.addWorker(work2);
    people.addWorker(work3);
    people.printWorkers();
    cout << people.workersNumber() << endl;
    people.deleteWorker(1);
    people.printWorkers();

    temp = people.getWorker(1);
    temp.setSurname("abc");
    people.setWorker(temp, 1);
    people.printWorkers();
    cout << people.workersNumber() << endl;

    Restaurant r;

	return 0;
}
