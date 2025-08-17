import QtQuick 2.15
import QtTest 1.15

Rectangle {
    id: root
    height: 200
    width: 200

    MouseArea {
        id: mouseArea
        anchors.fill: parent

        onPressed: console.info("pressed")
        onReleased: console.info("released")
    }

    SignalSpy {
        id: spy
        target: mouseArea
    }

    TestCase {
        when: windowShown

        function test_mixed_press_and_release() {
            // normal behavior, all is right
            spy.signalName = "pressed"
            mousePress(root)
            spy.wait(3000)

            spy.signalName = "released"
            mouseRelease(root)
            spy.wait(3000)

            // specific behavior I want to test
            spy.signalName = "pressed"
            mousePress(root, 1, 1, Qt.LeftButton)
            spy.wait(3000)

            spy.signalName = "pressed"
            mousePress(root, 1, 1, Qt.RightButton)
            spy.wait(3000) // fail here : the second consecutive mousePress is not triggered, or not captured by the MouseArea.

            spy.signalName = "released"
            mouseRelease(root, 1, 1, Qt.LeftButton)
            spy.wait(3000)

            spy.signalName = "released"
            mouseRelease(root, 1, 1, Qt.RightButton)
            spy.wait(3000)
        }
    }

    /*********** OUTPUT *****************
    Config: Using QtTest library 5.15.16, Qt 5.15.16 (x86_64-little_endian-lp64 shared (dynamic) release build; by GCC 12.3.0), ubuntu 22.04
    PASS   : qmltest::initTestCase()
    QINFO  : qmltest::test_mixed_press_and_release() qml: pressed
    QINFO  : qmltest::test_mixed_press_and_release() qml: released
    QINFO  : qmltest::test_mixed_press_and_release() qml: pressed
    FAIL!  : qmltest::test_mixed_press_and_release() 'wait for signal pressed' returned FALSE. ()
       Loc: [.../tst_test.qml(42)]
    PASS   : qmltest::cleanupTestCase()
    Totals: 2 passed, 1 failed, 0 skipped, 0 blacklisted, 3075ms
    *****************************************/
}

