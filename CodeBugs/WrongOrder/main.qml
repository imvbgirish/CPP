import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 1920
    height: 1080
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        width: 1920
        height: 1080
        color: "black"

        Rectangle {
            x: 178
            y: 516
            width: 200
            height: 80
            color: "red"

            Rectangle {
                visible: false  //make invisible
                width: parent.width
                height: parent.height
                x: 10
                y: 10
                z: -1
                color: "blue"
            }

            Rectangle {
                width: parent.width
                height: parent.height
                x: -10
                y: -10
                z: -1
                color: "yellow"
            }
        }
    }
}
