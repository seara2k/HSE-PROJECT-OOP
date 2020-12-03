#ifndef PEOPLE_H
#define PEOPLE_H
#include <vector>
#include "visitor.h"
#include "worker.h"

class People {
public:
    People();
    People(People& other);

private:
    std::vector<Worker> workers;
    std::vector<Visitor> visitors;

};

#endif // PEOPLE_H 

// Люди в ресторане
