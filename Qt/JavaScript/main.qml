// import QtQuick
// import "componentCreation.js" as MyScript


// Rectangle {
//     id: appWindow
//     width: 300; height: 300

//     Component.onCompleted: MyScript.createSpriteObjects();
// }


import QtQuick 2.15
import QtQuick.Window 2.15
import "componentCreation.js" as MyScript

Window {
    id: appWindow
    visible: true
    width: 400
    height: 400

    Rectangle {
        width: 300; height: 300

        Component.onCompleted: MyScript.createSpriteObjects();
    }
    // Component.onCompleted: MyScript.createObject()
}
