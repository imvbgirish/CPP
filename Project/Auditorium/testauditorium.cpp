#include "testauditorium.h"
#include "auditorium.h"

// TestAuditorium::TestAuditorium(QObject *parent)
//     : QObject{parent}
// {}

void TestAuditorium::testSetGetId()
{
    Auditorium aud;
    aud.SetId("AUD001");
    QVERIFY(!aud.GetId().isEmpty());
    QVERIFY2(aud.GetId().isEmpty() , "no data found");
    QCOMPARE(aud.GetId(),QString("AUD001"));
}

void TestAuditorium::testSetGetName()
{
    Auditorium aud;
    aud.SetName("Main Hall");
    QVERIFY(!aud.GetName().isEmpty());
    QVERIFY2(aud.GetName().isEmpty() , "no data found");
    QCOMPARE(aud.GetName(), QString("Main Hall"));
}

void TestAuditorium::testSetGetSeatCapacity()
{
    Auditorium aud;
    aud.SetSeatCapacity(500);
    QVERIFY(aud.GetSeatCapacity() != 0);
    QVERIFY2(aud.GetSeatCapacity() == 0 , "no data found");
    QCOMPARE(aud.GetSeatCapacity() , 500);
}

void TestAuditorium::testSetGetStatus()
{
    Auditorium aud;
    aud.SetStatus("Available");
    QVERIFY(!aud.GetStatus().isEmpty());
    QVERIFY2(aud.GetStatus().isEmpty() , "no data found");
    QCOMPARE(aud.GetStatus() , QString("Available"));
}

QTEST_MAIN(TestAuditorium)
