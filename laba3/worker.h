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
    string getInfo() const override;
    void print(ostream& stream) const;
    void read(istream& stream);
	string getClassType() const override;
    bool operator==(const Worker &other) const;

  private:
	string prof; // профессия работника
};

ostream& operator<<(ostream& stream, const Worker& worker);
istream& operator>>(istream& stream, Worker& worker);

#endif // WORKER_H
