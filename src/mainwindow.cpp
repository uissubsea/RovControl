#include <QtGui>

#include "mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QMainWindow *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void MainWindow::on_actionExit_triggered(){
	this->close();
}

void MainWindow::on_actionCamera1_triggered(){
	subCamWindow1 = new QMdiSubWindow;
	camWindow1 = new CameraWindow();
	subCamWindow1->setWidget(camWindow1);
	subCamWindow1->setAttribute(Qt::WA_DeleteOnClose);
	ui.mdiArea->addSubWindow(subCamWindow1);
	camWindow1->startCamera(0);
	camWindow1->show();
}

void MainWindow::on_actionCamera2_triggered(){

	subCamWindow2 = new QMdiSubWindow;
	camWindow2 = new CameraWindow();
	subCamWindow2->setWidget(camWindow2);
	subCamWindow2->setAttribute(Qt::WA_DeleteOnClose);
	ui.mdiArea->addSubWindow(subCamWindow2);
	camWindow2->startCamera(1);
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
	//joystickHandler = new JoystickHandler();
	//joystickHandler->start();
	//cameraHandler = new CameraHandler();
	//cameraHandler->start();
	netClient = new NetClient();
	netClient->start();
}
void MainWindow::on_actionDisconnect_triggered(){
	netClient->disconnect();
}