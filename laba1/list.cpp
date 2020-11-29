#include "list.h"


DoubleLinkedList::DoubleLinkedList(size_t size) {
    for (size_t i = 0; i < size; ++i) {
        Amino input = {"",""};
        Amino* inputptr = &input;
        pushBack(inputptr);
    }
    cout << "Created DoubleLinkedList size = " << size << endl;
}

DoubleLinkedList::DoubleLinkedList(const DoubleLinkedList& other) {
    for (const auto &item : other) {
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
        delete temp1->amino;
        delete temp1;
    }
    first->amino = last->amino = nullptr;
    first = last = nullptr;
    list_size = 0;
    cout << "Memory cleared" << endl;
}

void DoubleLinkedList::pushBack(Amino *amino) {
    Amino* amino_input;
    if (amino->getSign() != amino->getName())
        amino_input = new Amino(amino->getName(), amino->getSign());
    else
        amino_input = new UnusualAmino(amino->getName());
    if (list_size == 0) {
        assert(list_size == 0);
        assert(first == nullptr);
        assert(last == nullptr);
        last = new Element(amino_input);
        first = last;
    } else {
        assert(last->next == nullptr);
        last = (last->next = new Element(amino_input, last, nullptr));
    }
    ++list_size;
    cout << "Pushed back" << endl;
}

void DoubleLinkedList::pushFront(Amino *amino) {
    Amino* amino_input;
    if (amino->getSign() != amino->getName())
        amino_input = new Amino(amino->getName(), amino->getSign());
    else
        amino_input = new UnusualAmino(amino->getName());
    if (list_size == 0) {
        assert(list_size == 0);
        assert(first == nullptr);
        assert(last == nullptr);
        first = new Element(amino_input);
        last = first;
    } else {
        assert(first->prev == nullptr);
        first = (first->prev = new Element(amino_input, nullptr, first));
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
        delete first->amino;
        delete first;
        first = (last = nullptr);
    } else {
        auto temp = last;
        last = last->prev;
        last->next = nullptr;
        delete temp->amino;
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
        delete first->amino;
        delete first;
        first = (last = nullptr);
    } else {
        auto temp = first;
        first = first->next;
        first->prev = nullptr;
        delete temp->amino;
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
    for (const auto &item : other) {
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
    if (list_size != other.size()) {
        return false;
    }
    auto other_first = other.begin();
    for (const auto& item : (*this)) {
        if (*item != **other_first) {
            return false;
        }
        ++other_first;
    }
    return true;
}

bool DoubleLinkedList::operator!=(const DoubleLinkedList& other) const {
    return !((*this) == other);
}

Amino* DoubleLinkedList::operator[](size_t input_n) {
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
        if (n == list.size()) {
            stream << *item;
        } else {
            stream << *item << endl;
        }
    }
    return stream;
}

istream& operator>>(istream& stream, DoubleLinkedList& list) {
    string input;
    while (getline(stream, input)) {
        auto x = input.find(' ');
        if (x == -1) {
            auto* temp = new UnusualAmino(input);
            list.pushBack(temp);
        } else {
            string name;
            string sign;
            name = input.substr(0, x);
            sign = input.substr(x + 1);
            auto* temp = new Amino(name, sign);
            list.pushBack(temp);
        }
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

DoubleLinkedList::Element::Element(Amino*amino_, Element *prev_, Element *next_) {
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

Amino* DoubleLinkedList::Iterator::operator*() {
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
    int n = 0;
    for (const auto &item : list) {
        cout << ++n << " " << *item << endl;
    }
    cout << "Printed list size = " << list.size() << endl;
}
