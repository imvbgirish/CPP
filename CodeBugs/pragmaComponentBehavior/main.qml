pragma ComponentBehavior: Bound
import QtQuick

Window {
    visible: true

    ListView {
        id: list
        property int r: 12

        delegate: Rectangle {
            // property int r: 10
            Component.onCompleted: console.log(list.r)
        }
    }
}
