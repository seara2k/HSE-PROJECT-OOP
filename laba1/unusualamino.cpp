#include "unusualamino.h"


UnusualAmino::UnusualAmino(const UnusualAmino& other) {
	name = other.getName();
}

UnusualAmino::UnusualAmino(const string &new_name) {
	name = new_name;
}

string UnusualAmino::getSign() const {
	cout << "Only name available" << endl;
	return getName();
}
string UnusualAmino::getAmino()  const {
	return getName();
}

bool UnusualAmino::operator==(const Amino& other)  const {
	if (name == other.getName()) {
		return true;
	} else {
		return false;
	}
}

void UnusualAmino::print(ostream& stream, const Amino& amino) const {
	stream << amino.getName();
}
void UnusualAmino::read(istream& stream, Amino& amino) {
	string new_name;
	stream >> new_name;
	amino = UnusualAmino(new_name);
}