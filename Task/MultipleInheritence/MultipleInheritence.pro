TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        carnivorous.cpp \
        herbivorous.cpp \
        main.cpp \
        omnivorous.cpp

HEADERS += \
    carnivorous.h \
    herbivorous.h \
    omnivorous.h
