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

        model: []   // start empty

        // Custom popup — do NOT bind visible
        popup: Popup {
            y: combo.height
            width: combo.width
            height: 100
            modal: false

            background: Rectangle {
                color: "#ffeeaa"
                border.color: "#aa3300"
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
                        text: modelData
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

        // Arrow respects canOpenPopup
        // indicator.enabled: combo.canOpenPopup
        // indicator.opacity: combo.canOpenPopup ? 1 : 0.4
    }

    // Buttons to test adding/clearing items
    Row {
        spacing: 10
        anchors.top: combo.bottom
        anchors.topMargin: 20
        anchors.horizontalCenter: parent.horizontalCenter

        Button {
            text: "Add Items"
            onClicked: combo.model = ["One", "Two", "Three"]
        }

        Button {
            text: "Clear Items"
            onClicked: combo.model = []
        }
    }
}
