#ifndef TESTAUDITORIUM_H
#define TESTAUDITORIUM_H

#include <QtTest/QTest>

class TestAuditorium : public QObject
{
public:
    // explicit TestAuditorium(QObject *parent = nullptr);

private slots:
    void testSetGetId();
    void testSetGetName();
    void testSetGetSeatCapacity();
    void testSetGetStatus();
};

#endif // TESTAUDITORIUM_H
