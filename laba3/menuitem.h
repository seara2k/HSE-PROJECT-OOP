#ifndef MENUITEM_H
#define MENUITEM_H
#include <string>
using namespace std;

class MenuItem { //abstract
  public:

    MenuItem() {};
    MenuItem(const MenuItem& other);
    MenuItem(const string& name, const int& price, const int& amount, const int& portion_size, const string& portion_size_unit);
    string getName() const;
    int getPrice() const;
    int getAmount() const;
    int getPortionSize() const;
    string getPortionSizeUnit() const;

    void setName(const string& name);
    void setPrice(const int& price);
    void setAmount(const int& amount);
    void setPortionSize(const int& portion_size);
    void setPortionSizeUnit(const string& portion_size_unit);

    virtual string getItem() const = 0;

  protected:
    string name;
    int price;
    int amount;
    int portion_size; // размер порции
    string portion_size_unit; // в чем размер измеряертся
};

#endif // MENUITEM_H

// Еда или напиток из меню
