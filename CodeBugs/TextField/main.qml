import QtQuick 2.15
import QtQuick.Controls 2.15

DropArea {
    id: dropArea
    width: 200
    height: 200
    keys: ["application/x-color"]

    onDropped: drop => {
        if (drop.hasColor) {
            if (drop.proposedAction === Qt.CopyAction) {
                drop.acceptProposedAction();
            }
        }
    }

    onEntered: drag => {
        if (!drag.hasColor) {
            drag.accepted = false;
        }
    }
}
