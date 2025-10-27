// pragma ComponentBehavior: Bound
import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ListView{
        id: listview
        width: parent.width
        height: parent.height
        model: [{name: "girish"},{name: "harish"}]

        property int number: 10

        delegate: Rectangle{
            width: 200
            height: 50
            color: "grey"

            property string myName: modelData.name

            Text{
                anchors.centerIn: parent
                text: myName
            }
            Component.onCompleted: {
                console.log("My Name: ", myName)
                console.log(listview.number)
            }
        }
    }
}
