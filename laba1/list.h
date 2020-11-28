#ifndef LIST_H
#define LIST_H
#include "amino.h"
#include <iostream>
#include "unusualamino.h"
using namespace std;



class DoubleLinkedList {
  public:
    DoubleLinkedList(size_t size = 0);
    DoubleLinkedList(const DoubleLinkedList& other);
    ~DoubleLinkedList();
    void clearMemory();
    void pushBack(const Amino &amino);
    void pushFront(const Amino &amino);
    void popBack();
    void popFront();
    size_t size() const;
    DoubleLinkedList& operator=(const DoubleLinkedList& other);
    DoubleLinkedList operator+(const DoubleLinkedList& right) const;
    bool operator==(const DoubleLinkedList& other) const;
    bool operator!=(const DoubleLinkedList& other) const;
    friend ostream& operator<<(ostream& stream, DoubleLinkedList& list);
    friend istream& operator>>(istream& stream, DoubleLinkedList& list);
    Amino &operator[](size_t input_n);
    void dumpToFile(const string& path);
    void getFromFile(const string& path);
  private:
    class Element {
      public:
        Element(const Amino& amino, Element *prev = nullptr, Element *next = nullptr);
        Element *prev = nullptr;
        Element *next = nullptr;
        Amino amino;
    };
    Element *first = nullptr;
    Element *last = nullptr;
    size_t list_size = 0;
  public:
    class Iterator {
      public:
        Iterator(Element *element);
        Element *element = nullptr;
        bool operator!=(const Iterator& other);
        Iterator operator++(int);
        Iterator& operator++();
        Amino& operator*();
    };
    Iterator begin();
    Iterator end();
    Iterator begin() const;
    Iterator end() const;
};

void printList(const DoubleLinkedList& list);
ostream& operator<<(ostream& stream_, DoubleLinkedList& list);
istream& operator>>(istream& stream_, DoubleLinkedList& list);

#endif // LIST_H
