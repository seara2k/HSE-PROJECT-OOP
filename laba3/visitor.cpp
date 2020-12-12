#include "visitor.h"

Visitor::Visitor() :
    Person() {

}

Visitor::Visitor(const string& n, const string& sn,const string& s) :
    Person(n, sn, s) {

}

Visitor::Visitor(const Visitor& other) :
    Person(other) {

}

void Visitor::setState(const int& i) {
    if (i == 1) {
        this->state = "is waiting for the waiter";
    }
    else if (i == 2) {
        this->state = "is waiting for order";
    }
    else if (i == 3) {
        this->state = "is eating";
    }
    else if (i == 4) {
        this->state = "is paying";
    }
    else {
        cout << "Error: wrong state id";
    }
}

void Visitor::printInfo() const {
    cout << getName() << " " << getSurname() << " " << getState() << endl;
}
