#ifndef VISITOR_H
#define VISITOR_H

#include <iostream>
#include <string>
#include "person.h"
using namespace std;

class Visitor: public Person {
public:
    Visitor();
    Visitor(const string& name, const string& surname, const string& state);
	Visitor(const Visitor& other);  
    void setState(const string& i) override;
    void printInfo() const override;
    string getClassType() const override;

private:

};

#endif // VISITOR_H 
