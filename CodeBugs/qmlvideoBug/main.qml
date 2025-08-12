import QtQuick
import QtQuick.Controls
import QtMultimedia

ApplicationWindow {
    visible: true
    width: 640
    height: 480

    QtObject {
        id: stateHolder
        property bool toggle: false
    }

    Video {
        id: video
        anchors.fill: parent
        autoPlay: true
        loops: MediaPlayer.Infinite
        source: stateHolder.toggle ? "qrc:/videos/video1.mp4" : "qrc:/videos/video2.mp4"
    }

    Button {
        text: "Switch Video"
        anchors.bottom: parent.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        onClicked: {

            stateHolder.toggle = !stateHolder.toggle
            // video.play()
            console.log("Switch clicked. New source:", video.source)
        }
    }
}
