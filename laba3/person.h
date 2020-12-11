#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person { // abstract
  public:

    Person() {} ;
    Person(const Person& other);

    std::string getName() const;
    std::string getSurname() const;
    std::string getState() const;

    void setName(const std::string& name);
    void setSurmane(const std::string& surname);
    void setState(const std::string& state);

  private:
    std::string name;
    std::string surname;
    std::string state;

};

#endif // PERSON_H

//Работник ресторанаа
