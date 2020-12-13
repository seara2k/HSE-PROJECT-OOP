#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "menu.h"
#include "people.h"

#ifdef _WIN32
#define CLEAR "cls"
#else //In any other OS
#define CLEAR "clear"
#endif

class Restaurant {
public:
    Restaurant();
    Restaurant(Restaurant& other);

    int startPanel();

    void menuPanel();



    void peoplePanel();

    void visitorsPanel();
    void addVisitorPanel();
    void editVisitorPanel();
    void deleteVisitorPanel();

    void workersPanel();
    void addWorkerPanel();
    void editWorkerPanel();
    void deleteWorkerPanel();
    void addMenuItemPanel();


	void openMenuPanel(); // opens menu panel for editing menu
	void addItem(); // добавление
	void delItem(); // удаление
	void editItem(); // редактирование

    void openWorkersPanel(); // показывает работников и че они делают (над) каким заказом работают

private:
	Menu menu;
	People people;

};

#endif // RESTAURANT_H 

// Ресторан
