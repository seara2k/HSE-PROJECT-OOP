#ifndef MENUITEM_H
#define MENUITEM_H
#include <string>



class MenuItem { //abstract

  public:
    virtual std::string getName();
	virtual int getPrice();
	virtual int getServing() = 0;
	virtual void setName();
	virtual void setPrice();
	virtual void setServing() = 0;

  private:
	int price;
    std::string name;
	int serving;

};


#endif // MENUITEM_H
