#include "person.h"


Person::Person(const Person& other) {
	this->name = other.name;
	this->surname = other.surname;
	this->state = other.state;
}

std::string Person::getName() const {
	return name;
}
std::string Person::getSurname() const {
	return surname;
}

std::string Person::getState() const {
	return state;
}

void Person::setName(const std::string& name) {
	this->name = name;
}
void Person::setSurmane(const std::string& surname) {
	this->surname = name;
}
void Person::setState(const std::string& state) {
	this->state = state;
}

