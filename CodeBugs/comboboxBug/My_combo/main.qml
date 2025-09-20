import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    width: 300
    height: 250
    visible: true

    ComboBox {
        id: combo
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: 20
        editable: true

        model: []

        popup: Popup {
            y: combo.height
            width: combo.width
            height: 100
            modal: false

            background: Rectangle {
                color: "white"
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
                        text: name
                        color: "black"
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

    ListModel {
        id: fruitModel

        ListElement {
            name: "Apple"
        }
        ListElement {
            name: "Orange"
        }
        ListElement {
            name: "Banana"
        }
    }

}
