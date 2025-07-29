#include <QtTest/QtTest>
#include <QDebug>

class IgnoreMessageTest : public QObject
{
    Q_OBJECT

private slots:
    void testWarningSuppressed();
    void testWarningMissing();
};

void IgnoreMessageTest::testWarningSuppressed()
{
    QTest::ignoreMessage(QtWarningMsg, "Expected warning");
    qWarning("Expected warning");
}

void IgnoreMessageTest::testWarningMissing()
{
    QTest::ignoreMessage(QtWarningMsg, "This warning will appear");
    // qWarning("This warning will appear");
}

QTEST_MAIN(IgnoreMessageTest)
#include "tst_ignoremessagetest.moc"
