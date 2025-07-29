#include <QtTest/QtTest>

class BugReproTest : public QObject {
    Q_OBJECT

private slots:
    void toInt_data();
    void toInt();
};

void BugReproTest::toInt_data()
{
    QTest::addColumn<QString>("aString");
    QTest::addColumn<int>("expected");

    QTest::newRow("positive+value") << "42" << 42;
    QTest::newRow("negative-value") << "-42" << -42;
    QTest::newRow("zero") << "0" << 0;
    QTest::newRow("broken") << "42" << 42; // Intentionally passes
}

void BugReproTest::toInt()
{
    QEXPECT_FAIL("jhgvjh", "Expected failure on nonexistent row", Abort);
    QEXPECT_FAIL("zero", "Expected failure on nonexistent row", Abort);

    QFETCH(QString, aString);
    QFETCH(int, expected);
    QCOMPARE(aString.toInt(), expected);
}

QTEST_MAIN(BugReproTest)
#include "tst_bugreprotest.moc"
