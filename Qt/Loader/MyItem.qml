import QtQuick

Rectangle {
   id: myItem
   signal message(string msg)

   width: 100; height: 100
   x: 200
   color: "red"

   MouseArea {
       anchors.fill: parent
       onClicked: myItem.message("clicked!")
   }

   Component.onCompleted: {
         hello()
         helloItem()
      }
}
