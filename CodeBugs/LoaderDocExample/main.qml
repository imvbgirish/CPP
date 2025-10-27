import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Item {
        id: itm
        width: 100; height: 100

        function check(){
            console.log("Hello from Item")
        }

        Loader {
           id: myLoader
           source: "MyItem.qml"
        }

        Connections {
            target: myLoader.item
            function onMessage(msg) { console.log(msg) }
        }
    }
}
