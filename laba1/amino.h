#ifndef AMINO_H
#define AMINO_H
#include <iostream>
using namespace std;

class Amino {
  public:
    Amino() {};
    Amino(const Amino& other);
    Amino(const string &new_name, const string &new_sign);
    string getName() const;
    virtual string getSign() const;
    virtual string getAmino() const ;
    virtual bool operator==(const Amino& other) const;
    bool operator!=(const Amino& other) const;
    virtual void print(ostream& stream, const Amino& amino) const;
    virtual void read(istream& stream, Amino& amino);
  protected:
    string name;
    string sign;
};
ostream& operator<<(ostream& stream, const Amino& amino);
istream& operator>>(istream& stream, Amino& amino);
#endif // AMINO_H
