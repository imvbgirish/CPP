TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Base.cpp \
        Derived1.cpp \
        Derived2.cpp \
        Derived3.cpp \
        main.cpp

HEADERS += \
    Base.h \
    Derived1.h \
    Derived2.h \
    Derived3.h
