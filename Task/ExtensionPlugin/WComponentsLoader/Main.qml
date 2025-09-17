import QtQuick
import com.WComponents
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    CustomBtn {
        id: myBtn
        width: 150
        height: 75
        anchors.centerIn: parent
    }

    WAction
    {
        id: action
        Component.onCompleted: {
            console.log("Action component is ready.")
        }
    }
}
