#include "restaurant.h"

Restaurant::Restaurant() {
    startPanel();
}

void Restaurant::startPanel() {
    int action;
    cout << "MAIN WINDOW" << endl;
    cout << "Choose the action:" << endl;
    cout << "1 - manage menu (not working)" << endl;
    cout << "2 - manage people" << endl;
    cin >> action;
    if (action == 2) {
        system("cls");
        peoplePanel();
    }

}

void Restaurant::peoplePanel() {
    int action;
    cout << "PEOPLE WINDOW" << endl;
    cout << "Choose the action:" << endl;
    cout << "1 - manage workers (not working)" << endl;
    cout << "2 - manage visitors (not working)" << endl;
    cout << "3 - return to main window" << endl;
    cin >> action;
    if (action == 1) {
        system("cls");
        //workersPanel();
    }
    else if (action == 3) {
        system("cls");
        startPanel();
    }
}

void Restaurant::visitorsPanel() {

}

void Restaurant::workersPanel() {

}
