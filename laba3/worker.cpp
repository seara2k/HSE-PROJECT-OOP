#include "worker.h"


std::string Worker::getProf() const {
	return prof;
}
void  Worker::setProf(const sdt::string& prof) {
	this->prof = prof;
}
