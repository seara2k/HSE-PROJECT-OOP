#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person { // abstract
public:

    Person();
    Person(const string& name, const string& surname, const string& state);
    Person(const Person& other);

    string getName() const;
    string getSurname() const;
    string getState() const;

    void setName(const string& name);
    void setSurname(const string& surname);
    virtual void setState(const int& i) = 0;
    virtual void printInfo() const = 0;

protected:
    string state;

private:
    string name;
    string surname;

};

#endif // PERSON_H
