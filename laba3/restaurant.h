#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "menu.h"
#include "people.h"

class Restaurant {


	void newVisitor(); // adds a visitor and makes order


	void viewStatus(); // shows активных and ушедших visitors
	void makeInactive(); // делает посетителя ушедшим



	void openMenuPanel(); // opens menu panel for editing menu
	void addItem(); // добавление
	void delItem(); // удаление
	void editItem(); // редактирование

	void openWorkersPanel(); // показывает работников и че они делают (над) каким заказом работают)
  private:
	Menu menu;
	People people;



};



#endif // RESTAURANT_H 

