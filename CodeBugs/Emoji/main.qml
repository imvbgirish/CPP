import QtQuick 2.15
import QtQuick.Controls 2.15 as QQC2
import QtQuick.Window 2.15

Window {
    visible: true
    width: 300
    height: 100
    title: qsTr("Emoji Test")

    QQC2.TextField {
        id: textField
        anchors.centerIn: parent
        width: 250
        placeholderText: "Paste emoji here"
    }
}

