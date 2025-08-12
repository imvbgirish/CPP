#include <QTest>
#include <QOperatingSystemVersion>

class tst_QOperatingSystemVersion : public QObject
{
    Q_OBJECT

private slots:
    void compareVersions_data();
    void compareVersions();
};

void tst_QOperatingSystemVersion::compareVersions_data()
{
    QTest::addColumn<QOperatingSystemVersion>("lhs");
    QTest::addColumn<QOperatingSystemVersion>("rhs");
    QTest::addColumn<bool>("equal");

    // ⚠️ This reproduces the bug: MacOSSonoma is a QOperatingSystemVersionBase
    QTest::newRow("base-type-used")
        << QOperatingSystemVersion::MacOSSonoma
        << QOperatingSystemVersion(QOperatingSystemVersion::MacOS, 14)
        << true;
}

int compareVersions(const QOperatingSystemVersion &lhs, const QOperatingSystemVersion &rhs)
{
    if (lhs.majorVersion() < rhs.majorVersion())
        return -1;
    if (lhs.majorVersion() > rhs.majorVersion())
        return 1;

    if (lhs.minorVersion() < rhs.minorVersion())
        return -1;
    if (lhs.minorVersion() > rhs.minorVersion())
        return 1;

    if (lhs.microVersion() < rhs.microVersion())
        return -1;
    if (lhs.microVersion() > rhs.microVersion())
        return 1;

    return 0;
}

void tst_QOperatingSystemVersion::compareVersions()
{
    QFETCH(QOperatingSystemVersion, lhs);
    QFETCH(QOperatingSystemVersion, rhs);
    QFETCH(bool, equal);  // match your data() method

    int cmp = ::compareVersions(lhs, rhs);

    // Calculate bool equality to compare with expected
    bool actualEqual = (cmp == 0);

    QCOMPARE(actualEqual, equal);
}



QTEST_MAIN(tst_QOperatingSystemVersion)
#include "tst_qoperatingsystemversion.moc"
