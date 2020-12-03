TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
		restaurant.cpp

HEADERS += \
		drink.h \
		food.h \
		menu.h \
		menuitem.h \
		people.h \
		person.h \
		restaurant.h \
		visitor.h \
		worker.h
		