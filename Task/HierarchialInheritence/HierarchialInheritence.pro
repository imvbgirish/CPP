TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        car.cpp \
        main.cpp \
        truck.cpp \
        van.cpp \
        vehicle.cpp

HEADERS += \
    car.h \
    truck.h \
    van.h \
    vehicle.h
