import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Item {
        width: 100; height: 100

        function helloItem() {
                    console.log("hello from parent Item")
                }

        Loader {
            id: myLoader
            source: "MyItem.qml"

            function hello() {
                console.log("Hey, this is girish");
            }
        }

        Connections {
            target: myLoader.item
            function onMessage(msg) { console.log(msg) }
        }
    }

}
