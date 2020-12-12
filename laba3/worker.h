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

    void setProf(const int& prof);
    void setState(const int &i) override;
    void printInfo() const override;

private:
    string prof; // профессия работника
};

#endif // WORKER_H

// Работник ресторана
