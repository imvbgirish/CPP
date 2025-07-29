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
    QTest::anticipateMessage(QtWarningMsg, "Expected warning");
    qWarning("Expected warning");  // Message matches → PASS
}

void AnticipateMessageTest::testWarningMissing()
{
    QTest::anticipateMessage(QtWarningMsg, "This will not be emitted");
    // qWarning("This will not be emitted");
}

QTEST_MAIN(AnticipateMessageTest)
#include "tst_tst_anticipatemessagetest.moc"
