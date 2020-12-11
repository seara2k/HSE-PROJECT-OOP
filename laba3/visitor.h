#ifndef VISITOR_H
#define VISITOR_H
#include "person.h"

class Visitor: public Person {
  public:

	Visitor() {};
	Visitor(const Visitor& other);

	// std::string getState() override;
	// void setState() override;
  private:

};

#endif // VISITOR_H 

// Посетитель ресторана
