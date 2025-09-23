import QtQuick 6.3
import QtMultimedia 6.3

Window {
    visible: true
    width: 400
    height: 200
    title: "Enum Runtime Error Test"

    Component.onCompleted: {
        var wrongEnum = AudioDevice.Input  // <- incorrect, should be AudioDevice.Input
        console.log("This line will not be reached")
    }
}
