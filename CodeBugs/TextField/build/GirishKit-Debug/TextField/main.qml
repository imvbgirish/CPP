import QtQuick
import QtQuick.Controls
import QtQuick.Window
import QtQuick.Controls 6.9

Window {
    id: root
    width: 450
    height: 700
    visible: true
    x: 200
    y: 200
    color: "green"
    title: "QTBUG-138469 Reproduction"

    Popup {
        id: popup
        width: 100
        height: 300
        visible: true   // Show on app start

        // popupType: Popup.Item   // Keyboard input works
        popupType: Popup.Native // Keyboard input broken
        // popupType: Popup.Window    // Keyboard input broken

        background: Rectangle {
            color: "red"
        }

        contentItem: TextField {
            id: textField
            placeholderText: "Type here"
            focus: true
            onActiveFocusChanged: console.log("TextField activeFocus:", activeFocus)
            onFocusChanged: console.log("TextField focus:", focus)

            // Component.onCompleted: {
            //     // Try to request focus (has no effect in Popup.Window mode)
            //     forceActiveFocus()
            // }
        }
    }
}
