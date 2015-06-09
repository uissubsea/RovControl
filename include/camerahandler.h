#ifndef CAMERAHANDLER_H
#define CAMERAHANDLER_H

#include <QThread>
#include "FlyCapture2.h"
#include <opencv2/core/core.hpp>
#include <iostream>
#include <QImage>
#include <QWidget>
#include <QLabel>
#include <QPixmap>

class CameraHandler : public QThread
{
	Q_OBJECT

public:
	CameraHandler();
	bool configureCamera();
	void setCameraIndex(int idx);
	bool initCamera(int idx);

signals:
	void gotCameraImage(QImage);

private:
	FlyCapture2::Error error;
	FlyCapture2::GigECamera camera;
	FlyCapture2::CameraInfo cameraInfo;
	FlyCapture2::InterfaceType interfaceType;
	FlyCapture2::PGRGuid guid;
	FlyCapture2::IPAddress ipAddress;
	FlyCapture2::BusManager busManager;
	FlyCapture2::Image rawImage;
	FlyCapture2::Image rgbImage;

	QImage image;

	unsigned int numCameras;

	int cameraIndex;

	void discoverCameras();
	void runCamera();

	QImage Mat2QImage(cv::Mat const& src);
	void run();

};

#endif