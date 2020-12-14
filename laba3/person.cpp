#include "person.h"

Person::Person() {
    this->name = "";
    this->surname = "";
    this->state = "";
}

Person::Person(const string& n, const string& sn) {
    this->name = n;
    this->surname = sn;
}

Person::Person(const Person& other) {
    this->name = other.name;
    this->surname = other.surname;
    this->state = other.state;
}

string Person::getName() const {
    return name;
}

string Person::getSurname() const {
    return surname;
}

string Person::getState() const {
    return state;
}

void Person::setName(const string& name) {
    this->name = name;
}

void Person::setSurname(const string& surname) {
    this->surname = surname;
}

bool Person::operator==(const Person &other) const {
    if ((getName() == other.getName()) &&
            (getSurname() == other.getSurname()) &&
            (getState() == other.getState())) {
        return 1;
    } else {
        return 0;
    }
}

//
