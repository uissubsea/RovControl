#include <QtGui>

#include "mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QMainWindow *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	cameraHandler1 = new CameraHandler();
	cameraHandler2 = new CameraHandler();
}

void MainWindow::on_actionExit_triggered(){
	this->close();
}

void MainWindow::on_actionCamera1_triggered(){
	subCamWindow1 = new QMdiSubWindow;
	camWindow1 = new CameraWindow();
	int ip[] = {192,168,1,3};
	cameraHandler1->initCameraByIp(ip);
	cameraHandler1->start();

	connect(cameraHandler1, SIGNAL(gotCameraImage(QImage)), camWindow1, SLOT(drawPicture(QImage)));

	subCamWindow1->setWidget(camWindow1);
	subCamWindow1->setAttribute(Qt::WA_DeleteOnClose);
	ui.mdiArea->addSubWindow(subCamWindow1);
	camWindow1->show();
}

void MainWindow::on_actionCamera2_triggered(){

	subCamWindow2 = new QMdiSubWindow;
	camWindow2 = new CameraWindow();
	int ip[] = {192,168,1,4};
	cameraHandler2->initCameraByIp(ip);
	cameraHandler2->start();

	connect(cameraHandler2, SIGNAL(gotCameraImage(QImage)), camWindow2, SLOT(drawPicture(QImage)));

	subCamWindow2->setWidget(camWindow2);
	subCamWindow2->setAttribute(Qt::WA_DeleteOnClose);
	ui.mdiArea->addSubWindow(subCamWindow2);
	camWindow2->show();

}
void MainWindow::on_actionStatus_triggered(){
	subStatusWindow = new QMdiSubWindow;
	subStatusWindow->setWidget(new StatusWindow());
	subStatusWindow->setAttribute(Qt::WA_DeleteOnClose);
	ui.mdiArea->addSubWindow(subStatusWindow);
	std::cout <<  "Hello" << std::endl;
}
void MainWindow::on_actionManipulator_triggered(){}
void MainWindow::on_actionThrusters_triggered(){}
void MainWindow::on_actionConnect_triggered(){

	joystickHandler = new JoystickHandler();
	netClient = new NetClient(this);

	connect(joystickHandler, SIGNAL(axisValues(QByteArray)), netClient, SLOT(sendAxisData(QByteArray)));
	//netClient->connectToRov("192.168.1.20", 50000);

	joystickHandler->start();
}
void MainWindow::on_actionDisconnect_triggered(){
	netClient->disconnect();
}