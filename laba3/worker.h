#ifndef WORKER_H
#define WORKER_H

#include <iostream>
#include <string>
#include "person.h"
using namespace std;

class Worker: public Person {
  public:
	Worker();
	Worker(const string& name, const string& surname, const string& state, const string& prof);
	Worker(const Worker& other);
	string getProf() const;
	void setProf(const string& prof);
	void setState(const string& i) override;
	void printInfo() const override;
	string getClassType() const override;

  private:
	string prof; // профессия работника
};

#endif // WORKER_H
