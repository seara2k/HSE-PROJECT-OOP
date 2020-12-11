#ifndef WORKER_H
#define WORKER_H
#include "person.h"

class Worker: public Person {
  public:

	Worker() {} ;
	Worker(const Worker& other);

	std::string getProf() const;
	void setProf(const sdt::string& prof);
  private:
	std::string prof; // профессия работника
};

#endif // WORKER_H

// Работник ресторана
