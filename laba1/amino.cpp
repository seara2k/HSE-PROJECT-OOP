#include "amino.h"

Amino::Amino(const string &new_name, const string &new_sign) {
	name = new_name;
	if (new_sign.length() > 1)
		cout << "Sign should be one letter long" << endl;
	sign = new_sign[0];
}
string Amino::GetName() const {
	return name;
}
string Amino::GetSign() const {
	return sign;
}
void Amino::PrintAmino() const {
	cout << GetName() << ' ' << GetSign() << endl;
}
