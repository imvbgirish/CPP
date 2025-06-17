TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

DESTDIR = $$PWD/bins

SOURCES += \
        Person.cpp \
        admin.cpp \
        bookingdetails.cpp \
        cash.cpp \
        fileoperation.cpp \
        main.cpp \
        managelogin.cpp \
        paymentMode.cpp \
        rentalbike.cpp \
        rentalcar.cpp \
        rentvehicles.cpp \
        upi.cpp \
        user.cpp \
        vehiclemanagement.cpp

HEADERS += \
    Person.h \
    admin.h \
    bookingdetails.h \
    cash.h \
    fileoperation.h \
    managelogin.h \
    paymentMode.h \
    rentalbike.h \
    rentalcar.h \
    rentvehicles.h \
    upi.h \
    user.h \
    vehiclemanagement.h
