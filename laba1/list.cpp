#include "list.h"
#include <iostream>
#include <cassert>
#include <fstream>
using namespace std;

DoubleLinkedList::DoubleLinkedList(size_t size) {
    for (size_t i = 0; i < size; ++i) {
        pushBack(Amino());
    }
    cout << "Created DoubleLinkedList size = " << size << endl;
}

DoubleLinkedList::DoubleLinkedList(const DoubleLinkedList& other) {
    for (const auto item : other) {
        pushBack(item);
    }
    cout << "Copied to another object" << endl;
}

DoubleLinkedList::~DoubleLinkedList() {
    clearMemory();
    cout << "Object destroyed" << endl;
}

void DoubleLinkedList::clearMemory() {
    if (list_size == 0) {
        assert(first == nullptr);
        assert(last == nullptr);
        return;
    }
    auto temp = first;
    assert(temp != nullptr);
    for (size_t i = 0; i < list_size; ++i) {
        assert(temp != nullptr);
        auto temp1 = temp;
        temp = temp->next;
        delete temp1;
    }
    first = last = nullptr;
    list_size = 0;
    cout << "Memory cleared" << endl;
}

void DoubleLinkedList::pushBack(const Amino &amino) {
    if (list_size == 0) {
        assert(list_size == 0);
        assert(first == nullptr);
        assert(last == nullptr);
        last = new Element(amino);
        first = last;
    } else {
        assert(last->next == nullptr);
        last = (last->next = new Element(amino, last, nullptr));
    }
    ++list_size;
    cout << "Pushed back" << endl;
}

void DoubleLinkedList::pushFront(const Amino &amino) {
    if (list_size == 0) {
        assert(list_size == 0);
        assert(first == nullptr);
        assert(last == nullptr);
        first = new Element(amino);
        last = first;
    } else {
        assert(first->prev == nullptr);
        first = (first->prev = new Element(amino, nullptr, first));
    }
    ++list_size;
    cout << "Pushed front" << endl;
}

void DoubleLinkedList::popBack() {
    if (last == nullptr) {
        assert(list_size == 0);
        assert(first == nullptr);
        return;
    }
    if (first == last) {
        assert(first->next == nullptr);
        assert(first->prev == nullptr);
        assert(list_size == 1);
        delete first;
        first = (last = nullptr);
    } else {
        auto temp = last;
        last = last->prev;
        last->next = nullptr;
        delete temp;
    }
    --list_size;
    cout << "Popped from back" << endl;
}
void DoubleLinkedList::popFront() {
    if (last == nullptr) {
        assert(list_size == 0);
        assert(first == nullptr);
        return;
    }
    if (first == last) {
        assert(first->next == nullptr);
        assert(first->prev == nullptr);
        assert(list_size == 1);
        delete first;
        first = (last = nullptr);
    } else {
        auto temp = first;
        first = first->next;
        first->prev = nullptr;
        delete temp;
    }
    --list_size;
    cout << "Popped from front" << endl;
}

size_t DoubleLinkedList::size() const {
    return list_size;
}

DoubleLinkedList& DoubleLinkedList::operator=(const DoubleLinkedList& other) {
    cout << "Copy assignment" << endl;
    if (this == &other) {
        return *this;
    }
    clearMemory();
    for (const auto item : other) {
        pushBack(item);
    }
    return *this;
}

DoubleLinkedList DoubleLinkedList::operator+(const DoubleLinkedList& right) const {
    DoubleLinkedList output;
    auto temp1 = this->first;
    auto temp2 = right.first;
    while ((temp1 != nullptr) || (temp2 != nullptr)) {
        if (temp1 != nullptr) {
            output.pushBack(temp1->amino);

            temp1 = temp1->next;
        }
        if (temp2 != nullptr) {
            output.pushBack(temp2->amino);

            temp2 = temp2->next;
        }
    }
    cout << "Operation '+' complete" << endl;
    return output;
}

bool DoubleLinkedList::operator==(const DoubleLinkedList& other) const {
    if (list_size != other.list_size) {
        return false;
    }
    auto other_first = other.begin();
    for (const auto& item : (*this)) {
        if (item != (*other_first)) {
            return false;
        }
        ++other_first;
    }
    return true;

}

bool DoubleLinkedList::operator!=(const DoubleLinkedList& other) const {
    return !((*this) == other);
}

Amino &DoubleLinkedList::operator[](size_t input_n) {
    if (input_n >= list_size) {
        throw std::out_of_range("n_ >= m_size");
    }
    auto temp = first;
    assert(temp != nullptr);
    for (size_t i = 0; i < input_n; ++i) {
        assert(temp != nullptr);
        temp = temp->next;
    }
    return temp->amino;
}
ostream& operator<<(ostream& stream, DoubleLinkedList& list) {
    size_t n = 0;
    for (const auto &item : list) {
        ++n;
        if (n == list.list_size) {
            stream << item;
        } else {
            stream << item << endl;
        }

    }
    return stream;
}

istream& operator>>(istream& stream, DoubleLinkedList& list) {
    Amino temp;
    while (stream) {
        stream >> temp;
        stream.ignore(1);
        list.pushBack(temp);
    }
    return stream;

}

void DoubleLinkedList::dumpToFile(const string& path) {

    ofstream output(path);
    output << (*this);

}

void DoubleLinkedList::getFromFile(const string& path) {
    ifstream input(path);
    if (input) {
        input >> (*this);
    }
}

DoubleLinkedList::Element::Element(const Amino &amino_, Element *prev_, Element *next_) {
    prev = prev_;
    next = next_;
    amino = amino_;
}

DoubleLinkedList::Iterator::Iterator(DoubleLinkedList::Element *element_) {
    element = element_;
}
bool DoubleLinkedList::Iterator::operator!=(const DoubleLinkedList::Iterator &other) {
    return element != other.element;
}

DoubleLinkedList::Iterator& DoubleLinkedList::Iterator::operator++() {
    (*this)++;
    return *this;
}

Amino& DoubleLinkedList::Iterator::operator*() {
    return element->amino;
}

DoubleLinkedList::Iterator DoubleLinkedList::Iterator::operator++(int) {
    auto retVal = *this;
    element = element->next;
    return retVal;
}

DoubleLinkedList::Iterator DoubleLinkedList::begin() {
    return first;
}

DoubleLinkedList::Iterator DoubleLinkedList::end() {
    return nullptr;
}

DoubleLinkedList::Iterator DoubleLinkedList::begin() const {
    return first;
}

DoubleLinkedList::Iterator DoubleLinkedList::end() const {
    return nullptr;
}

void printList(const DoubleLinkedList& list) {
    int n=0;
    for (const auto &item : list) {
        cout << ++n << " " << item << endl;
    }
    cout << "Printed list size = " << list.size() << endl;
}
