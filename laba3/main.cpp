#include <iostream>
#include <vector>
#include <map>
using namespace std;
#include "people.h"
#include "menu.h"
#include "restaurant.h"

#ifdef _WIN32
#define CLEAR "cls"
#else //In any other OS
#define CLEAR "clear"
#endif

int main() {
//	Food fish("name", 10, 20, 30, "ml", 500);
//	Food fish2(fish);

//	fish.setName("name2");
//	fish.setPrice(100);
//	fish.setAmount(200);
//	fish.setPortionSize(300);
//	fish.setPortionSizeUnit("litres");
//	fish.setTimeToCook(5000);

//    Drink cola("name", 10, 20, 30, "ml");
//	Drink cola2(cola);

//	cola.setName("name2");
//	cola.setPrice(100);
//	cola.setAmount(200);
//	cola.setPortionSize(300);
//	cola.setPortionSizeUnit("litres");

//	Food *ptr = &fish;
//	Food *ptr2 = &fish2;
//	Drink *ptr3 = &cola;
//	Drink *ptr4 = &cola2;

//    Menu menu;
//    menu.addFood(ptr);
//    menu.addFood(ptr2);
//    menu.addDrink(ptr3);
//    menu.addDrink(ptr4);
//    menu.printMenu();


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

    int index;
    Restaurant r;
    do {
        index = r.startPanel();
        if (index == 1) {
            //r.menuPanel();
            cout << "1\n\n";
        }
        else if (index == 2) {
            cout << "2\n\n";
            //r.peoplePanel();
        }
        else if (index == 3) {
            break;
        }
        else {
            cout << "Error: wrong index entered\n\n";
        }

    } while (index != 3);

	return 0;
}
