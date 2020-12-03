#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person { // abstract
public:
    Person();
    Person(Person& other);
    std::string getName();
    std::string getSurname();
    virtual std::string getState();
    virtual std::string getProf() = 0;
    void setName();
    void setSurmane();
	virtual void setState();
    virtual void setProf() = 0;

private:
    std::string name;
    std::string surname;
    std::string state;

};

#endif // PERSON_H

//Работник ресторана
