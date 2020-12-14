TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle

SOURCES += \
    drink.cpp \
    food.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    menuitem.cpp \
    people.cpp \
    person.cpp \
    visitor.cpp \
    worker.cpp

HEADERS += \
    drink.h \
    food.h \
    mainwindow.h \
    menu.h \
    menuitem.h \
    people.h \
    person.h \
    visitor.h \
    worker.h
		

QT += widgets

FORMS += \
    mainwindow.ui
