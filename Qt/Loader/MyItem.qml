import QtQuick

Rectangle {
   id: myItem
   signal message(string msg)
   anchors.fill: parent
   color: "red"

   MouseArea {
       anchors.fill: parent
       onClicked: myItem.message("clicked!")
   }

   Component.onCompleted: {
         hello()
         // helloItem()
      loaderParent.helloItem()
      }

}
