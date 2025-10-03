TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += /usr/include/gtest /usr/include/gmock
LIBS += -lgtest -lgtest_main -lpthread -lgmock

SOURCES += \
        main.cpp \
        math_utils.cpp \
        tst_addfunction.cpp

HEADERS += \
    math_utils.h
