#include "visitor.h"

Visitor::Visitor() :
    Person() {

}

Visitor::Visitor(const string& n, const string& sn, const string& s) :
    Person(n, sn) {
    setState(s);
}

Visitor::Visitor(const Visitor& other) :
    Person(other) {

}

void Visitor::setState(const string& i) {
    if (i == "1") {
        this->state = "is_waiting_for_the_waiter";
    } else if (i == "2") {
        this->state = "is_waiting_for_order";
    } else if (i == "3") {
        this->state = "is_eating";
    } else if (i == "4") {
        this->state = "is_paying";
    } else {
        cout << "Error: incorrect index\n";
    }
}

void Visitor::printInfo() const {
    cout << getName() << " " << getSurname() << " " << getState() << endl;
}

string Visitor::getInfo() const {
    return getName() + " " + getSurname() + " " + getState();
}

string Visitor::getClassType() const {
    return "Visitor";
}
