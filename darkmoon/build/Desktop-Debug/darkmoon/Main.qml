import QtQuick

Window {
    width: 300
    height: 480
    visible: true
    title: qsTr("Hello World")
    Text {
        anchors.centerIn:parent
        id: hellotext
        text: qsTr("text")
    }
}
