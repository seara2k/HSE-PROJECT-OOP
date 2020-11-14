#include <cassert>
#include <iostream>
#include "amino.h"
#include "list.h"
#include <fstream>
using namespace std;
int main() {

	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "SIZE CONSTRUCTOR AND SIZE() METHOD TEST AND PRINTLIST()" << endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	{
		// Size Constructor and size() method test and printList()
		DoubleLinkedList test1(5);
		assert(test1.size() == 5);
		printList(test1);
	}
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "COPY CONSTRUCTOR, PUSHBACK, PUSHFRONT, OPERATOR==, OPERATOR!=, OPERATOR<<" << endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	{
		// Copy constructor pushBack, pushFront, operator==, operator!=
		Amino test1("test1", "z");
		Amino test2("test2", "z");
		Amino test3("test3", "a");

		DoubleLinkedList testlist;

		testlist.pushBack(test1);
		testlist.pushBack(test2);
		testlist.pushBack(test3);

		cout << testlist;

		DoubleLinkedList testlist2 = testlist;

		assert(testlist == testlist2);
		assert(!(testlist != testlist2));

		testlist.pushFront(test1);

		assert(!(testlist == testlist2));
		assert(testlist != testlist2);

		DoubleLinkedList testlist3;

		testlist3.pushBack(test1);
		testlist3.pushBack(test1);
		testlist3.pushBack(test2);
		testlist3.pushBack(test3);

		assert(testlist3 == testlist);
		assert(!(testlist3 != testlist));
	}
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "POPBACK" << endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	{
		//popBack
		Amino test1("test1", "a");
		Amino test2("test2", "b");
		Amino test3("test3", "c");
		DoubleLinkedList testlist1;

		testlist1.pushBack(test1);
		testlist1.pushBack(test2);
		testlist1.pushBack(test3);

		DoubleLinkedList testlist2;

		testlist2.pushBack(test1);
		testlist2.pushBack(test2);

		testlist1.popBack();
		assert(testlist1 == testlist2);
	}
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "POPFRONT" << endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||" << endl;
	{
		//popFront
		Amino test1("test1", "a");
		Amino test2("test2", "b");
		Amino test3("test3", "c");
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
		Amino first("first", "a");
		Amino second("second", "b");
		Amino third("third", "c");


		Amino forth("forth", "d");
		Amino fifth("fifth", "e");
		Amino sixth("sixth", "f");
		Amino seventh("seventh", "g");
		Amino eighth("eighth", "h");

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
		Amino first("first", "a");
		Amino second("second", "b");
		Amino third("third", "c");
		Amino forth("forth", "d");
		Amino fifth("fifth", "e");
		Amino sixth("sixth", "f");
		Amino seventh("seventh", "g");
		Amino eighth("eighth", "h");
		Amino ninth("ninth", "i");
		Amino tenth("tenth", "j");

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
	}


	return 0;
}
