import QtQuick 2.12

ListView {
  boundsBehavior: Flickable.StopAtBounds;
  boundsMovement: Flickable.StopAtBounds;
  clip: true;

  onModelChanged: {
    positionViewAtEnd();
  }
}
