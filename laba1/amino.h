#ifndef AMINO_H
#define AMINO_H
#include <iostream>
#include <cassert>
using namespace std;

class Amino {
  public:
	Amino() {};
	Amino(const string &new_name, const string &new_sign);

	void PrintAmino() const;
	string GetName() const;
	string GetSign() const;

  private:
	string name;
	string sign;
};

#endif // AMINO_H