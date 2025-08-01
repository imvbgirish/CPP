#include <QtTest/QtTest>
#include <QDebug>

class AnticipateMessageTest : public QObject
{
    Q_OBJECT

private slots:
    void testWarningAppears();   // Should pass
    void testWarningMissing();   // Should fail
};

void AnticipateMessageTest::testWarningAppears()
{
    QTest::expectMessage(QtWarningMsg, "Expected warning");
    qWarning("Expected warning");  // Message matches → PASS
}

void AnticipateMessageTest::testWarningMissing()
{
    QTest::expectMessage(QtWarningMsg, "This will not be emitted");
    qWarning("This will not be emitted");
}

QTEST_MAIN(AnticipateMessageTest)
#include "tst_tst_anticipatemessagetest.moc"
