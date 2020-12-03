#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>
#include <vector>
#include "visitor.h"
#include "worker.h"




class People {

    std::vector<Worker> workers;
    std::vector<Visitor> visitors;

};

#endif // PEOPLE_H 
