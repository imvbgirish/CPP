import QtQuick

Rectangle {
    id: btn
    width: 100
    height: 50
    color: "green"
    Text {
        id: btnnmae
        text: qsTr("Button")
    }
    MouseArea
    {
        anchors.fill: parent
        onClicked: {
            console.log("Button clicked")
        }
    }
}

