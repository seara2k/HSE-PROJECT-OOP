#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person { // abstract

  public:
	virtual string getName();
	virtual string getSurname();
	virtual string getState();
	virtual string getProf() = 0;
	virtual void setName();
	virtual void setSurmane();
	virtual void setState();
	virtual void setProf() = 0;

  private:
	string name;
	string surname;
	string state;
	string prof;

};
#endif // PERSON_H