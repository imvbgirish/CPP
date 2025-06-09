TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        myevent.cpp \
        myinputevent.cpp \
        mykeyevent.cpp

HEADERS += \
    myevent.h \
    myinputevent.h \
    mykeyevent.h
