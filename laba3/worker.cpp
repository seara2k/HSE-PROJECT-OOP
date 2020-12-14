#include "worker.h"

Worker::Worker() :
    Person() {

}

Worker::Worker(const string& n, const string& sn, const string& s, const string& p) :
    Person(n, sn) {
    setProf(p);
    setState(s);
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
    } else if (prof == "2") {
        this->prof = "Waiter";
    } else if (prof == "3") {
        this->prof = "Cleaner";
    } else {
        cout << "Error: incorrect index";
    }
}

void Worker::setState(const string& i) {
    if (i == "1") {
        if (prof == "Cooker") {
            this->state = "is_cooking_orders";
        } else if (prof == "Waiter") {
            this->state = "is_delivering_orders";
        } else if (prof == "Cleaner") {
            this->state = "is_cleaning_the_restaurant";
        } else {
            cout << "Error: you should define prof berofe defining state";
        }
    } else if (i == "2") {
        this->state = "waiting_for_work";
    } else if (i == "3") {
        this->state = "is_chilling";
    } else if (i == "4") {
        this->state = "is_not_at_work";
    } else {
        cout << "Error: incorrect index";
        this->state = "is_not_at_work";
    }
}

void Worker::printInfo() const {
    cout << getProf() << " " << getName() << " " << getSurname() << " " << getState() << endl;
}

string Worker::getInfo() const {
    return getProf() + " " + getName() + " " + getSurname() + " " + getState() + " ";
}

string Worker::getClassType() const {
    return "Worker";
}

bool Worker::operator==(const Worker &other) const {
    if ((getName() == other.getName()) &&
            (getSurname() == other.getSurname()) &&
            (getState() == other.getState()) &&
            (getProf() == other.getProf())) {
        return 1;
    } else {
        return 0;
    }
}

void Worker::print(ostream& stream) const {
    stream << getInfo();
}

void Worker::read(istream & stream) {
    string name, surname, state, prof;
    stream >> prof >> name >> surname >> state;
    *this = Worker(name, surname, state, prof);
}

ostream& operator<<(ostream& stream, const Worker& worker) {
    worker.print(stream);
    return stream;
}
istream& operator>>(istream& stream, Worker& worker) {
    worker.read(stream);
    return stream;
}
