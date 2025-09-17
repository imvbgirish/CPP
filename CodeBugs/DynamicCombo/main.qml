import QtQuick
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ComboBox {
        id: combo
        anchors.centerIn: parent
        model: /*ComboModel*/ []

        popup: Popup {
            y: combo.height
            width: combo.width
            height: 100
            modal: false

            background: Rectangle {
                color: "black"
                border.color: "red"
                border.width: 2
                radius: 4
            }

            contentItem: ListView {
                anchors.fill: parent
                model: combo.delegateModel
                clip: true

                delegate: Item {
                    width: parent.width
                    height: 30
                    Text {
                        anchors.centerIn: parent
                        text: item
                        color: "white"
                    }

                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            combo.currentIndex = index
                            combo.popup.close()
                        }
                    }
                }
            }
        }
    }
}
