#include "people.h"

People::People() {

}

void People::addWorker(Worker &new_) {
    this->workers.push_back(new_);
}

void People::addVisitor(Visitor &new_) {
    this->visitors.push_back(new_);
}

void People::setVisitor(Visitor &new_, const int &i) {
    visitors[i] = new_;
}

void People::setWorker(Worker &new_, const int &i) {
    workers[i] = new_;
}

void People::deleteVisitor(const int& i) {
    visitors.erase(visitors.begin() + i);
}

void People::deleteWorker(const int& i) {
    workers.erase(workers.begin() + i);
}

int People::visitorsNumber() const {
    return visitors.size();
}

int People::workersNumber() const {
    return workers.size();
}

Visitor People::getVisitor(const int &i) const {
    return visitors[i];
}

Worker People::getWorker(const int &i) const {
    return workers[i];
}

void People::printVisitors() {
    for (auto i : visitors) {
        i.printInfo();
    }
}

void People::printWorkers() {
    for (auto i : workers) {
        i.printInfo();
    }
}
