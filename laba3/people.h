#ifndef PEOPLE_H
#define PEOPLE_H

#include <iostream>
#include <string>
#include <vector>
#include "visitor.h"
#include "worker.h"
using namespace std;

class People {
  public:
    People();
    People(People& other);

    void addVisitor(Visitor& new_);
    void addWorker(Worker& new_);
    void setVisitor(Visitor& new_, const int& i); // отсчет с 0
    void setWorker(Worker& new_, const int& i); // отсчет с 0
    void deleteVisitor(const int& i); // отсчет с 0
    void deleteWorker(const int& i); // отсчет с 0
    void printVisitors();
    void printWorkers();
    int visitorsNumber() const;
    int workersNumber() const;
    Visitor getVisitor(const int& i) const;
    Worker getWorker(const int& i) const;

  private:
    vector<Worker> workers;
    vector<Visitor> visitors;

};

#endif // PEOPLE_H 

//
