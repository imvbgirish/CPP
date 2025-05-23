TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        landvehicle.cpp \
        landwatervehicle.cpp \
        main.cpp \
        vehicle.cpp \
        watervehicle.cpp

HEADERS += \
    landvehicle.h \
    landwatervehicle.h \
    vehicle.h \
    watervehicle.h
