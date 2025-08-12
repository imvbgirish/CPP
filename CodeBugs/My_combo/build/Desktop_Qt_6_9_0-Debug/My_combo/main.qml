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

    // // Button to also force-open the popup
    // Button {
    //     text: "Open Popup"
    //     anchors.top: combo.bottom
    //     anchors.topMargin: 20
    //     anchors.horizontalCenter: combo.horizontalCenter
    //     onClicked: combo.popup.open()
    // }

    // Text {
    //     anchors.top: parent.bottom
    //     anchors.bottomMargin: 10
    //     anchors.horizontalCenter: parent.horizontalCenter
    //     text: "Items: " + combo.count
    //     font.pointSize: 12
    // }
}
