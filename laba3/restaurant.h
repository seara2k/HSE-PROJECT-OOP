#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "menu.h"
#include "people.h"

class Restaurant {
public:
    Restaurant();
    Restaurant(Restaurant& other);

    void startPanel();
    void menuPanel();
    void peoplePanel();
    void visitorsPanel();
    void workersPanel();



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
