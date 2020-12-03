#ifndef WORKER_H
#define WORKER_H
#include "person.h"

class Worker: public Person {
public:
    Worker();
    Worker(Worker& other);
private:
    std::string prof; // профессия работника
};

#endif // WORKER_H

// Работник ресторана
