#include "amino.h"

Amino::Amino(const Amino& other) {
    name = other.getName();
    sign = other.getSign();
}

Amino::Amino(const string &new_name, const string &new_sign) {
    name = new_name;
    if (new_sign.length() > 1)
        cout << "Sign of amino should be one letter long" << endl;
    sign = new_sign[0];
}

string Amino::getName() const {
    return name;
}

string Amino::getSign() const {
    return sign;
}

string Amino::getAmino() const {
    return getName() + ' ' + getSign();
}

bool Amino::operator==(const Amino& other) const {
    if (name == other.getName() && sign == other.getSign()) {
        return true;
    } else {
        return false;
    }
}

bool Amino::operator!=(const Amino& other) const {
    return !((*this) == other);
}

void Amino::print(ostream& stream, const Amino& amino) const {
    stream << amino.getName() << ' ' << amino.getSign();
}

ostream& operator<<(ostream& stream, const Amino& amino) {
    amino.print(stream, amino);
    return stream;
}

void Amino::read(istream& stream, Amino& amino) {
    string new_name, new_sign;
    stream >> new_name >> new_sign;
    amino = Amino(new_name, new_sign);
}

istream& operator>>(istream& stream, Amino& amino) {
    amino.read(stream, amino);
    return stream;
}
