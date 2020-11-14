#include "amino.h"
#include <iostream>
using namespace std;

Amino::Amino(const string &new_name, const string &new_sign) {
	name = new_name;
	if (new_sign.length() > 1)
		cout << "Sign of amino should be one letter long" << endl;
	sign = new_sign[0];
}

Amino::Amino(const Amino& other) {
	name = other.getName();
	sign = other.getSign();
}

string Amino::getName() const {
	return name;
}

string Amino::getSign() const {
	return sign;
}

bool Amino::operator==(const Amino& other) const {
	if (name == other.name && sign == other.sign) {
		return true;
	} else {
		return false;
	}
}

bool Amino::operator!=(const Amino& other) const {
	return !((*this) == other);
}

void printAmino(const Amino& amino) {
	cout << amino.getName() << ' ' << amino.getSign() << endl;
}

ostream& operator<<(ostream& stream, const Amino& amino) {
	stream << amino.getName() << ' ' << amino.getSign();
	return stream;
}

istream& operator>>(istream& stream, Amino& amino) {
	string new_name, new_sign;
	stream >> new_name >> new_sign;
	amino = Amino(new_name, new_sign);
	return stream;
}
