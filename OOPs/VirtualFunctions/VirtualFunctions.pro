TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        base.cpp \
        derived1.cpp \
        derived2.cpp \
        main.cpp

HEADERS += \
    base.h \
    derived1.h \
    derived2.h
