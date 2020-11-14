#ifndef AMINO_H
#define AMINO_H
#include <string>
using namespace std;

class Amino {
  public:
	Amino() {};
	Amino(const Amino& other);
	Amino(const string &new_name, const string &new_sign);
	string getName() const;
	string getSign() const;
	friend ostream& operator<<(ostream& stream, const Amino& amino);
	friend istream& operator>>(istream& stream, Amino& amino);
	bool operator==(const Amino& other) const;
	bool operator!=(const Amino& other) const;

  private:
	string name;
	string sign;
};
void printAmino(const Amino& amino);
ostream& operator<<(ostream& stream, const Amino& amino);
istream& operator>>(istream& stream, Amino& amino);
#endif // AMINO_H