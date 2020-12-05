#ifndef MENUITEM_H
#define MENUITEM_H
#include <string>

class MenuItem { //abstract
  public:

    MenuItem() {};
    MenuItem(const MenuItem& other);
    MenuItem(const std::string& name, const int& price, const int& amount, const int& portion_size, const std::string& portion_size_unit);
    std::string getName() const;
    int getPrice() const;
    int getAmount() const;
    int getPortionSize() const;
    std::string getPortionSizeUnit() const;

    void setName(const std::string& name);
    void setPrice(const int& price);
    void setAmount(const int& amount);
    void setPortionSize(const int& portion_size);
    void setPortionSizeUnit(const std::string& portion_size_unit);

    virtual std::string getItem() const = 0;

  protected:
    std::string name;
    int price;
    int amount;
    int portion_size; // размер порции
    std::string portion_size_unit; // в чем размер измеряертся
};

#endif // MENUITEM_H

// Еда или напиток из меню
