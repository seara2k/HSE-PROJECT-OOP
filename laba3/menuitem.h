#ifndef MENUITEM_H
#define MENUITEM_H
#include <string>

class MenuItem { //abstract
  public:
    MenuItem() {};
    MenuItem(const MenuItem& other);
    std::string getName() const;
    int getPrice() const;
    void setName(const std::string& name);
    void setPrice(const int& price);
    virtual std::string getItem() const = 0;
  protected:
    std::string name;
    int price;
    int amount;
};

#endif // MENUITEM_H

// Еда или напиток из меню
