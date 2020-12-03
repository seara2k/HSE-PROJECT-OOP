#ifndef DRINK_H
#define DRINK_H
#include "menuitem.h"

class Drink: public MenuItem {
public:
    Drink(); // инициализация
    Drink(Drink& other); // копирование

private:

};

#endif // DRINK_H

// Напитки из меню
