#include "camerawindow.h"
#include <QDebug>

CameraWindow::CameraWindow(QWidget *parent){
	ui.setupUi(this);
}

void CameraWindow::drawPicture(QImage image){
	ui.label->setPixmap(QPixmap::fromImage(image));
}

