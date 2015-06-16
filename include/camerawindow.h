#ifndef CAMERAWINDOW_H
#define CAMERAWINDOW_H

#include "ui_camerawindow.h"

#include <QPixmap>
#include "camerahandler.h"
#include <QImage>

class CameraWindow : public QWidget
{
	Q_OBJECT

public:
	CameraWindow(QWidget *parent = 0);

private slots:
	void drawPicture(QImage);

private:
	Ui::CameraWindow ui;
};

#endif