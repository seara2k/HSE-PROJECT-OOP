#include "people.h"

People::People() {

}

void People::addWorker(Worker &new_) {
    bool flag = false;
    Worker temp;
    for (auto i : workers) {
        if (i == new_) {
            flag = true;
            temp = i;
        }
    }
    if (flag) {
        cout << "Error: this person is already exists" << endl;
        temp.printInfo();
    }
    else {
        this->workers.push_back(new_);
    }
}

void People::addVisitor(Visitor &new_) {
    bool flag = false;
    Visitor temp;
    for (auto i : visitors) {
        if (i == new_) {
            flag = true;
            temp = i;
        }
    }
    if (flag) {
        cout << "Error: this person is already exists" << endl;
        temp.printInfo();
    }
    else {
        this->visitors.push_back(new_);
    }
}

void People::setVisitor(Visitor &new_, const int &i) {
    bool flag = false;
    Visitor temp;
    for (auto i : visitors) {
        if (i == new_) {
            flag = true;
            temp = i;
        }
    }
    if (flag) {
        cout << "Error: this person is already exists" << endl;
        temp.printInfo();
    }
    else {
        visitors[i] = new_;
    }
}

void People::setWorker(Worker &new_, const int &i) {
    bool flag = false;
    Worker temp;
    for (auto i : workers) {
        if (i == new_) {
            flag = true;
            temp = i;
        }
    }
    if (flag) {
        cout << "Error: this person is already exists" << endl;
        temp.printInfo();
    }
    else {
        workers[i] = new_;
    }
}

void People::deleteVisitor(const int& i) {
    int size = visitors.size();
    if ((0 <= i) && (i < size)) {
        visitors.erase(visitors.begin() + i);
    }
    else {
        cout << "Error: incorrect id";
    }
}

void People::deleteWorker(const int& i) {
    int size = workers.size();
    if ((0 <= i) && (i < size)) {
        workers.erase(workers.begin() + i);
    }
    else {
        cout << "Error: incorrect id";
    }
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
    int index = 0;
    for (auto i : visitors) {
        cout << index << ": ";
        i.printInfo();
        index++;
    }
}

void People::printWorkers() {
    int index = 0;
    for (auto i : workers) {
        cout << index << ": ";
        i.printInfo();
        index++;
    }
}
