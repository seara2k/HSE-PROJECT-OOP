#include "worker.h"

Worker::Worker() :
    Person() {

}

Worker::Worker(const string& n, const string& sn, const string& s, const string& p) :
    Person(n, sn) {
    setState(s);
    this->prof = p;
}

Worker::Worker(const Worker& other) :
    Person(other) {
    this->prof = other.prof;
}

std::string Worker::getProf() const {
	return prof;
}

void  Worker::setProf(const string& prof) {
    if (prof == "1") {
        this->prof = "Cooker";
    }
    else if (prof == "2") {
        this->prof = "Waiter";
    }
    else if (prof == "3") {
        this->prof = "Cleaner";
    }
    else {
        cout << "Error: incorrect index";
    }
}

void Worker::setState(const string& i) {
    if (i == "1") {
        if (prof == "Cooker") {
            this->state = "is cooking orders";
        }
        else if (prof == "Waiter") {
            this->state = "is delivering orders";
        }
        else if (prof == "Cleaner") {
            this->state = "is cleaning the restaurant";
        }
        else {
            cout << "Error: you should define prof berofe defining state";
        }
    }
    else if (i == "2") {
        this->state = "is chilling";
    }
    else if (i == "3") {
        this->state = "is not at work";
    }
    else {
        cout << "Error: incorrect index";
    }
}

void Worker::printInfo() const {
    cout << getProf() << " " << getName() << " " << getSurname() << " " << getState() << endl;
}
