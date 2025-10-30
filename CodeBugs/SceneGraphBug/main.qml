import QtQuick 2.15
import QtQuick.Controls 2.15

Window {
    width: 1920
    height: 1080
    color: "black"
    visible: true

    Rectangle {
        x: 178
        y: 516
        width: 200
        height: 80
        color: "red"

        Rectangle {
            id: blue
            visible: false  //make invisible
            width: parent.width
            height: parent.height
            x: -10
            y: -10
            z: -1
            color: "blue"
        }

        Rectangle {
            width: parent.width
            height: parent.height
            x: -20
            y: -20
            z: -1
            color: "yellow"
        }

        Rectangle {
            width: parent.width
            height: parent.height
            x: -30
            y: -30
            z: -1
            color: "pink"
        }

        Rectangle{
            id: white
            width: parent.width
            height: parent.height
            x: -40
            y: -40
            z: 1
            color: "white"
        }
    }

    Timer{
        interval: 2000
        running: true
        repeat: true
        onTriggered: {
            blue.visible = !blue.visible
            white.visible = !white.visible
            console.log("Visibility changed : ", blue.visible)
        }
    }
}
