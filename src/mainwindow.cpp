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

}

void MainWindow::on_actionCamera2_triggered(){}
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
	joystickHandler->start();
}
void MainWindow::on_actionDisconnect_triggered(){}