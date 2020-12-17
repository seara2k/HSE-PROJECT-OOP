#include "mainwindow.h"
#include <iostream>
#include "hash.h"
#include <cassert>
#include <QApplication>

int main(int argc, char *argv[]) {
    {
        Hash<string, string> mymap;
        assert(mymap.size() == 0);
        mymap.insert("apple", "people");
        assert(mymap.size() == 1);
        mymap.insert("apple", "people");
        assert(mymap.size() == 1);

        assert(mymap.isKey("apple") == true);
        assert(mymap.isKey("people") == false);

        assert(mymap["apple"] == "people");

        mymap.insert("banana", "man");

        assert(mymap.size() == 2);

        mymap.erase("apple");
        assert(mymap.size() == 1);

        try {
            mymap.erase("gdfsgdf");
        } catch (const exception) {
            assert(mymap.size() == 1);
        }

        assert(mymap.isKey("apple") == false);
        mymap.erase("banana");
        Hash<string, string> test;
        assert(mymap == test);

    }
    {
        Hash<string, string> test;
        test.insert("apple", "people");
        test.insert("banana", "man");
        Hash<string, string> test1 = test;
        assert(test1 == test);
        test.insert("apple", "woman");
        assert(test1 != test);

        test.dumpToFile("input.txt");
        Hash<string, string> test2;
        test2.getFromFile("input.txt");
        assert(test == test2);
    }
    cout << "All tests successful" << endl;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
