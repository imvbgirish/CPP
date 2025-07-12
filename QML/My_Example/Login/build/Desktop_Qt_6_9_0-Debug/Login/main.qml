import QtQuick

Window {
    width: 1920
    height: 1080
    visible: true
    title: qsTr("Hello World")

    Rectangle
    {
        id: rect1
        width: parent.width/1.5
        height: parent.height/1.5
        color: "green"
        anchors.top: parent.top
        anchors.topMargin: height/4
        anchors.left: parent.left
        anchors.leftMargin: width/4

        Image {
            id: watch
            source: "/home/girish-v-b/CPP/QML/My_Example/Login/watch.png"
        }
    }
}
