import QtQuick

Rectangle {
    id: myItem
    signal message(string msg)

    width: 100; height: 100
    color: "red"
    x: 150

    MouseArea {
        anchors.fill: parent
        onClicked: myItem.message("clicked!")
    }

    Component.onCompleted: {
        hello()
        helloItem()
    }
}



// import QtQuick
// Rectangle {
//     width: 100
//     height: 100
//     color: "red"
//     x: 150
//     Component.onCompleted: {
//        hello()
//        helloItem()
//     }
// }
