#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include "statuswindow.h"
#include <QMdiSubWindow>
#include "joystickhandler.h"
#include "camerahandler.h"
#include "network.h"
#include "camerawindow.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QMainWindow *parent = 0);

private slots:
	/* Put slots here */
	void on_actionExit_triggered();
	void on_actionCamera1_triggered();
	void on_actionCamera2_triggered();
	void on_actionStatus_triggered();
	void on_actionManipulator_triggered();
	void on_actionThrusters_triggered();
	void on_actionConnect_triggered();
	void on_actionDisconnect_triggered();

private:
	Ui::MainWindow ui;
	StatusWindow *statusWindow;
	QMdiSubWindow *subPod1Window;
	QMdiSubWindow *subStatusWindow;
	CameraWindow *camWindow1;
	CameraWindow *camWindow2;
	QMdiSubWindow *subCamWindow1;
	QMdiSubWindow *subCamWindow2;
	
	NetClient *netClient;
	JoystickHandler *joystickHandler;
	CameraHandler *cameraHandler1;
	CameraHandler *cameraHandler2;

};

#endif