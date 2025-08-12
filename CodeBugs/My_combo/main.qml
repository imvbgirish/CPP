import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    width: 300
    height: 200
    visible: true

    ComboBox {
        id: combo
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: 20

        model: []   // empty model

        // Override the internal popup so it's always e.g. 100px tall
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

            // Even though model is empty, this ListView will be shown
            contentItem: ListView {
                anchors.fill: parent
                model: combo.delegateModel
                clip: true

                delegate: Item {
                    width: parent.width; height: 30
                    Text {
                        anchors.centerIn: parent
                        text: model.index === -1 ? "(no items)" : modelData
                        color: "gray"
                    }
                }
            }
        }
    }
}
