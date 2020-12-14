TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle

SOURCES += \
    addmenuitem.cpp \
    addpersonwindow.cpp \
    drink.cpp \
    food.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    menuitem.cpp \
    people.cpp \
    person.cpp \
    restaurant.cpp \
    visitor.cpp \
    worker.cpp

HEADERS += \
    addmenuitem.h \
    addpersonwindow.h \
    drink.h \
    food.h \
    mainwindow.h \
    menu.h \
    menuitem.h \
    people.h \
    person.h \
    restaurant.h \
    visitor.h \
    worker.h
		

QT += widgets

FORMS += \
    mainwindow.ui
