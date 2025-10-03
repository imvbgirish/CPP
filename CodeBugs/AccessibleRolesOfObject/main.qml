import QtQuick 2.15
import QtQuick.Controls 2.15

Window {
    visible: true
    width: 400
    height: 300

    Page {
        id: page1
        objectName: "page1"
        anchors.fill: parent    // Needed to find it in C++

        Label {
            id: label1
            objectName: "label1"
            text: "Hello world"
            anchors.top: parent.top
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
}
