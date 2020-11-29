#include <cassert>
#include <iostream>
#include "amino.h"
#include "list.h"
#include <fstream>
using namespace std;
int main() {

	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "SIZE CONSTRUCTOR, SIZE() METHOD TEST AND PRINTLIST()" << endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	{
		// Size Constructor and size() method test and printList()
		DoubleLinkedList test1(5);
		assert(test1.size() == 5);
		printList(test1);
	}
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "COPY CONSTRUCTOR, PUSHBACK, PUSHFRONT, OPERATOR==, OPERATOR!=, OPERATOR<< AND SIZE" << endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	{
		// Copy constructor pushBack, pushFront, operator==, operator!=
		Amino test1_("test1", "z");
		Amino test2_("test2", "z");
		Amino test3_("test3", "a");



		Amino* test1 = &test1_;
		Amino* test2 = &test2_;
		Amino* test3 = &test3_;


		DoubleLinkedList testlist;

		testlist.pushBack(test1);
		testlist.pushBack(test2);
		testlist.pushBack(test3);

		cout << testlist << endl;

		DoubleLinkedList testlist2 = testlist;
		cout << "////////////////////////////////////////" << endl;
		testlist.popBack();
		cout << testlist << endl;
		cout << testlist2 << endl;
		cout << "////////////////////////////////////////" << endl;
		assert(testlist == testlist2);
		assert(!(testlist != testlist2));

		testlist.pushFront(test1);
		assert(!(testlist == testlist2));
		assert(testlist != testlist2);

		DoubleLinkedList testlist3;
		assert(testlist3.size() == 0);
		testlist3.pushBack(test1);
		testlist3.pushBack(test1);
		testlist3.pushBack(test2);
		testlist3.pushBack(test3);
		assert(testlist3.size() == 4);

		assert(testlist3 == testlist);
		assert(!(testlist3 != testlist));
	}
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "POPBACK AND SIZE" << endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	{
		//popBack
		Amino test1_("test1", "a");
		Amino test2_("test2", "b");
		Amino test3_("test3", "c");

		Amino* test1 = &test1_;
		Amino* test2 = &test2_;
		Amino* test3 = &test3_;



		DoubleLinkedList testlist1;

		testlist1.pushBack(test1);
		testlist1.pushBack(test2);
		testlist1.pushBack(test3);
		assert(testlist1.size() == 3);
		DoubleLinkedList testlist2;

		testlist2.pushBack(test1);
		testlist2.pushBack(test2);

		testlist1.popBack();
		assert(testlist1.size() == 2);
		assert(testlist1 == testlist2);
	}
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "POPFRONT" << endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	{
		//popFront
		Amino test1_("test1", "a");
		Amino test2_("test2", "b");
		Amino test3_("test3", "c");

		Amino* test1 = &test1_;
		Amino* test2 = &test2_;
		Amino* test3 = &test3_;



		DoubleLinkedList testlist1;

		testlist1.pushBack(test1);
		testlist1.pushBack(test2);
		testlist1.pushBack(test3);

		DoubleLinkedList testlist2;

		testlist2.pushBack(test2);
		testlist2.pushBack(test3);

		testlist1.popFront();
		assert(testlist1 == testlist2);
	}
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "OPERATOR+ + clearMemory() + operator=" << endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	{
		// operator+
		Amino first_("first", "a");
		Amino second_("second", "b");
		Amino third_("third", "c");

		Amino* first = &first_;
		Amino* second = &second_;
		Amino* third = &third_;

		Amino forth_("forth", "d");
		Amino fifth_("fifth", "e");
		Amino sixth_("sixth", "f");
		Amino seventh_("seventh", "g");
		Amino eighth_("eighth", "h");

		Amino* forth = &forth_;
		Amino* fifth = &fifth_;
		Amino* sixth = &sixth_;
		Amino* seventh = &seventh_;
		Amino* eighth = &eighth_;


		DoubleLinkedList one;
		DoubleLinkedList two;

		one.pushBack(first);
		one.pushBack(second);
		one.pushBack(third);

		two.pushBack(forth);
		two.pushBack(fifth);
		two.pushBack(sixth);
		two.pushBack(seventh);
		two.pushBack(eighth);

		DoubleLinkedList result = one + two;

		DoubleLinkedList test;

		test.pushBack(first);
		test.pushBack(forth);
		test.pushBack(second);
		test.pushBack(fifth);
		test.pushBack(third);
		test.pushBack(sixth);
		test.pushBack(seventh);
		test.pushBack(eighth);

		assert(test == result);

		DoubleLinkedList test3;
		result.clearMemory();
		assert(test3 == result);
		assert(test3.size() == 0);

		DoubleLinkedList test2;
		test2 = test;
		assert(test2 == test);

		test2.pushBack(first);
		assert(test2 != test);


	}
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "FILE INPUT AND OUTPUT" << endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	{
		DoubleLinkedList test;
		test.getFromFile("input.txt");

		DoubleLinkedList temp;
		Amino first_("first", "a");
		Amino second_("second", "b");
		Amino third_("third", "c");

		Amino* first = &first_;
		Amino* second = &second_;
		Amino* third = &third_;

		Amino forth_("forth", "d");
		Amino fifth_("fifth", "e");
		Amino sixth_("sixth", "f");
		Amino seventh_("seventh", "g");
		Amino eighth_("eighth", "h");
		Amino ninth_("ninth", "i");
		Amino tenth_("tenth", "j");

		Amino* forth = &forth_;
		Amino* fifth = &fifth_;
		Amino* sixth = &sixth_;
		Amino* seventh = &seventh_;
		Amino* eighth = &eighth_;
		Amino* ninth = &ninth_;
		Amino* tenth = &tenth_;
		temp.pushBack(first);
		temp.pushBack(second);
		temp.pushBack(third);
		temp.pushBack(forth);
		temp.pushBack(fifth);
		temp.pushBack(sixth);
		temp.pushBack(seventh);
		temp.pushBack(eighth);
		temp.pushBack(ninth);
		temp.pushBack(tenth);

		assert(test == temp);


		test.pushBack(forth);

		test.dumpToFile("output.txt");


		DoubleLinkedList test1;
		test1.getFromFile("output.txt");

		assert(test1 == test);


	}


	return 0;
}
