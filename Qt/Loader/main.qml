import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Item {
        id:parentItem
        width: 100; height: 100
        property string filePath: "MyItem.qml"

        function helloItem() {
                    console.log("hello from parent Item")
                }

        Loader {
            id: myLoader
            width: 100; height: 100
            x:200

            // source: "MyItem.qml"
            property alias loaderParent: parentItem

            function hello() {
                console.log("Hey, this is girish");
            }
        }

        Connections {
            target: myLoader.item
            function onMessage(msg) { console.log(msg) }
        }

        Component.onCompleted: {
            myLoader.source = filePath
        }
    }
}
