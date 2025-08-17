import QtQuick 2.15
import QtQuick.Window 2.15
import Qt.labs.lottieqt 1.0

Window {
    visible: true
    width: 600
    height: 400
    title: "Lottie implicit size test"

    Rectangle {
        id: container
        anchors.centerIn: parent
        width: anim.implicitWidth > 0 ? anim.implicitWidth : 100
        height: anim.implicitHeight > 0 ? anim.implicitHeight : 100
        border.width: 2
        border.color: "red"

        LottieAnimation {
            id: anim
            source: "qrc:/animation.json"
            loops: LottieAnimation.Infinite
            autoPlay: true

            onStatusChanged: {
                if (status === LottieAnimation.Ready) {
                    console.log("Animation ready");
                    console.log("implicitWidth =", implicitWidth, "implicitHeight =", implicitHeight);
                    console.log("width =", width, "height =", height);

                    // Update container size if implicit sizes are valid
                    if (implicitWidth > 0 && implicitHeight > 0) {
                        container.width = implicitWidth;
                        container.height = implicitHeight;
                    }
                }
            }
        }
    }

    Text {
        anchors.top: parent.top
        anchors.horizontalCenter: parent.horizontalCenter
        text: "Implicit size: " + anim.implicitWidth + " x " + anim.implicitHeight
    }
}
