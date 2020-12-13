#include "restaurant.h"

Restaurant::Restaurant() {
    system(CLEAR);
}

bool is_number(const string& s) {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int Restaurant::startPanel() {
    string action;
    cout << "MAIN PANEL\n" << endl;
    cout << "Choose the action:" << endl;
    cout << "1 - view menu" << endl;
    cout << "2 - manage people" << endl;
    cout << "3 - exit from program" << endl;
    cin >> action;
    if (action == "1") {
        system(CLEAR);
        return(1);
    } else if (action == "2") {
        system(CLEAR);
        return(2);
    } else if (action == "3") {
        system(CLEAR);
        return(3);
    } else {
        system(CLEAR);
        return(4);
    }
}


void Restaurant::menuPanel() {
    Food* test = new Food("name", 10, 20, 30, "ml", 500);
    Food* test1 = new Food("name", 10, 20, 30, "lol", 500);
    Drink* cola = new Drink("name", 10, 20, 30, "ml");
    Drink* cola1 = new Drink("name", 10, 20, 30, "ml");
    menu.addItem(test);
    menu.addItem(test1);
    menu.addItem(cola);
    menu.addItem(cola1);
    cout << menu << endl;
    string action;
    cout << "MENU MANAGEMENT PANEL\n" << endl;
    cout << "Choose the action:" << endl;
    cout << "1 - add item" << endl;
    cout << "2 - delete item" << endl;
    cout << "3 - change item" << endl;
    cout << "4 - return to main panel" << endl;
    cin >> action;
    if (action == "1") {
        system(CLEAR);

    } else if (action == "2") {

        startPanel();
    } else {
        system(CLEAR);
        cout << "Error: wrong index entered" << endl << endl;
        peoplePanel();
    }

}

void Restaurant::addMenuItemPanel() {
    system(CLEAR);
    cout << menu << endl;
    string action;
    cout << "ADD MENU ITEM\n" << endl;
    cout << "Choose the action:" << endl;
    cout << "1 - add food" << endl;
    cout << "2 - add drink" << endl;
    cout << "3 - back" << endl;
    if (action == "1") {
        Food temp;
        cin >> temp;
        Food* new_food = new Food(temp);
        menu.addItem(new_food);

    } else if (action == "2") {
        Food temp;
        cin >> temp;
        Food* new_food = new Food(temp);
        menu.addItem(new_food);

        startPanel();
    } else {
        system(CLEAR);
        cout << "Error: wrong index entered" << endl << endl;
        peoplePanel();
    }

}
// void Restaurant::itemsPanel() {



// }

























void Restaurant::peoplePanel() {
    string action;
    cout << "PEOPLE MANAGEMENT PANEL\n" << endl;
    cout << "Choose the action:" << endl;
    cout << "1 - manage visitors (not working)" << endl;
    cout << "2 - manage workers (not working)" << endl;
    cout << "3 - return to main panel" << endl;
    cin >> action;
    if (action == "1") {
        system(CLEAR);
        visitorsPanel();
    } else if (action == "2") {
        system(CLEAR);
        workersPanel();
    } else if (action == "3") {
        system(CLEAR);
        startPanel();
    } else {
        system(CLEAR);
        cout << "Error: wrong index entered" << endl << endl;
        peoplePanel();
    }
}

void Restaurant::visitorsPanel() {
    string action;
    cout << "VISITORS PANEL\n" << endl;
    cout << "Choose the action:" << endl;
    cout << "1 - add visitor" << endl;
    if (people.visitorsNumber() != 0) {
        cout << "2 - edit information about visitor" << endl;
        cout << "3 - delete visitor" << endl;
        cout << "4 - return to people management panel" << endl;
        cout << endl << "visitors list:" << endl;
        people.printVisitors();
    } else {
        cout << "4 - return to people management panel" << endl;
    }
    cin >> action;
    if (action == "1") {
        addVisitorPanel();
    } else if ((action == "2") && (people.visitorsNumber() != 0)) {
        //editVisitorPanel();
    } else if ((action == "3") && (people.visitorsNumber() != 0)) {
        //deleteVisitorPanel();
    } else if (action == "4") {
        peoplePanel();
    } else {
        system(CLEAR);
        cout << "Error: wrong index entered" << endl << endl;
        visitorsPanel();
    }
}

void Restaurant::addVisitorPanel() {
    string name, surname, state;
    cout << "name >> ";
    cin >> name;
    cout << "surname >> ";
    cin >> surname;
    cout << "state:\n"
         "1 if visitor is waiting for waiter\n"
         "2 if visitor is waiting for order\n"
         "3 if visitor is eating\n"
         "4 if visitor is paying\n"
         ">> ";
    cin >> state;
    system(CLEAR);
    Visitor tmp(name, surname, state);
    if (tmp.getState() != "") {
        people.addVisitor(tmp);
    } else {
        cout << "Error while adding new visitor\n\n";
    }
    visitorsPanel();
}

void Restaurant::editVisitorPanel() {
    system(CLEAR);
    string tmp;
    cout << "visitors list:\n";
    people.printVisitors();
    cout << "enter the index of visitor you want to change\n>> ";
    cin >> tmp;
    if (is_number(tmp) && (0 <= stoi(tmp)) && (stoi(tmp) < people.visitorsNumber())) {
        Visitor old = people.getVisitor(stoi(tmp));
        cout << "What do you want to change:"
             "1 - name"
             "2 - surname"
             "3 - state"
             ">> ";
        cin >> tmp;
        switch (stoi(tmp)) {

        }
    }

}

void Restaurant::deleteVisitorPanel() {

}

void Restaurant::workersPanel() {
    string action;
    cout << "WORKERS PANEL\n" << endl;
    cout << "Choose the action:" << endl;
    cout << "1 - add worker" << endl;
    if (people.workersNumber() != 0) {
        cout << "2 - edit information about worker" << endl;
        cout << "3 - delete worker" << endl;
        cout << "4 - return to people management panel" << endl;
        cout << endl << "workers list:" << endl;
        people.printWorkers();
    } else {
        cout << "4 - return to people management panel" << endl;
    }
    cin >> action;
    if (action == "1") {
        //addWorkerPanel();
    } else if ((action == "2") && (people.workersNumber() != 0)) {
        //editWorkerPanel();
    } else if ((action == "3") && (people.workersNumber() != 0)) {
        //deleteWorkerPanel();
    } else if (action == "4") {
        peoplePanel();
    } else {
        system(CLEAR);
        cout << "Error: wrong index entered" << endl << endl;
        workersPanel();
    }
}

void Restaurant::addWorkerPanel() {
    string name, surname, state, prof;
    cout << "name >> ";
    cin >> name;
    cout << "surname >> ";
    cin >> surname;
    cout << "prof:"
         "1 if cooker"
         "2 if waiter"
         "3 if cleaner"
         ">> ";
    cin >> prof;
    cout << "state: "
         "1 if visitor is waiting for waiter"
         "2 if visitor is waiting for order"
         "3 if visitor is eating"
         "4 if visitor is paying"
         ">> ";
    cin >> state;
    Worker tmp(name, surname, state, prof);
    people.addWorker(tmp);

}

void Restaurant::editWorkerPanel() {

}

void Restaurant::deleteWorkerPanel() {

}
