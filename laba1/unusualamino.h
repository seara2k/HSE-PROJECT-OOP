#ifndef UNUSUALAMINO_H
#define UNUSUALAMINO_H
#include "amino.h"

class UnusualAmino : public Amino {
  public:
	UnusualAmino() {};
	UnusualAmino(const UnusualAmino& other);
	UnusualAmino(const string &new_name);
	string getSign() const override;
	string getAmino()  const override ;
	bool operator==(const Amino& other) const override;
	void print(ostream& stream, const Amino& amino) const override;
	void read(istream& stream, Amino& amino) override;
};


#endif // UNUSUALAMINO_H