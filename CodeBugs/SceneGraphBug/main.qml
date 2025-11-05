import QtQuick 2.15
import QtQuick.Controls 2.15

Window {
    // width: 1920
    // height: 1080
    height: 600
    width: 600
    color: "black"
    visible: true

    Rectangle {
        x: 178
        y: 216
        width: 200
        height: 80
        color: "red"

        Rectangle {
            id: blue
            // visible: false  //make invisible
            width: parent.width
            height: parent.height
            x: -10
            y: -10
            z: -1
            color: "blue"
        }

        Rectangle {
            id: yellow
            width: parent.width
            height: parent.height
            // visible: false
            x: -20
            y: -20
            z: -1
            color: "yellow"
        }

        Rectangle{
            id: purple
            width: parent.width
            height: parent.height
            visible: false
            x: -30
            y: -30
            z: -1
            color: "purple"
        }

        Rectangle {
            id: pink
            width: parent.width
            height: parent.height
            // visible: false
            x: -40
            y: -40
            z: -1
            color: "pink"
        }

        Rectangle{
            id: white
            // visible: false
            width: parent.width
            height: parent.height
            x: -50
            y: -50
            z: -1
            color: "white"
        }
    }

    Timer{
        interval: 10000
        running: true
        repeat: true
        onTriggered: {
            // pink.visible = !pink.visible
            // yellow.visible = !yellow.visible
            // blue.visible = !blue.visible
            purple.visible = !purple.visible
            // white.visible = !white.visible
            console.log("Visibility changed : ", purple.visible)
        }
    }
}
