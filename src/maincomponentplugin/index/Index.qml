import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

import com.kdab.cxx_qt.demo 1.0

Item {
    height: 480
    width: 640
    MyObject {
        id: myObject
        number: 1
        string: "My String with my number1: " + myObject.number
    }
    Column {
        anchors.fill: parent
        anchors.margins: 10
        spacing: 10

        Label {
            text: "Number: " + myObject.number
        }

        Label {
            text: "String: " + myObject.string
        }

        Button {
            text: "Increment Number"

            onClicked: myObject.incrementNumber()
        }

        Button {
            text: "Say Hi!"

            onClicked: myObject.sayHi(myObject.string, myObject.number)
        }
    }
}
