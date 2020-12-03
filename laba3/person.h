#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person { // abstract

  public:
    virtual std::string getName();
    virtual std::string getSurname();
    virtual std::string getState();
    virtual std::string getProf() = 0;
	virtual void setName();
	virtual void setSurmane();
	virtual void setState();
	virtual void setProf() = 0;

  private:
    std::string name;
    std::string surname;
    std::string state;
    std::string prof;

};
#endif // PERSON_H
