#include <iostream>
#include <vector>
#include <map>
using namespace std;



class Person { // abstract

	string name;
	string surname;
	string status;
	string getName();
	string getSurname();
	string getState();
	string setName();
	string setSurmane();
	string setStatus();

};


class Cook: public Person {

};


class Visitor: public Person {

};


class Waiter: public Person {

};

class Cleaner: public Person {

};




class MenuItem { //abstract
	int price;
	string name;
};

class Food: public MenuItem {

};
class Drinks: public MenuItem {

};



class Menu {


	vector<Food> food;
	vector<Drinks> drinks;

};


class Restor{


	void newVisitor(); // adds a visitor and makes order


	void viewStatus(); // shows активных and ушедших visitors
	void makeInactive(); // делает посетителя ушедшим



	void openMenuPanel(); // opens menu panel for editing menu
	void addItem(); // добавление
	void delItem(); // удаление
	void editItem(); // редактирование

	void openWorkersPanel(); // показывает работников и че они делают (над) каким заказом работают)




};



int main() {






	return 0;
}