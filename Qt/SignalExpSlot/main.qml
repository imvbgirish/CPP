import QtQuick
import QtQuick.Window
import YourModuleName  // Replace with actual module name

Window {
    width: 400
    height: 300
    visible: true

    MyObject {
        id: obj

        onPublicSignal: {
            console.log("Public signal received")
        }

        onPrivateSignal: {
            console.log("Private signal received")  // ✅ Still works!
        }
    }

    Component.onCompleted: {
        obj.publicInvokable()    // ✅ Works
        obj.publicSlot()         // ✅ Works
        // obj.privateSlot()     // ❌ Error: Unknown method
        obj.privateSignal()      // ✅ Emits the signal
    }
}
