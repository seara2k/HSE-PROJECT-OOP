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

//    Visitor Ivan, Owan;
//    Ivan.setName("Ivan");
//    Ivan.setName("Ivanov");
//    Owan.setName("Ivan");
//    Owan.setName("Ivanov");
//    if (Owan == Ivan) {
//        cout << "POGGERS: "<< endl;
//    }
//    Worker work1, work2, work3, work4, temp;
//    work1.setName("worker 1");
//    work2.setName("worker 2");
//    work3.setName("worker 3");
//    work4.setName("worker 3");

//    work1.setProf("1");
//    work2.setProf("2");
//    work3.setProf("3");
//    work4.setProf("3");

//    work1.setState("1");
//    work2.setState("1");
//    work3.setState("1");
//    work4.setState("1");


//    // тестирование Worker
//    People people;
//    people.addWorker(work1);
//    people.addWorker(work2);
//    people.addWorker(work3);
//    people.addWorker(work4);
//    people.setWorker(work4, 1);
//    people.printWorkers();
//    cout << people.workersNumber() << endl;

//    int index;
//    Restaurant r;
//    do {
//        index = r.startPanel();
//        if (index == 1) {
//            //r.menuPanel();
//            cout << "1\n\n";
//        }
//        else if (index == 2) {
//            cout << "2\n\n";
//            //r.peoplePanel();
//        }
//        else if (index == 3) {
//            break;
//        }
//        else {
//            cout << "Error: wrong index entered\n\n";
//        }

//    } while (index != 3);

	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
