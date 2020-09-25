#include "amino.h"

int main() {

	Amino test;
	test = {"test1", "l"};
	assert(test.GetName() == "test1");
	assert(test.GetSign() == "l");
	test.PrintAmino();

	Amino test2("test2", "z");
	assert(test2.GetName() == "test2");
	assert(test2.GetSign() == "z");
	test2.PrintAmino();

	Amino test3("test3", "zt");
	assert(test3.GetName() == "test3");
	assert(test3.GetSign() == "z");
	test3.PrintAmino();

	return 0;
}
