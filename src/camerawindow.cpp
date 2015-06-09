#include "camerawindow.h"
#include <QDebug>

CameraWindow::CameraWindow(QWidget *parent){
	ui.setupUi(this);

	cameraHandler = new CameraHandler();
	
	connect(cameraHandler, SIGNAL(gotCameraImage(QImage)), this, SLOT(drawPicture(QImage)));
}

void CameraWindow::startCamera(int idx){
	//cameraHandler->setCameraIndex(idx);

	cameraHandler->initCamera(idx);
	cameraHandler->start();
}

void CameraWindow::drawPicture(QImage image){
	ui.label->setPixmap(QPixmap::fromImage(image));
	qDebug() << "received picture";
}

