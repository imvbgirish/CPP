import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Window 2.15

Window {
    width: 400
    height: 200
    visible: true
    title: "ComboBox delayed model demo"

    ComboBox {
        id: combo
        anchors.centerIn: parent
        focus: true
        model: []   // start empty
    }

    Timer {
        interval: 3000
        repeat: false
        running: true
        onTriggered: {
            console.log("Timer: adding items")
            combo.model = ["A", "B", "C"]
        }
    }

    Component.onCompleted: {
        // ensure combo has focus for keyboard testing
        combo.forceActiveFocus()
        console.log("Initially empty model. Press Space: popup should NOT open.")
        // After 2s model will be populated. Press Space then: popup SHOULD open.
    }
}
